/*
 * Copyright (C) 2016 The Qt Company Ltd.
 * Copyright (C) 2017 Konsulko Group
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import QtQuick 2.6
import QtWebSockets 1.0

WebSocket {
    id: root
    active: true
    url: bindingAddress

    property string apiString: "radio"
    property var verbs: []
    property string payloadLength: "9999"

    readonly property var msgid: {
         "call": 2,
         "retok": 3,
         "reterr": 4,
         "event": 5
    }

    readonly property int amBand: 0
    readonly property int fmBand: 1

    readonly property int stoppedState: 0
    readonly property int activeState: 1

    property int band: fmBand
    property int frequency
    property int frequencyStep
    property int minimumFrequency
    property int maximumFrequency
    property int state: stoppedState
    property int scanningState: stoppedState
    property bool scanningFreqUpdate: false
    property string stationId: ""

    signal stationFound

    property Connections c : Connections {
        target: root

        onFrequencyChanged: {
            if(scanningState != activeState) {
                // Not scanning, push update
                sendSocketMessage("frequency", { value: frequency })
            } else if(!scanningFreqUpdate) {
                // External change, stop scanning
                sendSocketMessage("scan_stop", 'None')
                scanningState = stoppedState
                sendSocketMessage("frequency", { value: frequency })
            } else {
                // This update was from scanning, clear state
                scanningFreqUpdate = false
            }
        }

        onBandChanged: {
            sendSocketMessage("band", { value: band })
            updateFrequencyRange(band)
            updateFrequencyStep(band)
            frequency = minimumFrequency
        }
    }

    onTextMessageReceived: {
        var json = JSON.parse(message)
        //console.debug("Raw response: " + message)
        var request = json[2].request
        var response = json[2].response

        switch (json[0]) {
        case msgid.call:
            break
        case msgid.retok:
            var verb = verbs.shift()
            if (verb == "frequency_range") {
                minimumFrequency = response.min
                maximumFrequency = response.max
            } else if (verb == "frequency_step") {
                frequencyStep = response.step
            }
            break
        case msgid.event:
            var event = JSON.parse(JSON.stringify(json[2]))
            if (event.event === "radio/frequency") {
                if(scanningState == activeState) {
                    scanningFreqUpdate = true
                    frequency = event.data.value
                }
            } else if (event.event === "radio/station_found") {
                if(scanningState == activeState) {
                    scanningState = stoppedState
                    stationId = freq2str(event.data.value)
                    root.stationFound()
                }
            }
            break
        case msg.reterr:
            console.debug("Bad return value, binding probably not installed")
            break
        case MessageId.event:
            break
        }
    }

    onStatusChanged: {
        switch (status) {
        case WebSocket.Open:
            // Initialize band values now that we're connected to the
            // binding
            updateFrequencyRange(band)
            updateFrequencyStep(band)
            frequency = minimumFrequency
            sendSocketMessage("subscribe", { value: "frequency" })
            sendSocketMessage("subscribe", { value: "station_found" })
            break
        case WebSocket.Error:
            console.debug("WebSocket error: " + root.errorString)
            break
        }
    }

    function freq2str(freq) {
        if (freq > 5000000) {
            return '%1 MHz'.arg((freq / 1000000).toFixed(1))
        } else {
            return '%1 kHz'.arg((freq / 1000).toFixed(0))
        }
    }

    function sendSocketMessage(verb, parameter) {
        var requestJson = [ msgid.call, payloadLength, apiString + '/'
                           + verb, parameter ]
        //console.debug("sendSocketMessage: " + JSON.stringify(requestJson))
        verbs.push(verb)
        sendTextMessage(JSON.stringify(requestJson))
    }

    function start() {
        sendSocketMessage("start", 'None')
        state = activeState
    }

    function stop() {
        sendSocketMessage("stop", 'None')
        state = stoppedState
    }

    function tuneUp() {
        frequency += frequencyStep
	if(frequency > maximumFrequency) {
            frequency = minimumFrequency
        }
    }

    function tuneDown() {
        frequency -= frequencyStep
	if(frequency < minimumFrequency) {
            frequency = maximumFrequency
        }
    }

    function scanUp() {
        scanningState = activeState
        sendSocketMessage("scan_start", { direction: "forward" })
    }

    function scanDown() {
        scanningState = activeState
        sendSocketMessage("scan_start", { direction: "backward" })
    }

    function updateFrequencyRange(band) {
        sendSocketMessage("frequency_range", { band: band })
    }

    function updateFrequencyStep(band) {
        sendSocketMessage("frequency_step", { band: band })
    }
}
