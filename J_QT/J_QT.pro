#-------------------------------------------------
#
# Project created by QtCreator 2014-08-18T21:58:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = J_QT
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    spinboxdelegate.cpp \
    stringlistmodel.h.cpp

HEADERS  += mainwindow.h \
    jQcom.h \
    spinboxdelegate.h \
    stringlistmodel.h

FORMS    += mainwindow.ui
