
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


#include "CodeView.h"


#include "Declare.h"


#include "Evaluation.h"


#include "Examples.h"


#include "FindReplaceFile.h"


#include "Global.h"


#include "MainWindow.h"


#include "Project.h"


#include "ProjectProperties.h"


#include "Settings.h"


#include "myClass.h"


#include "myParser.h"


#include "Q7BCodeView.h"


#include "Q7BCompiler.h"


#include "Q7BFormDesigner.h"


#include "Q7BProjectWindow.h"


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

extern Q7B Q7B_idSYSTEMTRAYICON;
Q7B Q7B_SystemTrayIcon_Object(){ if (Q7B_nil(Q7B_idSYSTEMTRAYICON)){ Q7B_idSYSTEMTRAYICON = Q7B(new Q7B_id(typeid(QSystemTrayIcon).name(), new QSystemTrayIcon())); } return Q7B_idSYSTEMTRAYICON; }

#include "Application.h"

Global *Q7B_Global_Class(Q7B o){ return Global::ClassPointer(o); }
Q7B Q7B_Global_Object(){ return Global::SingleTonObject(); }
Global *q7b_Global_Object = 0;
Q7B q7b_Global_Object_Q7B;
bool q7b_Global_Object_Finalized = false;
bool q7b_Global_Object_Init = false;

Global::Global(QObject *parent)
 : QObject(parent)
{
  Init();
}

void Global::Init()
{
  if (q7b_Global_Object_Init){ q7b_Global_Object_Init = false; q7b_Global_Object_Q7B = q7b_this = Q7B(new Q7B_id(typeid(Global).name(), this)); } else q7b_this = Q7B(new Q7B_id(typeid(Global).name(), this)); 
  setObjectName("Global");
  Q7B_ASSIGNMENT(&dCompletion2function, &(Q7B_Dictionary::init()));
  Q7B_ASSIGNMENT(&dummy, &(Q7B_STRING(Q7B_ID((double)77.8), Q7B_ID(false))));
  Q7B_ASSIGNMENT(&CPPKeywords, &(Q7B_QSTRINGLIST(Q7B_SPLIT(Q7B_READSTRING(Q7B_ID("cpp_keyword.txt"), Q7B_ID("")), Q7B_ID("\n"), Q7B_ID(true)), Q7B_ID(false))));
  Q7B_ASSIGNMENT(&Keywords, &(Q7B_QSTRINGLIST(Q7B_SPLIT(Q7B_READSTRING(Q7B_ID("keyword.txt"), Q7B_ID("")), Q7B_ID("\n"), Q7B_ID(true)), Q7B_ID(false))));
  Q7B_ASSIGNMENT(&Consts, &(Q7B_QSTRINGLIST(Q7B_SPLIT(Q7B_READSTRING(Q7B_ID("const.txt"), Q7B_ID("")), Q7B_ID("\n"), Q7B_ID(true)), Q7B_ID(false))));
  Q7B_ASSIGNMENT(&Types, &(Q7B_QSTRINGLIST(Q7B_SPLIT(Q7B_READSTRING(Q7B_ID("type.txt"), Q7B_ID("")), Q7B_ID("\n"), Q7B_ID(true)), Q7B_ID(false))));
  Q7B_ASSIGNMENT(&Functions, &(Q7B_QSTRINGLIST(Q7B_SPLIT(Q7B_READSTRING(Q7B_ID("function.txt"), Q7B_ID("")), Q7B_ID("\n"), Q7B_ID(true)), Q7B_ID(false))));
  Q7B_ASSIGNMENT(&Functions2, &(Q7B_QSTRINGLIST_INIT(this, "Functions2")));
  Q7B_ASSIGNMENT(&Classes, &(Q7B_QSTRINGLIST(Q7B_SPLIT(Q7B_READSTRING(Q7B_ID("class.txt"), Q7B_ID("")), Q7B_ID("\n"), Q7B_ID(true)), Q7B_ID(false))));
  Q7B_ASSIGNMENT(&Classes2, &(Q7B_QSTRINGLIST(Q7B_SPLIT(Q7B_READSTRING(Q7B_ID("class2.txt"), Q7B_ID("")), Q7B_ID("\n"), Q7B_ID(true)), Q7B_ID(false))));
  Q7B_ASSIGNMENT(&Objects, &(Q7B_QSTRINGLIST(Q7B_SPLIT(Q7B_READSTRING(Q7B_ID("object.txt"), Q7B_ID("")), Q7B_ID("\n"), Q7B_ID(true)), Q7B_ID(false))));
  Q7B_ASSIGNMENT(&Signals, &(Q7B_Dictionary::init()));
  Q7B_ASSIGNMENT(&Signals_Tree, &(Q7B_Dictionary::init()));
  Q7B_ASSIGNMENT(&Events, &(Q7B_Dictionary::init()));
                                                                  Q7BS("Global.QObject.q7b", "Init", "79", "0");
                                                                  Q7BS("Global.QObject.q7b", "Init", "114", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_ID(Q7B_List::init()))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "115", "1");
Q7B b; Q7B_ASSIGNMENT(&b, &(Q7B__LIST(Q7B_ID(Q7B_List::init()))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "116", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "118", "1");
Q7B_ASSIGNMENT(&a, &Q7B__LIST(Q7B_SPLIT(Q7B_READSTRING(Q7B_ID("signal.txt"), Q7B_ID("")), Q7B_ID("\n"), Q7B_ID(true))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "120", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("Global.QObject.q7b", "Init", "120", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("Global.QObject.q7b", "Init", "122", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "124", "1");
Q7B_ASSIGNMENT(&b, &Q7B__LIST(Q7B_SPLIT(s, Q7B_ID(":"), Q7B_ID(true))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "125", "1");

if (Q7B_CBOOL(Q7B_UNEQUAL(Q7B_LIST_LENGTH(b), Q7B_ID((qint64) 2)))){
                                                                  Q7BS("Global.QObject.q7b", "Init", "126", "1");
continue;

}
                                                                  Q7BS("Global.QObject.q7b", "Init", "129", "1");
Q7B sKey; Q7B_ASSIGNMENT(&sKey, &(Q7B__STRING(Q7B_LIST_OBJECT(b, Q7B_ID((qint64) 0)))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "130", "1");
Q7B sValue; Q7B_ASSIGNMENT(&sValue, &(Q7B__STRING(Q7B_TRIM(Q7B_LIST_OBJECT(b, Q7B_ID((qint64) 1))))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "134", "1");

if (Q7B_CBOOL(Q7B_DICTIONARY_CONTAINS(Signals, sKey))){
                                                                  Q7BS("Global.QObject.q7b", "Init", "135", "1");
Q7B c; Q7B_ASSIGNMENT(&c, &(Q7B__LIST(Q7B_DICTIONARY_OBJECT(Signals, sKey))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "136", "1");
Q7B_LIST_APPEND(c, sValue);
                                                                  Q7BS("Global.QObject.q7b", "Init", "137", "1");
Q7B_DICTIONARY_SETOBJECT(Signals, sKey, c);

} else {
                                                                  Q7BS("Global.QObject.q7b", "Init", "139", "1");
Q7B c; Q7B_ASSIGNMENT(&c, &(Q7B__LIST(Q7B_ID(Q7B_List::init()))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "140", "1");
Q7B_LIST_APPEND(c, sValue);
                                                                  Q7BS("Global.QObject.q7b", "Init", "141", "1");
Q7B_DICTIONARY_SETOBJECT(Signals, sKey, c);

}

}
                                                                  Q7BS("Global.QObject.q7b", "Init", "146", "1");
Q7B_ASSIGNMENT(&a, &Q7B__LIST(Q7B_SPLIT(Q7B_READSTRING(Q7B_ID("signal_tree.txt"), Q7B_ID("")), Q7B_ID("\n"), Q7B_ID(true))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "148", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("Global.QObject.q7b", "Init", "148", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("Global.QObject.q7b", "Init", "150", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "151", "1");
Q7B_ASSIGNMENT(&b, &Q7B__LIST(Q7B_SPLIT(s, Q7B_ID(":"), Q7B_ID(true))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "152", "1");

if (Q7B_CBOOL(Q7B_SMALLER(Q7B_LIST_LENGTH(b), Q7B_ID((qint64) 1)))){
                                                                  Q7BS("Global.QObject.q7b", "Init", "153", "1");
continue;

}
                                                                  Q7BS("Global.QObject.q7b", "Init", "156", "1");
Q7B sKey; Q7B_ASSIGNMENT(&sKey, &(Q7B__STRING(Q7B_LIST_OBJECT(b, Q7B_ID((qint64) 0)))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "158", "1");
Q7B ii; Q7B_ASSIGNMENT(&ii, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "160", "1");
Q7B_ASSIGNMENT(&ii, &Q7B__INTEGER(Q7B_ID((qint64) 1)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(ii, Q7B_SUB(Q7B_LIST_LENGTH(b), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("Global.QObject.q7b", "Init", "160", "1")), Q7B_ASSIGNMENT(&ii, &Q7B__INTEGER(Q7B_ADD(ii, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("Global.QObject.q7b", "Init", "161", "1");
Q7B sValue; Q7B_ASSIGNMENT(&sValue, &(Q7B__STRING(Q7B_TRIM(Q7B_LIST_OBJECT(b, ii)))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "163", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sValue, Q7B_ID("")))){
                                                                  Q7BS("Global.QObject.q7b", "Init", "164", "1");
continue;

}
                                                                  Q7BS("Global.QObject.q7b", "Init", "167", "1");

if (Q7B_CBOOL(Q7B_DICTIONARY_CONTAINS(Signals_Tree, sKey))){
                                                                  Q7BS("Global.QObject.q7b", "Init", "168", "1");
Q7B c; Q7B_ASSIGNMENT(&c, &(Q7B__LIST(Q7B_DICTIONARY_OBJECT(Signals_Tree, sKey))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "169", "1");
Q7B_LIST_APPEND(c, sValue);
                                                                  Q7BS("Global.QObject.q7b", "Init", "170", "1");
Q7B_DICTIONARY_SETOBJECT(Signals_Tree, sKey, c);

} else {
                                                                  Q7BS("Global.QObject.q7b", "Init", "172", "1");
Q7B c; Q7B_ASSIGNMENT(&c, &(Q7B__LIST(Q7B_ID(Q7B_List::init()))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "173", "1");
Q7B_LIST_APPEND(c, sValue);
                                                                  Q7BS("Global.QObject.q7b", "Init", "174", "1");
Q7B_DICTIONARY_SETOBJECT(Signals_Tree, sKey, c);

}

}

}
                                                                  Q7BS("Global.QObject.q7b", "Init", "184", "1");
Q7B_ASSIGNMENT(&a, &Q7B__LIST(Q7B_SPLIT(Q7B_READSTRING(Q7B_ID("event.txt"), Q7B_ID("")), Q7B_ID("\n"), Q7B_ID(true))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "186", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("Global.QObject.q7b", "Init", "186", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("Global.QObject.q7b", "Init", "188", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "189", "1");
Q7B_ASSIGNMENT(&b, &Q7B__LIST(Q7B_SPLIT(s, Q7B_ID(":"), Q7B_ID(true))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "190", "1");

if (Q7B_CBOOL(Q7B_UNEQUAL(Q7B_LIST_LENGTH(b), Q7B_ID((qint64) 2)))){
                                                                  Q7BS("Global.QObject.q7b", "Init", "191", "1");
continue;

}
                                                                  Q7BS("Global.QObject.q7b", "Init", "194", "1");
Q7B sKey; Q7B_ASSIGNMENT(&sKey, &(Q7B__STRING(Q7B_LIST_OBJECT(b, Q7B_ID((qint64) 0)))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "195", "1");
Q7B sValue; Q7B_ASSIGNMENT(&sValue, &(Q7B__STRING(Q7B_TRIM(Q7B_LIST_OBJECT(b, Q7B_ID((qint64) 1))))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "197", "1");

if (Q7B_CBOOL(Q7B_DICTIONARY_CONTAINS(Events, sKey))){
                                                                  Q7BS("Global.QObject.q7b", "Init", "198", "1");
Q7B c; Q7B_ASSIGNMENT(&c, &(Q7B__LIST(Q7B_DICTIONARY_OBJECT(Events, sKey))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "199", "1");
Q7B_LIST_APPEND(c, sValue);
                                                                  Q7BS("Global.QObject.q7b", "Init", "200", "1");
Q7B_DICTIONARY_SETOBJECT(Events, sKey, c);

} else {
                                                                  Q7BS("Global.QObject.q7b", "Init", "202", "1");
Q7B c; Q7B_ASSIGNMENT(&c, &(Q7B__LIST(Q7B_ID(Q7B_List::init()))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "203", "1");
Q7B_LIST_APPEND(c, sValue);
                                                                  Q7BS("Global.QObject.q7b", "Init", "204", "1");
Q7B_DICTIONARY_SETOBJECT(Events, sKey, c);

}

}
                                                                  Q7BS("Global.QObject.q7b", "Init", "208", "1");
Q7B_ASSIGNMENT(&a, &Q7B__LIST(Q7B_QSTRINGLIST_TOLIST(Functions)));
                                                                  Q7BS("Global.QObject.q7b", "Init", "210", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("Global.QObject.q7b", "Init", "210", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("Global.QObject.q7b", "Init", "212", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "213", "1");

if (Q7B_CBOOL(Q7B_ISEMPTY(s))){
                                                                  Q7BS("Global.QObject.q7b", "Init", "213", "1");
break;

}
                                                                  Q7BS("Global.QObject.q7b", "Init", "215", "1");
Q7B_ASSIGNMENT(&b, &Q7B__LIST(Q7B_SPLIT(s, Q7B_ID("("), Q7B_ID(true))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "218", "1");

if (Q7B_CBOOL(Q7B_SMALLER(Q7B_LIST_LENGTH(b), Q7B_ID((qint64) 2)))){
                                                                  Q7BS("Global.QObject.q7b", "Init", "218", "1");
Q7B_MSGBOX(Q7B_ID("b.Length"), Q7B_CONCAT(Q7B_CONCAT(s, Q7B_ID("  ")), i), Q7B_ID(false));

}
                                                                  Q7BS("Global.QObject.q7b", "Init", "220", "1");
Q7B sKey; Q7B_ASSIGNMENT(&sKey, &(Q7B__STRING(Q7B_LIST_OBJECT(b, Q7B_ID((qint64) 0)))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "221", "1");
Q7B sValue; Q7B_ASSIGNMENT(&sValue, &(Q7B__STRING(Q7B_TRIM(Q7B_LIST_OBJECT(b, Q7B_ID((qint64) 1))))));
                                                                  Q7BS("Global.QObject.q7b", "Init", "223", "1");
Q7B_QSTRINGLIST_APPEND(Functions2, sKey);
                                                                  Q7BS("Global.QObject.q7b", "Init", "225", "1");
addFunction(sKey, Q7B_CONCAT(Q7B_CONCAT(sKey, Q7B_ID("(")), sValue));

}
                                                                  Q7BS("Global.QObject.q7b", "Init", "256", "2");
}

Global::~Global()
{
                                                                  Q7BS("Global.QObject.q7b", "Finalize", "15", "0");
                                                                  Q7BS("Global.QObject.q7b", "Finalize", "26", "2");
  if (this == q7b_Global_Object){ q7b_Global_Object = 0; q7b_Global_Object_Q7B = Q7B_IDNIL(); }
  q7b_this->ref = 0;
}

Global::Global(Q7B _q7b_this)
{
}

void Global::addClass(Q7B s, Q7B o)
{
                                                                  Q7BS("Global.QObject.q7b", "addClass", "34", "0");
                                                                  Q7BS("Global.QObject.q7b", "addClass", "34", "1");
Q7B_DICTIONARY_SETOBJECT(Global::dClassCompletion, s, o);
                                                                  Q7BS("Global.QObject.q7b", "addClass", "37", "2");
}

void Global::addConst(Q7B s)
{
                                                                  Q7BS("Global.QObject.q7b", "addConst", "57", "0");
                                                                  Q7BS("Global.QObject.q7b", "addConst", "57", "1");
Q7B_LIST_APPEND(Global::ObjectiveBasicConsts, s);
                                                                  Q7BS("Global.QObject.q7b", "addConst", "58", "2");
}

void Global::addFunction(Q7B s, Q7B ss)
{
                                                                  Q7BS("Global.QObject.q7b", "addFunction", "51", "0");
                                                                  Q7BS("Global.QObject.q7b", "addFunction", "52", "1");
Q7B_DICTIONARY_SETOBJECT(dCompletion2function, Q7B_LCASE(s), ss);
                                                                  Q7BS("Global.QObject.q7b", "addFunction", "53", "2");
}

void Global::addObject(Q7B s, Q7B o)
{
                                                                  Q7BS("Global.QObject.q7b", "addObject", "43", "0");
                                                                  Q7BS("Global.QObject.q7b", "addObject", "44", "1");
Q7B_DICTIONARY_SETOBJECT(Global::dObjectCompletion, s, o);
                                                                  Q7BS("Global.QObject.q7b", "addObject", "45", "2");
}

Q7B Global::dClassCompletion = Q7B_ASSIGNMENT2(&dClassCompletion, &Q7B_Dictionary::init());
Q7B Global::dObjectCompletion = Q7B_ASSIGNMENT2(&dObjectCompletion, &Q7B_Dictionary::init());
Q7B Global::ObjectiveBasicConsts = Q7B_ASSIGNMENT2(&ObjectiveBasicConsts, &Q7B_ID(Q7B_List::init()));

QEventLoop *q7b_workaround_eventloop = 0; Q7B_workaround_eventloop Q7B_workaround_eventloop_; void Q7B_workaround_eventloop::q7b_workaround_eventloop_(){  q7b_workaround_eventloop->exit(); }

extern bool Q7B_bDebug;

int main (int argc, char *argv[])
{
Application::SingleTonObject(argc, argv);
Application *q7b_qApp = Application::SingleTonObjectPointer(argc, argv);
qApp->addLibraryPath(qApp->applicationDirPath() + "/plugins");
qApp->setApplicationName("Q7Basic");
QPixmap q7b_splash_pixmap(":/Resources/splash.png");
QSplashScreen q7b_splash(q7b_splash_pixmap);
q7b_splash.show();
Global::SingleTonObject();
MainWindow::SingleTonObject();
q7b_splash.close();
MainWindow::SingleTonObjectPointer()->show();
int q7b_n = qApp->exec();

QMapIterator<QString, Q7B> iii(q7b_ui);
while (iii.hasNext()){
  iii.next();
  if (!((QWidget *) iii.value()->ref)->testAttribute(Qt::WA_DeleteOnClose)){
    delete ((QWidget *) iii.value()->ref);
  }
q7b_ui[iii.key()]->ref = 0;
q7b_ui[iii.key()] = Q7B_IDNIL();
}

if (q7b_CodeView_Object){ CodeView *q7b_oCodeView = CodeView::SingleTonObjectPointer(); if (q7b_oCodeView){ q7b_CodeView_Object_Finalized = true; delete q7b_oCodeView; q7b_CodeView_Object = 0; q7b_CodeView_Object_Q7B->ref = 0; }}
if (q7b_Declare_Object){ Declare *q7b_oDeclare = Declare::SingleTonObjectPointer(); if (q7b_oDeclare){ q7b_Declare_Object_Finalized = true; delete q7b_oDeclare; q7b_Declare_Object = 0; q7b_Declare_Object_Q7B->ref = 0; }}
if (q7b_Evaluation_Object){ Evaluation *q7b_oEvaluation = Evaluation::SingleTonObjectPointer(); if (q7b_oEvaluation){ q7b_Evaluation_Object_Finalized = true; delete q7b_oEvaluation; q7b_Evaluation_Object = 0; q7b_Evaluation_Object_Q7B->ref = 0; }}
if (q7b_Examples_Object){ Examples *q7b_oExamples = Examples::SingleTonObjectPointer(); if (q7b_oExamples){ q7b_Examples_Object_Finalized = true; delete q7b_oExamples; q7b_Examples_Object = 0; q7b_Examples_Object_Q7B->ref = 0; }}
if (q7b_FindReplaceFile_Object){ FindReplaceFile *q7b_oFindReplaceFile = FindReplaceFile::SingleTonObjectPointer(); if (q7b_oFindReplaceFile){ q7b_FindReplaceFile_Object_Finalized = true; delete q7b_oFindReplaceFile; q7b_FindReplaceFile_Object = 0; q7b_FindReplaceFile_Object_Q7B->ref = 0; }}
if (q7b_myClass_Object){ myClass *q7b_omyClass = myClass::SingleTonObjectPointer(); if (q7b_omyClass){ q7b_myClass_Object_Finalized = true; delete q7b_omyClass; q7b_myClass_Object = 0; q7b_myClass_Object_Q7B->ref = 0; }}
if (q7b_myParser_Object){ myParser *q7b_omyParser = myParser::SingleTonObjectPointer(); if (q7b_omyParser){ q7b_myParser_Object_Finalized = true; delete q7b_omyParser; q7b_myParser_Object = 0; q7b_myParser_Object_Q7B->ref = 0; }}
if (q7b_Project_Object){ Project *q7b_oProject = Project::SingleTonObjectPointer(); if (q7b_oProject){ q7b_Project_Object_Finalized = true; delete q7b_oProject; q7b_Project_Object = 0; q7b_Project_Object_Q7B->ref = 0; }}
if (q7b_ProjectProperties_Object){ ProjectProperties *q7b_oProjectProperties = ProjectProperties::SingleTonObjectPointer(); if (q7b_oProjectProperties){ q7b_ProjectProperties_Object_Finalized = true; delete q7b_oProjectProperties; q7b_ProjectProperties_Object = 0; q7b_ProjectProperties_Object_Q7B->ref = 0; }}
if (q7b_Settings_Object){ Settings *q7b_oSettings = Settings::SingleTonObjectPointer(); if (q7b_oSettings){ q7b_Settings_Object_Finalized = true; delete q7b_oSettings; q7b_Settings_Object = 0; q7b_Settings_Object_Q7B->ref = 0; }}

if (Q7B_idSYSTEMTRAYICON != Q7B_IDNIL() && !Q7B_idSYSTEMTRAYICON.isNull() && Q7B_idSYSTEMTRAYICON->ref){ Q7B_idSYSTEMTRAYICON->ref = 0; Q7B_idSYSTEMTRAYICON = Q7B_idnil; }
MainWindow *q7b_oMainWindow = MainWindow::SingleTonObjectPointer(); if (q7b_oMainWindow){ q7b_MainWindow_Object_Finalized = true; delete q7b_oMainWindow; q7b_MainWindow_Object = 0;  q7b_MainWindow_Object_Q7B->ref = 0; }
q7b_workaround_eventloop = new QEventLoop();
QTimer::singleShot(10, &Q7B_workaround_eventloop_, SLOT(q7b_workaround_eventloop_())); q7b_workaround_eventloop->exec();
delete q7b_workaround_eventloop;
Global *q7b_oGlobal = Global::SingleTonObjectPointer(); if (q7b_oGlobal){ q7b_Global_Object_Finalized = true; delete q7b_oGlobal; q7b_Global_Object = 0;  q7b_Global_Object_Q7B->ref = 0; }
q7b_workaround_eventloop = new QEventLoop();
QTimer::singleShot(10, &Q7B_workaround_eventloop_, SLOT(q7b_workaround_eventloop_())); q7b_workaround_eventloop->exec();
delete q7b_workaround_eventloop;
Q7B_CLOSEALLDATABASES();
Q7B_CLOSESCREEN();
if (Q7B_Preferences_Object() != Q7B_IDNIL()) ((QSettings *) Q7B_Preferences_Object()->ref)->sync();
delete q7b_qApp;
return q7b_n;
}

Q7B Q7B_GLOBAL_LOADUI(QString uiName)
{
  Q7B q7b_this;
  if (uiName == "CodeView"){
    QObject *oo = new CodeView(q7b_this, 0); q7b_this = Q7B(new Q7B_id(typeid(QWidget).name(), oo));  ((CodeView *) oo)->Init(); return q7b_this;
  }
  if (uiName == "Evaluation"){
    QObject *oo = new Evaluation(q7b_this, 0); q7b_this = Q7B(new Q7B_id(typeid(QWidget).name(), oo));  ((Evaluation *) oo)->Init(); return q7b_this;
  }
  if (uiName == "Examples"){
    QObject *oo = new Examples(q7b_this, 0); q7b_this = Q7B(new Q7B_id(typeid(QWidget).name(), oo));  ((Examples *) oo)->Init(); return q7b_this;
  }
  if (uiName == "FindReplaceFile"){
    QObject *oo = new FindReplaceFile(q7b_this, 0); q7b_this = Q7B(new Q7B_id(typeid(QWidget).name(), oo));  ((FindReplaceFile *) oo)->Init(); return q7b_this;
  }
  if (uiName == "ProjectProperties"){
    QObject *oo = new ProjectProperties(q7b_this, 0); q7b_this = Q7B(new Q7B_id(typeid(QWidget).name(), oo));  ((ProjectProperties *) oo)->Init(); return q7b_this;
  }
  if (uiName == "Settings"){
    QObject *oo = new Settings(q7b_this, 0); q7b_this = Q7B(new Q7B_id(typeid(QWidget).name(), oo));  ((Settings *) oo)->Init(); return q7b_this;
  }
  if (uiName == "About"){
    QWidget *w = Q7B_CREATE_FROM_UI_FILE(":/uifiles/About.ui", 0);
    if (w){ w->setAttribute(Qt::WA_DeleteOnClose); q7b_this = Q7B(new Q7B_id(typeid(QWidget).name(), w)); return q7b_this; }
  }
  return Q7B_IDNIL();
}

Q7B Q7B_GLOBAL_OPENWINDOW(QString uiName)
{
  Q7B q7b_this;
  if (uiName == "CodeView"){
    if (q7b_ui.contains("CodeView")){
      ((QWidget *) q7b_ui["CodeView"]->ref)->showNormal(); ((QWidget *) q7b_ui["CodeView"]->ref)->activateWindow(); return q7b_ui["CodeView"];
    } else {
      q7b_ui["CodeView"] = Q7B(new Q7B_id(typeid(QWidget).name(), new CodeView(q7b_ui["CodeView"], 0))); CodeView::SingleTonInit(((CodeView *) q7b_ui["CodeView"]->ref)); ((QWidget *) q7b_ui["CodeView"]->ref)->showNormal(); ((QWidget *) q7b_ui["CodeView"]->ref)->activateWindow(); return q7b_ui["CodeView"];
    }
  }
  if (uiName == "Evaluation"){
    if (q7b_ui.contains("Evaluation")){
      ((QWidget *) q7b_ui["Evaluation"]->ref)->showNormal(); ((QWidget *) q7b_ui["Evaluation"]->ref)->activateWindow(); return q7b_ui["Evaluation"];
    } else {
      q7b_ui["Evaluation"] = Q7B(new Q7B_id(typeid(QWidget).name(), new Evaluation(q7b_ui["Evaluation"], 0))); Evaluation::SingleTonInit(((Evaluation *) q7b_ui["Evaluation"]->ref)); ((QWidget *) q7b_ui["Evaluation"]->ref)->showNormal(); ((QWidget *) q7b_ui["Evaluation"]->ref)->activateWindow(); return q7b_ui["Evaluation"];
    }
  }
  if (uiName == "Examples"){
    if (q7b_ui.contains("Examples")){
      ((QWidget *) q7b_ui["Examples"]->ref)->showNormal(); ((QWidget *) q7b_ui["Examples"]->ref)->activateWindow(); return q7b_ui["Examples"];
    } else {
      q7b_ui["Examples"] = Q7B(new Q7B_id(typeid(QWidget).name(), new Examples(q7b_ui["Examples"], 0))); Examples::SingleTonInit(((Examples *) q7b_ui["Examples"]->ref)); ((QWidget *) q7b_ui["Examples"]->ref)->showNormal(); ((QWidget *) q7b_ui["Examples"]->ref)->activateWindow(); return q7b_ui["Examples"];
    }
  }
  if (uiName == "FindReplaceFile"){
    if (q7b_ui.contains("FindReplaceFile")){
      ((QWidget *) q7b_ui["FindReplaceFile"]->ref)->showNormal(); ((QWidget *) q7b_ui["FindReplaceFile"]->ref)->activateWindow(); return q7b_ui["FindReplaceFile"];
    } else {
      q7b_ui["FindReplaceFile"] = Q7B(new Q7B_id(typeid(QWidget).name(), new FindReplaceFile(q7b_ui["FindReplaceFile"], 0))); FindReplaceFile::SingleTonInit(((FindReplaceFile *) q7b_ui["FindReplaceFile"]->ref)); ((QWidget *) q7b_ui["FindReplaceFile"]->ref)->showNormal(); ((QWidget *) q7b_ui["FindReplaceFile"]->ref)->activateWindow(); return q7b_ui["FindReplaceFile"];
    }
  }
  if (uiName == "ProjectProperties"){
    if (q7b_ui.contains("ProjectProperties")){
      ((QWidget *) q7b_ui["ProjectProperties"]->ref)->showNormal(); ((QWidget *) q7b_ui["ProjectProperties"]->ref)->activateWindow(); return q7b_ui["ProjectProperties"];
    } else {
      q7b_ui["ProjectProperties"] = Q7B(new Q7B_id(typeid(QWidget).name(), new ProjectProperties(q7b_ui["ProjectProperties"], 0))); ProjectProperties::SingleTonInit(((ProjectProperties *) q7b_ui["ProjectProperties"]->ref)); ((QWidget *) q7b_ui["ProjectProperties"]->ref)->showNormal(); ((QWidget *) q7b_ui["ProjectProperties"]->ref)->activateWindow(); return q7b_ui["ProjectProperties"];
    }
  }
  if (uiName == "Settings"){
    if (q7b_ui.contains("Settings")){
      ((QWidget *) q7b_ui["Settings"]->ref)->showNormal(); ((QWidget *) q7b_ui["Settings"]->ref)->activateWindow(); return q7b_ui["Settings"];
    } else {
      q7b_ui["Settings"] = Q7B(new Q7B_id(typeid(QWidget).name(), new Settings(q7b_ui["Settings"], 0))); Settings::SingleTonInit(((Settings *) q7b_ui["Settings"]->ref)); ((QWidget *) q7b_ui["Settings"]->ref)->showNormal(); ((QWidget *) q7b_ui["Settings"]->ref)->activateWindow(); return q7b_ui["Settings"];
    }
  }
  if (uiName == "About"){
      QWidget *w = Q7B_CREATE_FROM_UI_FILE(":/uifiles/About.ui", 0);
      if (w){ w->setAttribute(Qt::WA_DeleteOnClose); w->showNormal(); w->activateWindow(); q7b_this = Q7B(new Q7B_id(typeid(QWidget).name(), w)); return q7b_this; }
      return Q7B_IDNIL();
  }
  return Q7B_IDNIL();
}

Q7B Q7B_GLOBAL_OPENDIALOG(QString uiName)
{
  Q7B q7b_this;
  if (uiName == "CodeView"){
    if (q7b_ui.contains("CodeView")){
      return q7b_ui["CodeView"];
    } else {
      q7b_ui["CodeView"] = Q7B(new Q7B_id(typeid(QWidget).name(), new CodeView(q7b_ui["CodeView"], 0))); CodeView::SingleTonInit(((CodeView *) q7b_ui["CodeView"]->ref)); return q7b_ui["CodeView"];
    }
  }
  if (uiName == "Evaluation"){
    if (q7b_ui.contains("Evaluation")){
      return q7b_ui["Evaluation"];
    } else {
      q7b_ui["Evaluation"] = Q7B(new Q7B_id(typeid(QWidget).name(), new Evaluation(q7b_ui["Evaluation"], 0))); Evaluation::SingleTonInit(((Evaluation *) q7b_ui["Evaluation"]->ref)); return q7b_ui["Evaluation"];
    }
  }
  if (uiName == "Examples"){
    if (q7b_ui.contains("Examples")){
      return q7b_ui["Examples"];
    } else {
      q7b_ui["Examples"] = Q7B(new Q7B_id(typeid(QWidget).name(), new Examples(q7b_ui["Examples"], 0))); Examples::SingleTonInit(((Examples *) q7b_ui["Examples"]->ref)); return q7b_ui["Examples"];
    }
  }
  if (uiName == "FindReplaceFile"){
    if (q7b_ui.contains("FindReplaceFile")){
      return q7b_ui["FindReplaceFile"];
    } else {
      q7b_ui["FindReplaceFile"] = Q7B(new Q7B_id(typeid(QWidget).name(), new FindReplaceFile(q7b_ui["FindReplaceFile"], 0))); FindReplaceFile::SingleTonInit(((FindReplaceFile *) q7b_ui["FindReplaceFile"]->ref)); return q7b_ui["FindReplaceFile"];
    }
  }
  if (uiName == "ProjectProperties"){
    if (q7b_ui.contains("ProjectProperties")){
      return q7b_ui["ProjectProperties"];
    } else {
      q7b_ui["ProjectProperties"] = Q7B(new Q7B_id(typeid(QWidget).name(), new ProjectProperties(q7b_ui["ProjectProperties"], 0))); ProjectProperties::SingleTonInit(((ProjectProperties *) q7b_ui["ProjectProperties"]->ref)); return q7b_ui["ProjectProperties"];
    }
  }
  if (uiName == "Settings"){
    if (q7b_ui.contains("Settings")){
      return q7b_ui["Settings"];
    } else {
      q7b_ui["Settings"] = Q7B(new Q7B_id(typeid(QWidget).name(), new Settings(q7b_ui["Settings"], 0))); Settings::SingleTonInit(((Settings *) q7b_ui["Settings"]->ref)); return q7b_ui["Settings"];
    }
  }
  if (uiName == "About"){
    QWidget *w = Q7B_CREATE_FROM_UI_FILE(":/uifiles/About.ui", 0);
    if (w){ w->setAttribute(Qt::WA_DeleteOnClose); q7b_this = Q7B(new Q7B_id(typeid(QWidget).name(), w)); return q7b_this; }
    return Q7B_IDNIL();
  }
  return Q7B_IDNIL();
}

Q7B Q7B_GLOBAL_OPENTOOLWINDOW(QString uiName)
{
  Q7B q7b_this;
  if (uiName == "CodeView"){
    if (q7b_ui.contains("CodeView")){
      ((QWidget *) q7b_ui["CodeView"]->ref)->showNormal(); ((QWidget *) q7b_ui["CodeView"]->ref)->activateWindow(); return q7b_ui["CodeView"];
    } else {
      q7b_ui["CodeView"] = Q7B(new Q7B_id(typeid(QWidget).name(), new CodeView(q7b_ui["CodeView"], 0))); CodeView::SingleTonInit(((CodeView *) q7b_ui["CodeView"]->ref)); ((QWidget *) q7b_ui["CodeView"]->ref)->setWindowFlags(((Qt::WindowFlags) ((QWidget *) q7b_ui["CodeView"]->ref)->windowFlags()) | Qt::Tool); ((QWidget *) q7b_ui["CodeView"]->ref)->showNormal(); ((QWidget *) q7b_ui["CodeView"]->ref)->activateWindow(); return q7b_ui["CodeView"];
    }
  }
  if (uiName == "Evaluation"){
    if (q7b_ui.contains("Evaluation")){
      ((QWidget *) q7b_ui["Evaluation"]->ref)->showNormal(); ((QWidget *) q7b_ui["Evaluation"]->ref)->activateWindow(); return q7b_ui["Evaluation"];
    } else {
      q7b_ui["Evaluation"] = Q7B(new Q7B_id(typeid(QWidget).name(), new Evaluation(q7b_ui["Evaluation"], 0))); Evaluation::SingleTonInit(((Evaluation *) q7b_ui["Evaluation"]->ref)); ((QWidget *) q7b_ui["Evaluation"]->ref)->setWindowFlags(((Qt::WindowFlags) ((QWidget *) q7b_ui["Evaluation"]->ref)->windowFlags()) | Qt::Tool); ((QWidget *) q7b_ui["Evaluation"]->ref)->showNormal(); ((QWidget *) q7b_ui["Evaluation"]->ref)->activateWindow(); return q7b_ui["Evaluation"];
    }
  }
  if (uiName == "Examples"){
    if (q7b_ui.contains("Examples")){
      ((QWidget *) q7b_ui["Examples"]->ref)->showNormal(); ((QWidget *) q7b_ui["Examples"]->ref)->activateWindow(); return q7b_ui["Examples"];
    } else {
      q7b_ui["Examples"] = Q7B(new Q7B_id(typeid(QWidget).name(), new Examples(q7b_ui["Examples"], 0))); Examples::SingleTonInit(((Examples *) q7b_ui["Examples"]->ref)); ((QWidget *) q7b_ui["Examples"]->ref)->setWindowFlags(((Qt::WindowFlags) ((QWidget *) q7b_ui["Examples"]->ref)->windowFlags()) | Qt::Tool); ((QWidget *) q7b_ui["Examples"]->ref)->showNormal(); ((QWidget *) q7b_ui["Examples"]->ref)->activateWindow(); return q7b_ui["Examples"];
    }
  }
  if (uiName == "FindReplaceFile"){
    if (q7b_ui.contains("FindReplaceFile")){
      ((QWidget *) q7b_ui["FindReplaceFile"]->ref)->showNormal(); ((QWidget *) q7b_ui["FindReplaceFile"]->ref)->activateWindow(); return q7b_ui["FindReplaceFile"];
    } else {
      q7b_ui["FindReplaceFile"] = Q7B(new Q7B_id(typeid(QWidget).name(), new FindReplaceFile(q7b_ui["FindReplaceFile"], 0))); FindReplaceFile::SingleTonInit(((FindReplaceFile *) q7b_ui["FindReplaceFile"]->ref)); ((QWidget *) q7b_ui["FindReplaceFile"]->ref)->setWindowFlags(((Qt::WindowFlags) ((QWidget *) q7b_ui["FindReplaceFile"]->ref)->windowFlags()) | Qt::Tool); ((QWidget *) q7b_ui["FindReplaceFile"]->ref)->showNormal(); ((QWidget *) q7b_ui["FindReplaceFile"]->ref)->activateWindow(); return q7b_ui["FindReplaceFile"];
    }
  }
  if (uiName == "ProjectProperties"){
    if (q7b_ui.contains("ProjectProperties")){
      ((QWidget *) q7b_ui["ProjectProperties"]->ref)->showNormal(); ((QWidget *) q7b_ui["ProjectProperties"]->ref)->activateWindow(); return q7b_ui["ProjectProperties"];
    } else {
      q7b_ui["ProjectProperties"] = Q7B(new Q7B_id(typeid(QWidget).name(), new ProjectProperties(q7b_ui["ProjectProperties"], 0))); ProjectProperties::SingleTonInit(((ProjectProperties *) q7b_ui["ProjectProperties"]->ref)); ((QWidget *) q7b_ui["ProjectProperties"]->ref)->setWindowFlags(((Qt::WindowFlags) ((QWidget *) q7b_ui["ProjectProperties"]->ref)->windowFlags()) | Qt::Tool); ((QWidget *) q7b_ui["ProjectProperties"]->ref)->showNormal(); ((QWidget *) q7b_ui["ProjectProperties"]->ref)->activateWindow(); return q7b_ui["ProjectProperties"];
    }
  }
  if (uiName == "Settings"){
    if (q7b_ui.contains("Settings")){
      ((QWidget *) q7b_ui["Settings"]->ref)->showNormal(); ((QWidget *) q7b_ui["Settings"]->ref)->activateWindow(); return q7b_ui["Settings"];
    } else {
      q7b_ui["Settings"] = Q7B(new Q7B_id(typeid(QWidget).name(), new Settings(q7b_ui["Settings"], 0))); Settings::SingleTonInit(((Settings *) q7b_ui["Settings"]->ref)); ((QWidget *) q7b_ui["Settings"]->ref)->setWindowFlags(((Qt::WindowFlags) ((QWidget *) q7b_ui["Settings"]->ref)->windowFlags()) | Qt::Tool); ((QWidget *) q7b_ui["Settings"]->ref)->showNormal(); ((QWidget *) q7b_ui["Settings"]->ref)->activateWindow(); return q7b_ui["Settings"];
    }
  }
  if (uiName == "About"){
      QWidget *w = Q7B_CREATE_FROM_UI_FILE(":/uifiles/About.ui", 0);
      if (w){ w->setAttribute(Qt::WA_DeleteOnClose); w->setWindowFlags(((Qt::WindowFlags) w->windowFlags()) | Qt::Tool); w->showNormal(); w->activateWindow(); q7b_this = Q7B(new Q7B_id(typeid(QWidget).name(), w)); return q7b_this; }
      return Q7B_IDNIL();
  }
  return Q7B_IDNIL();
}

bool Q7B_GLOBAL_CLOSEWINDOW(QString uiName)
{
    if (q7b_ui.contains(uiName)){
      if (((QWidget *) q7b_ui[uiName]->ref)->close()){
         ((QWidget *) q7b_ui[uiName]->ref)->deleteLater();
         q7b_ui[uiName] = Q7B_IDNIL();
         q7b_ui.remove(uiName);
      }
    }
  return false;
}

Q7B Q7B_ID(Application * o)
{
  Q7B q (new Q7B_id(typeid(Application).name(), o));
  return q;
}

Q7B Q7B__APPLICATION(Q7B o)
{
  Application *test = qobject_cast<Application *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'Application' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}

Q7B Q7B_ID(CodeView * o)
{
  Q7B q (new Q7B_id(typeid(CodeView).name(), o));
  return q;
}

Q7B Q7B__CODEVIEW(Q7B o)
{
  CodeView *test = qobject_cast<CodeView *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'CodeView' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}

Q7B Q7B_ID(Declare * o)
{
  Q7B q (new Q7B_id(typeid(Declare).name(), o));
  return q;
}

Q7B Q7B__DECLARE(Q7B o)
{
  Declare *test = qobject_cast<Declare *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'Declare' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}

Q7B Q7B_ID(Evaluation * o)
{
  Q7B q (new Q7B_id(typeid(Evaluation).name(), o));
  return q;
}

Q7B Q7B__EVALUATION(Q7B o)
{
  Evaluation *test = qobject_cast<Evaluation *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'Evaluation' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}

Q7B Q7B_ID(Examples * o)
{
  Q7B q (new Q7B_id(typeid(Examples).name(), o));
  return q;
}

Q7B Q7B__EXAMPLES(Q7B o)
{
  Examples *test = qobject_cast<Examples *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'Examples' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}

Q7B Q7B_ID(FindReplaceFile * o)
{
  Q7B q (new Q7B_id(typeid(FindReplaceFile).name(), o));
  return q;
}

Q7B Q7B__FINDREPLACEFILE(Q7B o)
{
  FindReplaceFile *test = qobject_cast<FindReplaceFile *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'FindReplaceFile' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}

Q7B Q7B_ID(Global * o)
{
  Q7B q (new Q7B_id(typeid(Global).name(), o));
  return q;
}

Q7B Q7B__GLOBAL(Q7B o)
{
  Global *test = qobject_cast<Global *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'Global' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}

Q7B Q7B_ID(MainWindow * o)
{
  Q7B q (new Q7B_id(typeid(MainWindow).name(), o));
  return q;
}

Q7B Q7B__MAINWINDOW(Q7B o)
{
  MainWindow *test = qobject_cast<MainWindow *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'MainWindow' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}

Q7B Q7B_ID(Project * o)
{
  Q7B q (new Q7B_id(typeid(Project).name(), o));
  return q;
}

Q7B Q7B__PROJECT(Q7B o)
{
  Project *test = qobject_cast<Project *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'Project' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}

Q7B Q7B_ID(ProjectProperties * o)
{
  Q7B q (new Q7B_id(typeid(ProjectProperties).name(), o));
  return q;
}

Q7B Q7B__PROJECTPROPERTIES(Q7B o)
{
  ProjectProperties *test = qobject_cast<ProjectProperties *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'ProjectProperties' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}

Q7B Q7B_ID(Settings * o)
{
  Q7B q (new Q7B_id(typeid(Settings).name(), o));
  return q;
}

Q7B Q7B__SETTINGS(Q7B o)
{
  Settings *test = qobject_cast<Settings *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'Settings' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}

Q7B Q7B_ID(myClass * o)
{
  Q7B q (new Q7B_id(typeid(myClass).name(), o));
  return q;
}

Q7B Q7B__MYCLASS(Q7B o)
{
  myClass *test = qobject_cast<myClass *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'myClass' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}

Q7B Q7B_ID(myParser * o)
{
  Q7B q (new Q7B_id(typeid(myParser).name(), o));
  return q;
}

Q7B Q7B__MYPARSER(Q7B o)
{
  myParser *test = qobject_cast<myParser *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'myParser' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}

Q7B Q7B_ID(Q7BCodeView * o)
{
  Q7B q (new Q7B_id(typeid(Q7BCodeView).name(), o));
  return q;
}

Q7B Q7B__Q7BCODEVIEW(Q7B o)
{
  Q7BCodeView *test = qobject_cast<Q7BCodeView *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'Q7BCodeView' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}
Q7BCodeView *Q7B_Q7BCodeView_Class(Q7B o){ return (Q7BCodeView *) (o->ref); }

Q7B Q7B_ID(Q7BCompiler * o)
{
  Q7B q (new Q7B_id(typeid(Q7BCompiler).name(), o));
  return q;
}

Q7B Q7B__Q7BCOMPILER(Q7B o)
{
  Q7BCompiler *test = qobject_cast<Q7BCompiler *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'Q7BCompiler' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}
Q7BCompiler *Q7B_Q7BCompiler_Class(Q7B o){ return (Q7BCompiler *) (o->ref); }

Q7B Q7B_ID(Q7BFormDesigner * o)
{
  Q7B q (new Q7B_id(typeid(Q7BFormDesigner).name(), o));
  return q;
}

Q7B Q7B__Q7BFORMDESIGNER(Q7B o)
{
  Q7BFormDesigner *test = qobject_cast<Q7BFormDesigner *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'Q7BFormDesigner' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}
Q7BFormDesigner *Q7B_Q7BFormDesigner_Class(Q7B o){ return (Q7BFormDesigner *) (o->ref); }

Q7B Q7B_ID(Q7BProjectWindow * o)
{
  Q7B q (new Q7B_id(typeid(Q7BProjectWindow).name(), o));
  return q;
}

Q7B Q7B__Q7BPROJECTWINDOW(Q7B o)
{
  Q7BProjectWindow *test = qobject_cast<Q7BProjectWindow *>((QObject *) o->ref);
  if (test) return o;
  Q7B_CASTEXCEPTION("'Q7BProjectWindow' for assignment expected, tried '" + QString(o->type) + "'");
  return Q7B_idnil;
}
Q7BProjectWindow *Q7B_Q7BProjectWindow_Class(Q7B o){ return (Q7BProjectWindow *) (o->ref); }

Q7B VM_Q7B_Call(QString sClass, QString sProcedure, void *theObject, QList<Q7B> args)
{
return Q7B_IDNULL();
}

Q7B VM_Q7B_ClassSingleTone(QString sClass)
{
return Q7B_IDNULL();
}
