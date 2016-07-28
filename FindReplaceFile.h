
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
 #ifndef Q7B_findreplacefile_h
#define Q7B_findreplacefile_h

#include "Q7BRuntime.h"

namespace Ui {
  class FindReplaceFile;
}


class FindReplaceFile;
extern FindReplaceFile *Q7B_FindReplaceFile_Class(Q7B o);
extern Q7B Q7B_FindReplaceFile_Object();
extern FindReplaceFile *q7b_FindReplaceFile_Object;
extern Q7B q7b_FindReplaceFile_Object_Q7B;
extern bool q7b_FindReplaceFile_Object_Finalized;
extern bool q7b_FindReplaceFile_Object_Init;


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
class FindReplaceFile : public QDialog
{
Q_OBJECT
public:
FindReplaceFile(Q7B _q7b_this, QWidget *parent = 0);
FindReplaceFile(QWidget *parent = 0);
Ui::FindReplaceFile *ui;

~FindReplaceFile();
void closeEvent(QCloseEvent *e);
void Init();

public slots:
void on_FindInFile_clicked(bool checked = false)
{
  this->Q7B_on_FindInFile_clicked(Q7B_ID(checked));
}
void on_ReplaceInFile_clicked(bool checked = false)
{
  this->Q7B_on_ReplaceInFile_clicked(Q7B_ID(checked));
}
void on_tableWidget_cellDoubleClicked(int row, int column)
{
  this->Q7B_on_tableWidget_cellDoubleClicked(Q7B_ID(row), Q7B_ID(column));
}
public:
Q7B cbFind;
Q7B cbReplace;
Q7B cbIgnoreCase;
Q7B cbIgnoreCommentLines;
Q7B cbCurrentFileOnly;
Q7B lInfo;
Q7B tableWidget;
Q7B files;
Q7B bFirst;



public:
static void SingleTonInit(FindReplaceFile*me)
{
q7b_FindReplaceFile_Object = me;
q7b_FindReplaceFile_Object_Q7B = me->q7b_this;
q7b_FindReplaceFile_Object_Init = true;
me->Init();
}

static Q7B SingleTonObject()
{
SingleTonObjectPointer();
return q7b_FindReplaceFile_Object_Q7B;
}


static FindReplaceFile* SingleTonObjectPointer()
{
if (q7b_FindReplaceFile_Object_Finalized) return 0;
if (q7b_FindReplaceFile_Object == 0){
q7b_FindReplaceFile_Object_Init = true;
if (q7b_ui.contains("FindReplaceFile")){
  q7b_FindReplaceFile_Object = (FindReplaceFile *) (QWidget *) q7b_ui["FindReplaceFile"]->ref; 
} else {
  q7b_FindReplaceFile_Object = new FindReplaceFile(q7b_FindReplaceFile_Object_Q7B, 0); q7b_FindReplaceFile_Object->Init();
}
}
return q7b_FindReplaceFile_Object;
}


static FindReplaceFile* ClassPointer(Q7B o)
{
return (FindReplaceFile*) o->ref;
}


public:
FindReplaceFile(Q7B _q7b_this);
void ReloadData();
void Q7B_on_FindInFile_clicked(Q7B Checked);
void Q7B_on_ReplaceInFile_clicked(Q7B Checked);
void Q7B_on_tableWidget_cellDoubleClicked(Q7B row, Q7B column);
void perform_pbFindAll();
void perform_pbReplaceAll();
private:
Q7B q7b_this;

};

#endif
