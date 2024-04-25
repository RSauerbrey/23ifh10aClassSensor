TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        analyzer.cpp \
        avganalyzer.cpp \
        datagate.cpp \
        feuchtesensor.cpp \
        main.cpp \
        maxanalyzer.cpp \
        temperatursensor.cpp

HEADERS += \
    analyzer.h \
    avganalyzer.h \
    datagate.h \
    feuchtesensor.h \
    maxanalyzer.h \
    temperatursensor.h
