QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    checkpoint.cpp \
    coin.cpp \
    coinspack.cpp \
    game.cpp \
    gameoverwindow.cpp \
    health.cpp \
    level1.cpp \
    levelclass.cpp \
    levelcompletedwindow.cpp \
    main.cpp \
    platform.cpp \
    player.cpp \
    score.cpp \
    spikes.cpp

HEADERS += \
    checkpoint.h \
    coin.h \
    coinspack.h \
    game.h \
    gameoverwindow.h \
    health.h \
    level1.h \
    levelclass.h \
    levelcompletedwindow.h \
    platform.h \
    player.h \
    score.h \
    spikes.h

FORMS += \
    gameoverwindow.ui \
    levelcompletedwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ImgsResources.qrc \
    mario.qrc
