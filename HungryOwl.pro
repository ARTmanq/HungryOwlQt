#-------------------------------------------------
#
# Project created by QtCreator 2016-09-23T17:25:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HungryOwl
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    howtoplay.cpp \
    Field.cpp \
    game.cpp

HEADERS  += dialog.h \
    howtoplay.h \
    Field.h \
    game.h

FORMS    += dialog.ui \
    howtoplay.ui \
    game.ui
