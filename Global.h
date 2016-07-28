
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
 #ifndef Q7B_global_h
#define Q7B_global_h

#include "Q7BRuntime.h"


#include "./Q7BFormDesigner/Q7BFormDesigner.h"
#include "./Q7BZipUnzip/Q7BZipUnzip.h"

class Q7B_workaround_eventloop : public QObject
{
Q_OBJECT
public:
public slots:
void q7b_workaround_eventloop_();
};

class Global;
extern Global *Q7B_Global_Class(Q7B o);
extern Q7B Q7B_Global_Object();
extern Global *q7b_Global_Object;
extern Q7B q7b_Global_Object_Q7B;
extern bool q7b_Global_Object_Finalized;
extern bool q7b_Global_Object_Init;


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
class Global : public QObject
{
Q_OBJECT
public:
Global(QObject *parent = 0);
void Init();
public:
static Q7B dClassCompletion;
static Q7B dObjectCompletion;
Q7B dCompletion2function;
static Q7B ObjectiveBasicConsts;
Q7B dummy;
Q7B CPPKeywords;
Q7B Keywords;
Q7B Consts;
Q7B Types;
Q7B Functions;
Q7B Functions2;
Q7B Classes;
Q7B Classes2;
Q7B Objects;
Q7B Signals;
Q7B Signals_Tree;
Q7B Events;



public:
static void SingleTonInit(Global*me)
{
q7b_Global_Object = me;
q7b_Global_Object_Q7B = me->q7b_this;
q7b_Global_Object_Init = true;
me->Init();
}

static Q7B SingleTonObject()
{
SingleTonObjectPointer();
return q7b_Global_Object_Q7B;
}


static Global* SingleTonObjectPointer()
{
if (q7b_Global_Object_Finalized) return 0;
if (q7b_Global_Object == 0){
q7b_Global_Object_Init = true;
q7b_Global_Object = new Global(q7b_Global_Object_Q7B);
q7b_Global_Object->Init();
}
return q7b_Global_Object;
}


static Global* ClassPointer(Q7B o)
{
return (Global*) o->ref;
}


public:
~Global();
Global(Q7B _q7b_this);
void addClass(Q7B s, Q7B o);
void addConst(Q7B s);
void addFunction(Q7B s, Q7B ss);
void addObject(Q7B s, Q7B o);
private:
Q7B q7b_this;

};
class Application;
extern Q7B Q7B_ID(Application* o);
extern Q7B Q7B__APPLICATION(Q7B o);
class CodeView;
extern Q7B Q7B_ID(CodeView* o);
extern Q7B Q7B__CODEVIEW(Q7B o);
class Declare;
extern Q7B Q7B_ID(Declare* o);
extern Q7B Q7B__DECLARE(Q7B o);
class Evaluation;
extern Q7B Q7B_ID(Evaluation* o);
extern Q7B Q7B__EVALUATION(Q7B o);
class Examples;
extern Q7B Q7B_ID(Examples* o);
extern Q7B Q7B__EXAMPLES(Q7B o);
class FindReplaceFile;
extern Q7B Q7B_ID(FindReplaceFile* o);
extern Q7B Q7B__FINDREPLACEFILE(Q7B o);
class Global;
extern Q7B Q7B_ID(Global* o);
extern Q7B Q7B__GLOBAL(Q7B o);
class MainWindow;
extern Q7B Q7B_ID(MainWindow* o);
extern Q7B Q7B__MAINWINDOW(Q7B o);
class Project;
extern Q7B Q7B_ID(Project* o);
extern Q7B Q7B__PROJECT(Q7B o);
class ProjectProperties;
extern Q7B Q7B_ID(ProjectProperties* o);
extern Q7B Q7B__PROJECTPROPERTIES(Q7B o);
class Settings;
extern Q7B Q7B_ID(Settings* o);
extern Q7B Q7B__SETTINGS(Q7B o);
class myClass;
extern Q7B Q7B_ID(myClass* o);
extern Q7B Q7B__MYCLASS(Q7B o);
class myParser;
extern Q7B Q7B_ID(myParser* o);
extern Q7B Q7B__MYPARSER(Q7B o);
class Q7BCodeView;
extern Q7B Q7B_ID(Q7BCodeView* o);
extern Q7B Q7B__Q7BCODEVIEW(Q7B o);
extern Q7BCodeView *Q7B_Q7BCodeView_Class(Q7B o);
class Q7BCompiler;
extern Q7B Q7B_ID(Q7BCompiler* o);
extern Q7B Q7B__Q7BCOMPILER(Q7B o);
extern Q7BCompiler *Q7B_Q7BCompiler_Class(Q7B o);
class Q7BFormDesigner;
extern Q7B Q7B_ID(Q7BFormDesigner* o);
extern Q7B Q7B__Q7BFORMDESIGNER(Q7B o);
extern Q7BFormDesigner *Q7B_Q7BFormDesigner_Class(Q7B o);
class Q7BProjectWindow;
extern Q7B Q7B_ID(Q7BProjectWindow* o);
extern Q7B Q7B__Q7BPROJECTWINDOW(Q7B o);
extern Q7BProjectWindow *Q7B_Q7BProjectWindow_Class(Q7B o);

#endif
