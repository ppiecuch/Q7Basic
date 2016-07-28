
/*
'***************************************************************************
'Copyright (C) 2010-2012 KBasic Software: www.kbasic.com. All rights reserved.
'Source codes are created by Bernd Noetscher sales@kbasic.com 
'
'You may use this source codes under the terms of the GNU Public License (Version 3) as published 
'by the Free Software Foundation. 
'
'If you are interested in using the source codes for other licenses or 
'commercial development, you must buy commercial licenses from KBasic Software.
'***************************************************************************
*/
 #include "Global.h"


#include "Application.h"

#include "Project.h"

#define CommandButton Q7B_CommandButton
#define CommandLinkButton Q7B_CommandLinkButton
#define ImageButton Q7B_ImageButton
#define ToolButton Q7B_ToolButton
#define CheckBox Q7B_CheckBox
#define RadioButton Q7B_RadioButton
#define Label Q7B_Label
#define Frame Q7B_Frame
#define ImageBox Q7B_ImageBox
#define TextBox Q7B_TextBox
#define FormClass Q7B_FormClass
#define uiClass Q7B_uiClass
#define Class Q7B_Class
#define Module Q7B_Module
#define Control QWidget


#include "Application.h"

Application *Q7B_Application_Class(Q7B o){ return Application::ClassPointer(o); }
Q7B Q7B_Application_Object(){ return Application::SingleTonObject(0, 0); }
extern Application *Q7B_Application_Class(Q7B o);
extern Q7B Q7B_Application_Object();
Application *q7b_Application_Object = 0;
Q7B q7b_Application_Object_Q7B;
bool q7b_Application_Object_Finalized = false;
bool q7b_Application_Object_Init = false;

Application::Application(int argc, char ** argv)
 : QApplication(argc, argv)
{
  Init();
}

Application::~Application()
{
  if (this == q7b_Application_Object){ q7b_Application_Object = 0; q7b_Application_Object_Q7B = Q7B_IDNIL(); }
  q7b_this->ref = 0;
}

Application::Application(Q7B _q7b_this, int argc, char ** argv) : QApplication(argc, argv)
{
  q7b_this = _q7b_this;
}

void Application::Init()
{
  if (q7b_Application_Object_Init){ q7b_Application_Object_Init = false; q7b_Application_Object_Q7B = q7b_this = Q7B(new Q7B_id(typeid(Application).name(), this)); } else q7b_this = Q7B(new Q7B_id(typeid(Application).name(), this)); 
  setObjectName("Application");
connect(qApp, SIGNAL(lastWindowClosed()), this, SLOT(on_lastWindowClosed()));
}

void Application::Q7B_on_lastWindowClosed()
{
                                                                  Q7BS("Application.QApplication.q7b", "on_lastWindowClosed", "18", "0");
                                                                  Q7BS("Application.QApplication.q7b", "on_lastWindowClosed", "18", "1");
Q7B_Project_Class(Q7B_Project_Object())->SaveAll();
                                                                  Q7BS("Application.QApplication.q7b", "on_lastWindowClosed", "21", "1");
Q7B ba; Q7B_ASSIGNMENT(&ba, &(Q7B__QBYTEARRAY(Q7B_QMAINWINDOW_SAVESTATE(Q7B_MainWindow_Object(), Q7B_ID((qint64) 0)))));
                                                                  Q7BS("Application.QApplication.q7b", "on_lastWindowClosed", "22", "1");
Q7B_PREFERENCES_SETQBYTEARRAY(Q7B_Preferences_Object(), Q7B_ID("MDI_savestate"), ba);
                                                                  Q7BS("Application.QApplication.q7b", "on_lastWindowClosed", "24", "1");
Q7B_APPLICATION_CLOSEALLWINDOWS(Q7B_Application_Object());
                                                                  Q7BS("Application.QApplication.q7b", "on_lastWindowClosed", "26", "2");
}

