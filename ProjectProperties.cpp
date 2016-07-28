
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


#include "ProjectProperties.h"

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

ProjectProperties *Q7B_ProjectProperties_Class(Q7B o){ return ProjectProperties::ClassPointer(o); }
Q7B Q7B_ProjectProperties_Object(){ return ProjectProperties::SingleTonObject(); }
extern ProjectProperties *Q7B_ProjectProperties_Class(Q7B o);
extern Q7B Q7B_ProjectProperties_Object();
ProjectProperties *q7b_ProjectProperties_Object = 0;
Q7B q7b_ProjectProperties_Object_Q7B;
bool q7b_ProjectProperties_Object_Finalized = false;
bool q7b_ProjectProperties_Object_Init = false;

#include "ui_ProjectProperties.h"

ProjectProperties::ProjectProperties(Q7B _q7b_this, QWidget *parent)
 : QDialog(parent), ui(new Ui::ProjectProperties)
{
  q7b_this = _q7b_this;
  ui->setupUi(this);
}

ProjectProperties::ProjectProperties(QWidget *parent)
 : QDialog(parent), ui(new Ui::ProjectProperties)
{
  ui->setupUi(this);
  Init();
}

ProjectProperties::~ProjectProperties()
{
  if (this == q7b_ProjectProperties_Object){ q7b_ProjectProperties_Object = 0; q7b_ProjectProperties_Object_Q7B = Q7B_IDNIL(); }
  delete ui;
  q7b_this->ref = 0;
}

void ProjectProperties::closeEvent(QCloseEvent *e)
{
  if (e->isAccepted() && this == q7b_ProjectProperties_Object){ q7b_ProjectProperties_Object = 0; q7b_ProjectProperties_Object_Q7B = Q7B_IDNIL(); }
}

void ProjectProperties::Init()
{
  if (q7b_ProjectProperties_Object_Init){ q7b_ProjectProperties_Object_Init = false; q7b_ProjectProperties_Object_Q7B = q7b_this = Q7B(new Q7B_id(typeid(ProjectProperties).name(), this)); } else q7b_this = Q7B(new Q7B_id(typeid(ProjectProperties).name(), this)); 
  setObjectName("ProjectProperties");
  Q7B q;
  QObject *o;
  o = findChild<QObject *>("commandline"); if (o){ q = Q7B(new Q7B_id(typeid(QLineEdit).name(), o, false)); commandline = q; } else { commandline = Q7B_IDNULL(); }
  o = findChild<QObject *>("comment"); if (o){ q = Q7B(new Q7B_id(typeid(QPlainTextEdit).name(), o, false)); comment = q; } else { comment = Q7B_IDNULL(); }
  o = findChild<QObject *>("profile"); if (o){ q = Q7B(new Q7B_id(typeid(QPlainTextEdit).name(), o, false)); profile = q; } else { profile = Q7B_IDNULL(); }
  o = findChild<QObject *>("proname"); if (o){ q = Q7B(new Q7B_id(typeid(QLineEdit).name(), o, false)); proname = q; } else { proname = Q7B_IDNULL(); }
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "Init", "34", "0");
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "Init", "34", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/")), Q7B_FILENAME(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath)), Q7B_ID(".q7basic_project"))))){
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "Init", "35", "1");
Q7B props; Q7B_ASSIGNMENT(&props, &(Q7B__DICTIONARY(Q7B_Dictionary::init())));
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "Init", "36", "1");
Q7B_ASSIGNMENT(&props, &Q7B__DICTIONARY(Q7B_READDICTIONARY(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/")), Q7B_FILENAME(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath)), Q7B_ID(".q7basic_project")))));
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "Init", "38", "1");
Q7B_QLINEEDIT_TEXT(proname, Q7B_DICTIONARY_OBJECT(props, Q7B_ID("proname")));
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "Init", "39", "1");
Q7B_QPLAINTEXTEDIT_PLAINTEXT(comment, Q7B_DICTIONARY_OBJECT(props, Q7B_ID("comment")));
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "Init", "40", "1");
Q7B_QLINEEDIT_TEXT(commandline, Q7B_DICTIONARY_OBJECT(props, Q7B_ID("commandline")));
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "Init", "41", "1");
Q7B_QPLAINTEXTEDIT_PLAINTEXT(profile, Q7B_DICTIONARY_OBJECT(props, Q7B_ID("profile")));

}
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "Init", "45", "2");
}

ProjectProperties::ProjectProperties(Q7B _q7b_this)
{
  ui->setupUi(this);
}

void ProjectProperties::Q7B_on_pushButton_clicked(Q7B Checked)
{
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "on_pushButton_clicked", "20", "0");
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "on_pushButton_clicked", "21", "1");
Q7B props; Q7B_ASSIGNMENT(&props, &(Q7B__DICTIONARY(Q7B_Dictionary::init())));
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "on_pushButton_clicked", "23", "1");
Q7B_DICTIONARY_SETOBJECT(props, Q7B_ID("proname"), Q7B_QLINEEDIT_TEXT(proname));
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "on_pushButton_clicked", "24", "1");
Q7B_DICTIONARY_SETOBJECT(props, Q7B_ID("comment"), Q7B_QPLAINTEXTEDIT_PLAINTEXT(comment));
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "on_pushButton_clicked", "25", "1");
Q7B_DICTIONARY_SETOBJECT(props, Q7B_ID("commandline"), Q7B_QLINEEDIT_TEXT(commandline));
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "on_pushButton_clicked", "26", "1");
Q7B_DICTIONARY_SETOBJECT(props, Q7B_ID("profile"), Q7B_QPLAINTEXTEDIT_PLAINTEXT(profile));
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "on_pushButton_clicked", "28", "1");
Q7B_WRITEDICTIONARY(props, Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/")), Q7B_FILENAME(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath)), Q7B_ID(".q7basic_project")));
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "on_pushButton_clicked", "29", "1");
Q7B_QWIDGET_CLOSE(q7b_this);
                                                                  Q7BS("ProjectProperties.uiClass.q7b", "on_pushButton_clicked", "30", "2");
}

