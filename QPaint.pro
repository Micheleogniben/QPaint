QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
TARGET = QPaint
TEMPLATE = app

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    layer.cpp \
    main.cpp \
    mainwindow.cpp \
    canvasobject.cpp \
    tratto.cpp \
    retta.cpp \
    bezier.cpp \
    canvas.cpp \
    gui.cpp

HEADERS += \
    layer.h \
    mainwindow.h \
    canvasobject.h \
    tratto.h \
    retta.h \
    bezier.h \
    canvas.h \
    gui.h



# Configurazione delle risorse
RESOURCES += resources.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

