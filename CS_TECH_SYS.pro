#-------------------------------------------------
#
# Project created by QtCreator 2018-10-13T09:01:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CS_TECH_SYS
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mymainwindow.cpp \
    mymessagebox.cpp \
    operhelpwidget.cpp \
    optionmodel.cpp \
    engineer.cpp \
    addengineerwidget.cpp \
    selectengineerwidget.cpp \
    opermodel.cpp \
    operengineer.cpp \
    mynumberlineedit.cpp \
    mylistviewdelegate.cpp

HEADERS += \
        mymainwindow.h \
    mymessagebox.h \
    operhelpwidget.h \
    optionmodel.h \
    engineer.h \
    addengineerwidget.h \
    selectengineerwidget.h \
    opermodel.h \
    operengineer.h \
    mynumberlineedit.h \
    mylistviewdelegate.h

FORMS += \
        mymainwindow.ui \
    operhelpwidget.ui \
    optionmodel.ui \
    addengineerwidget.ui \
    selectengineerwidget.ui

RESOURCES += \
    myqrc.qrc
