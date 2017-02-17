TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES +=main.cpp \
    flock.cpp \
    agent.cpp

HEADERS += \
    flock.h \
    agent.h
