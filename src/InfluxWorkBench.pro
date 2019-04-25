#-------------------------------------------------
#
# Project created by QtCreator 2019-04-26T06:26:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = InfluxWorkBench
TEMPLATE = app
CONFIG += release warn_off
CONFIG -= flat

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += .

DEPENDPATH += .

MOC_DIR += ./GeneratedFiles/moc
OBJECTS_DIR += ./GeneratedFiles/objs
UI_DIR += ./GeneratedFiles/ui
RCC_DIR += ./GeneratedFiles/rcc

CONFIG(release, debug|release){
    DESTDIR = ../bin/release
}
CONFIG(debug, debug|release){
    DESTDIR = ../bin/debug
}

SOURCES += main.cpp\
        MainWin.cpp

HEADERS  += MainWin.h

FORMS    += MainWin.ui
