
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


#include "Evaluation.h"

#include "MainWindow.h"

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

Evaluation *Q7B_Evaluation_Class(Q7B o){ return Evaluation::ClassPointer(o); }
Q7B Q7B_Evaluation_Object(){ return Evaluation::SingleTonObject(); }
extern Evaluation *Q7B_Evaluation_Class(Q7B o);
extern Q7B Q7B_Evaluation_Object();
Evaluation *q7b_Evaluation_Object = 0;
Q7B q7b_Evaluation_Object_Q7B;
bool q7b_Evaluation_Object_Finalized = false;
bool q7b_Evaluation_Object_Init = false;

#include "ui_Evaluation.h"

Evaluation::Evaluation(Q7B _q7b_this, QWidget *parent)
 : QDialog(parent), ui(new Ui::Evaluation)
{
  q7b_this = _q7b_this;
  ui->setupUi(this);
}

Evaluation::Evaluation(QWidget *parent)
 : QDialog(parent), ui(new Ui::Evaluation)
{
  ui->setupUi(this);
  Init();
}

Evaluation::~Evaluation()
{
  if (this == q7b_Evaluation_Object){ q7b_Evaluation_Object = 0; q7b_Evaluation_Object_Q7B = Q7B_IDNIL(); }
  delete ui;
  q7b_this->ref = 0;
}

void Evaluation::closeEvent(QCloseEvent *e)
{
  if (e->isAccepted() && this == q7b_Evaluation_Object){ q7b_Evaluation_Object = 0; q7b_Evaluation_Object_Q7B = Q7B_IDNIL(); }
}

Evaluation::Evaluation(Q7B _q7b_this)
{
  q7b_this = _q7b_this;
}

void Evaluation::Init()
{
  if (q7b_Evaluation_Object_Init){ q7b_Evaluation_Object_Init = false; q7b_Evaluation_Object_Q7B = q7b_this = Q7B(new Q7B_id(typeid(Evaluation).name(), this)); } else q7b_this = Q7B(new Q7B_id(typeid(Evaluation).name(), this)); 
  setObjectName("Evaluation");
}

void Evaluation::Q7B_on_Buynow_clicked(Q7B Checked)
{
                                                                  Q7BS("Evaluation.uiClass.q7b", "on_Buynow_clicked", "15", "0");
                                                                  Q7BS("Evaluation.uiClass.q7b", "on_Buynow_clicked", "15", "1");
Q7B_QWIDGET_CLOSE(q7b_this);
                                                                  Q7BS("Evaluation.uiClass.q7b", "on_Buynow_clicked", "16", "1");
Q7B_OPENURL(Q7B_ID("http://www.q7basic.org/#Order"));
                                                                  Q7BS("Evaluation.uiClass.q7b", "on_Buynow_clicked", "17", "2");
}

void Evaluation::Q7B_on_Enterkey_clicked(Q7B Checked)
{
                                                                  Q7BS("Evaluation.uiClass.q7b", "on_Enterkey_clicked", "21", "0");
                                                                  Q7BS("Evaluation.uiClass.q7b", "on_Enterkey_clicked", "21", "1");
Q7B_QWIDGET_CLOSE(q7b_this);
                                                                  Q7BS("Evaluation.uiClass.q7b", "on_Enterkey_clicked", "22", "1");
Q7B_MainWindow_Class(Q7B_MainWindow_Object())->PerformRegister();
                                                                  Q7BS("Evaluation.uiClass.q7b", "on_Enterkey_clicked", "23", "2");
}

void Evaluation::Q7B_on_pushButton_clicked(Q7B Checked)
{
                                                                  Q7BS("Evaluation.uiClass.q7b", "on_pushButton_clicked", "27", "0");
                                                                  Q7BS("Evaluation.uiClass.q7b", "on_pushButton_clicked", "27", "1");
Q7B_QWIDGET_CLOSE(q7b_this);
                                                                  Q7BS("Evaluation.uiClass.q7b", "on_pushButton_clicked", "28", "2");
}

