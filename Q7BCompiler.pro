include("Q7BConfig.pri")

QT += widgets

TEMPLATE = app
TARGET = Q7BCompiler

CONFIG += console
CONFIG -= app_bundle

HEADERS += _Q7BCompiler.h Control.h qApplication.h
SOURCES += _Q7BCompiler.cpp
