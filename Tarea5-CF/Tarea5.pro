QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GeometriaComputacional
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    poligonos.cpp \
    arcs.cpp \
    cubo.cpp \
    prismarec.cpp \
    prismatri.cpp \
    cono.cpp \
    transformaciones.cpp

HEADERS  += dialog.h \
    poligonos.h \
    arcs.h \
    cubo.h \
    prismarec.h \
    prismatri.h \
    cono.h \
    transformaciones.h

FORMS    += dialog.ui \
    poligonos.ui \
    arcs.ui \
    cubo.ui \
    prismarec.ui \
    prismatri.ui \
    cono.ui

CONFIG-=app_bundle
