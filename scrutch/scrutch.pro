#-------------------------------------------------
#
# Project created by QtCreator 2015-04-21T14:15:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = scrutch
TEMPLATE = app


SOURCES += main.cpp\
        scrutch.cpp \
    screen.cpp

HEADERS  += scrutch.h \
    smpointer.h \
    operators.h \
    bool.h \
    cadena.h \
    functions.h \
    template_names.h \
    controller.h \
    screen.h

FORMS    += scrutch.ui

RESOURCES += \
    resources.qrc
