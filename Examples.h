
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
 #ifndef Q7B_examples_h
#define Q7B_examples_h

#include "Q7BRuntime.h"

namespace Ui {
  class Examples;
}


class Examples;
extern Examples *Q7B_Examples_Class(Q7B o);
extern Q7B Q7B_Examples_Object();
extern Examples *q7b_Examples_Object;
extern Q7B q7b_Examples_Object_Q7B;
extern bool q7b_Examples_Object_Finalized;
extern bool q7b_Examples_Object_Init;

#define uiClass Q7B_uiClass

extern QMap<QString, Q7B>q7b_ui;


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
class Examples : public QDialog
{
Q_OBJECT
public:
Examples(Q7B _q7b_this, QWidget *parent = 0);
Examples(QWidget *parent = 0);
Ui::Examples *ui;

~Examples();
void closeEvent(QCloseEvent *e);
void Init();

public slots:
void on_listWidget_itemClicked(QListWidgetItem *item)
{
  this->Q7B_on_listWidget_itemClicked(Q7B_ID(item));
}
public:
Q7B listWidget;



public:
static void SingleTonInit(Examples*me)
{
q7b_Examples_Object = me;
q7b_Examples_Object_Q7B = me->q7b_this;
q7b_Examples_Object_Init = true;
me->Init();
}

static Q7B SingleTonObject()
{
SingleTonObjectPointer();
return q7b_Examples_Object_Q7B;
}


static Examples* SingleTonObjectPointer()
{
if (q7b_Examples_Object_Finalized) return 0;
if (q7b_Examples_Object == 0){
q7b_Examples_Object_Init = true;
if (q7b_ui.contains("Examples")){
  q7b_Examples_Object = (Examples *) (QWidget *) q7b_ui["Examples"]->ref; 
} else {
  q7b_Examples_Object = new Examples(q7b_Examples_Object_Q7B, 0); q7b_Examples_Object->Init();
}
}
return q7b_Examples_Object;
}


static Examples* ClassPointer(Q7B o)
{
return (Examples*) o->ref;
}


public:
Examples(Q7B _q7b_this);
void Q7B_on_listWidget_itemClicked(Q7B Item);
private:
Q7B q7b_this;

};

#endif
