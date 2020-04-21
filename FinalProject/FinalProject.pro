#-------------------------------------------------
#
# Project created by QtCreator 2020-04-19T16:07:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FinalProject
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
        mainwindow.cpp \
    analysisui.cpp \
    setting.cpp \
    result.cpp

HEADERS += \
        mainwindow.h \
    analysisui.h \
    setting.h \
    result.h

FORMS += \
        mainwindow.ui \
    analysisui.ui \
    setting.ui \
    result.ui

RESOURCES += \
    resources.qrc

DISTFILES += \
    image/Profile/Ana.PNG \
    image/Profile/Ashe.PNG \
    image/Profile/Baptiste.PNG \
    image/Profile/Bastion.PNG \
    image/Profile/Brigitte.PNG \
    image/Profile/Doomfist.PNG \
    image/Profile/Dva.PNG \
    image/Profile/Genji.PNG \
    image/Profile/Hanzo.PNG \
    image/Profile/Junkart.PNG \
    image/Profile/Lucio.PNG \
    image/Profile/Mccree.PNG \
    image/Profile/Mei.PNG \
    image/Profile/Mercy.PNG \
    image/Profile/Moira.PNG \
    image/Profile/Orisa.PNG \
    image/Profile/Pharah.PNG \
    image/Profile/Reaper.PNG \
    image/Profile/Reinhardt.PNG \
    image/Profile/Sigma.PNG \
    image/Profile/Soldier76.PNG \
    image/Profile/Sombra.PNG \
    image/Profile/Symmetra.PNG \
    image/Profile/Torbjorn.PNG \
    image/Profile/Tracer.PNG \
    image/Profile/Widowmaker.PNG \
    image/Profile/Wreckingball.PNG \
    image/Profile/Zarya.PNG \
    image/Profile/Zenyatta.PNG
