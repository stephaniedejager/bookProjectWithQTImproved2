#-------------------------------------------------
#
# Project created by QtCreator 2021-05-21T14:17:08
#
#-------------------------------------------------

QT       += core gui
QT       += core
QT       += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = COS3711_A1_Q3
TEMPLATE = app


SOURCES += main.cpp\
        bookinput.cpp \
    book.cpp

HEADERS  += bookinput.h \
    book.h

FORMS    += bookinput.ui

LIBS += -L$$(CPPLIBS) -ldataobjects
INCLUDEPATH += $$(CPPLIBS)/dataobjects
