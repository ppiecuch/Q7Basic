#-------------------------------------------------
#
# Project created by QtCreator 2011-12-09T15:23:28
#
#-------------------------------------------------


#QT       += core

#QT       -= gui

#TARGET = Q7BFtpWrapper
#CONFIG   += console
#CONFIG   -= app_bundle

#TEMPLATE = app

#SOURCES += Q7BSerialPort/main.cpp

HEADERS += \
    Q7BSerialPort/Q7BSerialPort.h \
    Q7BSerialPort/posix_qextserialport.h \
    Q7BSerialPort/qextserialbase.h \
    Q7BSerialPort/qextserialenumerator.h \
    Q7BSerialPort/qextserialport.h \
    Q7BSerialPort/win_qextserialport.h

SOURCES += \
    Q7BSerialPort/posix_qextserialport.cpp \
    Q7BSerialPort/qextserialbase.cpp \
	Q7BSerialPort/qextserialenumerator.cpp \
	Q7BSerialPort/qextserialport.cpp \
	Q7BSerialPort/win_qextserialport.cpp
	
	
	

	



