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
    screen.cpp \
    boton.cpp \
    drop.cpp \
    drag.cpp \
    principal.cpp

HEADERS  += scrutch.h \
    smpointer.h \
    operators.h \
    bool.h \
    cadena.h \
    functions.h \
    template_names.h \
    screen.h \
    boton.h \
<<<<<<< HEAD
    drop.h \
    drag.h \
    principal.h
=======
    dtoscrutch.h \
    bloquesp.h
>>>>>>> origin/master

FORMS    += scrutch.ui

RESOURCES += \
    resources.qrc
