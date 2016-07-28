
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
 #ifndef Q7B_mainwindow_h
#define Q7B_mainwindow_h

#include "Q7BRuntime.h"

namespace Ui {
  class MainWindow;
}


class MainWindow;
extern MainWindow *Q7B_MainWindow_Class(Q7B o);
extern Q7B Q7B_MainWindow_Object();
extern MainWindow *q7b_MainWindow_Object;
extern Q7B q7b_MainWindow_Object_Q7B;
extern bool q7b_MainWindow_Object_Finalized;
extern bool q7b_MainWindow_Object_Init;


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
class MainWindow : public QMainWindow
{
Q_OBJECT
public:
MainWindow(Q7B _q7b_this, QWidget *parent = 0);
MainWindow(QWidget *parent = 0);
Ui::MainWindow *ui;

void Init();

public slots:
void on_Compiler_BreakpointReached(QString sFile,QString sLine)
{
  this->Q7B_on_Compiler_BreakpointReached(Q7B_ID(sFile), Q7B_ID(sLine));
}
void on_Compiler_Compiled(QString sPathFileName,int nCountFilesCompiled)
{
  this->Q7B_on_Compiler_Compiled(Q7B_ID(sPathFileName), Q7B_ID(nCountFilesCompiled));
}
void on_Compiler_CompilerOrApplicationFinished(bool bApplication)
{
  this->Q7B_on_Compiler_CompilerOrApplicationFinished(Q7B_ID(bApplication));
}
void on_Compiler_Error(QString sError)
{
  this->Q7B_on_Compiler_Error(Q7B_ID(sError));
}
void on_Compiler_Finished(int nCountFilesCompiled)
{
  this->Q7B_on_Compiler_Finished(Q7B_ID(nCountFilesCompiled));
}
void on_Compiler_ReadyForDebugging()
{
  this->Q7B_on_Compiler_ReadyForDebugging();
}
void on_Compiler_StandardError(QString s)
{
  this->Q7B_on_Compiler_StandardError(Q7B_ID(s));
}
void on_Compiler_StandardErrorOfCompiler(QString s)
{
  this->Q7B_on_Compiler_StandardErrorOfCompiler(Q7B_ID(s));
}
void on_Compiler_StandardOutput(QString s)
{
  this->Q7B_on_Compiler_StandardOutput(Q7B_ID(s));
}
void on_Compiler_StandardOutputOfCompiler(QString s)
{
  this->Q7B_on_Compiler_StandardOutputOfCompiler(Q7B_ID(s));
}
void on_Compiler_Started(int nCountFilesToCompile)
{
  this->Q7B_on_Compiler_Started(Q7B_ID(nCountFilesToCompile));
}
void on_ProjectOpen()
{
  this->Q7B_on_ProjectOpen();
}
void on_actionAbout_Q7Basic_triggered(bool Checked)
{
  this->Q7B_on_actionAbout_Q7Basic_triggered(Q7B_ID(Checked));
}
void on_actionApplication_QApplication_triggered(bool Checked)
{
  this->Q7B_on_actionApplication_QApplication_triggered(Q7B_ID(Checked));
}
void on_actionBinary_triggered(bool Checked)
{
  this->Q7B_on_actionBinary_triggered(Q7B_ID(Checked));
}
void on_actionBug_Report_triggered(bool Checked)
{
  this->Q7B_on_actionBug_Report_triggered(Q7B_ID(Checked));
}
void on_actionBuild_triggered(bool Checked)
{
  this->Q7B_on_actionBuild_triggered(Q7B_ID(Checked));
}
void on_actionClean_RebuildAll_triggered(bool Checked)
{
  this->Q7B_on_actionClean_RebuildAll_triggered(Q7B_ID(Checked));
}
void on_actionComment_triggered(bool Checked)
{
  this->Q7B_on_actionComment_triggered(Q7B_ID(Checked));
}
void on_actionContribute_triggered(bool Checked)
{
  this->Q7B_on_actionContribute_triggered(Q7B_ID(Checked));
}
void on_actionCopy_2_triggered(bool Checked)
{
  this->Q7B_on_actionCopy_2_triggered(Q7B_ID(Checked));
}
void on_actionCopy_triggered(bool Checked)
{
  this->Q7B_on_actionCopy_triggered(Q7B_ID(Checked));
}
void on_actionCpp_triggered(bool Checked)
{
  this->Q7B_on_actionCpp_triggered(Q7B_ID(Checked));
}
void on_actionCut_triggered(bool Checked)
{
  this->Q7B_on_actionCut_triggered(Q7B_ID(Checked));
}
void on_actionDebug_triggered(bool Checked)
{
  this->Q7B_on_actionDebug_triggered(Q7B_ID(Checked));
}
void on_actionDelete_Current_File_triggered(bool Checked)
{
  this->Q7B_on_actionDelete_Current_File_triggered(Q7B_ID(Checked));
}
void on_actionDelete_triggered(bool Checked)
{
  this->Q7B_on_actionDelete_triggered(Q7B_ID(Checked));
}
void on_actionDuplicate_Current_File_triggered(bool Checked)
{
  this->Q7B_on_actionDuplicate_Current_File_triggered(Q7B_ID(Checked));
}
void on_actionFind_Definition_triggered(bool Checked)
{
  this->Q7B_on_actionFind_Definition_triggered(Q7B_ID(Checked));
}
void on_actionFind_File_Replace_File_triggered(bool Checked)
{
  this->Q7B_on_actionFind_File_Replace_File_triggered(Q7B_ID(Checked));
}
void on_actionFind_Next_triggered(bool Checked)
{
  this->Q7B_on_actionFind_Next_triggered(Q7B_ID(Checked));
}
void on_actionFind_Replace_triggered(bool Checked)
{
  this->Q7B_on_actionFind_Replace_triggered(Q7B_ID(Checked));
}
void on_actionGeneral_Manual_triggered(bool Checked)
{
  this->Q7B_on_actionGeneral_Manual_triggered(Q7B_ID(Checked));
}
void on_actionGlobal_triggered(bool Checked)
{
  this->Q7B_on_actionGlobal_triggered(Q7B_ID(Checked));
}
void on_actionGo_To_Line_triggered(bool Checked)
{
  this->Q7B_on_actionGo_To_Line_triggered(Q7B_ID(Checked));
}
void on_actionLanguage_Reference_triggered(bool Checked)
{
  this->Q7B_on_actionLanguage_Reference_triggered(Q7B_ID(Checked));
}
void on_actionLast_Error_triggered(bool Checked)
{
  this->Q7B_on_actionLast_Error_triggered(Q7B_ID(Checked));
}
void on_actionLast_Position_triggered(bool Checked)
{
  this->Q7B_on_actionLast_Position_triggered(Q7B_ID(Checked));
}
void on_actionLicense_triggered(bool Checked)
{
  this->Q7B_on_actionLicense_triggered(Q7B_ID(Checked));
}
void on_actionLog_Window_triggered(bool Checked)
{
  this->Q7B_on_actionLog_Window_triggered(Q7B_ID(Checked));
}
void on_actionMainWindow_ui_2_triggered(bool Checked)
{
  this->Q7B_on_actionMainWindow_ui_2_triggered(Q7B_ID(Checked));
}
void on_actionMore_Manuals_triggered(bool Checked)
{
  this->Q7B_on_actionMore_Manuals_triggered(Q7B_ID(Checked));
}
void on_actionMySQL_triggered(bool Checked)
{
  this->Q7B_on_actionMySQL_triggered(Q7B_ID(Checked));
}
void on_actionNew_Class_triggered(bool Checked)
{
  this->Q7B_on_actionNew_Class_triggered(Q7B_ID(Checked));
}
void on_actionNew_File_With_triggered(bool Checked)
{
  this->Q7B_on_actionNew_File_With_triggered(Q7B_ID(Checked));
}
void on_actionNew_Form_2_triggered(bool Checked)
{
  this->Q7B_on_actionNew_Form_2_triggered(Q7B_ID(Checked));
}
void on_actionNew_Module_triggered(bool Checked)
{
  this->Q7B_on_actionNew_Module_triggered(Q7B_ID(Checked));
}
void on_actionNew_Project_triggered(bool Checked)
{
  this->Q7B_on_actionNew_Project_triggered(Q7B_ID(Checked));
}
void on_actionNew_Single_File_Project_triggered(bool Checked)
{
  this->Q7B_on_actionNew_Single_File_Project_triggered(Q7B_ID(Checked));
}
void on_actionNew_uiCode_triggered(bool Checked)
{
  this->Q7B_on_actionNew_uiCode_triggered(Q7B_ID(Checked));
}
void on_actionOpen_Project_With_Qt_Creator_triggered(bool Checked)
{
  this->Q7B_on_actionOpen_Project_With_Qt_Creator_triggered(Q7B_ID(Checked));
}
void on_actionOpen_Project_With_Visual_C_triggered(bool Checked)
{
  this->Q7B_on_actionOpen_Project_With_Visual_C_triggered(Q7B_ID(Checked));
}
void on_actionOpen_Project_triggered(bool Checked)
{
  this->Q7B_on_actionOpen_Project_triggered(Q7B_ID(Checked));
}
void on_actionOpen_Single_File_Project_triggered(bool Checked)
{
  this->Q7B_on_actionOpen_Single_File_Project_triggered(Q7B_ID(Checked));
}
void on_actionPaste_triggered(bool Checked)
{
  this->Q7B_on_actionPaste_triggered(Q7B_ID(Checked));
}
void on_actionPostgreSQL_2_triggered(bool Checked)
{
  this->Q7B_on_actionPostgreSQL_2_triggered(Q7B_ID(Checked));
}
void on_actionPreferences_triggered(bool Checked)
{
  this->Q7B_on_actionPreferences_triggered(Q7B_ID(Checked));
}
void on_actionPrint_2_triggered(bool Checked)
{
  this->Q7B_on_actionPrint_2_triggered(Q7B_ID(Checked));
}
void on_actionProperties_triggered(bool Checked)
{
  this->Q7B_on_actionProperties_triggered(Q7B_ID(Checked));
}
void on_actionQ7Basic_Essentials_triggered(bool Checked)
{
  this->Q7B_on_actionQ7Basic_Essentials_triggered(Q7B_ID(Checked));
}
void on_actionQ7Basic_Tutorial_triggered(bool Checked)
{
  this->Q7B_on_actionQ7Basic_Tutorial_triggered(Q7B_ID(Checked));
}
void on_actionQDialog_triggered(bool Checked)
{
  this->Q7B_on_actionQDialog_triggered(Q7B_ID(Checked));
}
void on_actionQObject_triggered(bool Checked)
{
  this->Q7B_on_actionQObject_triggered(Q7B_ID(Checked));
}
void on_actionQWidget_triggered(bool Checked)
{
  this->Q7B_on_actionQWidget_triggered(Q7B_ID(Checked));
}
void on_actionQt_DesignerHelp_triggered(bool Checked)
{
  this->Q7B_on_actionQt_DesignerHelp_triggered(Q7B_ID(Checked));
}
void on_actionQt_Designer_for_MainWindow_ui_triggered(bool Checked)
{
  this->Q7B_on_actionQt_Designer_for_MainWindow_ui_triggered(Q7B_ID(Checked));
}
void on_actionQt_Designer_triggered(bool Checked)
{
  this->Q7B_on_actionQt_Designer_triggered(Q7B_ID(Checked));
}
void on_actionQt_Quick_Manual_triggered(bool Checked)
{
  this->Q7B_on_actionQt_Quick_Manual_triggered(Q7B_ID(Checked));
}
void on_actionQt_Quick_triggered(bool Checked)
{
  this->Q7B_on_actionQt_Quick_triggered(Q7B_ID(Checked));
}
void on_actionQt_Reference_Documentation_triggered(bool Checked)
{
  this->Q7B_on_actionQt_Reference_Documentation_triggered(Q7B_ID(Checked));
}
void on_actionQuick_Start_triggered(bool Checked)
{
  this->Q7B_on_actionQuick_Start_triggered(Q7B_ID(Checked));
}
void on_actionQuit_triggered(bool Checked)
{
  this->Q7B_on_actionQuit_triggered(Q7B_ID(Checked));
}
void on_actionReadme_triggered(bool Checked)
{
  this->Q7B_on_actionReadme_triggered(Q7B_ID(Checked));
}
void on_actionRedo_triggered(bool Checked)
{
  this->Q7B_on_actionRedo_triggered(Q7B_ID(Checked));
}
void on_actionRegister_triggered(bool Checked)
{
  this->Q7B_on_actionRegister_triggered(Q7B_ID(Checked));
}
void on_actionRename_Current_File_triggered(bool Checked)
{
  this->Q7B_on_actionRename_Current_File_triggered(Q7B_ID(Checked));
}
void on_actionReplace_File_triggered(bool Checked)
{
  this->Q7B_on_actionReplace_File_triggered(Q7B_ID(Checked));
}
void on_actionResources_triggered(bool Checked)
{
  this->Q7B_on_actionResources_triggered(Q7B_ID(Checked));
}
void on_actionRun_To_Cursor_triggered(bool Checked)
{
  this->Q7B_on_actionRun_To_Cursor_triggered(Q7B_ID(Checked));
}
void on_actionRun_triggered(bool Checked)
{
  this->Q7B_on_actionRun_triggered(Q7B_ID(Checked));
}
void on_actionSQLite_triggered(bool Checked)
{
  this->Q7B_on_actionSQLite_triggered(Q7B_ID(Checked));
}
void on_actionSave_triggered(bool Checked)
{
  this->Q7B_on_actionSave_triggered(Q7B_ID(Checked));
}
void on_actionSelect_All_triggered(bool Checked)
{
  this->Q7B_on_actionSelect_All_triggered(Q7B_ID(Checked));
}
void on_actionShift_Left_triggered(bool Checked)
{
  this->Q7B_on_actionShift_Left_triggered(Q7B_ID(Checked));
}
void on_actionShift_Right_triggered(bool Checked)
{
  this->Q7B_on_actionShift_Right_triggered(Q7B_ID(Checked));
}
void on_actionShow_Code_triggered(bool Checked)
{
  this->Q7B_on_actionShow_Code_triggered(Q7B_ID(Checked));
}
void on_actionShow_Form_triggered(bool Checked)
{
  this->Q7B_on_actionShow_Form_triggered(Q7B_ID(Checked));
}
void on_actionShow_Project_Folder_triggered(bool Checked)
{
  this->Q7B_on_actionShow_Project_Folder_triggered(Q7B_ID(Checked));
}
void on_actionStep_Into_triggered(bool Checked)
{
  this->Q7B_on_actionStep_Into_triggered(Q7B_ID(Checked));
}
void on_actionStep_Out_triggered(bool Checked)
{
  this->Q7B_on_actionStep_Out_triggered(Q7B_ID(Checked));
}
void on_actionStep_Over_triggered(bool Checked)
{
  this->Q7B_on_actionStep_Over_triggered(Q7B_ID(Checked));
}
void on_actionStop_triggered(bool Checked)
{
  this->Q7B_on_actionStop_triggered(Q7B_ID(Checked));
}
void on_actionSystemTray_QSystemTrayIcon_triggered(bool Checked)
{
  this->Q7B_on_actionSystemTray_QSystemTrayIcon_triggered(Q7B_ID(Checked));
}
void on_actionTo_UPPERCASE_triggered(bool Checked)
{
  this->Q7B_on_actionTo_UPPERCASE_triggered(Q7B_ID(Checked));
}
void on_actionTo_lowercase_triggered(bool Checked)
{
  this->Q7B_on_actionTo_lowercase_triggered(Q7B_ID(Checked));
}
void on_actionToggle_Breakpoint_triggered(bool Checked)
{
  this->Q7B_on_actionToggle_Breakpoint_triggered(Q7B_ID(Checked));
}
void on_actionUncomment_triggered(bool Checked)
{
  this->Q7B_on_actionUncomment_triggered(Q7B_ID(Checked));
}
void on_actionUndo_triggered(bool Checked)
{
  this->Q7B_on_actionUndo_triggered(Q7B_ID(Checked));
}
void on_mUIFiles_triggered(QAction *Action)
{
  this->Q7B_on_mUIFiles_triggered(Q7B_ID(Action));
}
void on_mdiArea_subWindowActivated(QMdiSubWindow *window)
{
  this->Q7B_on_mdiArea_GotFocusMDI(window ? Q7B_ID(window->widget()) : Q7B_IDNIL());
}
void on_menuAdd_Runtime_Extension_aboutToShow()
{
  this->Q7B_on_menuAdd_Runtime_Extension_aboutToShow();
}
void on_menuAdd_Runtime_Extension_triggered(QAction *Action)
{
  this->Q7B_on_menuAdd_Runtime_Extension_triggered(Q7B_ID(Action));
}
void on_menuConfiguration_triggered(QAction *Action)
{
  this->Q7B_on_menuConfiguration_triggered(Q7B_ID(Action));
}
void on_menuExamples_aboutToShow()
{
  this->Q7B_on_menuExamples_aboutToShow();
}
void on_menuExamples_triggered(QAction *Action)
{
  this->Q7B_on_menuExamples_triggered(Q7B_ID(Action));
}
void on_menuRecent_Projects_triggered(QAction *Action)
{
  this->Q7B_on_menuRecent_Projects_triggered(Q7B_ID(Action));
}
void on_menuUi_Files_aboutToShow()
{
  this->Q7B_on_menuUi_Files_aboutToShow();
}
void on_menuWindows_aboutToShow()
{
  this->Q7B_on_menuWindows_aboutToShow();
}
void on_menuWindows_triggered(QAction *Action)
{
  this->Q7B_on_menuWindows_triggered(Q7B_ID(Action));
}
void on_tb_uilist_clicked(bool checked = false)
{
  this->Q7B_on_tb_uilist_clicked(Q7B_ID(checked));
}
void on_theProjectWindow_Open(QString sFilePath)
{
  this->Q7B_on_theProjectWindow_Open(Q7B_ID(sFilePath));
}

public:
void closeEvent(QCloseEvent *e)
{
  this->Q7B_CloseEvent(Q7B_ID(e));
}
public:
Q7B actionPrint_2;
Q7B theProjectWindow;
Q7B progressBar;
Q7B actionAbout_Q7Basic;
Q7B toolBar;
Q7B menuRecent_Projects;
Q7B actionLast_Error;
Q7B actionShow_Code;
Q7B actionShow_Form;
Q7B aRecentProjects;
Q7B dockProjectWindow;
Q7B _nCountFilesToCompile;
Q7B sQtVersion;
Q7B menuExamples;
Q7B menuWindows;
Q7B menuConfiguration;
Q7B sVCDir;
Q7B sQtMINGWDir;
Q7B sQtDir;
Q7B mdiArea;
Q7B statusBar;
Q7B tb_uilist;
Q7B actionMainWindow_ui_2;
Q7B mMenuRuntimeExtension;
Q7B menuAdd_Runtime_Extension;
Q7B lMenuRuntimeExtension;
Q7B mUIFiles;
Q7B menuUi_Files;
Q7B lUIFiles;
Q7B myDebugWindow;
Q7B DebugStack;
Q7B DebugGlobal;
Q7B DebugLocal;
Q7B DebugMe;
Q7B testList;
Q7B sFind;
Q7B Compiler;
Q7B bCompilerError;
Q7B bBlockLastPosition;
Q7B sLastPositionFile;
Q7B nLastPositionLine;
Q7B sLastErrorText;
Q7B sLastErrorFile;
Q7B nLastErrorLine;
Q7B actionCopy;
Q7B actionCut;
Q7B actionUndo;
Q7B actionRedo;
Q7B actionDelete;
Q7B actionPaste;
Q7B actionSelect_All;
Q7B actionTo_UPPERCASE;
Q7B actionTo_lowercase;
Q7B actionComment;
Q7B actionUncomment;
Q7B actionShift_Left;
Q7B actionShift_Right;
Q7B actionRun;
Q7B actionBuild;
Q7B actionStop;
Q7B actionClean_RebuildAll;
Q7B actionDebug;
Q7B actionBinary;
Q7B actionFind_Replace;
Q7B actionFind_Next;
Q7B actionGo_To_Line;
Q7B actionToggle_Breakpoint;
Q7B actionStep_Into;
Q7B actionStep_Over;
Q7B actionStep_Out;
Q7B actionRun_To_Cursor;
Q7B dockDebug;
Q7B dockLog;
Q7B dockCompiler;
Q7B plainTextEditLog;
Q7B plainTextEditCompiler;
Q7B bDebug;
Q7B bRunOrBuild;
Q7B bBuildOnly;
Q7B gcc;
Q7B vs;
Q7B vm;



public:
static void SingleTonInit(MainWindow*me)
{
q7b_MainWindow_Object = me;
q7b_MainWindow_Object_Q7B = me->q7b_this;
q7b_MainWindow_Object_Init = true;
me->Init();
}

static Q7B SingleTonObject()
{
SingleTonObjectPointer();
return q7b_MainWindow_Object_Q7B;
}


static MainWindow* SingleTonObjectPointer()
{
if (q7b_MainWindow_Object_Finalized) return 0;
if (q7b_MainWindow_Object == 0){
q7b_MainWindow_Object_Init = true;
if (q7b_ui.contains("MainWindow")){
  q7b_MainWindow_Object = (MainWindow *) (QWidget *) q7b_ui["MainWindow"]->ref; 
} else {
  q7b_MainWindow_Object = new MainWindow(q7b_MainWindow_Object_Q7B, 0); q7b_MainWindow_Object->Init();
}
}
return q7b_MainWindow_Object;
}


static MainWindow* ClassPointer(Q7B o)
{
return (MainWindow*) o->ref;
}


public:
void BuildExampleMenu(Q7B menu, Q7B s);
Q7B CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary();
void Q7B_CloseEvent(Q7B e);
void Configuration(Q7B Action, Q7B bRebuild);
void DoActions();
Q7B ExampleMenuIsProjectDir(Q7B s);
~MainWindow();
MainWindow(Q7B _q7b_this);
void OpenUI(Q7B s, Q7B s2);
void PerformRegister();
void PrintStatusBar(Q7B s);
void ReopenCode(Q7B PathFileName, Q7B nGoto);
void ReopenCodeAndLoadBefore(Q7B PathFileName, Q7B nGoto);
void RequeryMenuRuntimeExtensionFiles();
void RequeryUIFiles();
void ResetDebugPosition();
void SetWindowTitle(Q7B s);
void ShowError(Q7B sError);
void ShowInternalError(Q7B s);
void ShowLastError(Q7B Text, Q7B sFileName, Q7B nLine);
void UpdateRecentProjects(Q7B sNewlyOpenedProject);
void cleanandrebuildall(Q7B bDeployment);
Q7B currentMDIWindowIsForm();
Q7B getCurrentFileName();
void myStop();
void Q7B_on_Compiler_BreakpointReached(Q7B sFile, Q7B sLine);
void Q7B_on_Compiler_Compiled(Q7B sPathFileName, Q7B nCountFilesCompiled);
void Q7B_on_Compiler_CompilerOrApplicationFinished(Q7B bApplication);
void Q7B_on_Compiler_Error(Q7B sError);
void Q7B_on_Compiler_Finished(Q7B nCountFilesCompiled);
void Q7B_on_Compiler_ReadyForDebugging();
void Q7B_on_Compiler_StandardError(Q7B s);
void Q7B_on_Compiler_StandardErrorOfCompiler(Q7B s);
void Q7B_on_Compiler_StandardOutput(Q7B s);
void Q7B_on_Compiler_StandardOutputOfCompiler(Q7B s);
void Q7B_on_Compiler_Started(Q7B nCountFilesToCompile);
void Q7B_on_ProjectOpen();
void Q7B_on_actionAbout_Q7Basic_triggered(Q7B Checked);
void Q7B_on_actionApplication_QApplication_triggered(Q7B Checked);
void Q7B_on_actionBinary_triggered(Q7B Checked);
void Q7B_on_actionBug_Report_triggered(Q7B Checked);
void Q7B_on_actionBuild_triggered(Q7B Checked);
void Q7B_on_actionClean_RebuildAll_triggered(Q7B Checked);
void Q7B_on_actionComment_triggered(Q7B Checked);
void Q7B_on_actionCompiler_Window_triggered(Q7B Checked);
void Q7B_on_actionContribute_triggered(Q7B Checked);
void Q7B_on_actionCopy_2_triggered(Q7B Checked);
void Q7B_on_actionCopy_triggered(Q7B Checked);
void Q7B_on_actionCpp_triggered(Q7B Checked);
void Q7B_on_actionCut_triggered(Q7B Checked);
void Q7B_on_actionDebug_triggered(Q7B Checked);
void Q7B_on_actionDelete_Current_File_triggered(Q7B Checked);
void Q7B_on_actionDelete_triggered(Q7B Checked);
void Q7B_on_actionDuplicate_Current_File_triggered(Q7B Checked);
void Q7B_on_actionFind_Definition_triggered(Q7B Checked);
void Q7B_on_actionFind_File_Replace_File_triggered(Q7B Checked);
void Q7B_on_actionFind_Next_triggered(Q7B Checked);
void Q7B_on_actionFind_Replace_triggered(Q7B Checked);
void Q7B_on_actionGeneral_Manual_triggered(Q7B Checked);
void Q7B_on_actionGlobal_triggered(Q7B Checked);
void Q7B_on_actionGo_To_Line_triggered(Q7B Checked);
void Q7B_on_actionLanguage_Reference_triggered(Q7B Checked);
void Q7B_on_actionLast_Error_triggered(Q7B Checked);
void Q7B_on_actionLast_Position_triggered(Q7B Checked);
void Q7B_on_actionLicense_triggered(Q7B Checked);
void Q7B_on_actionLog_Window_triggered(Q7B Checked);
void Q7B_on_actionMainWindow_ui_2_triggered(Q7B Checked);
void Q7B_on_actionMore_Manuals_triggered(Q7B Checked);
void Q7B_on_actionMySQL_triggered(Q7B Checked);
void Q7B_on_actionNew_Class_triggered(Q7B Checked);
void Q7B_on_actionNew_File_With_triggered(Q7B Checked);
void Q7B_on_actionNew_Form_2_triggered(Q7B Checked);
void Q7B_on_actionNew_Module_triggered(Q7B Checked);
void Q7B_on_actionNew_Project_triggered(Q7B Checked);
void Q7B_on_actionNew_Single_File_Project_triggered(Q7B Checked);
void Q7B_on_actionNew_uiCode_triggered(Q7B Checked);
void Q7B_on_actionOpen_Project_With_Qt_Creator_triggered(Q7B Checked);
void Q7B_on_actionOpen_Project_With_Visual_C_triggered(Q7B Checked);
void Q7B_on_actionOpen_Project_triggered(Q7B Checked);
void Q7B_on_actionOpen_Single_File_Project_triggered(Q7B Checked);
void Q7B_on_actionPaste_triggered(Q7B Checked);
void Q7B_on_actionPostgreSQL_2_triggered(Q7B Checked);
void Q7B_on_actionPreferences_triggered(Q7B Checked);
void Q7B_on_actionPrint_2_triggered(Q7B Checked);
void Q7B_on_actionProperties_triggered(Q7B Checked);
void Q7B_on_actionQ7Basic_Essentials_triggered(Q7B Checked);
void Q7B_on_actionQ7Basic_Tutorial_triggered(Q7B Checked);
void Q7B_on_actionQDialog_triggered(Q7B Checked);
void Q7B_on_actionQObject_triggered(Q7B Checked);
void Q7B_on_actionQWidget_triggered(Q7B Checked);
void Q7B_on_actionQt_DesignerHelp_triggered(Q7B Checked);
void Q7B_on_actionQt_Designer_for_MainWindow_ui_triggered(Q7B Checked);
void Q7B_on_actionQt_Designer_triggered(Q7B Checked);
void Q7B_on_actionQt_Quick_Manual_triggered(Q7B Checked);
void Q7B_on_actionQt_Quick_triggered(Q7B Checked);
void Q7B_on_actionQt_Reference_Documentation_triggered(Q7B Checked);
void Q7B_on_actionQuick_Start_triggered(Q7B Checked);
void Q7B_on_actionQuit_triggered(Q7B Checked);
void Q7B_on_actionReadme_triggered(Q7B Checked);
void Q7B_on_actionRedo_triggered(Q7B Checked);
void Q7B_on_actionRegister_triggered(Q7B Checked);
void Q7B_on_actionRename_Current_File_triggered(Q7B Checked);
void Q7B_on_actionReplace_File_triggered(Q7B Checked);
void Q7B_on_actionResources_triggered(Q7B Checked);
void Q7B_on_actionRun_To_Cursor_triggered(Q7B Checked);
void Q7B_on_actionRun_triggered(Q7B Checked);
void Q7B_on_actionSQLite_triggered(Q7B Checked);
void Q7B_on_actionSave_triggered(Q7B Checked);
void Q7B_on_actionSelect_All_triggered(Q7B Checked);
void Q7B_on_actionShift_Left_triggered(Q7B Checked);
void Q7B_on_actionShift_Right_triggered(Q7B Checked);
void Q7B_on_actionShow_Code_triggered(Q7B Checked);
void Q7B_on_actionShow_Form_triggered(Q7B Checked);
void Q7B_on_actionShow_Project_Folder_triggered(Q7B Checked);
void Q7B_on_actionStep_Into_triggered(Q7B Checked);
void Q7B_on_actionStep_Out_triggered(Q7B Checked);
void Q7B_on_actionStep_Over_triggered(Q7B Checked);
void Q7B_on_actionStop_triggered(Q7B Checked);
void Q7B_on_actionSystemTray_QSystemTrayIcon_triggered(Q7B Checked);
void Q7B_on_actionTo_UPPERCASE_triggered(Q7B Checked);
void Q7B_on_actionTo_lowercase_triggered(Q7B Checked);
void Q7B_on_actionToggle_Breakpoint_triggered(Q7B Checked);
void Q7B_on_actionUncomment_triggered(Q7B Checked);
void Q7B_on_actionUndo_triggered(Q7B Checked);
void Q7B_on_mUIFiles_triggered(Q7B Action);
void Q7B_on_mdiArea_GotFocusMDI(Q7B theWidget);
void Q7B_on_menuAdd_Runtime_Extension_aboutToShow();
void Q7B_on_menuAdd_Runtime_Extension_triggered(Q7B Action);
void Q7B_on_menuConfiguration_triggered(Q7B Action);
void Q7B_on_menuExamples_aboutToShow();
void Q7B_on_menuExamples_triggered(Q7B Action);
void Q7B_on_menuRecent_Projects_triggered(Q7B Action);
void Q7B_on_menuUi_Files_aboutToShow();
void Q7B_on_menuWindows_aboutToShow();
void Q7B_on_menuWindows_triggered(Q7B Action);
void Q7B_on_tb_uilist_clicked(Q7B Checked);
void Q7B_on_theProjectWindow_Open(Q7B sFileName);
void theProjectWindow_PerformOpenProject(Q7B sFileName);
private:
Q7B q7b_this;

};

#endif
