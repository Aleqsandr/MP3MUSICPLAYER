QT += widgets

SOURCES += \
    main.cpp \
    sound.cpp \
    mainwindow.cpp \
    music.cpp

LIBS += -lSDL -lSDL_mixer -ltag

DISTFILES +=

FORMS += \
    mainwindow.ui

HEADERS += \
    sound.h \
    mainwindow.h \
    music.h
