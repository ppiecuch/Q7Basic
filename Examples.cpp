
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


#include "Examples.h"

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

Examples *Q7B_Examples_Class(Q7B o){ return Examples::ClassPointer(o); }
Q7B Q7B_Examples_Object(){ return Examples::SingleTonObject(); }
extern Examples *Q7B_Examples_Class(Q7B o);
extern Q7B Q7B_Examples_Object();
Examples *q7b_Examples_Object = 0;
Q7B q7b_Examples_Object_Q7B;
bool q7b_Examples_Object_Finalized = false;
bool q7b_Examples_Object_Init = false;

#include "ui_Examples.h"

Examples::Examples(Q7B _q7b_this, QWidget *parent)
 : QDialog(parent), ui(new Ui::Examples)
{
  q7b_this = _q7b_this;
  ui->setupUi(this);
}

Examples::Examples(QWidget *parent)
 : QDialog(parent), ui(new Ui::Examples)
{
  ui->setupUi(this);
  Init();
}

Examples::~Examples()
{
  if (this == q7b_Examples_Object){ q7b_Examples_Object = 0; q7b_Examples_Object_Q7B = Q7B_IDNIL(); }
  delete ui;
  q7b_this->ref = 0;
}

void Examples::closeEvent(QCloseEvent *e)
{
  if (e->isAccepted() && this == q7b_Examples_Object){ q7b_Examples_Object = 0; q7b_Examples_Object_Q7B = Q7B_IDNIL(); }
}

void Examples::Init()
{
  if (q7b_Examples_Object_Init){ q7b_Examples_Object_Init = false; q7b_Examples_Object_Q7B = q7b_this = Q7B(new Q7B_id(typeid(Examples).name(), this)); } else q7b_this = Q7B(new Q7B_id(typeid(Examples).name(), this)); 
  setObjectName("Examples");
  Q7B q;
  QObject *o;
  o = findChild<QObject *>("listWidget"); if (o){ q = Q7B(new Q7B_id(typeid(QListWidget).name(), o, false)); listWidget = q; } else { listWidget = Q7B_IDNULL(); }
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "11", "0");
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "12", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "13", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_ID(Q7B_List::init()))));
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "15", "1");
Q7B NameFilter; Q7B_ASSIGNMENT(&NameFilter, &(Q7B__LIST(Q7B_List::init(Q7B_ID("*")))));
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "16", "1");
Q7B_ASSIGNMENT(&a, &Q7B__LIST(Q7B_DIR_RECURSIVEFINDFILE(Q7B_Dir_Object(), Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Examples")), NameFilter, Q7B_ID((qint64) 1), Q7B_ID(QDir::NoSort))));
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "18", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("Examples.uiClass.q7b", "Init", "18", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "19", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_CONCAT(Q7B_LIST_OBJECT(a, i), Q7B_ID("/Global.QObject.q7b"))))){
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "21", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_CONTAINS(Q7B_LIST_OBJECT(a, i), Q7B_ID("/gcc/"), Q7B_ID(true))) || Q7B_CBOOL(Q7B_CONTAINS(Q7B_LIST_OBJECT(a, i), Q7B_ID("\\gcc\\"), Q7B_ID(true))))))){
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "21", "1");
continue;

}
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "23", "1");
Q7B it; Q7B_ASSIGNMENT(&it, &(Q7B__QLISTWIDGETITEM(Q7B_QLISTWIDGETITEM_INIT(this, "it"))));
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "25", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_CONCAT(Q7B_LIST_OBJECT(a, i), Q7B_ID("/Readme.txt"))))){
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "26", "1");
Q7B_QLISTWIDGETITEM_SETTEXT(it, Q7B_CONCAT(Q7B_CONCAT(Q7B_FILENAME(Q7B_LIST_OBJECT(a, i)), Q7B_ID(":\n\n")), Q7B_READSTRING(Q7B_CONCAT(Q7B_LIST_OBJECT(a, i), Q7B_ID("/Readme.txt")), Q7B_ID(""))));

} else {
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "28", "1");
Q7B_QLISTWIDGETITEM_SETTEXT(it, Q7B_FILENAME(Q7B_LIST_OBJECT(a, i)));

}
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "30", "1");
Q7B_QLISTWIDGETITEM_SETSTATUSTIP(it, Q7B_LIST_OBJECT(a, i));
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "32", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_CONCAT(Q7B_LIST_OBJECT(a, i), Q7B_ID("/Readme.jpg"))))){
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "33", "1");
Q7B_QLISTWIDGETITEM_SETICON(it, Q7B_QICON_INIT(this, "it", Q7B_CONCAT(Q7B_LIST_OBJECT(a, i), Q7B_ID("/Readme.jpg"))));

} else {
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "35", "1");
Q7B_QLISTWIDGETITEM_SETICON(it, Q7B_QICON_INIT(this, "it", Q7B_CONCAT(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/ExampleBrowserNoDescriptionYet.jpg"))));

}
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "39", "1");
Q7B_QLISTWIDGET_ADDITEM2(listWidget, it);

}

}
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "42", "1");
Q7B si; Q7B_ASSIGNMENT(&si, &(Q7B__QSIZE(Q7B_QSIZE_INIT(this, "si"))));
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "42", "1");
Q7B_QSIZE_SETWIDTH(si, Q7B_ID((qint64) 320));
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "42", "1");
Q7B_QSIZE_SETHEIGHT(si, Q7B_ID((qint64) 200));
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "43", "1");
Q7B_QABSTRACTITEMVIEW_SETICONSIZE(listWidget, si);
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "44", "1");
Q7B_QLISTVIEW_SETSPACING(listWidget, Q7B_ID((qint64) 5));
                                                                  Q7BS("Examples.uiClass.q7b", "Init", "47", "2");
}

Examples::Examples(Q7B _q7b_this)
{
  ui->setupUi(this);
}

void Examples::Q7B_on_listWidget_itemClicked(Q7B Item)
{
                                                                  Q7BS("Examples.uiClass.q7b", "on_listWidget_itemClicked", "50", "0");
                                                                  Q7BS("Examples.uiClass.q7b", "on_listWidget_itemClicked", "60", "1");
Q7B_Project_Class(Q7B_Project_Object())->Open(Q7B_QLISTWIDGETITEM_STATUSTIP(Item));
                                                                  Q7BS("Examples.uiClass.q7b", "on_listWidget_itemClicked", "62", "1");
Q7B_QWIDGET_CLOSE(q7b_this);
                                                                  Q7BS("Examples.uiClass.q7b", "on_listWidget_itemClicked", "64", "2");
}

