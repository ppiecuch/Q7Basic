#-------------------------------------------------
#
# Project created by QtCreator 2011-11-28T15:46:11
#
#-------------------------------------------------

#QT       += core

#QT       -= gui


#SOURCES += Q7BEmailWrapper/main.cpp


QT += network

include( "Q7BEmailWrapper/qxtmail_tiny/qxtsmtp_tiny.pri" )
include( "Q7BEmailWrapper/qxtmail_tiny/qxtpop3_tiny.pri" )

HEADERS += \
    Q7BEmailWrapper/Q7BEmailWrapper.h

SOURCES += \
    Q7BEmailWrapper/Q7BEmailWrapper.cpp
