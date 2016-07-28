
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
 #ifndef Q7B_evaluation_h
#define Q7B_evaluation_h

#include "Q7BRuntime.h"

namespace Ui {
  class Evaluation;
}


class Evaluation;
extern Evaluation *Q7B_Evaluation_Class(Q7B o);
extern Q7B Q7B_Evaluation_Object();
extern Evaluation *q7b_Evaluation_Object;
extern Q7B q7b_Evaluation_Object_Q7B;
extern bool q7b_Evaluation_Object_Finalized;
extern bool q7b_Evaluation_Object_Init;

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
class Evaluation : public QDialog
{
Q_OBJECT
public:
Evaluation(Q7B _q7b_this, QWidget *parent = 0);
Evaluation(QWidget *parent = 0);
Ui::Evaluation *ui;

~Evaluation();
void closeEvent(QCloseEvent *e);
Evaluation(Q7B _q7b_this);
void Init();

public slots:
void on_Buynow_clicked(bool checked = false)
{
  this->Q7B_on_Buynow_clicked(Q7B_ID(checked));
}
void on_Enterkey_clicked(bool checked = false)
{
  this->Q7B_on_Enterkey_clicked(Q7B_ID(checked));
}
void on_pushButton_clicked(bool checked = false)
{
  this->Q7B_on_pushButton_clicked(Q7B_ID(checked));
}



public:
static void SingleTonInit(Evaluation*me)
{
q7b_Evaluation_Object = me;
q7b_Evaluation_Object_Q7B = me->q7b_this;
q7b_Evaluation_Object_Init = true;
me->Init();
}

static Q7B SingleTonObject()
{
SingleTonObjectPointer();
return q7b_Evaluation_Object_Q7B;
}


static Evaluation* SingleTonObjectPointer()
{
if (q7b_Evaluation_Object_Finalized) return 0;
if (q7b_Evaluation_Object == 0){
q7b_Evaluation_Object_Init = true;
if (q7b_ui.contains("Evaluation")){
  q7b_Evaluation_Object = (Evaluation *) (QWidget *) q7b_ui["Evaluation"]->ref; 
} else {
  q7b_Evaluation_Object = new Evaluation(q7b_Evaluation_Object_Q7B, 0); q7b_Evaluation_Object->Init();
}
}
return q7b_Evaluation_Object;
}


static Evaluation* ClassPointer(Q7B o)
{
return (Evaluation*) o->ref;
}


public:
void Q7B_on_Buynow_clicked(Q7B Checked);
void Q7B_on_Enterkey_clicked(Q7B Checked);
void Q7B_on_pushButton_clicked(Q7B Checked);
private:
Q7B q7b_this;

};

#endif
