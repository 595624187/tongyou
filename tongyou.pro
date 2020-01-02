#-------------------------------------------------
#
# Project created by QtCreator 2019-12-31T22:36:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tongyou
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    querywindow.cpp \
    updatewindow.cpp \
    visitwindow.cpp \
    importwindow.cpp \
    sqlwindow.cpp \
    workwindow.cpp \
    userwindow.cpp

HEADERS  += mainwindow.h \
    querywindow.h \
    updatewindow.h \
    visitwindow.h \
    importwindow.h \
    sqlwindow.h \
    workwindow.h \
    userwindow.h

FORMS    += mainwindow.ui \
    querywindow.ui \
    updatewindow.ui \
    visitwindow.ui \
    importwindow.ui \
    sqlwindow.ui \
    workwindow.ui \
    userwindow.ui
