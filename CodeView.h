
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
 #ifndef Q7B_codeview_h
#define Q7B_codeview_h

#include "Q7BRuntime.h"

namespace Ui {
  class CodeView;
}


class CodeView;
extern CodeView *Q7B_CodeView_Class(Q7B o);
extern Q7B Q7B_CodeView_Object();
extern CodeView *q7b_CodeView_Object;
extern Q7B q7b_CodeView_Object_Q7B;
extern bool q7b_CodeView_Object_Finalized;
extern bool q7b_CodeView_Object_Init;


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
class CodeView : public QWidget
{
Q_OBJECT
public:
CodeView(Q7B _q7b_this, QWidget *parent = 0);
CodeView(QWidget *parent = 0);
Ui::CodeView *ui;

~CodeView();
void Init();

public slots:
void LastPositionTimer()
{
  this->Q7B_LastPositionTimer();
}
void on_Q7BCodeBox_CopyAvailable(bool b)
{
  this->Q7B_on_Q7BCodeBox_CopyAvailable(Q7B_ID(b));
}
void on_Q7BCodeBox_GetCompletion(QString sCompletion)
{
  this->Q7B_on_Q7BCodeBox_GetCompletion(Q7B_ID(sCompletion));
}
void on_Q7BCodeBox_GetCompletion2(QString sCompletion)
{
  this->Q7B_on_Q7BCodeBox_GetCompletion2(Q7B_ID(sCompletion));
}
void on_Q7BCodeBox_PasteAvailable(bool b)
{
  this->Q7B_on_Q7BCodeBox_PasteAvailable(Q7B_ID(b));
}
void on_Q7BCodeBox_RedoAvailable(bool b)
{
  this->Q7B_on_Q7BCodeBox_RedoAvailable(Q7B_ID(b));
}
void on_Q7BCodeBox_UndoAvailable(bool b)
{
  this->Q7B_on_Q7BCodeBox_UndoAvailable(Q7B_ID(b));
}
void on_Q7BCodeBox_cursorPositionChanged()
{
  this->Q7B_on_Q7BCodeBox_cursorPositionChanged();
}
void on_Q7BCodeBox_textChanged()
{
  this->Q7B_on_Q7BCodeBox_textChanged();
}
void on_cbCondition_activated(QString  text)
{
  this->Q7B_on_cbCondition_activated(Q7B_ID(text));
}
void on_cbDefinition_activated(QString  text)
{
  this->Q7B_on_cbDefinition_activated(Q7B_ID(text));
}
void on_cbLoop_activated(QString  text)
{
  this->Q7B_on_cbLoop_activated(Q7B_ID(text));
}
void on_delayed()
{
  this->Q7B_on_delayed();
}
void on_gr_buttonClicked(QAbstractButton *theButton)
{
  this->Q7B_on_gr_buttonClicked(Q7B_ID(theButton));
}
void on_mActions_triggered(QAction *Action)
{
  this->Q7B_on_mActions_triggered(Q7B_ID(Action));
}
void on_mConditions_triggered(QAction *Action)
{
  this->Q7B_on_mConditions_triggered(Q7B_ID(Action));
}
void on_mDefinitions_triggered(QAction *Action)
{
  this->Q7B_on_mDefinitions_triggered(Q7B_ID(Action));
}
void on_mEvents_triggered(QAction *Action)
{
  this->Q7B_on_mEvents_triggered(Q7B_ID(Action));
}
void on_mLoops_triggered(QAction *Action)
{
  this->Q7B_on_mLoops_triggered(Q7B_ID(Action));
}
void on_mOutlets_triggered(QAction *Action)
{
  this->Q7B_on_mOutlets_triggered(Q7B_ID(Action));
}
void on_mSignals2_triggered(QAction *Action)
{
  this->Q7B_on_mSignals2_triggered(Q7B_ID(Action));
}
void on_mSignals_triggered(QAction *Action)
{
  this->Q7B_on_mSignals_triggered(Q7B_ID(Action));
}
void on_singleshot()
{
  this->Q7B_on_singleshot();
}
void on_tbActions_clicked(bool checked = false)
{
  this->Q7B_on_tbActions_clicked(Q7B_ID(checked));
}
void on_tbComment_clicked(bool checked = false)
{
  this->Q7B_on_tbComment_clicked(Q7B_ID(checked));
}
void on_tbConditions_clicked(bool checked = false)
{
  this->Q7B_on_tbConditions_clicked(Q7B_ID(checked));
}
void on_tbDefinitions_clicked(bool checked = false)
{
  this->Q7B_on_tbDefinitions_clicked(Q7B_ID(checked));
}
void on_tbEvents_clicked(bool checked = false)
{
  this->Q7B_on_tbEvents_clicked(Q7B_ID(checked));
}
void on_tbLoops_clicked(bool checked = false)
{
  this->Q7B_on_tbLoops_clicked(Q7B_ID(checked));
}
void on_tbOutlets_clicked(bool checked = false)
{
  this->Q7B_on_tbOutlets_clicked(Q7B_ID(checked));
}
void on_tbShiftLeft_clicked(bool checked = false)
{
  this->Q7B_on_tbShiftLeft_clicked(Q7B_ID(checked));
}
void on_tbShiftRight_clicked(bool checked = false)
{
  this->Q7B_on_tbShiftRight_clicked(Q7B_ID(checked));
}
void on_tbSignals_clicked(bool checked = false)
{
  this->Q7B_on_tbSignals_clicked(Q7B_ID(checked));
}
void on_tbSyncActions_clicked(bool checked = false)
{
  this->Q7B_on_tbSyncActions_clicked(Q7B_ID(checked));
}
void on_tbSyncEvents_clicked(bool checked = false)
{
  this->Q7B_on_tbSyncEvents_clicked(Q7B_ID(checked));
}
void on_tbSyncOutlets_clicked(bool checked = false)
{
  this->Q7B_on_tbSyncOutlets_clicked(Q7B_ID(checked));
}
void on_tbSyncSignals_clicked(bool checked = false)
{
  this->Q7B_on_tbSyncSignals_clicked(Q7B_ID(checked));
}
void on_tbUncomment_clicked(bool checked = false)
{
  this->Q7B_on_tbUncomment_clicked(Q7B_ID(checked));
}

public:
void closeEvent(QCloseEvent *e)
{
  this->Q7B_CloseEvent(Q7B_ID(e));
}
public:
Q7B gr;
Q7B Q7BCodeBox;
Q7B tbDefinitions;
Q7B tbConditions;
Q7B tbLoops;
Q7B tbOutlets;
Q7B tbSignals;
Q7B tbEvents;
Q7B tbActions;
Q7B mActions;
Q7B lLine;
Q7B tbShiftLeft;
Q7B tbShiftRight;
Q7B tbComment;
Q7B tbUncomment;
Q7B bLoading;
Q7B nChanged;
Q7B toSave;
Q7B lInsertMessage;
Q7B mLoops;
Q7B mConditions;
Q7B mDefinitions;
Q7B mOutlets;
Q7B mSignals;
Q7B mSignals2;
Q7B sControlName;
Q7B mEvents;
Q7B cbDefinition;
Q7B cbCondition;
Q7B cbLoop;



public:
static void SingleTonInit(CodeView*me)
{
q7b_CodeView_Object = me;
q7b_CodeView_Object_Q7B = me->q7b_this;
q7b_CodeView_Object_Init = true;
me->Init();
}

static Q7B SingleTonObject()
{
SingleTonObjectPointer();
return q7b_CodeView_Object_Q7B;
}


static CodeView* SingleTonObjectPointer()
{
if (q7b_CodeView_Object_Finalized) return 0;
if (q7b_CodeView_Object == 0){
q7b_CodeView_Object_Init = true;
if (q7b_ui.contains("CodeView")){
  q7b_CodeView_Object = (CodeView *) (QWidget *) q7b_ui["CodeView"]->ref; 
} else {
  q7b_CodeView_Object = new CodeView(q7b_CodeView_Object_Q7B, 0); q7b_CodeView_Object->Init();
}
}
return q7b_CodeView_Object;
}


static CodeView* ClassPointer(Q7B o)
{
return (CodeView*) o->ref;
}


public:
void Q7B_CloseEvent(Q7B e);
Q7B GetActions();
Q7B GetEvents();
Q7B GetOutlets();
Q7B GetSignals();
CodeView(Q7B _q7b_this);
void InsertCode(Q7B s, Q7B bGoto);
void InsertCodeAtCurrentPosition(Q7B s);
void Q7B_LastPositionTimer();
Q7B Load(Q7B sFileName);
Q7B Save();
Q7B SaveIfChanged();
void Q7B_on_Q7BCodeBox_CopyAvailable(Q7B b);
void Q7B_on_Q7BCodeBox_GetCompletion(Q7B sCompletion);
void Q7B_on_Q7BCodeBox_GetCompletion2(Q7B sCompletion);
void Q7B_on_Q7BCodeBox_PasteAvailable(Q7B b);
void Q7B_on_Q7BCodeBox_RedoAvailable(Q7B b);
void Q7B_on_Q7BCodeBox_UndoAvailable(Q7B b);
void Q7B_on_Q7BCodeBox_cursorPositionChanged();
void Q7B_on_Q7BCodeBox_textChanged();
void Q7B_on_cbCondition_activated(Q7B Text);
void Q7B_on_cbDefinition_activated(Q7B Text);
void Q7B_on_cbLoop_activated(Q7B Text);
void Q7B_on_delayed();
void Q7B_on_gr_buttonClicked(Q7B theButton);
void Q7B_on_mActions_triggered(Q7B Action);
void Q7B_on_mConditions_triggered(Q7B Action);
void Q7B_on_mDefinitions_triggered(Q7B Action);
void Q7B_on_mEvents_triggered(Q7B Action);
void Q7B_on_mLoops_triggered(Q7B Action);
void Q7B_on_mOutlets_triggered(Q7B Action);
void Q7B_on_mSignals2_triggered(Q7B Action);
void Q7B_on_mSignals_triggered(Q7B Action);
void Q7B_on_singleshot();
void Q7B_on_tbActions_clicked(Q7B Checked);
void Q7B_on_tbComment_clicked(Q7B Checked);
void Q7B_on_tbConditions_clicked(Q7B Checked);
void Q7B_on_tbDefinitions_clicked(Q7B Checked);
void Q7B_on_tbEvents_clicked(Q7B Checked);
void Q7B_on_tbLoops_clicked(Q7B Checked);
void Q7B_on_tbOutlets_clicked(Q7B Checked);
void Q7B_on_tbShiftLeft_clicked(Q7B Checked);
void Q7B_on_tbShiftRight_clicked(Q7B Checked);
void Q7B_on_tbSignals_clicked(Q7B Checked);
void Q7B_on_tbSyncActions_clicked(Q7B Checked);
void Q7B_on_tbSyncEvents_clicked(Q7B Checked);
void Q7B_on_tbSyncOutlets_clicked(Q7B Checked);
void Q7B_on_tbSyncSignals_clicked(Q7B Checked);
void Q7B_on_tbUncomment_clicked(Q7B Checked);
private:
Q7B q7b_this;

};

#endif
