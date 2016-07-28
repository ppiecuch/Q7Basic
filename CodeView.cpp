
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


#include "CodeView.h"

#include "Declare.h"
#include "Global.h"
#include "Q7BCodeView.h"
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

CodeView *Q7B_CodeView_Class(Q7B o){ return CodeView::ClassPointer(o); }
Q7B Q7B_CodeView_Object(){ return CodeView::SingleTonObject(); }
extern CodeView *Q7B_CodeView_Class(Q7B o);
extern Q7B Q7B_CodeView_Object();
extern CodeView *Q7B_CodeView_Class(Q7B o);
extern Q7B Q7B_CodeView_Object();
extern CodeView *Q7B_CodeView_Class(Q7B o);
extern Q7B Q7B_CodeView_Object();
extern CodeView *Q7B_CodeView_Class(Q7B o);
extern Q7B Q7B_CodeView_Object();
CodeView *q7b_CodeView_Object = 0;
Q7B q7b_CodeView_Object_Q7B;
bool q7b_CodeView_Object_Finalized = false;
bool q7b_CodeView_Object_Init = false;

#include "ui_CodeView.h"

CodeView::CodeView(Q7B _q7b_this, QWidget *parent)
 : QWidget(parent), ui(new Ui::CodeView)
{
  q7b_this = _q7b_this;
  ui->setupUi(this);
}

CodeView::CodeView(QWidget *parent)
 : QWidget(parent), ui(new Ui::CodeView)
{
  ui->setupUi(this);
  Init();
}

CodeView::~CodeView()
{
  if (this == q7b_CodeView_Object){ q7b_CodeView_Object = 0; q7b_CodeView_Object_Q7B = Q7B_IDNIL(); }
  delete ui;
  q7b_this->ref = 0;
}

void CodeView::Init()
{
  if (q7b_CodeView_Object_Init){ q7b_CodeView_Object_Init = false; q7b_CodeView_Object_Q7B = q7b_this = Q7B(new Q7B_id(typeid(CodeView).name(), this)); } else q7b_this = Q7B(new Q7B_id(typeid(CodeView).name(), this)); 
  setObjectName("CodeView");
  Q7B q;
  QObject *o;
  o = findChild<QObject *>("Q7BCodeBox"); if (o){ q = Q7B(new Q7B_id(typeid(Q7BCodeView).name(), o, false)); Q7BCodeBox = q; } else { Q7BCodeBox = Q7B_IDNULL(); }
  o = findChild<QObject *>("cbCondition"); if (o){ q = Q7B(new Q7B_id(typeid(QComboBox).name(), o, false)); cbCondition = q; } else { cbCondition = Q7B_IDNULL(); }
  o = findChild<QObject *>("cbDefinition"); if (o){ q = Q7B(new Q7B_id(typeid(QComboBox).name(), o, false)); cbDefinition = q; } else { cbDefinition = Q7B_IDNULL(); }
  o = findChild<QObject *>("cbLoop"); if (o){ q = Q7B(new Q7B_id(typeid(QComboBox).name(), o, false)); cbLoop = q; } else { cbLoop = Q7B_IDNULL(); }
  o = findChild<QObject *>("lInsertMessage"); if (o){ q = Q7B(new Q7B_id(typeid(QLabel).name(), o, false)); lInsertMessage = q; } else { lInsertMessage = Q7B_IDNULL(); }
  o = findChild<QObject *>("lLine"); if (o){ q = Q7B(new Q7B_id(typeid(QLabel).name(), o, false)); lLine = q; } else { lLine = Q7B_IDNULL(); }
  o = findChild<QObject *>("tbActions"); if (o){ q = Q7B(new Q7B_id(typeid(QToolButton).name(), o, false)); tbActions = q; } else { tbActions = Q7B_IDNULL(); }
  o = findChild<QObject *>("tbComment"); if (o){ q = Q7B(new Q7B_id(typeid(QToolButton).name(), o, false)); tbComment = q; } else { tbComment = Q7B_IDNULL(); }
  o = findChild<QObject *>("tbConditions"); if (o){ q = Q7B(new Q7B_id(typeid(QToolButton).name(), o, false)); tbConditions = q; } else { tbConditions = Q7B_IDNULL(); }
  o = findChild<QObject *>("tbDefinitions"); if (o){ q = Q7B(new Q7B_id(typeid(QToolButton).name(), o, false)); tbDefinitions = q; } else { tbDefinitions = Q7B_IDNULL(); }
  o = findChild<QObject *>("tbEvents"); if (o){ q = Q7B(new Q7B_id(typeid(QToolButton).name(), o, false)); tbEvents = q; } else { tbEvents = Q7B_IDNULL(); }
  o = findChild<QObject *>("tbLoops"); if (o){ q = Q7B(new Q7B_id(typeid(QToolButton).name(), o, false)); tbLoops = q; } else { tbLoops = Q7B_IDNULL(); }
  o = findChild<QObject *>("tbOutlets"); if (o){ q = Q7B(new Q7B_id(typeid(QToolButton).name(), o, false)); tbOutlets = q; } else { tbOutlets = Q7B_IDNULL(); }
  o = findChild<QObject *>("tbShiftLeft"); if (o){ q = Q7B(new Q7B_id(typeid(QToolButton).name(), o, false)); tbShiftLeft = q; } else { tbShiftLeft = Q7B_IDNULL(); }
  o = findChild<QObject *>("tbShiftRight"); if (o){ q = Q7B(new Q7B_id(typeid(QToolButton).name(), o, false)); tbShiftRight = q; } else { tbShiftRight = Q7B_IDNULL(); }
  o = findChild<QObject *>("tbSignals"); if (o){ q = Q7B(new Q7B_id(typeid(QToolButton).name(), o, false)); tbSignals = q; } else { tbSignals = Q7B_IDNULL(); }
  o = findChild<QObject *>("tbUncomment"); if (o){ q = Q7B(new Q7B_id(typeid(QToolButton).name(), o, false)); tbUncomment = q; } else { tbUncomment = Q7B_IDNULL(); }
  Q7B_ASSIGNMENT(&gr, &(Q7B_QBUTTONGROUP_INIT(this, "gr")));
  Q7B_ASSIGNMENT(&mActions, &(Q7B_QMENU_INIT(this, "mActions")));
  Q7B_ASSIGNMENT(&bLoading, &(Q7B_ID(false)));
  Q7B_ASSIGNMENT(&nChanged, &(Q7B_ID((qint64) 0)));
  Q7B_ASSIGNMENT(&toSave, &(Q7B_IDNULL()));
  Q7B_ASSIGNMENT(&mLoops, &(Q7B_QMENU_INIT(this, "mLoops")));
  Q7B_ASSIGNMENT(&mConditions, &(Q7B_QMENU_INIT(this, "mConditions")));
  Q7B_ASSIGNMENT(&mDefinitions, &(Q7B_QMENU_INIT(this, "mDefinitions")));
  Q7B_ASSIGNMENT(&mOutlets, &(Q7B_QMENU_INIT(this, "mOutlets")));
  Q7B_ASSIGNMENT(&mSignals, &(Q7B_QMENU_INIT(this, "mSignals")));
  Q7B_ASSIGNMENT(&mSignals2, &(Q7B_QMENU_INIT(this, "mSignals2")));
  Q7B_ASSIGNMENT(&sControlName, &(Q7B_ID("")));
  Q7B_ASSIGNMENT(&mEvents, &(Q7B_QMENU_INIT(this, "mEvents")));
                                                                  Q7BS("CodeView.QWidget.q7b", "Init", "17", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "Init", "17", "1");
Q7B tabWidget; Q7B_ASSIGNMENT(&tabWidget, &(Q7B__QTABWIDGET(Q7B_QWIDGET_WIDGET(q7b_this, Q7B_ID("tabWidget")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "Init", "19", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "Init", "20", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_QTABWIDGET_COUNT(tabWidget), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "Init", "20", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "Init", "21", "1");
Q7B o; Q7B_ASSIGNMENT(&o, &(Q7B__QOBJECT(Q7B_QTABWIDGET_WIDGET(tabWidget, i))));
                                                                  Q7BS("CodeView.QWidget.q7b", "Init", "22", "1");
Q7B ll; Q7B_ASSIGNMENT(&ll, &(Q7B__LIST(Q7B_QOBJECT_CHILDREN(o))));
                                                                  Q7BS("CodeView.QWidget.q7b", "Init", "24", "1");
Q7B ii; Q7B_ASSIGNMENT(&ii, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "Init", "25", "1");
Q7B_ASSIGNMENT(&ii, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(ii, Q7B_SUB(Q7B_LIST_LENGTH(ll), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "Init", "25", "1")), Q7B_ASSIGNMENT(&ii, &Q7B__INTEGER(Q7B_ADD(ii, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "Init", "26", "1");
Q7B_QBUTTONGROUP_ADDBUTTON(gr, Q7B_LIST_OBJECT(ll, ii));

}

}
                                                                  Q7BS("CodeView.QWidget.q7b", "Init", "30", "2");
}

void CodeView::Q7B_CloseEvent(Q7B e)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "CloseEvent", "254", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "CloseEvent", "255", "1");

if (Q7B_CBOOL(Q7B_GREATER(nChanged, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "CloseEvent", "256", "1");
SaveIfChanged();

}
                                                                  Q7BS("CodeView.QWidget.q7b", "CloseEvent", "259", "2");
  if (((QCloseEvent *) (e->ref))->isAccepted() && this == q7b_CodeView_Object){ q7b_CodeView_Object = 0; q7b_CodeView_Object_Q7B = Q7B_IDNIL(); }
}

Q7B CodeView::GetActions()
{
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "85", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "86", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "87", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "88", "1");
Q7B s2; Q7B_ASSIGNMENT(&s2, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_FILEPATH(s), Q7B_ID("/")), Q7B_FILEBASENAME(s)), Q7B_ID(".ui")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "91", "1");
Q7B d; Q7B_ASSIGNMENT(&d, &(Q7B__DICTIONARY(Q7B_Dictionary::init())));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "93", "1");

if (Q7B_CBOOL(Q7B_FILE(s2))){
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "94", "1");
Q7B_QMENU_CLEAR(mActions);
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "96", "1");
Q7B k; Q7B_ASSIGNMENT(&k, &(Q7B__STRING(Q7B_READSTRING(s2, Q7B_ID("")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "98", "1");
Q7B sName; Q7B_ASSIGNMENT(&sName, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "99", "1");
Q7B sType; Q7B_ASSIGNMENT(&sType, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "101", "1");
Q7B n; Q7B_ASSIGNMENT(&n, &(Q7B__INTEGER(Q7B_INSTR(k, Q7B_ID("<action name=\""), Q7B_ID((qint64) 0), Q7B_ID(true)))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "103", "1");
while (Q7B_CBOOL(Q7B_GREATEREQUAL(n, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "104", "1");
Q7B_ASSIGNMENT(&n, &Q7B__INTEGER(Q7B_ADD(n, Q7B_ID((qint64) 14))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "105", "1");
Q7B n2; Q7B_ASSIGNMENT(&n2, &(Q7B__INTEGER(Q7B_INSTR(k, Q7B_ID("\""), n, Q7B_ID(true)))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "106", "1");

if (Q7B_CBOOL(Q7B_GREATEREQUAL(n2, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "107", "1");
Q7B_ASSIGNMENT(&sType, &Q7B__STRING(Q7B_MID(k, n, Q7B_SUB(n2, n))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "109", "1");

if (Q7B_CBOOL(Q7B_UNEQUAL(sType, Q7B_ID("separator")))){
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "110", "1");
Q7B_DICTIONARY_SETOBJECT(d, sType, sType);

}

}
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "114", "1");
Q7B_ASSIGNMENT(&n, &Q7B__INTEGER(Q7B_INSTR(k, Q7B_ID("<action name=\""), n, Q7B_ID(true))));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "117", "1");
return Q7B_ID(d);

} else {
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "120", "1");
Q7B__MSGBOX(Q7B_ID("There is no ui file for the current code available or there are no outlets in the ui file for the current code file."));

}
return Q7B_ID(Q7B_IDNULL());
                                                                  Q7BS("CodeView.QWidget.q7b", "GetActions", "123", "2");
}

Q7B CodeView::GetEvents()
{
                                                                  Q7BS("CodeView.QWidget.q7b", "GetEvents", "863", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "GetEvents", "865", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetEvents", "866", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetEvents", "868", "1");
Q7B_QMENU_CLEAR(mEvents);
                                                                  Q7BS("CodeView.QWidget.q7b", "GetEvents", "870", "1");
Q7B d; Q7B_ASSIGNMENT(&d, &(Q7B__LIST(Q7B_ID(Q7B_List::init()))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetEvents", "872", "1");
Q7B sType; Q7B_ASSIGNMENT(&sType, &(Q7B__STRING(Q7B_FILEBASENAME(Q7B_FILEEXTENSION(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetEvents", "878", "1");

if (Q7B_CBOOL(Q7B_DICTIONARY_CONTAINS(Q7B_Global_Class(Q7B_Global_Object())->Events, sType))){
                                                                  Q7BS("CodeView.QWidget.q7b", "GetEvents", "880", "1");
Q7B aa; Q7B_ASSIGNMENT(&aa, &(Q7B__LIST(Q7B_DICTIONARY_OBJECT(Q7B_Global_Class(Q7B_Global_Object())->Events, sType))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetEvents", "882", "1");
return Q7B_ID(aa);

}
                                                                  Q7BS("CodeView.QWidget.q7b", "GetEvents", "903", "1");
return Q7B_ID(d);
return Q7B_ID(Q7B_IDNULL());
                                                                  Q7BS("CodeView.QWidget.q7b", "GetEvents", "905", "2");
}

Q7B CodeView::GetOutlets()
{
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "541", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "542", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "543", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "544", "1");
Q7B s2; Q7B_ASSIGNMENT(&s2, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_FILEPATH(s), Q7B_ID("/")), Q7B_FILEBASENAME(s)), Q7B_ID(".ui")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "546", "1");
Q7B d; Q7B_ASSIGNMENT(&d, &(Q7B__DICTIONARY(Q7B_Dictionary::init())));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "548", "1");

if (Q7B_CBOOL(Q7B_FILE(s2))){
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "549", "1");
Q7B_QMENU_CLEAR(mOutlets);
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "551", "1");
Q7B k; Q7B_ASSIGNMENT(&k, &(Q7B__STRING(Q7B_READSTRING(s2, Q7B_ID("")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "554", "1");
Q7B sName; Q7B_ASSIGNMENT(&sName, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "555", "1");
Q7B sType; Q7B_ASSIGNMENT(&sType, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "557", "1");
Q7B n; Q7B_ASSIGNMENT(&n, &(Q7B__INTEGER(Q7B_INSTR(k, Q7B_ID("<widget class=\""), Q7B_ID((qint64) 0), Q7B_ID(true)))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "559", "1");
while (Q7B_CBOOL(Q7B_GREATEREQUAL(n, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "560", "1");
Q7B_ASSIGNMENT(&n, &Q7B__INTEGER(Q7B_ADD(n, Q7B_ID((qint64) 15))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "561", "1");
Q7B n2; Q7B_ASSIGNMENT(&n2, &(Q7B__INTEGER(Q7B_INSTR(k, Q7B_ID("\""), n, Q7B_ID(true)))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "562", "1");

if (Q7B_CBOOL(Q7B_GREATEREQUAL(n2, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "563", "1");
Q7B_ASSIGNMENT(&sType, &Q7B__STRING(Q7B_MID(k, n, Q7B_SUB(n2, n))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "564", "1");
Q7B_ASSIGNMENT(&n, &Q7B__INTEGER(Q7B_INSTR(k, Q7B_ID("name=\""), n, Q7B_ID(true))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "565", "1");
Q7B_ASSIGNMENT(&n, &Q7B__INTEGER(Q7B_ADD(n, Q7B_ID((qint64) 6))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "566", "1");
Q7B_ASSIGNMENT(&n2, &Q7B__INTEGER(Q7B_INSTR(k, Q7B_ID("\""), n, Q7B_ID(true))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "567", "1");

if (Q7B_CBOOL(Q7B_GREATEREQUAL(n2, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "568", "1");
Q7B_ASSIGNMENT(&sName, &Q7B__STRING(Q7B_MID(k, n, Q7B_SUB(n2, n))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "570", "1");
Q7B_DICTIONARY_SETOBJECT(d, Q7B_ADD(Q7B_ADD(sName, Q7B_ID(" As ")), sType), Q7B_ADD(Q7B_ADD(sName, Q7B_ID(" As ")), sType));

}

}
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "574", "1");
Q7B_ASSIGNMENT(&n, &Q7B__INTEGER(Q7B_INSTR(k, Q7B_ID("<widget class=\""), n, Q7B_ID(true))));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "577", "1");
return Q7B_ID(d);

} else {
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "579", "1");
Q7B__MSGBOX(Q7B_ID("There is no ui file for the current code available or there are no outlets in the ui file for the current code file."));

}
return Q7B_ID(Q7B_IDNULL());
                                                                  Q7BS("CodeView.QWidget.q7b", "GetOutlets", "582", "2");
}

Q7B CodeView::GetSignals()
{
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "648", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "649", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "650", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "651", "1");
Q7B s2; Q7B_ASSIGNMENT(&s2, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_FILEPATH(s), Q7B_ID("/")), Q7B_FILEBASENAME(s)), Q7B_ID(".ui")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "655", "1");
Q7B d; Q7B_ASSIGNMENT(&d, &(Q7B__DICTIONARY(Q7B_Dictionary::init())));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "657", "1");

if (Q7B_CBOOL(Q7B_FILE(s2))){
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "658", "1");
Q7B_QMENU_CLEAR(mSignals);
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "660", "1");
Q7B k; Q7B_ASSIGNMENT(&k, &(Q7B__STRING(Q7B_READSTRING(s2, Q7B_ID("")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "663", "1");
Q7B sName; Q7B_ASSIGNMENT(&sName, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "664", "1");
Q7B sType; Q7B_ASSIGNMENT(&sType, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "666", "1");
Q7B n; Q7B_ASSIGNMENT(&n, &(Q7B__INTEGER(Q7B_INSTR(k, Q7B_ID("<widget class=\""), Q7B_ID((qint64) 0), Q7B_ID(true)))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "668", "1");
while (Q7B_CBOOL(Q7B_GREATEREQUAL(n, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "670", "1");
Q7B_ASSIGNMENT(&n, &Q7B__INTEGER(Q7B_ADD(n, Q7B_ID((qint64) 15))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "671", "1");
Q7B n2; Q7B_ASSIGNMENT(&n2, &(Q7B__INTEGER(Q7B_INSTR(k, Q7B_ID("\""), n, Q7B_ID(true)))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "672", "1");

if (Q7B_CBOOL(Q7B_GREATEREQUAL(n2, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "673", "1");
Q7B_ASSIGNMENT(&sType, &Q7B__STRING(Q7B_MID(k, n, Q7B_SUB(n2, n))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "674", "1");
Q7B_ASSIGNMENT(&n, &Q7B__INTEGER(Q7B_INSTR(k, Q7B_ID("name=\""), n, Q7B_ID(true))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "675", "1");
Q7B_ASSIGNMENT(&n, &Q7B__INTEGER(Q7B_ADD(n, Q7B_ID((qint64) 6))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "676", "1");
Q7B_ASSIGNMENT(&n2, &Q7B__INTEGER(Q7B_INSTR(k, Q7B_ID("\""), n, Q7B_ID(true))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "677", "1");

if (Q7B_CBOOL(Q7B_GREATEREQUAL(n2, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "678", "1");
Q7B_ASSIGNMENT(&sName, &Q7B__STRING(Q7B_MID(k, n, Q7B_SUB(n2, n))));
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "680", "1");
Q7B_DICTIONARY_SETOBJECT(d, Q7B_ADD(Q7B_ADD(sName, Q7B_ID(" As ")), sType), Q7B_ADD(Q7B_ADD(sName, Q7B_ID(" As ")), sType));

}

}
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "684", "1");
Q7B_ASSIGNMENT(&n, &Q7B__INTEGER(Q7B_INSTR(k, Q7B_ID("<widget class=\""), n, Q7B_ID(true))));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "687", "1");
return Q7B_ID(d);

} else {
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "691", "1");
Q7B__MSGBOX(Q7B_ID("There is no ui file for the current code available or there are no outlets in the ui file for the current code file."));

}
return Q7B_ID(Q7B_IDNULL());
                                                                  Q7BS("CodeView.QWidget.q7b", "GetSignals", "694", "2");
}

CodeView::CodeView(Q7B _q7b_this)
{
  ui->setupUi(this);
}

void CodeView::InsertCode(Q7B s, Q7B bGoto)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "398", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "400", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "401", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "403", "1");
Q7B te; Q7B_ASSIGNMENT(&te, &(Q7B__QPLAINTEXTEDIT(Q7B_ID("QPlainTextEdit", Q7B_connectSlotsByNameForGivenObjectAndReturnIt(this, new QPlainTextEdit(), "te")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "404", "1");
Q7B_ASSIGNMENT(&te, &Q7B__QPLAINTEXTEDIT(Q7B_ID(Q7B_Q7BCodeView_Class(cb)->getQPlainTextEdit())));
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "408", "1");
Q7B t; Q7B_ASSIGNMENT(&t, &(Q7B__STRING(Q7B_CONCAT(Q7B_ID("\n"), Q7B_QPLAINTEXTEDIT_PLAINTEXT(te)))));
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "410", "1");
Q7B l; Q7B_ASSIGNMENT(&l, &(Q7B__STRING(s)));
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "411", "1");
Q7B n; Q7B_ASSIGNMENT(&n, &(Q7B__INTEGER(Q7B_INSTR(s, Q7B_ID("\n"), Q7B_ID((qint64) 0), Q7B_ID(true)))));
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "412", "1");

if (Q7B_CBOOL(Q7B_GREATER(n, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "413", "1");
Q7B_ASSIGNMENT(&l, &Q7B__STRING(Q7B_LEFT(l, n)));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "416", "1");

if (Q7B_CBOOL(Q7B_STARTSWITH(l, Q7B_ID("\n"), Q7B_ID(true)))){

} else {
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "418", "1");
Q7B_ASSIGNMENT(&l, &Q7B__STRING(Q7B_CONCAT(Q7B_ID("\n"), l)));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "423", "1");

if (Q7B_CBOOL(Q7B_CONTAINS(t, l, Q7B_ID(true)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "425", "1");

if (Q7B_CBOOL(bGoto)){
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "426", "1");
Q7B_ASSIGNMENT(&n, &Q7B__INTEGER(Q7B_INSTR(t, l, Q7B_ID((qint64) 0), Q7B_ID(true))));
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "427", "1");
Q7B_ASSIGNMENT(&n, &Q7B__INTEGER(Q7B_COUNT(Q7B_LEFT(t, n), Q7B_ID("\n"), Q7B_ID(true))));
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "428", "1");
Q7B_Q7BCodeView_Class(cb)->GotoLine(Q7B_CQINT64(Q7B_ADD(n, Q7B_ID((qint64) 1))));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "432", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "439", "1");

if (Q7B_CBOOL(bGoto)){
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "439", "1");
Q7B_Q7BCodeView_Class(cb)->GotoLine(Q7B_CQINT64(Q7B_ID((qint64) 1)));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "443", "1");
Q7B_QPLAINTEXTEDIT_INSERTPLAINTEXT(te, s);
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCode", "444", "2");
}

void CodeView::InsertCodeAtCurrentPosition(Q7B s)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCodeAtCurrentPosition", "385", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCodeAtCurrentPosition", "385", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCodeAtCurrentPosition", "386", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCodeAtCurrentPosition", "388", "1");
Q7B te; Q7B_ASSIGNMENT(&te, &(Q7B__QPLAINTEXTEDIT(Q7B_ID("QPlainTextEdit", Q7B_connectSlotsByNameForGivenObjectAndReturnIt(this, new QPlainTextEdit(), "te")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCodeAtCurrentPosition", "389", "1");
Q7B_ASSIGNMENT(&te, &Q7B__QPLAINTEXTEDIT(Q7B_ID(Q7B_Q7BCodeView_Class(cb)->getQPlainTextEdit())));
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCodeAtCurrentPosition", "394", "1");
Q7B_QPLAINTEXTEDIT_INSERTPLAINTEXT(te, s);
                                                                  Q7BS("CodeView.QWidget.q7b", "InsertCodeAtCurrentPosition", "395", "2");
}

void CodeView::Q7B_LastPositionTimer()
{
                                                                  Q7BS("CodeView.QWidget.q7b", "LastPositionTimer", "280", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "LastPositionTimer", "281", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->bBlockLastPosition, Q7B_ID(true)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "LastPositionTimer", "281", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "LastPositionTimer", "284", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "LastPositionTimer", "285", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_CLASSNAME(w), Q7B_ID("Q7BCodeView")))){
                                                                  Q7BS("CodeView.QWidget.q7b", "LastPositionTimer", "286", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "LastPositionTimer", "288", "1");
Q7B_ASSIGNMENT(&Q7B_MainWindow_Class(Q7B_MainWindow_Object())->sLastPositionFile, &Q7B__STRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "LastPositionTimer", "289", "1");
Q7B_ASSIGNMENT(&Q7B_MainWindow_Class(Q7B_MainWindow_Object())->nLastPositionLine, &Q7B__INTEGER(Q7B_ID(Q7B_Q7BCodeView_Class(cb)->getCurrentLine())));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "LastPositionTimer", "292", "2");
}

Q7B CodeView::Load(Q7B sFileName)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "186", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "187", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "188", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "190", "1");
Q7B_Q7BCodeView_Class(cb)->setCPPKeywords(Q7B_CQSTRINGLIST(Q7B_Global_Class(Q7B_Global_Object())->CPPKeywords));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "191", "1");
Q7B_Q7BCodeView_Class(cb)->setKeywords(Q7B_CQSTRINGLIST(Q7B_Global_Class(Q7B_Global_Object())->Keywords));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "192", "1");
Q7B_Q7BCodeView_Class(cb)->setConsts(Q7B_CQSTRINGLIST(Q7B_Global_Class(Q7B_Global_Object())->Consts));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "193", "1");
Q7B_Q7BCodeView_Class(cb)->setTypes(Q7B_CQSTRINGLIST(Q7B_Global_Class(Q7B_Global_Object())->Types));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "194", "1");
Q7B_Q7BCodeView_Class(cb)->setFunctions(Q7B_CQSTRINGLIST(Q7B_Global_Class(Q7B_Global_Object())->Functions2));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "195", "1");
Q7B_Q7BCodeView_Class(cb)->setClasses(Q7B_CQSTRINGLIST(Q7B_Global_Class(Q7B_Global_Object())->Classes));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "196", "1");
Q7B_Q7BCodeView_Class(cb)->setObjects(Q7B_CQSTRINGLIST(Q7B_Global_Class(Q7B_Global_Object())->Objects));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "198", "1");
Q7B_Q7BCodeView_Class(cb)->setFontName(Q7B_CQSTRING(Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_ID("FontName"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "199", "1");
Q7B_Q7BCodeView_Class(cb)->setShowLineNumbers(Q7B_CBOOL(Q7B_CBOOL(Q7B_PREFERENCES_EXISTS(Q7B_Preferences_Object(), Q7B_ID("ShowLineNumbers"))) ? Q7B_PREFERENCES_BOOLEAN(Q7B_Preferences_Object(), Q7B_ID("ShowLineNumbers")) : Q7B_ID(true)));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "200", "1");
Q7B_Q7BCodeView_Class(cb)->setShowLineSeparators(Q7B_CBOOL(Q7B_CBOOL(Q7B_PREFERENCES_EXISTS(Q7B_Preferences_Object(), Q7B_ID("Showlineseparators"))) ? Q7B_PREFERENCES_BOOLEAN(Q7B_Preferences_Object(), Q7B_ID("Showlineseparators")) : Q7B_ID(true)));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "201", "1");
Q7B_Q7BCodeView_Class(cb)->setDefaultSyntaxHighlighting(Q7B_CBOOL(Q7B_CBOOL(Q7B_PREFERENCES_EXISTS(Q7B_Preferences_Object(), Q7B_ID("DefaultSyntaxHighlighting"))) ? Q7B_PREFERENCES_BOOLEAN(Q7B_Preferences_Object(), Q7B_ID("DefaultSyntaxHighlighting")) : Q7B_ID(true)));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "202", "1");
Q7B_Q7BCodeView_Class(cb)->setSyntaxHighlightingColors(Q7B_CQSTRINGLIST(Q7B_PREFERENCES_QSTRINGLIST(Q7B_Preferences_Object(), Q7B_ID("SyntaxHighlightingColors"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "204", "1");
Q7B_Q7BCodeView_Class(cb)->setFontSize(Q7B_CQINT64(Q7B_PREFERENCES_INTEGER(Q7B_Preferences_Object(), Q7B_ID("FontSize"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "206", "1");
Q7B_ASSIGNMENT(&bLoading, &Q7B__BOOLEAN(Q7B_ID(true)));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "208", "1");

if (Q7B_CBOOL(Q7B_ID(Q7B_Q7BCodeView_Class(cb)->Load(Q7B_CQSTRING(sFileName))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "210", "1");
Q7B_QWIDGET_WINDOWTITLE(w, Q7B_FILENAME(Q7B_FILENAME(sFileName)));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "211", "1");
Q7B_PROPERTY(w, Q7B_ID("PathFileName"), sFileName);
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "213", "1");
Q7B_ASSIGNMENT(&bLoading, &Q7B__BOOLEAN(Q7B_ID(false)));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "214", "1");
return Q7B_ID(Q7B_ID(true));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "216", "1");
Q7B_ASSIGNMENT(&bLoading, &Q7B__BOOLEAN(Q7B_ID(false)));
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "218", "1");
return Q7B_ID(Q7B_ID(false));
return Q7B_ID(Q7B_IDNULL());
                                                                  Q7BS("CodeView.QWidget.q7b", "Load", "219", "2");
}

Q7B CodeView::Save()
{
                                                                  Q7BS("CodeView.QWidget.q7b", "Save", "226", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "Save", "227", "1");

if (Q7B_CBOOL(Q7B_GREATER(nChanged, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "Save", "228", "1");
Q7B_ASSIGNMENT(&nChanged, &Q7B__INTEGER(Q7B_SUB(nChanged, Q7B_ID((qint64) 1))));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "Save", "232", "1");

if (Q7B_CBOOL(Q7B_ID(Q7B_Q7BCodeView_Class(toSave)->Save()))){
                                                                  Q7BS("CodeView.QWidget.q7b", "Save", "233", "1");
return Q7B_ID(Q7B_ID(true));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "Save", "236", "1");
return Q7B_ID(Q7B_ID(false));
return Q7B_ID(Q7B_IDNULL());
                                                                  Q7BS("CodeView.QWidget.q7b", "Save", "237", "2");
}

Q7B CodeView::SaveIfChanged()
{
                                                                  Q7BS("CodeView.QWidget.q7b", "SaveIfChanged", "240", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "SaveIfChanged", "241", "1");

if (Q7B_CBOOL(Q7B_GREATER(nChanged, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "SaveIfChanged", "242", "1");
Q7B_ASSIGNMENT(&nChanged, &Q7B__INTEGER(Q7B_SUB(nChanged, Q7B_ID((qint64) 1))));
                                                                  Q7BS("CodeView.QWidget.q7b", "SaveIfChanged", "243", "1");

if (Q7B_CBOOL(Q7B_ID(Q7B_Q7BCodeView_Class(toSave)->Save()))){
                                                                  Q7BS("CodeView.QWidget.q7b", "SaveIfChanged", "244", "1");
return Q7B_ID(Q7B_ID(true));

}

}
                                                                  Q7BS("CodeView.QWidget.q7b", "SaveIfChanged", "247", "1");
return Q7B_ID(Q7B_ID(false));
return Q7B_ID(Q7B_IDNULL());
                                                                  Q7BS("CodeView.QWidget.q7b", "SaveIfChanged", "248", "2");
}

void CodeView::Q7B_on_Q7BCodeBox_CopyAvailable(Q7B b)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_CopyAvailable", "317", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_CopyAvailable", "319", "1");
Q7B_QACTION_ENABLED(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->actionCut, b);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_CopyAvailable", "320", "1");
Q7B_QACTION_ENABLED(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->actionCopy, b);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_CopyAvailable", "321", "1");
Q7B_QACTION_ENABLED(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->actionDelete, b);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_CopyAvailable", "323", "1");
Q7B_QACTION_ENABLED(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->actionTo_UPPERCASE, b);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_CopyAvailable", "324", "1");
Q7B_QACTION_ENABLED(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->actionTo_lowercase, b);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_CopyAvailable", "325", "1");
Q7B_QACTION_ENABLED(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->actionComment, b);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_CopyAvailable", "326", "1");
Q7B_QACTION_ENABLED(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->actionUncomment, b);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_CopyAvailable", "327", "1");
Q7B_QACTION_ENABLED(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->actionShift_Left, b);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_CopyAvailable", "328", "1");
Q7B_QACTION_ENABLED(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->actionShift_Right, b);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_CopyAvailable", "330", "2");
}

void CodeView::Q7B_on_Q7BCodeBox_GetCompletion(Q7B sCompletion)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1021", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1024", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1026", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1027", "1");
Q7B tv; Q7B_ASSIGNMENT(&tv, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1032", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__QSTRINGLIST(Q7B_QSTRINGLIST_INIT(this, "a"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1035", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sCompletion, Q7B_ID("!?$%&/()=?")))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1037", "1");
Q7B aKey; Q7B_ASSIGNMENT(&aKey, &(Q7B__LIST(Q7B_DICTIONARY_KEYS(Q7B_Global_Class(Q7B_Global_Object())->dCompletion2function))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1039", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(aKey), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1039", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1040", "1");
Q7B_QSTRINGLIST_APPEND(a, Q7B_DICTIONARY_OBJECT(Q7B_Global_Class(Q7B_Global_Object())->dCompletion2function, Q7B_LIST_OBJECT(aKey, i)));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1043", "1");
Q7B__MSGBOX(a);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1045", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(Global::ObjectiveBasicConsts), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1045", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1046", "1");
Q7B_QSTRINGLIST_APPEND(a, Q7B_LIST_OBJECT(Global::ObjectiveBasicConsts, i));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1049", "1");
Q7B__MSGBOX(a);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1051", "1");
Q7B ll; Q7B_ASSIGNMENT(&ll, &(Q7B__LIST(Q7B_ID(Q7B_List::init()))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1053", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(ll), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1053", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1054", "1");
Q7B_QSTRINGLIST_APPEND(a, Q7B_LIST_OBJECT(ll, i));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1057", "1");
Q7B__MSGBOX(a);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1059", "1");
Q7B_Q7BCodeView_Class(tv)->SetCompletion(Q7B_CQSTRINGLIST(a));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1060", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1067", "1");

if (Q7B_CBOOL(Q7B_DICTIONARY_CONTAINS(Global::dObjectCompletion, sCompletion))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1069", "1");
Q7B d; Q7B_ASSIGNMENT(&d, &(Q7B__DICTIONARY(Q7B_DICTIONARY_OBJECT(Global::dObjectCompletion, sCompletion))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1070", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_DICTIONARY_LENGTH(d), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1070", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1071", "1");
Q7B b; Q7B_ASSIGNMENT(&b, &(Q7B__LIST(Q7B_DICTIONARY_OBJECT(d, Q7B_STRING(i, Q7B_ID(false))))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1072", "1");
Q7B_QSTRINGLIST_APPEND(a, Q7B_LIST_OBJECT(b, Q7B_ID((qint64) 1)));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1075", "1");
Q7B_Q7BCodeView_Class(tv)->SetCompletion(Q7B_CQSTRINGLIST(a));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1076", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1082", "1");
Q7B sType; Q7B_ASSIGNMENT(&sType, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1094", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_LEN(sType), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1095", "1");
Q7B_Q7BCodeView_Class(tv)->SetCompletion(Q7B_CQSTRINGLIST(Q7B_QSTRINGLIST_INIT(this, "sType")));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1096", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1101", "1");

if (Q7B_CBOOL(Q7B_DICTIONARY_CONTAINS(Global::dClassCompletion, sType))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1103", "1");
Q7B d; Q7B_ASSIGNMENT(&d, &(Q7B__DICTIONARY(Q7B_DICTIONARY_OBJECT(Global::dClassCompletion, sType))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1105", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_DICTIONARY_LENGTH(d), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1105", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1106", "1");
Q7B b; Q7B_ASSIGNMENT(&b, &(Q7B__LIST(Q7B_DICTIONARY_OBJECT(d, Q7B_STRING(i, Q7B_ID(false))))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1107", "1");
Q7B_QSTRINGLIST_APPEND(a, Q7B_LIST_OBJECT(b, Q7B_ID((qint64) 1)));

}

} else {

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1113", "1");
Q7B_Q7BCodeView_Class(tv)->SetCompletion(Q7B_CQSTRINGLIST(a));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1114", "1");
return;
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion", "1116", "2");
}

void CodeView::Q7B_on_Q7BCodeBox_GetCompletion2(Q7B sCompletion)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1120", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1129", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1130", "1");
Q7B tv; Q7B_ASSIGNMENT(&tv, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1132", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_CONTAINS(sCompletion, Q7B_ID("."), Q7B_ID(false)), Q7B_ID(false)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1133", "1");

if (Q7B_CBOOL(Q7B_DICTIONARY_CONTAINS(Q7B_Global_Class(Q7B_Global_Object())->dCompletion2function, Q7B_LCASE(sCompletion)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1134", "1");
Q7B_Q7BCodeView_Class(tv)->SetCompletion2(Q7B_CQSTRING(Q7B_DICTIONARY_OBJECT(Q7B_Global_Class(Q7B_Global_Object())->dCompletion2function, Q7B_LCASE(sCompletion))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1135", "1");
return;

}

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1138", "1");
Q7B sType; Q7B_ASSIGNMENT(&sType, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1141", "1");

if (Q7B_CBOOL(Q7B_DICTIONARY_CONTAINS(Global::dClassCompletion, sType))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1142", "1");
Q7B n; Q7B_ASSIGNMENT(&n, &(Q7B__INTEGER(Q7B_INSTRREV(sCompletion, Q7B_ID("."), Q7B_LEN(sCompletion), Q7B_ID(false)))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1144", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_MID(sCompletion, Q7B_ADD(n, Q7B_ID((qint64) 1)), Q7B_SUB(Q7B_SUB(Q7B_LEN(sCompletion), n), Q7B_ID((qint64) 1))))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1146", "1");
Q7B d; Q7B_ASSIGNMENT(&d, &(Q7B__DICTIONARY(Q7B_DICTIONARY_OBJECT(Global::dClassCompletion, sType))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1147", "1");
Q7B b; Q7B_ASSIGNMENT(&b, &(Q7B__LIST(Q7B_DICTIONARY_OBJECT(d, s))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1149", "1");

if (Q7B_CBOOL(Q7B_UNEQUAL(b, Q7B_IDNULL()))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1150", "1");
Q7B_Q7BCodeView_Class(tv)->SetCompletion2(Q7B_CQSTRING(Q7B_LIST_OBJECT(b, Q7B_ID((qint64) 1))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1151", "1");
return;

}

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1155", "1");
Q7B_Q7BCodeView_Class(tv)->SetCompletion2(Q7B_CQSTRING(Q7B_ID("")));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1156", "1");
return;
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_GetCompletion2", "1157", "2");
}

void CodeView::Q7B_on_Q7BCodeBox_PasteAvailable(Q7B b)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_PasteAvailable", "333", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_PasteAvailable", "335", "1");
Q7B_QACTION_ENABLED(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->actionPaste, b);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_PasteAvailable", "336", "2");
}

void CodeView::Q7B_on_Q7BCodeBox_RedoAvailable(Q7B b)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_RedoAvailable", "345", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_RedoAvailable", "347", "1");
Q7B_QACTION_ENABLED(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->actionRedo, b);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_RedoAvailable", "348", "2");
}

void CodeView::Q7B_on_Q7BCodeBox_UndoAvailable(Q7B b)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_UndoAvailable", "339", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_UndoAvailable", "341", "1");
Q7B_QACTION_ENABLED(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->actionUndo, b);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_UndoAvailable", "342", "2");
}

void CodeView::Q7B_on_Q7BCodeBox_cursorPositionChanged()
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_cursorPositionChanged", "296", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_cursorPositionChanged", "300", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->bBlockLastPosition, Q7B_ID(false)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_cursorPositionChanged", "300", "1");
Q7B_EXECAFTERMSEC(Q7B_ID((qint64) 2000), Q7B_ID("LastPositionTimer"), Q7B_ID(this));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_cursorPositionChanged", "303", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_cursorPositionChanged", "304", "1");

if (Q7B_CBOOL(Q7B_EQUAL(w, Q7B_IDNULL()))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_cursorPositionChanged", "304", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_cursorPositionChanged", "305", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")), Q7B_IDNULL()))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_cursorPositionChanged", "305", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_cursorPositionChanged", "306", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_cursorPositionChanged", "309", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_cursorPositionChanged", "310", "1");
Q7B_ASSIGNMENT(&s, &Q7B__STRING(Q7B_STRING(Q7B_ID(Q7B_Q7BCodeView_Class(cb)->getCurrentLine()), Q7B_ID(false))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_cursorPositionChanged", "311", "1");
Q7B_QLABEL_TEXT(lLine, Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_ID(" L "), s), Q7B_ID("   C ")), Q7B_STRING(Q7B_ID(Q7B_Q7BCodeView_Class(cb)->getCurrentColumn()), Q7B_ID(false))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_cursorPositionChanged", "314", "2");
}

void CodeView::Q7B_on_Q7BCodeBox_textChanged()
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_textChanged", "264", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_textChanged", "267", "1");
Q7B_ASSIGNMENT(&nChanged, &Q7B__INTEGER(Q7B_ADD(nChanged, Q7B_ID((qint64) 1))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_textChanged", "268", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_textChanged", "271", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_textChanged", "272", "1");
Q7B_ASSIGNMENT(&toSave, &Q7B__Q7BCODEVIEW(cb));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_textChanged", "273", "1");

if (Q7B_CBOOL(Q7B_EQUAL(bLoading, Q7B_ID(false)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_textChanged", "275", "1");
Q7B_EXECAFTERMSEC(Q7B_ID((qint64) 2000), Q7B_ID("on_singleshot"), Q7B_ID(this));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_Q7BCodeBox_textChanged", "277", "2");
}

void CodeView::Q7B_on_cbCondition_activated(Q7B Text)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbCondition_activated", "984", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbCondition_activated", "984", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QCOMBOBOX_CURRENTINDEX(cbCondition), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbCondition_activated", "985", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbCondition_activated", "987", "1");

if (Q7B_CBOOL(Q7B_UNEQUAL(Q7B_QCOMBOBOX_CURRENTINDEX(cbCondition), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbCondition_activated", "988", "1");
Q7B_QCOMBOBOX_CURRENTINDEX(cbCondition, Q7B_ID((qint64) 0));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbCondition_activated", "991", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbCondition_activated", "992", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbCondition_activated", "994", "1");
Q7B te; Q7B_ASSIGNMENT(&te, &(Q7B__QPLAINTEXTEDIT(Q7B_ID("QPlainTextEdit", Q7B_connectSlotsByNameForGivenObjectAndReturnIt(this, new QPlainTextEdit(), "te")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbCondition_activated", "995", "1");
Q7B_ASSIGNMENT(&te, &Q7B__QPLAINTEXTEDIT(Q7B_ID(Q7B_Q7BCodeView_Class(cb)->getQPlainTextEdit())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbCondition_activated", "996", "1");
Q7B_QPLAINTEXTEDIT_INSERTPLAINTEXT(te, Text);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbCondition_activated", "997", "2");
}

void CodeView::Q7B_on_cbDefinition_activated(Q7B Text)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbDefinition_activated", "965", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbDefinition_activated", "965", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QCOMBOBOX_CURRENTINDEX(cbDefinition), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbDefinition_activated", "966", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbDefinition_activated", "969", "1");

if (Q7B_CBOOL(Q7B_UNEQUAL(Q7B_QCOMBOBOX_CURRENTINDEX(cbDefinition), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbDefinition_activated", "970", "1");
Q7B_QCOMBOBOX_CURRENTINDEX(cbDefinition, Q7B_ID((qint64) 0));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbDefinition_activated", "973", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbDefinition_activated", "974", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbDefinition_activated", "976", "1");
Q7B te; Q7B_ASSIGNMENT(&te, &(Q7B__QPLAINTEXTEDIT(Q7B_ID("QPlainTextEdit", Q7B_connectSlotsByNameForGivenObjectAndReturnIt(this, new QPlainTextEdit(), "te")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbDefinition_activated", "977", "1");
Q7B_ASSIGNMENT(&te, &Q7B__QPLAINTEXTEDIT(Q7B_ID(Q7B_Q7BCodeView_Class(cb)->getQPlainTextEdit())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbDefinition_activated", "978", "1");
Q7B_QPLAINTEXTEDIT_INSERTPLAINTEXT(te, Text);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbDefinition_activated", "979", "2");
}

void CodeView::Q7B_on_cbLoop_activated(Q7B Text)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbLoop_activated", "1002", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbLoop_activated", "1002", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QCOMBOBOX_CURRENTINDEX(cbLoop), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbLoop_activated", "1003", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbLoop_activated", "1006", "1");

if (Q7B_CBOOL(Q7B_UNEQUAL(Q7B_QCOMBOBOX_CURRENTINDEX(cbLoop), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbLoop_activated", "1007", "1");
Q7B_QCOMBOBOX_CURRENTINDEX(cbLoop, Q7B_ID((qint64) 0));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbLoop_activated", "1010", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbLoop_activated", "1011", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbLoop_activated", "1013", "1");
Q7B te; Q7B_ASSIGNMENT(&te, &(Q7B__QPLAINTEXTEDIT(Q7B_ID("QPlainTextEdit", Q7B_connectSlotsByNameForGivenObjectAndReturnIt(this, new QPlainTextEdit(), "te")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbLoop_activated", "1014", "1");
Q7B_ASSIGNMENT(&te, &Q7B__QPLAINTEXTEDIT(Q7B_ID(Q7B_Q7BCodeView_Class(cb)->getQPlainTextEdit())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbLoop_activated", "1015", "1");
Q7B_QPLAINTEXTEDIT_INSERTPLAINTEXT(te, Text);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_cbLoop_activated", "1016", "2");
}

void CodeView::Q7B_on_delayed()
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_delayed", "46", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_delayed", "46", "1");
Q7B tabWidget; Q7B_ASSIGNMENT(&tabWidget, &(Q7B__QTABWIDGET(Q7B_QWIDGET_WIDGET(q7b_this, Q7B_ID("tabWidget")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_delayed", "48", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_delayed", "49", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_QTABWIDGET_COUNT(tabWidget), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_delayed", "49", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_delayed", "50", "1");
Q7B o; Q7B_ASSIGNMENT(&o, &(Q7B__QOBJECT(Q7B_QTABWIDGET_WIDGET(tabWidget, i))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_delayed", "51", "1");
Q7B ll; Q7B_ASSIGNMENT(&ll, &(Q7B__LIST(Q7B_QOBJECT_CHILDREN(o))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_delayed", "53", "1");
Q7B ii; Q7B_ASSIGNMENT(&ii, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_delayed", "54", "1");
Q7B_ASSIGNMENT(&ii, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(ii, Q7B_SUB(Q7B_LIST_LENGTH(ll), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_delayed", "54", "1")), Q7B_ASSIGNMENT(&ii, &Q7B__INTEGER(Q7B_ADD(ii, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_delayed", "55", "1");
Q7B_QBUTTONGROUP_ADDBUTTON(gr, Q7B_LIST_OBJECT(ll, ii));

}

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_delayed", "58", "2");
}

void CodeView::Q7B_on_gr_buttonClicked(Q7B theButton)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_gr_buttonClicked", "34", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_gr_buttonClicked", "34", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_PROPERTY(theButton, Q7B_ID("Insert")), Q7B_IDNULL()))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_gr_buttonClicked", "35", "1");
InsertCodeAtCurrentPosition(Q7B_QABSTRACTBUTTON_TEXT(theButton));

} else {
                                                                  Q7BS("CodeView.QWidget.q7b", "on_gr_buttonClicked", "37", "1");
InsertCodeAtCurrentPosition(Q7B_PROPERTY(theButton, Q7B_ID("Insert")));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_gr_buttonClicked", "39", "2");
}

void CodeView::Q7B_on_mActions_triggered(Q7B Action)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mActions_triggered", "172", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mActions_triggered", "172", "1");
InsertCodeAtCurrentPosition(Q7B_ADD(Q7B_ADD(Q7B_ID("\nSignal on_"), Q7B_QACTION_TEXT(Action)), Q7B_ID("_triggered(Checked As Boolean)\n  \nEnd Signal\n")));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mActions_triggered", "173", "2");
}

void CodeView::Q7B_on_mConditions_triggered(Q7B Action)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mConditions_triggered", "507", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mConditions_triggered", "507", "1");
InsertCodeAtCurrentPosition(Q7B_QACTION_TAG(Action));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mConditions_triggered", "508", "2");
}

void CodeView::Q7B_on_mDefinitions_triggered(Q7B Action)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mDefinitions_triggered", "536", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mDefinitions_triggered", "536", "1");
InsertCodeAtCurrentPosition(Q7B_CONCAT(Q7B_ID("\n"), Q7B_QACTION_TAG(Action)));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mDefinitions_triggered", "537", "2");
}

void CodeView::Q7B_on_mEvents_triggered(Q7B Action)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mEvents_triggered", "953", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mEvents_triggered", "953", "1");
InsertCodeAtCurrentPosition(Q7B_ADD(Q7B_ADD(Q7B_ID("\nEvent "), Q7B_QACTION_TEXT(Action)), Q7B_ID("\n   \nEnd Event\n\n")));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mEvents_triggered", "954", "2");
}

void CodeView::Q7B_on_mLoops_triggered(Q7B Action)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mLoops_triggered", "480", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mLoops_triggered", "480", "1");
InsertCodeAtCurrentPosition(Q7B_QACTION_TAG(Action));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mLoops_triggered", "481", "2");
}

void CodeView::Q7B_on_mOutlets_triggered(Q7B Action)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mOutlets_triggered", "641", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mOutlets_triggered", "641", "1");
InsertCodeAtCurrentPosition(Q7B_ADD(Q7B_ADD(Q7B_ID("\nOutlet "), Q7B_QACTION_TEXT(Action)), Q7B_ID("\n")));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mOutlets_triggered", "642", "2");
}

void CodeView::Q7B_on_mSignals2_triggered(Q7B Action)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals2_triggered", "854", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals2_triggered", "854", "1");
InsertCodeAtCurrentPosition(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_ID("\nSignal on_"), sControlName), Q7B_ID("_")), Q7B_QACTION_TEXT(Action)), Q7B_ID("\n   \nEnd Signal\n\n")));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals2_triggered", "855", "2");
}

void CodeView::Q7B_on_mSignals_triggered(Q7B Action)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "793", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "794", "1");
Q7B_QMENU_CLEAR(mSignals2);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "797", "1");
Q7B n; Q7B_ASSIGNMENT(&n, &(Q7B__INTEGER(Q7B_INSTR(Q7B_QACTION_TEXT(Action), Q7B_ID(" As"), Q7B_ID((qint64) 0), Q7B_ID(true)))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "798", "1");
Q7B_ASSIGNMENT(&sControlName, &Q7B__STRING(Q7B_LEFT(Q7B_QACTION_TEXT(Action), n)));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "799", "1");
Q7B sType; Q7B_ASSIGNMENT(&sType, &(Q7B__STRING(Q7B_MID(Q7B_QACTION_TEXT(Action), Q7B_ADD(n, Q7B_ID((qint64) 4)), Q7B_ID((qint64) -1)))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "801", "1");
Q7B d; Q7B_ASSIGNMENT(&d, &(Q7B__DICTIONARY(Q7B_Dictionary::init())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "803", "1");

if (Q7B_CBOOL(Q7B_DICTIONARY_CONTAINS(Q7B_Global_Class(Q7B_Global_Object())->Signals_Tree, sType))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "805", "1");
Q7B aa; Q7B_ASSIGNMENT(&aa, &(Q7B__LIST(Q7B_DICTIONARY_OBJECT(Q7B_Global_Class(Q7B_Global_Object())->Signals_Tree, sType))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "807", "1");
Q7B ii; Q7B_ASSIGNMENT(&ii, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "809", "1");
Q7B_ASSIGNMENT(&ii, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(ii, Q7B_SUB(Q7B_LIST_LENGTH(aa), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "809", "1")), Q7B_ASSIGNMENT(&ii, &Q7B__INTEGER(Q7B_ADD(ii, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "810", "1");
Q7B sKey; Q7B_ASSIGNMENT(&sKey, &(Q7B__STRING(Q7B_LIST_OBJECT(aa, ii))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "812", "1");

if (Q7B_CBOOL(Q7B_DICTIONARY_CONTAINS(Q7B_Global_Class(Q7B_Global_Object())->Signals, sKey))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "813", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_DICTIONARY_OBJECT(Q7B_Global_Class(Q7B_Global_Object())->Signals, sKey))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "814", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "816", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "816", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "817", "1");
Q7B_DICTIONARY_SETOBJECT(d, Q7B_LIST_OBJECT(a, i), Q7B_LIST_OBJECT(a, i));

}

}

}

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "827", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "829", "1");
Q7B l; Q7B_ASSIGNMENT(&l, &(Q7B__LIST(Q7B_DICTIONARY_KEYS(d))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "831", "1");
Q7B o; Q7B_ASSIGNMENT(&o, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "832", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(l), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "832", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "833", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_NOT(Q7B_ISEMPTY(o))) && Q7B_CBOOL(Q7B_UNEQUAL(o, Q7B_LEFT(Q7B_LIST_OBJECT(l, i), Q7B_ID((qint64) 1)))))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "834", "1");
Q7B_QMENU_ADDSEPARATOR(mSignals2);

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "836", "1");
Q7B_QMENU_ADDACTION(mSignals2, Q7B_LIST_OBJECT(l, i));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "837", "1");
Q7B_ASSIGNMENT(&o, &Q7B__STRING(Q7B_LEFT(Q7B_LIST_OBJECT(l, i), Q7B_ID((qint64) 1))));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "847", "1");
Q7B_QTOOLBUTTON_MENU(tbSignals, mSignals2);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "849", "1");
((QToolButton* )(tbSignals)->ref)->showMenu();
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "850", "1");
Q7B_QTOOLBUTTON_MENU(tbSignals, Q7B_IDNULL());
                                                                  Q7BS("CodeView.QWidget.q7b", "on_mSignals_triggered", "851", "2");
}

void CodeView::Q7B_on_singleshot()
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_singleshot", "61", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_singleshot", "61", "1");
Save();
                                                                  Q7BS("CodeView.QWidget.q7b", "on_singleshot", "62", "1");

if (Q7B_CBOOL(Q7B_ID(true))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_singleshot", "63", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_singleshot", "65", "2");
}

void CodeView::Q7B_on_tbActions_clicked(Q7B Checked)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "147", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "147", "1");
Q7B d; Q7B_ASSIGNMENT(&d, &(Q7B__DICTIONARY(GetActions())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "149", "1");

if (Q7B_CBOOL(Q7B_EQUAL(d, Q7B_IDNULL()))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "149", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "151", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "153", "1");
Q7B l; Q7B_ASSIGNMENT(&l, &(Q7B__LIST(Q7B_DICTIONARY_KEYS(d))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "155", "1");
Q7B o; Q7B_ASSIGNMENT(&o, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "156", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(l), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "156", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "157", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_NOT(Q7B_ISEMPTY(o))) && Q7B_CBOOL(Q7B_UNEQUAL(o, Q7B_LEFT(Q7B_LIST_OBJECT(l, i), Q7B_ID((qint64) 7)))))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "158", "1");
Q7B_QMENU_ADDSEPARATOR(mActions);

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "160", "1");
Q7B_QMENU_ADDACTION(mActions, Q7B_LIST_OBJECT(l, i));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "161", "1");
Q7B_ASSIGNMENT(&o, &Q7B__STRING(Q7B_LEFT(Q7B_LIST_OBJECT(l, i), Q7B_ID((qint64) 7))));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "165", "1");
Q7B_QTOOLBUTTON_MENU(tbActions, mActions);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "166", "1");
((QToolButton* )(tbActions)->ref)->showMenu();
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "167", "1");
Q7B_QTOOLBUTTON_MENU(tbActions, Q7B_IDNULL());
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbActions_clicked", "169", "2");
}

void CodeView::Q7B_on_tbComment_clicked(Q7B Checked)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbComment_clicked", "363", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbComment_clicked", "363", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbComment_clicked", "364", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbComment_clicked", "365", "1");
Q7B_Q7BCodeView_Class(cb)->PerformComment();
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbComment_clicked", "366", "2");
}

void CodeView::Q7B_on_tbConditions_clicked(Q7B Checked)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "488", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "489", "1");
Q7B_QMENU_CLEAR(mConditions);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "490", "1");
Q7B q; Q7B_ASSIGNMENT(&q, &(Q7B__QACTION(Q7B_QACTION_INIT(this, "q"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "491", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mConditions, Q7B_ID("If Then ..."))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "491", "1");
Q7B_QACTION_TAG(q, Q7B_ID("If CONDITION Then ...\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "492", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mConditions, Q7B_ID("If Then ... Else"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "492", "1");
Q7B_QACTION_TAG(q, Q7B_ID("If CONDITION Then ... Else ... End If\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "493", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mConditions, Q7B_ID("If Then ... Else ... End If"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "493", "1");
Q7B_QACTION_TAG(q, Q7B_ID("If CONDITION Then\n  ... \nElse\n  ...\nEnd If\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "494", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mConditions, Q7B_ID("If Then ... Else If ... Else ... End If"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "494", "1");
Q7B_QACTION_TAG(q, Q7B_ID("If CONDITION Then\n  ... \nElse If CONDTION Then\n  ... \nElse  ...\nEnd If\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "495", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mConditions, Q7B_ID("Select ... End Select"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "495", "1");
Q7B_QACTION_TAG(q, Q7B_ID("Select KEY\n  Case VALUE\n    ...\n  Case VALUE\n    ...   Case Else\n    ... \nEnd Select\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "500", "1");
Q7B_QTOOLBUTTON_MENU(tbConditions, mConditions);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "501", "1");
((QToolButton* )(tbConditions)->ref)->showMenu();
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "502", "1");
Q7B_QTOOLBUTTON_MENU(tbConditions, Q7B_IDNULL());
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbConditions_clicked", "504", "2");
}

void CodeView::Q7B_on_tbDefinitions_clicked(Q7B Checked)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "513", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "514", "1");
Q7B_QMENU_CLEAR(mDefinitions);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "515", "1");
Q7B q; Q7B_ASSIGNMENT(&q, &(Q7B__QACTION(Q7B_QACTION_INIT(this, "q"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "516", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mDefinitions, Q7B_ID("Init"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "516", "1");
Q7B_QACTION_TAG(q, Q7B_ID("Event Init()\n\nEnd Event\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "517", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mDefinitions, Q7B_ID("Finalize"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "517", "1");
Q7B_QACTION_TAG(q, Q7B_ID("Event Finalize()\n\nEnd Event\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "519", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mDefinitions, Q7B_ID("Sub"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "519", "1");
Q7B_QACTION_TAG(q, Q7B_ID("Sub NAME(NAME As TYPE, NAME As TYPE)\n\nEnd Sub\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "520", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mDefinitions, Q7B_ID("Function"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "520", "1");
Q7B_QACTION_TAG(q, Q7B_ID("Function NAME(NAME As TYPE, NAME As TYPE) As TYPE\n\nEnd Function\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "521", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mDefinitions, Q7B_ID("Dim"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "521", "1");
Q7B_QACTION_TAG(q, Q7B_ID("Dim NAME As TYPE\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "522", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mDefinitions, Q7B_ID("Const"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "522", "1");
Q7B_QACTION_TAG(q, Q7B_ID("Const NAME As TYPE\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "523", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mDefinitions, Q7B_ID("Type"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "523", "1");
Q7B_QACTION_TAG(q, Q7B_ID("Type NAME\n  NAME As TYPE\n  NAME As TYPE\nEnd Type\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "524", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mDefinitions, Q7B_ID("Enum"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "524", "1");
Q7B_QACTION_TAG(q, Q7B_ID("Enum NAME\n  NAME As TYPE\n  NAME As TYPE\nEnd Enum\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "525", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mDefinitions, Q7B_ID("Outlet"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "525", "1");
Q7B_QACTION_TAG(q, Q7B_ID("Outlet NAME As TYPE\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "526", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mDefinitions, Q7B_ID("Signal"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "526", "1");
Q7B_QACTION_TAG(q, Q7B_ID("Signal on_OBJECTNAME_signal(NAME As TYPE, NAME As TYPE)\n\nEnd Signal\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "527", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mDefinitions, Q7B_ID("Slot"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "527", "1");
Q7B_QACTION_TAG(q, Q7B_ID("Slot NAME(NAME As TYPE, NAME As TYPE)\n\nEnd Slot\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "529", "1");
Q7B_QTOOLBUTTON_MENU(tbDefinitions, mDefinitions);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "530", "1");
((QToolButton* )(tbDefinitions)->ref)->showMenu();
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "531", "1");
Q7B_QTOOLBUTTON_MENU(tbDefinitions, Q7B_IDNULL());
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbDefinitions_clicked", "533", "2");
}

void CodeView::Q7B_on_tbEvents_clicked(Q7B Checked)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbEvents_clicked", "932", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbEvents_clicked", "933", "1");
Q7B l; Q7B_ASSIGNMENT(&l, &(Q7B__LIST(GetEvents())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbEvents_clicked", "935", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbEvents_clicked", "937", "1");
Q7B o; Q7B_ASSIGNMENT(&o, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbEvents_clicked", "938", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(l), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_tbEvents_clicked", "938", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbEvents_clicked", "939", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_NOT(Q7B_ISEMPTY(o))) && Q7B_CBOOL(Q7B_UNEQUAL(o, Q7B_LEFT(Q7B_LIST_OBJECT(l, i), Q7B_ID((qint64) 1)))))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbEvents_clicked", "940", "1");
Q7B_QMENU_ADDSEPARATOR(mEvents);

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbEvents_clicked", "942", "1");
Q7B_QMENU_ADDACTION(mEvents, Q7B_LIST_OBJECT(l, i));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbEvents_clicked", "943", "1");
Q7B_ASSIGNMENT(&o, &Q7B__STRING(Q7B_LEFT(Q7B_LIST_OBJECT(l, i), Q7B_ID((qint64) 1))));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbEvents_clicked", "946", "1");
Q7B_QTOOLBUTTON_MENU(tbEvents, mEvents);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbEvents_clicked", "947", "1");
((QToolButton* )(tbEvents)->ref)->showMenu();
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbEvents_clicked", "948", "1");
Q7B_QTOOLBUTTON_MENU(tbEvents, Q7B_IDNULL());
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbEvents_clicked", "950", "2");
}

void CodeView::Q7B_on_tbLoops_clicked(Q7B Checked)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbLoops_clicked", "466", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbLoops_clicked", "467", "1");
Q7B_QMENU_CLEAR(mLoops);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbLoops_clicked", "468", "1");
Q7B q; Q7B_ASSIGNMENT(&q, &(Q7B__QACTION(Q7B_QACTION_INIT(this, "q"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbLoops_clicked", "469", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mLoops, Q7B_ID("For ... Next"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbLoops_clicked", "469", "1");
Q7B_QACTION_TAG(q, Q7B_ID("For COUNTER = 0 To EXPRESSION\n  ...\nNext\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbLoops_clicked", "470", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mLoops, Q7B_ID("Do While ... Loop"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbLoops_clicked", "470", "1");
Q7B_QACTION_TAG(q, Q7B_ID("Do While CONDITION\n  ...\nLoop\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbLoops_clicked", "471", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mLoops, Q7B_ID("Do ... Loop While"))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbLoops_clicked", "471", "1");
Q7B_QACTION_TAG(q, Q7B_ID("Do\n  ...\nLoop While CONDITION\n"));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbLoops_clicked", "473", "1");
Q7B_QTOOLBUTTON_MENU(tbLoops, mLoops);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbLoops_clicked", "474", "1");
((QToolButton* )(tbLoops)->ref)->showMenu();
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbLoops_clicked", "475", "1");
Q7B_QTOOLBUTTON_MENU(tbLoops, Q7B_IDNULL());
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbLoops_clicked", "477", "2");
}

void CodeView::Q7B_on_tbOutlets_clicked(Q7B Checked)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "615", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "616", "1");
Q7B d; Q7B_ASSIGNMENT(&d, &(Q7B__DICTIONARY(GetOutlets())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "618", "1");

if (Q7B_CBOOL(Q7B_EQUAL(d, Q7B_IDNULL()))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "618", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "620", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "622", "1");
Q7B l; Q7B_ASSIGNMENT(&l, &(Q7B__LIST(Q7B_DICTIONARY_KEYS(d))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "624", "1");
Q7B o; Q7B_ASSIGNMENT(&o, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "625", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(l), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "625", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "626", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_NOT(Q7B_ISEMPTY(o))) && Q7B_CBOOL(Q7B_UNEQUAL(o, Q7B_LEFT(Q7B_LIST_OBJECT(l, i), Q7B_ID((qint64) 1)))))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "627", "1");
Q7B_QMENU_ADDSEPARATOR(mOutlets);

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "629", "1");
Q7B_QMENU_ADDACTION(mOutlets, Q7B_LIST_OBJECT(l, i));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "630", "1");
Q7B_ASSIGNMENT(&o, &Q7B__STRING(Q7B_LEFT(Q7B_LIST_OBJECT(l, i), Q7B_ID((qint64) 1))));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "633", "1");
Q7B_QTOOLBUTTON_MENU(tbOutlets, mOutlets);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "634", "1");
((QToolButton* )(tbOutlets)->ref)->showMenu();
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "635", "1");
Q7B_QTOOLBUTTON_MENU(tbOutlets, Q7B_IDNULL());
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbOutlets_clicked", "637", "2");
}

void CodeView::Q7B_on_tbShiftLeft_clicked(Q7B Checked)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbShiftLeft_clicked", "351", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbShiftLeft_clicked", "351", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbShiftLeft_clicked", "352", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbShiftLeft_clicked", "353", "1");
Q7B_Q7BCodeView_Class(cb)->PerformUnindent();
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbShiftLeft_clicked", "354", "2");
}

void CodeView::Q7B_on_tbShiftRight_clicked(Q7B Checked)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbShiftRight_clicked", "357", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbShiftRight_clicked", "357", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbShiftRight_clicked", "358", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbShiftRight_clicked", "359", "1");
Q7B_Q7BCodeView_Class(cb)->PerformIndent();
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbShiftRight_clicked", "360", "2");
}

void CodeView::Q7B_on_tbSignals_clicked(Q7B Checked)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "764", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "765", "1");
Q7B d; Q7B_ASSIGNMENT(&d, &(Q7B__DICTIONARY(GetSignals())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "767", "1");

if (Q7B_CBOOL(Q7B_EQUAL(d, Q7B_IDNULL()))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "767", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "769", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "771", "1");
Q7B l; Q7B_ASSIGNMENT(&l, &(Q7B__LIST(Q7B_DICTIONARY_KEYS(d))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "773", "1");
Q7B o; Q7B_ASSIGNMENT(&o, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "774", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(l), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "774", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "775", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_NOT(Q7B_ISEMPTY(o))) && Q7B_CBOOL(Q7B_UNEQUAL(o, Q7B_LEFT(Q7B_LIST_OBJECT(l, i), Q7B_ID((qint64) 1)))))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "776", "1");
Q7B_QMENU_ADDSEPARATOR(mSignals);

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "778", "1");
Q7B_QMENU_ADDACTION(mSignals, Q7B_LIST_OBJECT(l, i));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "779", "1");
Q7B_ASSIGNMENT(&o, &Q7B__STRING(Q7B_LEFT(Q7B_LIST_OBJECT(l, i), Q7B_ID((qint64) 1))));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "783", "1");
Q7B_QTOOLBUTTON_MENU(tbSignals, mSignals);
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "784", "1");
((QToolButton* )(tbSignals)->ref)->showMenu();
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "785", "1");
Q7B_QTOOLBUTTON_MENU(tbSignals, Q7B_IDNULL());
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSignals_clicked", "787", "2");
}

void CodeView::Q7B_on_tbSyncActions_clicked(Q7B Checked)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncActions_clicked", "126", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncActions_clicked", "127", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B___MSGBOX(Q7B_ID("Do you really want to insert all actions?"), Q7B_ID((qint64) 4), Q7B_ID("Insert all actions"), Q7B_ID(true)), Q7B_ID((qint64) 7)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncActions_clicked", "128", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncActions_clicked", "131", "1");
Q7B d; Q7B_ASSIGNMENT(&d, &(Q7B__DICTIONARY(GetActions())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncActions_clicked", "133", "1");

if (Q7B_CBOOL(Q7B_EQUAL(d, Q7B_IDNULL()))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncActions_clicked", "133", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncActions_clicked", "135", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncActions_clicked", "137", "1");
Q7B l; Q7B_ASSIGNMENT(&l, &(Q7B__LIST(Q7B_DICTIONARY_KEYS(d))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncActions_clicked", "139", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_SUB(Q7B_LIST_LENGTH(l), Q7B_ID((qint64) 1))));
for (;Q7B_CBOOL(Q7B_CBOOL(Q7B_GREATEREQUAL(Q7B_MINUS(Q7B_ID((qint64) 1)), Q7B_ID((qint64) 0))) ? Q7B_SMALLEREQUAL(i, Q7B_ID((qint64) 0)) : Q7B_GREATEREQUAL(i, Q7B_ID((qint64) 0)));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_tbSyncActions_clicked", "139", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_MINUS(Q7B_ID((qint64) 1))))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncActions_clicked", "140", "1");
InsertCode(Q7B_CONCAT(Q7B_CONCAT(Q7B_ID("Signal on_"), Q7B_LIST_OBJECT(l, i)), Q7B_ID("_triggered(Checked As Boolean)\n  \nEnd Signal\n\n")), Q7B_ID(true));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncActions_clicked", "143", "2");
}

void CodeView::Q7B_on_tbSyncEvents_clicked(Q7B Checked)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncEvents_clicked", "908", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncEvents_clicked", "909", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B___MSGBOX(Q7B_ID("Do you really want to insert all events?"), Q7B_ID((qint64) 4), Q7B_ID("Insert all events"), Q7B_ID(true)), Q7B_ID((qint64) 7)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncEvents_clicked", "910", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncEvents_clicked", "913", "1");
Q7B l; Q7B_ASSIGNMENT(&l, &(Q7B__LIST(GetEvents())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncEvents_clicked", "915", "1");

if (Q7B_CBOOL(Q7B_EQUAL(l, Q7B_IDNULL()))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncEvents_clicked", "915", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncEvents_clicked", "917", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncEvents_clicked", "921", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_SUB(Q7B_LIST_LENGTH(l), Q7B_ID((qint64) 1))));
for (;Q7B_CBOOL(Q7B_CBOOL(Q7B_GREATEREQUAL(Q7B_MINUS(Q7B_ID((qint64) 1)), Q7B_ID((qint64) 0))) ? Q7B_SMALLEREQUAL(i, Q7B_ID((qint64) 0)) : Q7B_GREATEREQUAL(i, Q7B_ID((qint64) 0)));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_tbSyncEvents_clicked", "921", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_MINUS(Q7B_ID((qint64) 1))))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncEvents_clicked", "923", "1");
InsertCode(Q7B_ADD(Q7B_ADD(Q7B_ID("\nEvent "), Q7B_LIST_OBJECT(l, i)), Q7B_ID("\n   \nEnd Event\n\n")), Q7B_ID(true));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncEvents_clicked", "929", "2");
}

void CodeView::Q7B_on_tbSyncOutlets_clicked(Q7B Checked)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncOutlets_clicked", "585", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncOutlets_clicked", "586", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B___MSGBOX(Q7B_ID("Do you really want to insert all outlets?"), Q7B_ID((qint64) 4), Q7B_ID("Insert all outlets"), Q7B_ID(true)), Q7B_ID((qint64) 7)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncOutlets_clicked", "587", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncOutlets_clicked", "590", "1");
Q7B d; Q7B_ASSIGNMENT(&d, &(Q7B__DICTIONARY(GetOutlets())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncOutlets_clicked", "592", "1");

if (Q7B_CBOOL(Q7B_EQUAL(d, Q7B_IDNULL()))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncOutlets_clicked", "592", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncOutlets_clicked", "594", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncOutlets_clicked", "596", "1");
Q7B l; Q7B_ASSIGNMENT(&l, &(Q7B__LIST(Q7B_DICTIONARY_KEYS(d))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncOutlets_clicked", "598", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_SUB(Q7B_LIST_LENGTH(l), Q7B_ID((qint64) 1))));
for (;Q7B_CBOOL(Q7B_CBOOL(Q7B_GREATEREQUAL(Q7B_MINUS(Q7B_ID((qint64) 1)), Q7B_ID((qint64) 0))) ? Q7B_SMALLEREQUAL(i, Q7B_ID((qint64) 0)) : Q7B_GREATEREQUAL(i, Q7B_ID((qint64) 0)));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_tbSyncOutlets_clicked", "598", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_MINUS(Q7B_ID((qint64) 1))))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncOutlets_clicked", "600", "1");
InsertCode(Q7B_CONCAT(Q7B_CONCAT(Q7B_ID("Outlet "), Q7B_LIST_OBJECT(l, i)), Q7B_ID("\n")), Q7B_ID(true));

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncOutlets_clicked", "606", "2");
}

void CodeView::Q7B_on_tbSyncSignals_clicked(Q7B Checked)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "699", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "700", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B___MSGBOX(Q7B_ID("Do you really want to insert all signals?"), Q7B_ID((qint64) 4), Q7B_ID("Insert all signals"), Q7B_ID(true)), Q7B_ID((qint64) 7)))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "701", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "704", "1");
Q7B d; Q7B_ASSIGNMENT(&d, &(Q7B__DICTIONARY(GetSignals())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "708", "1");

if (Q7B_CBOOL(Q7B_EQUAL(d, Q7B_IDNULL()))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "708", "1");
return;

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "710", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "712", "1");
Q7B l; Q7B_ASSIGNMENT(&l, &(Q7B__LIST(Q7B_DICTIONARY_KEYS(d))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "716", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_SUB(Q7B_LIST_LENGTH(l), Q7B_ID((qint64) 1))));
for (;Q7B_CBOOL(Q7B_CBOOL(Q7B_GREATEREQUAL(Q7B_MINUS(Q7B_ID((qint64) 1)), Q7B_ID((qint64) 0))) ? Q7B_SMALLEREQUAL(i, Q7B_ID((qint64) 0)) : Q7B_GREATEREQUAL(i, Q7B_ID((qint64) 0)));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "716", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_MINUS(Q7B_ID((qint64) 1))))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "718", "1");
Q7B le; Q7B_ASSIGNMENT(&le, &(Q7B__STRING(Q7B_LIST_OBJECT(l, i))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "719", "1");
Q7B n; Q7B_ASSIGNMENT(&n, &(Q7B__INTEGER(Q7B_INSTR(le, Q7B_ID(" As "), Q7B_ID((qint64) 0), Q7B_ID(true)))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "720", "1");
Q7B_ASSIGNMENT(&le, &Q7B__STRING(Q7B_TRIM(Q7B_LEFT(Q7B_LIST_OBJECT(l, i), n))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "721", "1");
Q7B re; Q7B_ASSIGNMENT(&re, &(Q7B__STRING(Q7B_TRIM(Q7B_MID(Q7B_LIST_OBJECT(l, i), Q7B_ADD(n, Q7B_ID((qint64) 4)), Q7B_ID((qint64) -1))))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "723", "1");

if (Q7B_CBOOL(Q7B_DICTIONARY_CONTAINS(Q7B_Global_Class(Q7B_Global_Object())->Signals_Tree, re))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "725", "1");
Q7B aa; Q7B_ASSIGNMENT(&aa, &(Q7B__LIST(Q7B_DICTIONARY_OBJECT(Q7B_Global_Class(Q7B_Global_Object())->Signals_Tree, re))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "727", "1");
Q7B ii; Q7B_ASSIGNMENT(&ii, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "729", "1");
Q7B_ASSIGNMENT(&ii, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(ii, Q7B_SUB(Q7B_LIST_LENGTH(aa), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "729", "1")), Q7B_ASSIGNMENT(&ii, &Q7B__INTEGER(Q7B_ADD(ii, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "730", "1");
Q7B sKey; Q7B_ASSIGNMENT(&sKey, &(Q7B__STRING(Q7B_LIST_OBJECT(aa, ii))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "734", "1");

if (Q7B_CBOOL(Q7B_DICTIONARY_CONTAINS(Q7B_Global_Class(Q7B_Global_Object())->Signals, sKey))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "736", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_DICTIONARY_OBJECT(Q7B_Global_Class(Q7B_Global_Object())->Signals, sKey))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "740", "1");
Q7B ii; Q7B_ASSIGNMENT(&ii, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "742", "1");
Q7B_ASSIGNMENT(&ii, &Q7B__INTEGER(Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));
for (;Q7B_CBOOL(Q7B_CBOOL(Q7B_GREATEREQUAL(Q7B_MINUS(Q7B_ID((qint64) 1)), Q7B_ID((qint64) 0))) ? Q7B_SMALLEREQUAL(ii, Q7B_ID((qint64) 0)) : Q7B_GREATEREQUAL(ii, Q7B_ID((qint64) 0)));Q7B_ANDALSO(Q7B_ID(Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "742", "1")), Q7B_ASSIGNMENT(&ii, &Q7B__INTEGER(Q7B_ADD(ii, Q7B_MINUS(Q7B_ID((qint64) 1))))))){
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "744", "1");
Q7B_ASSIGNMENT(&re, &Q7B__STRING(Q7B_LIST_OBJECT(a, ii)));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "749", "1");
InsertCode(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_ID("Signal on_"), le), Q7B_ID("_")), re), Q7B_ID("\n  \nEnd Signal\n\n")), Q7B_ID(true));

}

}

}

}

}
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbSyncSignals_clicked", "761", "2");
}

void CodeView::Q7B_on_tbUncomment_clicked(Q7B Checked)
{
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbUncomment_clicked", "369", "0");
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbUncomment_clicked", "369", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbUncomment_clicked", "370", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbUncomment_clicked", "371", "1");
Q7B_Q7BCodeView_Class(cb)->PerformUncomment();
                                                                  Q7BS("CodeView.QWidget.q7b", "on_tbUncomment_clicked", "372", "2");
}

