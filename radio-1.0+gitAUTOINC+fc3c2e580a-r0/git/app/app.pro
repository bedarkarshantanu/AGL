TARGET = radio
QT = quickcontrols2

HEADERS = PresetDataObject.h
SOURCES = main.cpp PresetDataObject.cpp

CONFIG += link_pkgconfig
PKGCONFIG += libhomescreen qlibwindowmanager

RESOURCES += \
    radio.qrc \
    images/images.qrc

include(app.pri)
