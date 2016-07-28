
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


#include "Project.h"

#include "MainWindow.h"
#include "Declare.h"
#include "Q7BProjectWindow.h"
#include "CodeView.h"
#include "Q7BFormDesigner.h"

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

Project *Q7B_Project_Class(Q7B o){ return Project::ClassPointer(o); }
Q7B Q7B_Project_Object(){ return Project::SingleTonObject(); }
extern Project *Q7B_Project_Class(Q7B o);
extern Q7B Q7B_Project_Object();
extern Project *Q7B_Project_Class(Q7B o);
extern Q7B Q7B_Project_Object();
extern Project *Q7B_Project_Class(Q7B o);
extern Q7B Q7B_Project_Object();
extern Project *Q7B_Project_Class(Q7B o);
extern Q7B Q7B_Project_Object();
extern Project *Q7B_Project_Class(Q7B o);
extern Q7B Q7B_Project_Object();
Project *q7b_Project_Object = 0;
Q7B q7b_Project_Object_Q7B;
bool q7b_Project_Object_Finalized = false;
bool q7b_Project_Object_Init = false;

Project::Project(QObject *parent)
 : Module(parent)
{
  Init();
}

Project::~Project()
{
  if (this == q7b_Project_Object){ q7b_Project_Object = 0; q7b_Project_Object_Q7B = Q7B_IDNIL(); }
  q7b_this->ref = 0;
}

Project::Project(Q7B _q7b_this)
{
  q7b_this = _q7b_this;
}

void Project::Init()
{
  if (q7b_Project_Object_Init){ q7b_Project_Object_Init = false; q7b_Project_Object_Q7B = q7b_this = Q7B(new Q7B_id(typeid(Project).name(), this)); } else q7b_this = Q7B(new Q7B_id(typeid(Project).name(), this)); 
  setObjectName("Project");
  Q7B_ASSIGNMENT(&sProjectPath, &(Q7B_ID("")));
  Q7B_ASSIGNMENT(&sProjectName, &(Q7B_ID("")));
  Q7B_ASSIGNMENT(&aProjectFiles, &(Q7B_ID(Q7B_List::init())));
  Q7B_ASSIGNMENT(&aQ7BFormDesigner, &(Q7B_IDNULL()));
}

Q7B Project::IsOpened()
{
                                                                  Q7BS("Project.Module.q7b", "IsOpened", "202", "0");
                                                                  Q7BS("Project.Module.q7b", "IsOpened", "202", "1");
return Q7B_ID(Q7B_GREATER(Q7B_LIST_LENGTH(aProjectFiles), Q7B_ID((qint64) 0)));
return Q7B_ID(Q7B_IDNULL());
                                                                  Q7BS("Project.Module.q7b", "IsOpened", "203", "2");
}

Q7B Project::IsSingleFileProject()
{
                                                                  Q7BS("Project.Module.q7b", "IsSingleFileProject", "37", "0");
                                                                  Q7BS("Project.Module.q7b", "IsSingleFileProject", "37", "1");
return Q7B_ID(Q7B_FILE(sProjectPath));
return Q7B_ID(Q7B_IDNULL());
                                                                  Q7BS("Project.Module.q7b", "IsSingleFileProject", "38", "2");
}

Q7B Project::Open(Q7B Path)
{
                                                                  Q7BS("Project.Module.q7b", "Open", "19", "0");
                                                                  Q7BS("Project.Module.q7b", "Open", "25", "1");
Q7B_ASSIGNMENT(&sProjectPath, &Q7B__STRING(Path));
                                                                  Q7BS("Project.Module.q7b", "Open", "26", "1");

if (Q7B_CBOOL(OpenInternal(sProjectPath))){
                                                                  Q7BS("Project.Module.q7b", "Open", "29", "1");
Q7B_MainWindow_Class(Q7B_MainWindow_Object())->UpdateRecentProjects(Path);

} else {

}
return Q7B_ID(Q7B_IDNULL());
                                                                  Q7BS("Project.Module.q7b", "Open", "34", "2");
}

void Project::OpenCodeView(Q7B f)
{
                                                                  Q7BS("Project.Module.q7b", "OpenCodeView", "209", "0");
                                                                  Q7BS("Project.Module.q7b", "OpenCodeView", "210", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_CONTAINS(f, Q7B_ID("/"), Q7B_ID(true))))){
                                                                  Q7BS("Project.Module.q7b", "OpenCodeView", "211", "1");
Q7B_ASSIGNMENT(&f, &Q7B__ID(Q7B_ADD(Q7B_ADD(sProjectPath, Q7B_ID("/")), f)));

}
                                                                  Q7BS("Project.Module.q7b", "OpenCodeView", "215", "1");
Q7B cw; Q7B_ASSIGNMENT(&cw, &(Q7B__CODEVIEW(Q7B_OPENMDI(Q7B_ID("CodeView")))));
                                                                  Q7BS("Project.Module.q7b", "OpenCodeView", "217", "1");
Q7B_CodeView_Class(cw)->Load(f);
                                                                  Q7BS("Project.Module.q7b", "OpenCodeView", "219", "2");
}

void Project::OpenFormDesigner(Q7B f)
{
                                                                  Q7BS("Project.Module.q7b", "OpenFormDesigner", "257", "0");
                                                                  Q7BS("Project.Module.q7b", "OpenFormDesigner", "258", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_CONTAINS(f, Q7B_ID("/"), Q7B_ID(true))))){
                                                                  Q7BS("Project.Module.q7b", "OpenFormDesigner", "259", "1");
Q7B_ASSIGNMENT(&f, &Q7B__ID(Q7B_ADD(Q7B_ADD(sProjectPath, Q7B_ID("/")), f)));

}
                                                                  Q7BS("Project.Module.q7b", "OpenFormDesigner", "262", "1");
Q7B aQ7BFormDesigner; Q7B_ASSIGNMENT(&aQ7BFormDesigner, &(Q7B__Q7BFORMDESIGNER(Q7B_ID("Q7BFormDesigner", Q7B_connectSlotsByNameForGivenObjectAndReturnIt(this, new Q7BFormDesigner(), "aQ7BFormDesigner")))));
                                                                  Q7BS("Project.Module.q7b", "OpenFormDesigner", "264", "1");
Q7B_Q7BFormDesigner_Class(aQ7BFormDesigner)->loadForm(Q7B_CQSTRING(f));
                                                                  Q7BS("Project.Module.q7b", "OpenFormDesigner", "265", "1");
Q7B_PROPERTY(aQ7BFormDesigner, Q7B_ID("PathFileName"), f);
                                                                  Q7BS("Project.Module.q7b", "OpenFormDesigner", "266", "1");
Q7B_QMDIAREA_ADDSUBWINDOW(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->mdiArea, aQ7BFormDesigner);
                                                                  Q7BS("Project.Module.q7b", "OpenFormDesigner", "268", "2");
}

Q7B Project::OpenInternal(Q7B Path)
{
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "41", "0");
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "41", "1");
Q7B sGlobalPath; Q7B_ASSIGNMENT(&sGlobalPath, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "45", "1");

if (Q7B_CBOOL(Q7B_FILE(Path))){
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "47", "1");
Q7B_CLOSEALLMDI();
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "49", "1");
Q7B_LIST_REMOVEALL(aProjectFiles);
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "52", "1");

if (Q7B_CBOOL(Q7B_ENDSWITH(Path, Q7B_ID(".Form.q7b"), Q7B_ID(true)))){
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "53", "1");
OpenFormDesigner(Path);

} else {
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "55", "1");
OpenCodeView(Path);

}
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "59", "1");
Q7B_LIST_APPEND(aProjectFiles, Path);

} else {
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "66", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_DIR(Path, Q7B_ID(false))))){
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "67", "1");
return Q7B_ID(Q7B_ID(false));

}
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "70", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_DIR_LIST(Q7B_Dir_Object(), Path))));
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "72", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "73", "1");
Q7B bValid; Q7B_ASSIGNMENT(&bValid, &(Q7B__BOOLEAN(Q7B_ID(false))));
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "74", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("Project.Module.q7b", "OpenInternal", "74", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "75", "1");

if (Q7B_CBOOL(Q7B_ENDSWITH(Q7B_LIST_OBJECT(a, i), Q7B_ID("Global.QObject.q7b"), Q7B_ID(true)))){
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "76", "1");
Q7B_ASSIGNMENT(&bValid, &Q7B__BOOLEAN(Q7B_ID(true)));
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "77", "1");
break;

}

}
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "80", "1");

if (Q7B_CBOOL(Q7B_EQUAL(bValid, Q7B_ID(false)))){
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "81", "1");
Q7B__MSGBOX(Q7B_ID("Selected folder is not a valid Q7Basic project"));
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "82", "1");
return Q7B_ID(Q7B_ID(false));

}
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "87", "1");
Q7B_CLOSEALLMDI();
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "99", "1");
Q7B_LIST_REMOVEALL(aProjectFiles);
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "101", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("Project.Module.q7b", "OpenInternal", "101", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "103", "1");

if (Q7B_CBOOL(Q7B_ISDIR(Q7B_LIST_OBJECT(a, i)))){
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "104", "1");
continue;

}
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "107", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_ENDSWITH(Q7B_LIST_OBJECT(a, i), Q7B_ID(".q7b"), Q7B_ID(true))))){
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "108", "1");
continue;

}
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "128", "1");

if (Q7B_CBOOL(Q7B_ENDSWITH(Q7B_LIST_OBJECT(a, i), Q7B_ID(".Form.q7b"), Q7B_ID(true)))){
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "129", "1");
OpenFormDesigner(Q7B_LIST_OBJECT(a, i));

} else {
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "131", "1");
OpenCodeView(Q7B_LIST_OBJECT(a, i));

}
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "138", "1");
Q7B_LIST_APPEND(aProjectFiles, Q7B_LIST_OBJECT(a, i));

}
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "155", "1");
Q7B aa; Q7B_ASSIGNMENT(&aa, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "157", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(aa), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("Project.Module.q7b", "OpenInternal", "157", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "158", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_LIST_OBJECT(aa, i))));
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "159", "1");

if (Q7B_CBOOL(Q7B_ENDSWITH(Q7B_PROPERTY(w, Q7B_ID("PathFileName")), Q7B_ID("Global.QObject.q7b"), Q7B_ID(true)))){
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "160", "1");
Q7B_SETFOCUSMDI(w);
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "161", "1");
Q7B_ASSIGNMENT(&sGlobalPath, &Q7B__STRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName"))));
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "164", "1");
break;

}

}

}
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "172", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_ID("Serial")))));
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "173", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_LEN(s), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "177", "1");

if (Q7B_CBOOL(Q7B_OS_ISMAC(Q7B_OS_Object()))){
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "178", "1");
Q7B_MainWindow_Class(Q7B_MainWindow_Object())->SetWindowTitle(Q7B_CONCAT(Q7B_CONCAT(Q7B_FILENAME(Path), Q7B_ID("    ")), Path));

} else {
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "180", "1");
Q7B_MainWindow_Class(Q7B_MainWindow_Object())->SetWindowTitle(Q7B_CONCAT(Q7B_ADD(Q7B_FILENAME(Path), Q7B_ID(" - Basic For Qt    ")), Path));

}

} else {
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "185", "1");

if (Q7B_CBOOL(Q7B_OS_ISMAC(Q7B_OS_Object()))){
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "186", "1");
Q7B_MainWindow_Class(Q7B_MainWindow_Object())->SetWindowTitle(Q7B_CONCAT(Q7B_ADD(Q7B_FILENAME(Path), Q7B_ID(" (NOT REGISTERED)    ")), Path));

} else {
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "188", "1");
Q7B_MainWindow_Class(Q7B_MainWindow_Object())->SetWindowTitle(Q7B_CONCAT(Q7B_ADD(Q7B_FILENAME(Path), Q7B_ID(" - Basic For Qt (NOT REGISTERED)    ")), Path));

}

}
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "193", "1");
Q7B_MainWindow_Class(Q7B_MainWindow_Object())->theProjectWindow_PerformOpenProject(Path);
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "195", "1");
Q7B_Q7BProjectWindow_Class(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->theProjectWindow)->PerformSelect(Q7B_CQSTRING(sGlobalPath));
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "197", "1");
return Q7B_ID(Q7B_ID(true));
return Q7B_ID(Q7B_IDNULL());
                                                                  Q7BS("Project.Module.q7b", "OpenInternal", "199", "2");
}

void Project::SaveAll()
{
                                                                  Q7BS("Project.Module.q7b", "SaveAll", "273", "0");
                                                                  Q7BS("Project.Module.q7b", "SaveAll", "274", "1");
Q7B b; Q7B_ASSIGNMENT(&b, &(Q7B__BOOLEAN(Q7B_ID(false))));
                                                                  Q7BS("Project.Module.q7b", "SaveAll", "276", "1");
Q7B aa; Q7B_ASSIGNMENT(&aa, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("Project.Module.q7b", "SaveAll", "277", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("Project.Module.q7b", "SaveAll", "279", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(aa), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("Project.Module.q7b", "SaveAll", "279", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("Project.Module.q7b", "SaveAll", "281", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_LIST_OBJECT(aa, i))));
                                                                  Q7BS("Project.Module.q7b", "SaveAll", "283", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_CLASSNAME(w), Q7B_ID("Q7BFormDesigner")))){
                                                                  Q7BS("Project.Module.q7b", "SaveAll", "284", "1");
Q7B ff; Q7B_ASSIGNMENT(&ff, &(Q7B__Q7BFORMDESIGNER(w)));
                                                                  Q7BS("Project.Module.q7b", "SaveAll", "285", "1");
Q7B_Q7BFormDesigner_Class(ff)->saveForm(Q7B_CQSTRING(Q7B_PROPERTY(ff, Q7B_ID("PathFileName"))));

} else if (Q7B_CBOOL(Q7B_EQUAL(Q7B_CLASSNAME(w), Q7B_ID("Q7BCodeView")))){
                                                                  Q7BS("Project.Module.q7b", "SaveAll", "287", "1");
Q7B cw; Q7B_ASSIGNMENT(&cw, &(Q7B__CODEVIEW(w)));
                                                                  Q7BS("Project.Module.q7b", "SaveAll", "288", "1");
Q7B_ASSIGNMENT(&b, &Q7B__BOOLEAN(Q7B_CodeView_Class(cw)->SaveIfChanged()));

}

}
                                                                  Q7BS("Project.Module.q7b", "SaveAll", "293", "2");
}

void Project::UpdateProjectFilesList()
{
                                                                  Q7BS("Project.Module.q7b", "UpdateProjectFilesList", "296", "0");
                                                                  Q7BS("Project.Module.q7b", "UpdateProjectFilesList", "296", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_DIR_LIST(Q7B_Dir_Object(), Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))));
                                                                  Q7BS("Project.Module.q7b", "UpdateProjectFilesList", "298", "1");
Q7B_LIST_REMOVEALL(aProjectFiles);
                                                                  Q7BS("Project.Module.q7b", "UpdateProjectFilesList", "300", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("Project.Module.q7b", "UpdateProjectFilesList", "302", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("Project.Module.q7b", "UpdateProjectFilesList", "302", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("Project.Module.q7b", "UpdateProjectFilesList", "304", "1");

if (Q7B_CBOOL(Q7B_ISDIR(Q7B_LIST_OBJECT(a, i)))){
                                                                  Q7BS("Project.Module.q7b", "UpdateProjectFilesList", "305", "1");
continue;

}
                                                                  Q7BS("Project.Module.q7b", "UpdateProjectFilesList", "308", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_ENDSWITH(Q7B_LIST_OBJECT(a, i), Q7B_ID(".q7b"), Q7B_ID(true))))){
                                                                  Q7BS("Project.Module.q7b", "UpdateProjectFilesList", "309", "1");
continue;

}
                                                                  Q7BS("Project.Module.q7b", "UpdateProjectFilesList", "312", "1");
Q7B_LIST_APPEND(aProjectFiles, Q7B_REPLACE(Q7B_LIST_OBJECT(a, i), Q7B_ID("\\"), Q7B_ID("/"), Q7B_ID(true)));

}
                                                                  Q7BS("Project.Module.q7b", "UpdateProjectFilesList", "315", "2");
}

void Project::Q7B_on_aQ7BFormDesigner_addSignal(Q7B sFileName, Q7B sCode)
{
                                                                  Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "225", "0");
                                                                  Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "229", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/")), Q7B_FILEBASENAME(sFileName)), Q7B_ID(".FormClass.q7b")))));
                                                                  Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "230", "1");
Q7B_ASSIGNMENT(&s, &Q7B__STRING(Q7B_REPLACE(s, Q7B_ID("\\"), Q7B_ID("/"), Q7B_ID(true))));
                                                                  Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "232", "1");
Q7B_ASSIGNMENT(&sCode, &Q7B__ID(Q7B_CONCAT(Q7B_CONCAT(Q7B_ID("\nSignal "), sCode), Q7B_ID("\n\nEnd Signal\n"))));
                                                                  Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "234", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "235", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "236", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "236", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "237", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "239", "1");
Q7B ss; Q7B_ASSIGNMENT(&ss, &(Q7B__STRING(Q7B_REPLACE(Q7B_PROPERTY(w, Q7B_ID("PathFileName")), Q7B_ID("\\"), Q7B_ID("/"), Q7B_ID(true)))));
                                                                  Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "241", "1");

if (Q7B_CBOOL(Q7B_EQUAL(s, ss))){
                                                                  Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "243", "1");
Q7B_SETFOCUSMDI(w);
                                                                  Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "244", "1");
Q7B_Q7BProjectWindow_Class(Q7B_MainWindow_Class(Q7B_MainWindow_Object())->theProjectWindow)->PerformSelect(Q7B_CQSTRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName"))));
                                                                  Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "246", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__CODEVIEW(w)));
                                                                  Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "247", "1");
Q7B_CodeView_Class(cb)->InsertCode(sCode, Q7B_ID(true));
                                                                  Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "249", "1");
break;

}

}
                                                                  Q7BS("Project.Module.q7b", "on_aQ7BFormDesigner_addSignal", "254", "2");
}

