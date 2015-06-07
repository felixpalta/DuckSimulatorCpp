TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    flywithwings.cpp \
    flynone.cpp \
    duck.cpp \
    mallardduck.cpp \
    quacksimple.cpp \
    quacksqueek.cpp \
    quackmute.cpp \
    rubberduck.cpp \
    decoyduck.cpp

HEADERS += \
    flybehaviour.h \
    quackbehaviour.h \
    flywithwings.h \
    flynone.h \
    duck.h \
    mallardduck.h \
    quacksimple.h \
    quacksqueek.h \
    quackmute.h \
    rubberduck.h \
    decoyduck.h

*g++*{
QMAKE_CXXFLAGS +=   -Weffc++ -std=c++11 -pedantic -Wall -Wextra \
                    -Wunreachable-code -Wshadow \
                    -Wold-style-cast -Wnon-virtual-dtor  \
                    -Woverloaded-virtual \
                    -Wenum-compare  \
                                        #OFF for QT
                    -Wctor-dtor-privacy	\
                    -Wsign-conversion  \
                    -Wconversion \
}

