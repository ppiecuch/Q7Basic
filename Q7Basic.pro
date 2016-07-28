inclclude("Q7BConfig.pri")

QT+=webkit
QT+=webkit
QT+=svg
QT+=phonon
QT+=sql
QT+=network
QT+=declarative
QT+=xml

DEFINES+=Q7BASIC

CONFIG+=uitools
CONFIG-=debug
CONFIG+=release

TEMPLATE = app
TARGET = Q7Basic
INCLUDEPATH += .

HEADERS += Application.h \
           CodeView.h \
           Declare.h \
           Evaluation.h \
           Examples.h \
           FindReplaceFile.h \
           Global.h \
           MainWindow.h \
           myClass.h \
           myParser.h \
           Project.h \
           ProjectProperties.h \
           Q7BCodeView.h \
           Q7BCompiler.h \
           Q7BProjectWindow.h \
           Q7BRuntime.h \
           Settings.h \
           ui_Q7BFormDesigner.h
FORMS += CodeView.ui \
         Evaluation.ui \
         Examples.ui \
         FindReplaceFile.ui \
         MainWindow.ui \
         ProjectProperties.ui \
         Settings.ui
SOURCES += Application.cpp \
           CodeView.cpp \
           Declare.cpp \
           Evaluation.cpp \
           Examples.cpp \
           FindReplaceFile.cpp \
           Global.cpp \
           MainWindow.cpp \
           myClass.cpp \
           myParser.cpp \
           Project.cpp \
           ProjectProperties.cpp \
           Q7BCodeView.cpp \
           Q7BCompiler.cpp \
           Q7BProjectWindow.cpp \
           Q7BRuntime.cpp \
           Settings.cpp
RESOURCES += res.qrc q7b_default.qrc

macx {
	LIBS += -framework Carbon # needed For SetFrontProcess
}
