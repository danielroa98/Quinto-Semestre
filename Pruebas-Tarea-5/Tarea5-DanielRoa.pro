QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tarea5-DanielRoa
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    poligonos.cpp \
    arcos.cpp \
    cubo.cpp \
    prismarec.cpp \
    prismatri.cpp \
    cono.cpp \
    transformaciones.cpp

HEADERS  += dialog.h \
    poligonos.h \
    arcos.h \
    cubo.h \
    prismarec.h \
    prismatri.h \
    cono.h \
    transformaciones.h

FORMS    += dialog.ui \
    poligonos.ui \
    arcos.ui \
    cubo.ui \
    prismarec.ui \
    prismatri.ui \
    cono.ui

CONFIG-=app_bundle
