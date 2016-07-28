
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


#include "FindReplaceFile.h"

#include "MainWindow.h"
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

FindReplaceFile *Q7B_FindReplaceFile_Class(Q7B o){ return FindReplaceFile::ClassPointer(o); }
Q7B Q7B_FindReplaceFile_Object(){ return FindReplaceFile::SingleTonObject(); }
extern FindReplaceFile *Q7B_FindReplaceFile_Class(Q7B o);
extern Q7B Q7B_FindReplaceFile_Object();
extern FindReplaceFile *Q7B_FindReplaceFile_Class(Q7B o);
extern Q7B Q7B_FindReplaceFile_Object();
FindReplaceFile *q7b_FindReplaceFile_Object = 0;
Q7B q7b_FindReplaceFile_Object_Q7B;
bool q7b_FindReplaceFile_Object_Finalized = false;
bool q7b_FindReplaceFile_Object_Init = false;

#include "ui_FindReplaceFile.h"

FindReplaceFile::FindReplaceFile(Q7B _q7b_this, QWidget *parent)
 : QDialog(parent), ui(new Ui::FindReplaceFile)
{
  q7b_this = _q7b_this;
  ui->setupUi(this);
}

FindReplaceFile::FindReplaceFile(QWidget *parent)
 : QDialog(parent), ui(new Ui::FindReplaceFile)
{
  ui->setupUi(this);
  Init();
}

FindReplaceFile::~FindReplaceFile()
{
  if (this == q7b_FindReplaceFile_Object){ q7b_FindReplaceFile_Object = 0; q7b_FindReplaceFile_Object_Q7B = Q7B_IDNIL(); }
  delete ui;
  q7b_this->ref = 0;
}

void FindReplaceFile::closeEvent(QCloseEvent *e)
{
  if (e->isAccepted() && this == q7b_FindReplaceFile_Object){ q7b_FindReplaceFile_Object = 0; q7b_FindReplaceFile_Object_Q7B = Q7B_IDNIL(); }
}

void FindReplaceFile::Init()
{
  if (q7b_FindReplaceFile_Object_Init){ q7b_FindReplaceFile_Object_Init = false; q7b_FindReplaceFile_Object_Q7B = q7b_this = Q7B(new Q7B_id(typeid(FindReplaceFile).name(), this)); } else q7b_this = Q7B(new Q7B_id(typeid(FindReplaceFile).name(), this)); 
  setObjectName("FindReplaceFile");
  Q7B q;
  QObject *o;
  o = findChild<QObject *>("cbCurrentFileOnly"); if (o){ q = Q7B(new Q7B_id(typeid(QCheckBox).name(), o, false)); cbCurrentFileOnly = q; } else { cbCurrentFileOnly = Q7B_IDNULL(); }
  o = findChild<QObject *>("cbFind"); if (o){ q = Q7B(new Q7B_id(typeid(QComboBox).name(), o, false)); cbFind = q; } else { cbFind = Q7B_IDNULL(); }
  o = findChild<QObject *>("cbIgnoreCase"); if (o){ q = Q7B(new Q7B_id(typeid(QCheckBox).name(), o, false)); cbIgnoreCase = q; } else { cbIgnoreCase = Q7B_IDNULL(); }
  o = findChild<QObject *>("cbIgnoreCommentLines"); if (o){ q = Q7B(new Q7B_id(typeid(QCheckBox).name(), o, false)); cbIgnoreCommentLines = q; } else { cbIgnoreCommentLines = Q7B_IDNULL(); }
  o = findChild<QObject *>("cbReplace"); if (o){ q = Q7B(new Q7B_id(typeid(QComboBox).name(), o, false)); cbReplace = q; } else { cbReplace = Q7B_IDNULL(); }
  o = findChild<QObject *>("lInfo"); if (o){ q = Q7B(new Q7B_id(typeid(QLabel).name(), o, false)); lInfo = q; } else { lInfo = Q7B_IDNULL(); }
  o = findChild<QObject *>("tableWidget"); if (o){ q = Q7B(new Q7B_id(typeid(QTableWidget).name(), o, false)); tableWidget = q; } else { tableWidget = Q7B_IDNULL(); }
  Q7B_ASSIGNMENT(&files, &(Q7B_ID(Q7B_List::init())));
  Q7B_ASSIGNMENT(&bFirst, &(Q7B_ID(true)));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "Init", "30", "0");
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "Init", "30", "1");
Q7B_QCOMBOBOX_SETNOCOMPLETER(cbFind);
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "Init", "31", "1");
Q7B_QCOMBOBOX_SETNOCOMPLETER(cbReplace);
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "Init", "33", "2");
}

FindReplaceFile::FindReplaceFile(Q7B _q7b_this)
{
  ui->setupUi(this);
}

void FindReplaceFile::ReloadData()
{
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "197", "0");
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "200", "1");
Q7B_HIDE(tableWidget);
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "202", "1");
Q7B_QTABLEWIDGET_ROWCOUNT(tableWidget, Q7B_ID((qint64) 0));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "203", "1");
Q7B_QTABLEWIDGET_CLEARCONTENTS(tableWidget);
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "204", "1");
Q7B_QTABLEWIDGET_ROWCOUNT(tableWidget, Q7B_LIST_LENGTH(files));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "210", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(files)));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "211", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "213", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "213", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "214", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__LIST(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "216", "1");
Q7B_QTABLEWIDGET_SETITEMTEXT(tableWidget, i, Q7B_ID((qint64) 0), Q7B_LIST_OBJECT(w, Q7B_ID((qint64) 2)));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "217", "1");
Q7B_QTABLEWIDGET_SETITEMFLAGS(tableWidget, i, Q7B_ID((qint64) 0), Q7B_OR(Q7B_ID((qint64) 1), Q7B_ID((qint64) 32)));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "220", "1");
Q7B_QTABLEWIDGET_SETITEMTEXT(tableWidget, i, Q7B_ID((qint64) 1), Q7B_FILENAME(Q7B_LIST_OBJECT(w, Q7B_ID((qint64) 0))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "221", "1");
Q7B_QTABLEWIDGET_SETITEMFLAGS(tableWidget, i, Q7B_ID((qint64) 1), Q7B_OR(Q7B_ID((qint64) 1), Q7B_ID((qint64) 32)));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "223", "1");
Q7B_QTABLEWIDGET_SETITEMTEXT(tableWidget, i, Q7B_ID((qint64) 2), Q7B_STRING(Q7B_LIST_OBJECT(w, Q7B_ID((qint64) 1)), Q7B_ID(false)));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "224", "1");
Q7B_QTABLEWIDGET_SETITEMFLAGS(tableWidget, i, Q7B_ID((qint64) 2), Q7B_OR(Q7B_ID((qint64) 1), Q7B_ID((qint64) 32)));

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "229", "1");
Q7B_QTABLEVIEW_SETCOLUMNWIDTH(tableWidget, Q7B_ID((qint64) 0), Q7B_ID((qint64) 250));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "230", "1");
Q7B_QTABLEVIEW_SETCOLUMNWIDTH(tableWidget, Q7B_ID((qint64) 1), Q7B_ID((qint64) 250));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "232", "1");
Q7B_SHOW(tableWidget);
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "ReloadData", "233", "2");
}

void FindReplaceFile::Q7B_on_FindInFile_clicked(Q7B Checked)
{
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "on_FindInFile_clicked", "36", "0");
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "on_FindInFile_clicked", "37", "1");
perform_pbFindAll();
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "on_FindInFile_clicked", "38", "2");
}

void FindReplaceFile::Q7B_on_ReplaceInFile_clicked(Q7B Checked)
{
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "on_ReplaceInFile_clicked", "122", "0");
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "on_ReplaceInFile_clicked", "122", "1");
perform_pbReplaceAll();
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "on_ReplaceInFile_clicked", "123", "2");
}

void FindReplaceFile::Q7B_on_tableWidget_cellDoubleClicked(Q7B row, Q7B column)
{
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "on_tableWidget_cellDoubleClicked", "238", "0");
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "on_tableWidget_cellDoubleClicked", "239", "1");
Q7B n; Q7B_ASSIGNMENT(&n, &(Q7B__INTEGER(row)));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "on_tableWidget_cellDoubleClicked", "241", "1");

if (Q7B_CBOOL(Q7B_AND(Q7B_GREATER(n, Q7B_ID((qint64) -1)), Q7B_SMALLER(n, Q7B_LIST_LENGTH(files))))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "on_tableWidget_cellDoubleClicked", "242", "1");
Q7B r; Q7B_ASSIGNMENT(&r, &(Q7B__LIST(Q7B_LIST_OBJECT(files, n))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "on_tableWidget_cellDoubleClicked", "243", "1");
Q7B f; Q7B_ASSIGNMENT(&f, &(Q7B__STRING(Q7B_LIST_OBJECT(r, Q7B_ID((qint64) 0)))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "on_tableWidget_cellDoubleClicked", "245", "1");
Q7B_MainWindow_Class(Q7B_MainWindow_Object())->ReopenCode(f, Q7B_LIST_OBJECT(r, Q7B_ID((qint64) 1)));

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "on_tableWidget_cellDoubleClicked", "247", "2");
}

void FindReplaceFile::perform_pbFindAll()
{
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "42", "0");
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "43", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_EQUAL(Q7B_QCOMBOBOX_LENGTH(cbFind), Q7B_ID((qint64) 0))) || Q7B_CBOOL(Q7B_UNEQUAL(Q7B_QCOMBOBOX_OBJECT(cbFind, Q7B_ID((qint64) 0)), Q7B_QCOMBOBOX_TEXT(cbFind))))))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "44", "1");
Q7B_QCOMBOBOX_APPEND(cbFind, Q7B_QCOMBOBOX_TEXT(cbFind));

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "48", "1");
Q7B_LIST_REMOVEALL(files);
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "50", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "51", "1");
Q7B n2; Q7B_ASSIGNMENT(&n2, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "53", "1");
Q7B sCurrentFilename; Q7B_ASSIGNMENT(&sCurrentFilename, &(Q7B__STRING(Q7B_FILENAME(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->getCurrentFileName()))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "57", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(Q7B_Project_Class(Q7B_Project_Object())->aProjectFiles), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "57", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "59", "1");
Q7B sProjectFile; Q7B_ASSIGNMENT(&sProjectFile, &(Q7B__STRING(Q7B_LIST_OBJECT(Q7B_Project_Class(Q7B_Project_Object())->aProjectFiles, i))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "60", "1");

if (Q7B_CBOOL(Q7B_ENDSWITH(sProjectFile, Q7B_ID(".Form.q7b"), Q7B_ID(true)))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "60", "1");
continue;

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "64", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_EQUAL(Q7B_QABSTRACTBUTTON_CHECKED(cbCurrentFileOnly), Q7B_ID(false))) || Q7B_CBOOL(Q7B_EQUAL(Q7B_FILENAME(sProjectFile), sCurrentFilename)))))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "66", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_READSTRING(Q7B_LIST_OBJECT(Q7B_Project_Class(Q7B_Project_Object())->aProjectFiles, i), Q7B_ID("")))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "71", "1");
Q7B n; Q7B_ASSIGNMENT(&n, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "73", "1");
while (Q7B_CBOOL(Q7B_ID(true))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "74", "1");
Q7B_ASSIGNMENT(&n, &Q7B__INTEGER(Q7B_INSTR(s, Q7B_QCOMBOBOX_TEXT(cbFind), n, Q7B_BOOLEAN(Q7B_QABSTRACTBUTTON_CHECKED(cbIgnoreCase), Q7B_ID(false)))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "78", "1");

if (Q7B_CBOOL(Q7B_GREATER(n, Q7B_ID((qint64) -1)))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "79", "1");
Q7B r; Q7B_ASSIGNMENT(&r, &(Q7B__INTEGER(Q7B_INSTR(s, Q7B_ID("\n"), Q7B_ADD(n, Q7B_ID((qint64) 1)), Q7B_ID(false)))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "80", "1");

if (Q7B_CBOOL(Q7B_GREATER(r, Q7B_LEN(s)))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "81", "1");
Q7B_ASSIGNMENT(&r, &Q7B__INTEGER(Q7B_LEN(s)));

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "83", "1");
Q7B l; Q7B_ASSIGNMENT(&l, &(Q7B__INTEGER(Q7B_ADD(Q7B_INSTRREV(s, Q7B_ID("\n"), n, Q7B_ID(false)), Q7B_ID((qint64) 1)))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "84", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_SMALLER(r, Q7B_ID((qint64) 0))) && Q7B_CBOOL(Q7B_GREATER(l, Q7B_ID((qint64) -1))))))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "85", "1");
Q7B_ASSIGNMENT(&r, &Q7B__INTEGER(Q7B_LEN(s)));

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "88", "1");

if (Q7B_CBOOL(Q7B_SMALLER(l, Q7B_ID((qint64) 1)))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "89", "1");
Q7B_ASSIGNMENT(&l, &Q7B__INTEGER(Q7B_ID((qint64) 0)));

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "91", "1");
Q7B ss; Q7B_ASSIGNMENT(&ss, &(Q7B__STRING(Q7B_MID(s, l, Q7B_SUB(r, l)))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "92", "1");

if (Q7B_CBOOL(Q7B_OR(Q7B_EQUAL(Q7B_QABSTRACTBUTTON_CHECKED(cbIgnoreCommentLines), Q7B_ID(false)), Q7B_NOT(Q7B_STARTSWITH(Q7B_TRIM(ss), Q7B_ID("'"), Q7B_ID(true)))))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "96", "1");
Q7B nLine; Q7B_ASSIGNMENT(&nLine, &(Q7B__INTEGER(Q7B_ADD(Q7B_COUNT(Q7B_LEFT(s, n), Q7B_ID("\n"), Q7B_ID(false)), Q7B_ID((qint64) 1)))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "97", "1");
Q7B_LIST_APPEND(files, Q7B_List::init(Q7B_LIST_OBJECT(Q7B_Project_Class(Q7B_Project_Object())->aProjectFiles, i), nLine, ss));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "98", "1");
Q7B_ASSIGNMENT(&n2, &Q7B__INTEGER(Q7B_ADD(n2, Q7B_ID((qint64) 1))));

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "100", "1");
Q7B_ASSIGNMENT(&n, &Q7B__INTEGER(Q7B_ADD(n, Q7B_ID((qint64) 1))));

} else {
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "102", "1");
break;

}

}

}

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "110", "1");

if (Q7B_CBOOL(Q7B_GREATER(n2, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "111", "1");
Q7B_QLABEL_TEXT(lInfo, Q7B_ADD(Q7B_ADD(Q7B_ID(""), n2), Q7B_ID(" found")));

} else {
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "113", "1");
Q7B_QLABEL_TEXT(lInfo, Q7B_ID("Not found"));

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "116", "1");
ReloadData();
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbFindAll", "118", "2");
}

void FindReplaceFile::perform_pbReplaceAll()
{
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "126", "0");
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "127", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_EQUAL(Q7B_QCOMBOBOX_LENGTH(cbFind), Q7B_ID((qint64) 0))) || Q7B_CBOOL(Q7B_UNEQUAL(Q7B_QCOMBOBOX_OBJECT(cbFind, Q7B_ID((qint64) 0)), Q7B_QCOMBOBOX_TEXT(cbFind))))))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "128", "1");
Q7B_QCOMBOBOX_APPEND(cbFind, Q7B_QCOMBOBOX_TEXT(cbFind));

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "130", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_EQUAL(Q7B_QCOMBOBOX_LENGTH(cbReplace), Q7B_ID((qint64) 0))) || Q7B_CBOOL(Q7B_UNEQUAL(Q7B_QCOMBOBOX_OBJECT(cbReplace, Q7B_ID((qint64) 0)), Q7B_QCOMBOBOX_TEXT(cbReplace))))))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "131", "1");
Q7B_QCOMBOBOX_APPEND(cbReplace, Q7B_QCOMBOBOX_TEXT(cbReplace));

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "135", "1");
Q7B_LIST_REMOVEALL(files);
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "137", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "138", "1");
Q7B n2; Q7B_ASSIGNMENT(&n2, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "140", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(Q7B_Project_Class(Q7B_Project_Object())->aProjectFiles), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "140", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "142", "1");
Q7B sProjectFile; Q7B_ASSIGNMENT(&sProjectFile, &(Q7B__STRING(Q7B_LIST_OBJECT(Q7B_Project_Class(Q7B_Project_Object())->aProjectFiles, i))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "143", "1");

if (Q7B_CBOOL(Q7B_ENDSWITH(sProjectFile, Q7B_ID(".Form.q7b"), Q7B_ID(true)))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "143", "1");
continue;

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "146", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_READSTRING(sProjectFile, Q7B_ID("")))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "147", "1");
Q7B n; Q7B_ASSIGNMENT(&n, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "148", "1");
Q7B bFound; Q7B_ASSIGNMENT(&bFound, &(Q7B__BOOLEAN(Q7B_ID(false))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "150", "1");
while (Q7B_CBOOL(Q7B_ID(true))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "151", "1");
Q7B_ASSIGNMENT(&n, &Q7B__INTEGER(Q7B_INSTR(s, Q7B_QCOMBOBOX_TEXT(cbFind), n, Q7B_BOOLEAN(Q7B_QABSTRACTBUTTON_CHECKED(cbIgnoreCase), Q7B_ID(false)))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "153", "1");

if (Q7B_CBOOL(Q7B_GREATER(n, Q7B_ID((qint64) -1)))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "154", "1");
Q7B_ASSIGNMENT(&bFound, &Q7B__BOOLEAN(Q7B_ID(true)));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "155", "1");
Q7B r; Q7B_ASSIGNMENT(&r, &(Q7B__INTEGER(Q7B_INSTR(s, Q7B_ID("\n"), Q7B_ADD(n, Q7B_ID((qint64) 1)), Q7B_ID(false)))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "156", "1");

if (Q7B_CBOOL(Q7B_GREATER(r, Q7B_LEN(s)))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "157", "1");
Q7B_ASSIGNMENT(&r, &Q7B__INTEGER(Q7B_LEN(s)));

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "159", "1");
Q7B l; Q7B_ASSIGNMENT(&l, &(Q7B__INTEGER(Q7B_ADD(Q7B_INSTRREV(s, Q7B_ID("\n"), n, Q7B_ID(false)), Q7B_ID((qint64) 1)))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "160", "1");

if (Q7B_CBOOL(Q7B_SMALLER(l, Q7B_ID((qint64) 1)))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "161", "1");
Q7B_ASSIGNMENT(&l, &Q7B__INTEGER(Q7B_ID((qint64) 0)));

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "163", "1");
Q7B ss; Q7B_ASSIGNMENT(&ss, &(Q7B__STRING(Q7B_MID(s, l, Q7B_SUB(r, l)))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "165", "1");
Q7B nLine; Q7B_ASSIGNMENT(&nLine, &(Q7B__INTEGER(Q7B_ADD(Q7B_COUNT(Q7B_LEFT(s, n), Q7B_ID("\n"), Q7B_ID(false)), Q7B_ID((qint64) 1)))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "166", "1");
Q7B_LIST_APPEND(files, Q7B_List::init(Q7B_LIST_OBJECT(Q7B_Project_Class(Q7B_Project_Object())->aProjectFiles, i), nLine, ss));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "167", "1");
Q7B_ASSIGNMENT(&n, &Q7B__INTEGER(Q7B_ADD(n, Q7B_ID((qint64) 1))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "168", "1");
Q7B_ASSIGNMENT(&n2, &Q7B__INTEGER(Q7B_ADD(n2, Q7B_ID((qint64) 1))));

} else {
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "170", "1");

if (Q7B_CBOOL(bFound)){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "172", "1");
Q7B_ASSIGNMENT(&s, &Q7B__STRING(Q7B_REPLACE(s, Q7B_QCOMBOBOX_TEXT(cbFind), Q7B_QCOMBOBOX_TEXT(cbReplace), Q7B_BOOLEAN(Q7B_QABSTRACTBUTTON_CHECKED(cbIgnoreCase), Q7B_ID(false)))));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "175", "1");
Q7B_WRITESTRING(s, Q7B_LIST_OBJECT(Q7B_Project_Class(Q7B_Project_Object())->aProjectFiles, i), Q7B_ID(""));
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "177", "1");
Q7B_MainWindow_Class(Q7B_MainWindow_Object())->ReopenCodeAndLoadBefore(Q7B_LIST_OBJECT(Q7B_Project_Class(Q7B_Project_Object())->aProjectFiles, i), Q7B_MINUS(Q7B_ID((qint64) 1)));

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "179", "1");
break;

}

}

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "185", "1");

if (Q7B_CBOOL(Q7B_GREATER(n2, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "186", "1");
Q7B_QLABEL_TEXT(lInfo, Q7B_ADD(Q7B_ADD(Q7B_ID(""), n2), Q7B_ID(" replaced")));

} else {
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "188", "1");
Q7B_QLABEL_TEXT(lInfo, Q7B_ID("Not found"));

}
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "191", "1");
ReloadData();
                                                                  Q7BS("FindReplaceFile.QDialog.q7b", "perform_pbReplaceAll", "193", "2");
}

