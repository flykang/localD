#-------------------------------------------------
#
# Project created by QtCreator 2014-09-18T10:17:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = dashtest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    handlefile.cpp \
    mylineedit.cpp \
    searcher.cpp

HEADERS  += mainwindow.h \
    handlefile.h \
    mylineedit.h \
    searcher.h

INCLUDEPATH +=/usr/include/python2.7/ \
            /usr/include/boost/


LIBS += -lboost_python \
        -lboost_regex
FORMS    += mainwindow.ui

CONFIG += c++11
