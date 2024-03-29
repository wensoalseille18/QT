#-------------------------------------------------
#
# Project created by QtCreator 2022-05-06T08:01:11
#
#-------------------------------------------------

QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projet_QT
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
        fenetreprincipal.cpp \
    acteur.cpp \
    servicedb.cpp \
    form_new_acteur.cpp \
    form_test.cpp \
    form_search_update.cpp

HEADERS += \
        fenetreprincipal.h \
    acteur.h \
    servicedb.h \
    form_new_acteur.h \
    form_test.h \
    form_search_update.h

FORMS += \
        fenetreprincipal.ui
