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
    game.cpp \
    win.cpp \
    loss.cpp \
    gamemedium.cpp \
    gamehard.cpp \
    facade.cpp

HEADERS  += dialog.h \
    howtoplay.h \
    Field.h \
    game.h \
    win.h \
    loss.h \
    gamemedium.h \
    gamehard.h \
    facade.h

FORMS    += dialog.ui \
    howtoplay.ui \
    game.ui \
    win.ui \
    loss.ui \
    gamemedium.ui \
    gamehard.ui
