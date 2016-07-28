
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
 #ifndef Q7B_application_h
#define Q7B_application_h

#include "Q7BRuntime.h"


class Application;
extern Application *Q7B_Application_Class(Q7B o);
extern Q7B Q7B_Application_Object();
extern Application *q7b_Application_Object;
extern Q7B q7b_Application_Object_Q7B;
extern bool q7b_Application_Object_Finalized;
extern bool q7b_Application_Object_Init;


extern Q7B Q7B_MainWindow_Object();

extern Q7B Q7B_CMath_Object();

extern Q7B Q7B_Preferences_Object();

extern Q7B Q7B_Application_Object();

extern Q7B Q7B_Debug_Object();

extern Q7B Q7B_OS_Object();

extern Q7B Q7B_File_Object();

extern Q7B Q7B_Desktop_Object();

extern Q7B Q7B_Dir_Object();

extern Q7B Q7B_OpenFileDialog_Object();

extern Q7B Q7B_SaveFileDialog_Object();

extern Q7B Q7B_ColorDialog_Object();

extern Q7B Q7B_FontDialog_Object();

extern Q7B Q7B_ProgressDialog_Object();

extern Q7B Q7B_InputDialog_Object();

extern Q7B Q7B_Database_Object();

extern Q7B Q7B_Table_Object();

extern Q7B Q7B_Records_Object();

extern Q7B Q7B_Query_Object();

extern Q7B Q7B_MessageBox_Object();

extern Q7B Q7B_ToolBar_Object();

extern Q7B Q7B_Sounds_Object();

extern Q7B Q7B_Pixmaps_Object();

extern Q7B Q7B_Colors_Object();

extern Q7B Q7B_Fonts_Object();

extern Q7B Q7B_StatusBar_Object();
class Application : public QApplication
{
Q_OBJECT
public:
Application(int argc, char ** argv);
~Application();
Application(Q7B _q7b_this, int argc, char ** argv);
void Init();

public slots:
void on_lastWindowClosed()
{
  this->Q7B_on_lastWindowClosed();
}



public:
static void SingleTonInit(Application*me)
{
q7b_Application_Object = me;
q7b_Application_Object_Q7B = me->q7b_this;
q7b_Application_Object_Init = true;
me->Init();
}

static Q7B SingleTonObject(int argc, char **argv)
{
SingleTonObjectPointer(argc, argv);
return q7b_Application_Object_Q7B;
}


static Application* SingleTonObjectPointer(int argc, char **argv)
{
if (q7b_Application_Object_Finalized) return 0;
if (q7b_Application_Object == 0){
q7b_Application_Object_Init = true;
q7b_Application_Object = new Application(q7b_Application_Object_Q7B, argc, argv);
q7b_Application_Object->Init();
}
return q7b_Application_Object;
}


static Application* ClassPointer(Q7B o)
{
return (Application*) o->ref;
}


public:
void Q7B_on_lastWindowClosed();
private:
Q7B q7b_this;

};

#endif
