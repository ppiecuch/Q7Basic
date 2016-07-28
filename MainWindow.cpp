
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


#include "MainWindow.h"

#include "Declare.h"
#include "Q7BCodeView.h"
#include "Project.h"
#include "Q7BProjectWindow.h"
#include "Q7BCompiler.h"
#include "CodeView.h"

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

MainWindow *Q7B_MainWindow_Class(Q7B o){ return MainWindow::ClassPointer(o); }
Q7B Q7B_MainWindow_Object(){ return MainWindow::SingleTonObject(); }
extern MainWindow *Q7B_MainWindow_Class(Q7B o);
extern Q7B Q7B_MainWindow_Object();
extern MainWindow *Q7B_MainWindow_Class(Q7B o);
extern Q7B Q7B_MainWindow_Object();
extern MainWindow *Q7B_MainWindow_Class(Q7B o);
extern Q7B Q7B_MainWindow_Object();
extern MainWindow *Q7B_MainWindow_Class(Q7B o);
extern Q7B Q7B_MainWindow_Object();
extern MainWindow *Q7B_MainWindow_Class(Q7B o);
extern Q7B Q7B_MainWindow_Object();
extern MainWindow *Q7B_MainWindow_Class(Q7B o);
extern Q7B Q7B_MainWindow_Object();
MainWindow *q7b_MainWindow_Object = 0;
Q7B q7b_MainWindow_Object_Q7B;
bool q7b_MainWindow_Object_Finalized = false;
bool q7b_MainWindow_Object_Init = false;

#include "ui_MainWindow.h"

MainWindow::MainWindow(Q7B _q7b_this, QWidget *parent)
 : QMainWindow(parent), ui(new Ui::MainWindow)
{
  q7b_this = _q7b_this;
  ui->setupUi(this);
}

MainWindow::MainWindow(QWidget *parent)
 : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  Init();
}

void MainWindow::Init()
{
  if (q7b_MainWindow_Object_Init){ q7b_MainWindow_Object_Init = false; q7b_MainWindow_Object_Q7B = q7b_this = Q7B(new Q7B_id(typeid(MainWindow).name(), this)); } else q7b_this = Q7B(new Q7B_id(typeid(MainWindow).name(), this)); 
  setObjectName("MainWindow");
  Q7B q;
  QObject *o;
  o = findChild<QObject *>("actionAbout_Q7Basic"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionAbout_Q7Basic = q; } else { actionAbout_Q7Basic = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionBinary"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionBinary = q; } else { actionBinary = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionBuild"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionBuild = q; } else { actionBuild = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionClean_RebuildAll"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionClean_RebuildAll = q; } else { actionClean_RebuildAll = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionComment"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionComment = q; } else { actionComment = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionCopy"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionCopy = q; } else { actionCopy = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionCut"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionCut = q; } else { actionCut = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionDebug"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionDebug = q; } else { actionDebug = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionDelete"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionDelete = q; } else { actionDelete = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionFind_Next"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionFind_Next = q; } else { actionFind_Next = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionFind_Replace"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionFind_Replace = q; } else { actionFind_Replace = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionGo_To_Line"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionGo_To_Line = q; } else { actionGo_To_Line = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionLast_Error"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionLast_Error = q; } else { actionLast_Error = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionMainWindow_ui_2"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionMainWindow_ui_2 = q; } else { actionMainWindow_ui_2 = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionPaste"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionPaste = q; } else { actionPaste = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionPrint_2"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionPrint_2 = q; } else { actionPrint_2 = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionRedo"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionRedo = q; } else { actionRedo = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionRun"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionRun = q; } else { actionRun = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionRun_To_Cursor"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionRun_To_Cursor = q; } else { actionRun_To_Cursor = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionSelect_All"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionSelect_All = q; } else { actionSelect_All = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionShift_Left"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionShift_Left = q; } else { actionShift_Left = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionShift_Right"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionShift_Right = q; } else { actionShift_Right = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionShow_Code"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionShow_Code = q; } else { actionShow_Code = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionShow_Form"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionShow_Form = q; } else { actionShow_Form = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionStep_Into"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionStep_Into = q; } else { actionStep_Into = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionStep_Out"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionStep_Out = q; } else { actionStep_Out = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionStep_Over"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionStep_Over = q; } else { actionStep_Over = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionStop"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionStop = q; } else { actionStop = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionTo_UPPERCASE"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionTo_UPPERCASE = q; } else { actionTo_UPPERCASE = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionTo_lowercase"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionTo_lowercase = q; } else { actionTo_lowercase = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionToggle_Breakpoint"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionToggle_Breakpoint = q; } else { actionToggle_Breakpoint = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionUncomment"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionUncomment = q; } else { actionUncomment = Q7B_IDNULL(); }
  o = findChild<QObject *>("actionUndo"); if (o){ q = Q7B(new Q7B_id(typeid(QAction).name(), o, false)); actionUndo = q; } else { actionUndo = Q7B_IDNULL(); }
  o = findChild<QObject *>("dockCompiler"); if (o){ q = Q7B(new Q7B_id(typeid(QDockWidget).name(), o, false)); dockCompiler = q; } else { dockCompiler = Q7B_IDNULL(); }
  o = findChild<QObject *>("dockDebug"); if (o){ q = Q7B(new Q7B_id(typeid(QDockWidget).name(), o, false)); dockDebug = q; } else { dockDebug = Q7B_IDNULL(); }
  o = findChild<QObject *>("dockLog"); if (o){ q = Q7B(new Q7B_id(typeid(QDockWidget).name(), o, false)); dockLog = q; } else { dockLog = Q7B_IDNULL(); }
  o = findChild<QObject *>("dockProjectWindow"); if (o){ q = Q7B(new Q7B_id(typeid(QDockWidget).name(), o, false)); dockProjectWindow = q; } else { dockProjectWindow = Q7B_IDNULL(); }
  o = findChild<QObject *>("mdiArea"); if (o){ q = Q7B(new Q7B_id(typeid(QMdiArea).name(), o, false)); mdiArea = q; } else { mdiArea = Q7B_IDNULL(); }
  o = findChild<QObject *>("menuAdd_Runtime_Extension"); if (o){ q = Q7B(new Q7B_id(typeid(QMenu).name(), o, false)); menuAdd_Runtime_Extension = q; } else { menuAdd_Runtime_Extension = Q7B_IDNULL(); }
  o = findChild<QObject *>("menuConfiguration"); if (o){ q = Q7B(new Q7B_id(typeid(QMenu).name(), o, false)); menuConfiguration = q; } else { menuConfiguration = Q7B_IDNULL(); }
  o = findChild<QObject *>("menuExamples"); if (o){ q = Q7B(new Q7B_id(typeid(QMenu).name(), o, false)); menuExamples = q; } else { menuExamples = Q7B_IDNULL(); }
  o = findChild<QObject *>("menuRecent_Projects"); if (o){ q = Q7B(new Q7B_id(typeid(QMenu).name(), o, false)); menuRecent_Projects = q; } else { menuRecent_Projects = Q7B_IDNULL(); }
  o = findChild<QObject *>("menuUi_Files"); if (o){ q = Q7B(new Q7B_id(typeid(QMenu).name(), o, false)); menuUi_Files = q; } else { menuUi_Files = Q7B_IDNULL(); }
  o = findChild<QObject *>("menuWindows"); if (o){ q = Q7B(new Q7B_id(typeid(QMenu).name(), o, false)); menuWindows = q; } else { menuWindows = Q7B_IDNULL(); }
  o = findChild<QObject *>("plainTextEditCompiler"); if (o){ q = Q7B(new Q7B_id(typeid(QPlainTextEdit).name(), o, false)); plainTextEditCompiler = q; } else { plainTextEditCompiler = Q7B_IDNULL(); }
  o = findChild<QObject *>("plainTextEditLog"); if (o){ q = Q7B(new Q7B_id(typeid(QPlainTextEdit).name(), o, false)); plainTextEditLog = q; } else { plainTextEditLog = Q7B_IDNULL(); }
  o = findChild<QObject *>("theProjectWindow"); if (o){ q = Q7B(new Q7B_id(typeid(Q7BProjectWindow).name(), o, false)); theProjectWindow = q; } else { theProjectWindow = Q7B_IDNULL(); }
  o = findChild<QObject *>("toolBar"); if (o){ q = Q7B(new Q7B_id(typeid(QToolBar).name(), o, false)); toolBar = q; } else { toolBar = Q7B_IDNULL(); }
  Q7B_ASSIGNMENT(&progressBar, &(Q7B_QPROGRESSBAR_INIT(this, "progressBar")));
  Q7B_ASSIGNMENT(&aRecentProjects, &(Q7B_ID(Q7B_List::init())));
  Q7B_ASSIGNMENT(&_nCountFilesToCompile, &(Q7B_ID((qint64) 0)));
  Q7B_ASSIGNMENT(&sQtVersion, &(Q7B_ID("4.8.0")));
  Q7B_ASSIGNMENT(&sVCDir, &(Q7B_ID("")));
  Q7B_ASSIGNMENT(&sQtMINGWDir, &(Q7B_ID("")));
  Q7B_ASSIGNMENT(&sQtDir, &(Q7B_ID("")));
  Q7B_ASSIGNMENT(&statusBar, &(Q7B_QLABEL_INIT(this, "statusBar")));
  Q7B_ASSIGNMENT(&tb_uilist, &(Q7B_ID("QToolButton", Q7B_connectSlotsByNameForGivenObjectAndReturnIt(this, new QToolButton(), "tb_uilist"))));
  Q7B_ASSIGNMENT(&mMenuRuntimeExtension, &(Q7B_QMENU_INIT(this, "mMenuRuntimeExtension")));
  Q7B_ASSIGNMENT(&lMenuRuntimeExtension, &(Q7B_ID(Q7B_List::init())));
  Q7B_ASSIGNMENT(&mUIFiles, &(Q7B_QMENU_INIT(this, "mUIFiles")));
  Q7B_ASSIGNMENT(&lUIFiles, &(Q7B_ID(Q7B_List::init())));
  Q7B_ASSIGNMENT(&myDebugWindow, &(Q7B_IDNULL()));
  Q7B_ASSIGNMENT(&DebugStack, &(Q7B_IDNULL()));
  Q7B_ASSIGNMENT(&DebugGlobal, &(Q7B_IDNULL()));
  Q7B_ASSIGNMENT(&DebugLocal, &(Q7B_IDNULL()));
  Q7B_ASSIGNMENT(&DebugMe, &(Q7B_IDNULL()));
  Q7B_ASSIGNMENT(&testList, &(Q7B_ID(Q7B_List::init())));
  Q7B_ASSIGNMENT(&sFind, &(Q7B_ID("")));
  Q7B_ASSIGNMENT(&Compiler, &(Q7B_ID("Q7BCompiler", Q7B_connectSlotsByNameForGivenObjectAndReturnIt(this, new Q7BCompiler(), "Compiler"))));
  Q7B_ASSIGNMENT(&bCompilerError, &(Q7B_ID(false)));
  Q7B_ASSIGNMENT(&bBlockLastPosition, &(Q7B_ID(false)));
  Q7B_ASSIGNMENT(&sLastPositionFile, &(Q7B_ID("")));
  Q7B_ASSIGNMENT(&nLastPositionLine, &(Q7B_ID((qint64) 0)));
  Q7B_ASSIGNMENT(&sLastErrorText, &(Q7B_ID("")));
  Q7B_ASSIGNMENT(&sLastErrorFile, &(Q7B_ID("")));
  Q7B_ASSIGNMENT(&nLastErrorLine, &(Q7B_ID((qint64) 0)));
  Q7B_ASSIGNMENT(&bDebug, &(Q7B_ID(false)));
  Q7B_ASSIGNMENT(&bRunOrBuild, &(Q7B_ID(false)));
  Q7B_ASSIGNMENT(&bBuildOnly, &(Q7B_ID(false)));
  Q7B_ASSIGNMENT(&gcc, &(Q7B_QACTION_INIT(this, "gcc")));
  Q7B_ASSIGNMENT(&vs, &(Q7B_QACTION_INIT(this, "vs")));
  Q7B_ASSIGNMENT(&vm, &(Q7B_QACTION_INIT(this, "vm")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "217", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "218", "1");

if (Q7B_CBOOL(Q7B_OS_ISMAC(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "219", "1");
Q7B_ASSIGNMENT(&sQtVersion, &Q7B__ID(Q7B_ID("4.8.1")));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "235", "1");

if (Q7B_CBOOL(Q7B_OS_ISWINDOWS(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "236", "1");
Q7B_QACTION_TEXT(actionAbout_Q7Basic, Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_QACTION_TEXT(actionAbout_Q7Basic), Q7B_ID(" - Version: ")), Q7B_FILE_DATETIMEUPDATED(Q7B_File_Object(), Q7B_CONCAT(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Q7BCompiler.exe")))), Q7B_ID(" (Compiler) ")), Q7B_FILE_DATETIMEUPDATED(Q7B_File_Object(), Q7B_CONCAT(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Q7Basic.exe")))), Q7B_ID(" (IDE)")));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "238", "1");
Q7B_QACTION_TEXT(actionAbout_Q7Basic, Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_QACTION_TEXT(actionAbout_Q7Basic), Q7B_ID(" - Version: ")), Q7B_FILE_DATETIMEUPDATED(Q7B_File_Object(), Q7B_CONCAT(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Q7BCompiler")))), Q7B_ID(" (Compiler) ")), Q7B_FILE_DATETIMEUPDATED(Q7B_File_Object(), Q7B_CONCAT(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Q7Basic.exe")))), Q7B_ID(" (IDE)")));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "241", "1");
UpdateRecentProjects(Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "243", "1");
DoActions();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "245", "1");
Q7B_QPLAINTEXTEDIT_READONLY(plainTextEditLog, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "247", "1");
Q7B_ASSIGNMENT(&gcc, &Q7B__QACTION(Q7B_QMENU_ADDACTION(menuConfiguration, Q7B_ID("GCC C/C++ Compiler"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "248", "1");
Q7B_QACTION_TAG(gcc, Q7B_ID("gcc"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "249", "1");
Q7B_QACTION_CHECKABLE(gcc, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "250", "1");
Q7B_QACTION_CHECKED(gcc, Q7B_ID((Q7B_CBOOL(Q7B_PREFERENCES_BOOLEAN(Q7B_Preferences_Object(), Q7B_ID("gcc"))) || Q7B_CBOOL(Q7B_NOT(Q7B_PREFERENCES_BOOLEAN(Q7B_Preferences_Object(), Q7B_ID("vs")))))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "251", "1");
Q7B_PREFERENCES_SETBOOLEAN(Q7B_Preferences_Object(), Q7B_ID("gcc"), Q7B_QACTION_CHECKED(gcc));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "253", "1");
Q7B_ASSIGNMENT(&vs, &Q7B__QACTION(Q7B_QMENU_ADDACTION(menuConfiguration, Q7B_ID("VS C/C++ Compiler"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "254", "1");
Q7B_QACTION_TAG(vs, Q7B_ID("vs"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "255", "1");
Q7B_QACTION_CHECKABLE(vs, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "256", "1");
Q7B_QACTION_CHECKED(vs, Q7B_PREFERENCES_BOOLEAN(Q7B_Preferences_Object(), Q7B_ID("vs")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "257", "1");
Q7B_PREFERENCES_SETBOOLEAN(Q7B_Preferences_Object(), Q7B_ID("vs"), Q7B_QACTION_CHECKED(vs));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "259", "1");
Q7B_QMENU_ADDSEPARATOR(menuConfiguration);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "261", "1");
Q7B_ASSIGNMENT(&vm, &Q7B__QACTION(Q7B_QMENU_ADDACTION(menuConfiguration, Q7B_ID("(VM hybrid (for faster compilation))"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "262", "1");
Q7B_QACTION_TAG(vm, Q7B_ID("vm"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "264", "1");
Q7B_QACTION_CHECKED(vm, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "265", "1");
Q7B_PREFERENCES_SETBOOLEAN(Q7B_Preferences_Object(), Q7B_ID("vm"), Q7B_QACTION_CHECKED(vm));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "266", "1");
Q7B_Q7BCompiler_Class(Compiler)->setVM(Q7B_CBOOL(Q7B_PREFERENCES_BOOLEAN(Q7B_Preferences_Object(), Q7B_ID("vm"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "268", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_OS_ISWINDOWS(Q7B_OS_Object())))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "269", "1");
Q7B_QACTION_ENABLED(vs, Q7B_ID(false));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "278", "1");
Q7B_EXECAFTERMSEC(Q7B_ID((qint64) 10), Q7B_ID("on_ProjectOpen"), Q7B_ID(this));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Init", "285", "2");
}

void MainWindow::BuildExampleMenu(Q7B menu, Q7B s)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "863", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "864", "1");

if (Q7B_CBOOL(Q7B_EQUAL(s, Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Examples"))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "865", "1");
Q7B exampleitem; Q7B_ASSIGNMENT(&exampleitem, &(Q7B__QACTION(Q7B_QMENU_ADDACTION(menu, Q7B_ID("Browse All Examples")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "866", "1");
Q7B_QACTION_TAG(exampleitem, Q7B_ID("Browser"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "867", "1");
Q7B_QACTION_ENABLED(exampleitem, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "868", "1");
Q7B_QMENU_ADDSEPARATOR(menu);

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "871", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "872", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_ID(Q7B_List::init()))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "874", "1");
Q7B_ASSIGNMENT(&a, &Q7B__LIST(Q7B_DIR_LIST(Q7B_Dir_Object(), s)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "876", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "876", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "878", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_DIR_EXISTS(Q7B_Dir_Object(), Q7B_LIST_OBJECT(a, i))) && Q7B_CBOOL(Q7B_NOT(ExampleMenuIsProjectDir(Q7B_LIST_OBJECT(a, i)))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "880", "1");
Q7B menu2; Q7B_ASSIGNMENT(&menu2, &(Q7B__QMENU(Q7B_QMENU_ADDMENU(menu, Q7B_FILENAME(Q7B_LIST_OBJECT(a, i))))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "881", "1");
BuildExampleMenu(menu2, Q7B_LIST_OBJECT(a, i));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "884", "1");
Q7B exampleitem; Q7B_ASSIGNMENT(&exampleitem, &(Q7B__QACTION(Q7B_QMENU_ADDACTION(menu, Q7B_FILENAME(Q7B_LIST_OBJECT(a, i))))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "885", "1");
Q7B_QACTION_TAG(exampleitem, Q7B_LIST_OBJECT(a, i));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "886", "1");
Q7B_QACTION_ENABLED(exampleitem, Q7B_ID(true));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "BuildExampleMenu", "894", "2");
}

Q7B MainWindow::CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary()
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1690", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1691", "1");
Q7B sdf; Q7B_ASSIGNMENT(&sdf, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1693", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_CONTAINS(Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_ID("QtDir")), Q7B_ID(" "), Q7B_ID(true))) || Q7B_CBOOL(Q7B_CONTAINS(Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_ID("QtMINGWDir")), Q7B_ID(" "), Q7B_ID(true))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1694", "1");
Q7B__MSGBOX(Q7B_ID("Make sure that the installation path of Basic For Qt (or path of Qt) does not include spaces.\n\nThis is a limitation caused by Qt.\nSorry for the inconvenience."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1695", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("QtDir"), Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1696", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("QtMINGWDir"), Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1697", "1");
return Q7B_ID(Q7B_ID(true));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1700", "1");

if (Q7B_CBOOL(Q7B_OS_ISMAC(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1701", "1");
Q7B_ASSIGNMENT(&sdf, &Q7B__STRING(Q7B_ID("Q7BCompiler")));

} else if (Q7B_CBOOL(Q7B_OS_ISWINDOWS(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1703", "1");
Q7B_ASSIGNMENT(&sdf, &Q7B__STRING(Q7B_ID("Q7BCompiler.exe")));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1705", "1");
Q7B_ASSIGNMENT(&sdf, &Q7B__STRING(Q7B_ID("Q7BCompiler")));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1711", "1");

if (Q7B_CBOOL(Q7B_DIR_EXISTS(Q7B_Dir_Object(), Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc"))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1712", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_DIFFDAYS(Q7B_DATEVALUE(Q7B_DIR_DATETIMECREATED(Q7B_Dir_Object(), Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc")))), Q7B_DATEVALUE(Q7B_FILE_DATETIMECREATED(Q7B_File_Object(), Q7B_CONCAT(Q7B_CONCAT(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/")), sdf)))), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1713", "1");
Q7B__MSGBOX(Q7B_ID("Compiler is newer than project compiler files. Therefore, perform a 'Clean & Rebuild All' first."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1714", "1");
cleanandrebuildall(Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1715", "1");
return Q7B_ID(Q7B_ID(true));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1720", "1");

if (Q7B_CBOOL(Q7B_DIR_EXISTS(Q7B_Dir_Object(), Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Q7BRuntime.obj"))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1721", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_DIFFDAYS(Q7B_DATEVALUE(Q7B_DIR_DATETIMECREATED(Q7B_Dir_Object(), Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Q7BRuntime.obj")))), Q7B_DATEVALUE(Q7B_FILE_DATETIMECREATED(Q7B_File_Object(), Q7B_CONCAT(Q7B_CONCAT(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/")), sdf)))), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1722", "1");
Q7B_DELETE(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Q7BRuntime.obj")));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1726", "1");

if (Q7B_CBOOL(Q7B_DIR_EXISTS(Q7B_Dir_Object(), Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Q7BRuntime.o"))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1727", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_DIFFDAYS(Q7B_DATEVALUE(Q7B_DIR_DATETIMECREATED(Q7B_Dir_Object(), Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Q7BRuntime.o")))), Q7B_DATEVALUE(Q7B_FILE_DATETIMECREATED(Q7B_File_Object(), Q7B_CONCAT(Q7B_CONCAT(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/")), sdf)))), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1728", "1");
Q7B_DELETE(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Q7BRuntime.o")));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1733", "1");

if (Q7B_CBOOL(Q7B_FILE_EXISTS(Q7B_File_Object(), Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc/Platform.txt"))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1734", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_READSTRING(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc/Platform.txt")), Q7B_ID("")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1736", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_OS_ISWINDOWS(Q7B_OS_Object())) && Q7B_CBOOL(Q7B_UNEQUAL(s, Q7B_ID("Windows"))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1737", "1");
Q7B__MSGBOX(Q7B_ID("Files have been compiled on different platform. Therefore, perform a 'Clean & Rebuild All' first."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1738", "1");
cleanandrebuildall(Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1739", "1");
return Q7B_ID(Q7B_ID(true));

} else if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_OS_ISMAC(Q7B_OS_Object())) && Q7B_CBOOL(Q7B_UNEQUAL(s, Q7B_ID("Mac"))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1741", "1");
Q7B__MSGBOX(Q7B_ID("Files have been compiled on different platform. Therefore, perform a 'Clean & Rebuild All' first."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1742", "1");
cleanandrebuildall(Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1743", "1");
return Q7B_ID(Q7B_ID(true));

} else if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_OS_ISLINUX(Q7B_OS_Object())) && Q7B_CBOOL(Q7B_UNEQUAL(s, Q7B_ID("Linux"))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1745", "1");
Q7B__MSGBOX(Q7B_ID("Files have been compiled on different platform. Therefore, perform a 'Clean & Rebuild All' first."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1746", "1");
cleanandrebuildall(Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1747", "1");
return Q7B_ID(Q7B_ID(true));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1751", "1");
return Q7B_ID(Q7B_ID(false));
return Q7B_ID(Q7B_IDNULL());
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary", "1752", "2");
}

void MainWindow::Q7B_CloseEvent(Q7B e)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CloseEvent", "2889", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CloseEvent", "2890", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("Project.sProjectPath"), Q7B_Project_Class(Q7B_Project_Object())->sProjectPath);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "CloseEvent", "2896", "2");
}

void MainWindow::Configuration(Q7B Action, Q7B bRebuild)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2752", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2754", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QACTION_TAG(Action), Q7B_ID("vs")))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2755", "1");
Q7B_PREFERENCES_SETBOOLEAN(Q7B_Preferences_Object(), Q7B_ID("vs"), Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2756", "1");
Q7B_PREFERENCES_SETBOOLEAN(Q7B_Preferences_Object(), Q7B_ID("gcc"), Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2757", "1");
Q7B_QACTION_CHECKED(vs, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2758", "1");
Q7B_QACTION_CHECKED(gcc, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2760", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_ID("VCDir")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2761", "1");

if (Q7B_CBOOL(Q7B_AND(Q7B_GREATER(Q7B_LEN(s), Q7B_ID((qint64) 0)), Q7B_FILE(Q7B_ADD(s, Q7B_ID("/bin/cl.exe")))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2762", "1");
Q7B_Q7BCompiler_Class(Compiler)->setVCDir(Q7B_CQSTRING(s));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2763", "1");
Q7B_ASSIGNMENT(&sVCDir, &Q7B__STRING(s));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2766", "1");
Q7B sreg; Q7B_ASSIGNMENT(&sreg, &(Q7B__STRING(Q7B_READREGISTRY(Q7B_ID("HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\VCExpress\\9.0"), Q7B_ID("installdir")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2768", "1");
Q7B_ASSIGNMENT(&sreg, &Q7B__STRING(Q7B_REPLACE(sreg, Q7B_ID("\\Common7\\IDE"), Q7B_ID(""), Q7B_ID(true))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2769", "1");
Q7B_ASSIGNMENT(&sreg, &Q7B__STRING(Q7B_CONCAT(sreg, Q7B_ID("VC"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2773", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_ADD(sreg, Q7B_ID("/bin/cl.exe"))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2774", "1");
Q7B_ASSIGNMENT(&sVCDir, &Q7B__STRING(sreg));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2775", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("VCDir"), sVCDir);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2776", "1");
Q7B_Q7BCompiler_Class(Compiler)->setVCDir(Q7B_CQSTRING(sVCDir));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2779", "1");
Q7B_MSGBOX(Q7B_ID("Configuration"), Q7B_ID("Please select the Visual Studio C++ directory.\nNormally, for VS 2008 it would be C:\\Program Files\\Microsoft Visual Studio 9.0\\VC"), Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2781", "1");
Q7B sVCDir; Q7B_ASSIGNMENT(&sVCDir, &(Q7B__STRING(Q7B_OPENFILEDIALOG_GETDIRECTORY(Q7B_OpenFileDialog_Object()))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2783", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("VCDir"), sVCDir);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2784", "1");
Q7B_Q7BCompiler_Class(Compiler)->setVCDir(Q7B_CQSTRING(sVCDir));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2789", "1");
Q7B_ASSIGNMENT(&s, &Q7B__STRING(Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_ID("QtDir"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2790", "1");

if (Q7B_CBOOL(Q7B_AND(Q7B_GREATER(Q7B_LEN(s), Q7B_ID((qint64) 0)), Q7B_FILE(Q7B_ADD(s, Q7B_ID("/bin/qmake.exe")))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2791", "1");
Q7B_Q7BCompiler_Class(Compiler)->setQtDir(Q7B_CQSTRING(s));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2792", "1");
Q7B_ASSIGNMENT(&sQtDir, &Q7B__STRING(s));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2800", "1");
Q7B bManual; Q7B_ASSIGNMENT(&bManual, &(Q7B__BOOLEAN(Q7B_ID(true))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2801", "1");
Q7B locations; Q7B_ASSIGNMENT(&locations, &(Q7B__LIST(Q7B_ID(Q7B_List::init()))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2803", "1");
Q7B drives; Q7B_ASSIGNMENT(&drives, &(Q7B__LIST(Q7B_DRIVES())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2804", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2805", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(drives), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2805", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2806", "1");
Q7B_LIST_APPEND(locations, Q7B_LIST_OBJECT(drives, i));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2808", "1");
Q7B_LIST_APPEND(locations, Q7B_ADD(Q7B_ID("C:/Program Files"), Q7B_ID("/")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2809", "1");
Q7B_LIST_APPEND(locations, Q7B_ADD(Q7B_DIR_APPLICATIONSPATH(Q7B_Dir_Object()), Q7B_ID("/")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2810", "1");
Q7B_LIST_APPEND(locations, Q7B_ADD(Q7B_DIR_HOMEPATH(Q7B_Dir_Object()), Q7B_ID("/")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2811", "1");
Q7B_LIST_APPEND(locations, Q7B_ADD(Q7B_DIR_DESKTOPPATH(Q7B_Dir_Object()), Q7B_ID("/")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2813", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(locations), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2813", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2818", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Qt/")), sQtVersion), Q7B_ID("/bin/qmake.exe"))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2819", "1");
Q7B_ASSIGNMENT(&sQtDir, &Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Qt/")), sQtVersion)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2820", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("QtDir"), sQtDir);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2821", "1");
Q7B_Q7BCompiler_Class(Compiler)->setQtDir(Q7B_CQSTRING(sQtDir));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2822", "1");
Q7B_ASSIGNMENT(&bManual, &Q7B__BOOLEAN(Q7B_ID(false)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2823", "1");
break;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2826", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_LIST_OBJECT(locations, i), Q7B_ID("Qt/")), sQtVersion), Q7B_ID("/bin/qmake.exe"))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2827", "1");
Q7B_ASSIGNMENT(&sQtDir, &Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_LIST_OBJECT(locations, i), Q7B_ID("Qt/")), sQtVersion)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2828", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("QtDir"), sQtDir);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2829", "1");
Q7B_Q7BCompiler_Class(Compiler)->setQtDir(Q7B_CQSTRING(sQtDir));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2830", "1");
Q7B_ASSIGNMENT(&bManual, &Q7B__BOOLEAN(Q7B_ID(false)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2831", "1");
break;

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2835", "1");

if (Q7B_CBOOL(bManual)){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2837", "1");
Q7B_MSGBOX(Q7B_ID("Configuration"), Q7B_ADD(Q7B_ADD(Q7B_ID("Please select the Qt library directory for VS in which the directory "), sQtVersion), Q7B_ID(" is located.")), Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2839", "1");
Q7B_ASSIGNMENT(&sQtDir, &Q7B__STRING(Q7B_OPENFILEDIALOG_GETDIRECTORY(Q7B_OpenFileDialog_Object())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2841", "1");

if (Q7B_CBOOL(Q7B_DIR(Q7B_ADD(Q7B_ADD(sQtDir, Q7B_ID("/")), sQtVersion), Q7B_ID(false)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2842", "1");
Q7B_ASSIGNMENT(&sQtDir, &Q7B__STRING(Q7B_ADD(Q7B_ADD(sQtDir, Q7B_ID("/")), sQtVersion)));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2845", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("QtDir"), sQtDir);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2846", "1");
Q7B_Q7BCompiler_Class(Compiler)->setQtDir(Q7B_CQSTRING(sQtDir));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2851", "1");
Q7B_Q7BCompiler_Class(Compiler)->setMINGWDir(Q7B_CQSTRING(Q7B_ID("")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2852", "1");
Q7B_Q7BCompiler_Class(Compiler)->setMINGWDLLDir(Q7B_CQSTRING(Q7B_ID("")));

} else if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QACTION_TAG(Action), Q7B_ID("gcc")))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2855", "1");
Q7B_QACTION_CHECKED(gcc, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2856", "1");
Q7B_QACTION_CHECKED(vs, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2857", "1");
Q7B_PREFERENCES_SETBOOLEAN(Q7B_Preferences_Object(), Q7B_ID("gcc"), Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2858", "1");
Q7B_PREFERENCES_SETBOOLEAN(Q7B_Preferences_Object(), Q7B_ID("vs"), Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2860", "1");
Q7B_Q7BCompiler_Class(Compiler)->setMINGWDir(Q7B_CQSTRING(Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_ID("QtMINGWDir"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2861", "1");
Q7B_Q7BCompiler_Class(Compiler)->setMINGWDLLDir(Q7B_CQSTRING(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/mingw"))));

} else if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QACTION_TAG(Action), Q7B_ID("vm")))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2867", "1");
Q7B_PREFERENCES_SETBOOLEAN(Q7B_Preferences_Object(), Q7B_ID("vm"), Q7B_QACTION_CHECKED(vm));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2869", "1");
Q7B_Q7BCompiler_Class(Compiler)->setVM(Q7B_CBOOL(Q7B_PREFERENCES_BOOLEAN(Q7B_Preferences_Object(), Q7B_ID("vm"))));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2873", "1");

if (Q7B_CBOOL(Q7B_EQUAL(bRebuild, Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2874", "1");
cleanandrebuildall(Q7B_ID(false));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Configuration", "2878", "2");
}

void MainWindow::DoActions()
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1958", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1959", "1");
Q7B bIsFormAllowed; Q7B_ASSIGNMENT(&bIsFormAllowed, &(Q7B__BOOLEAN(Q7B_ID(false))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1960", "1");
Q7B bIsCodeAllowed; Q7B_ASSIGNMENT(&bIsCodeAllowed, &(Q7B__BOOLEAN(Q7B_ID(false))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1962", "1");
Q7B subw; Q7B_ASSIGNMENT(&subw, &(Q7B__QMDISUBWINDOW(Q7B_QMDIAREA_ACTIVESUBWINDOW(mdiArea))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1963", "1");

if (Q7B_CBOOL(Q7B_UNEQUAL(subw, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1964", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_QMDISUBWINDOW_WIDGET(subw))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1965", "1");

if (Q7B_CBOOL(Q7B_UNEQUAL(w, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1966", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_CLASSNAME(w), Q7B_ID("Q7BFormDesigner")))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1967", "1");
Q7B_ASSIGNMENT(&bIsCodeAllowed, &Q7B__BOOLEAN(Q7B_ID(true)));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1969", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_UNEQUAL(Q7B_PROPERTY(w, Q7B_ID("PathFileName")), Q7B_IDNULL())) && Q7B_CBOOL(Q7B_ENDSWITH(Q7B_PROPERTY(w, Q7B_ID("PathFileName")), Q7B_ID(".FormClass.q7b"), Q7B_ID(true))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1971", "1");
Q7B_ASSIGNMENT(&bIsFormAllowed, &Q7B__BOOLEAN(Q7B_ID(true)));

}

}

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1977", "1");
Q7B_QACTION_ENABLED(actionShow_Code, bIsCodeAllowed);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1978", "1");
Q7B_QACTION_ENABLED(actionShow_Form, bIsFormAllowed);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1980", "1");

if (Q7B_CBOOL(bIsCodeAllowed)){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1981", "1");
Q7B_QACTION_ENABLED(actionPrint_2, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1982", "1");
Q7B_QACTION_ENABLED(actionCopy, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1983", "1");
Q7B_QACTION_ENABLED(actionCut, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1984", "1");
Q7B_QACTION_ENABLED(actionUndo, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1985", "1");
Q7B_QACTION_ENABLED(actionRedo, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1986", "1");
Q7B_QACTION_ENABLED(actionDelete, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1987", "1");
Q7B_QACTION_ENABLED(actionPaste, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1989", "1");
Q7B_QACTION_ENABLED(actionSelect_All, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1990", "1");
Q7B_QACTION_ENABLED(actionFind_Replace, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1991", "1");
Q7B_QACTION_ENABLED(actionFind_Next, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1992", "1");
Q7B_QACTION_ENABLED(actionGo_To_Line, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1993", "1");
Q7B_QACTION_ENABLED(actionToggle_Breakpoint, Q7B_ID(false));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1996", "1");
Q7B_QACTION_ENABLED(actionPrint_2, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1997", "1");
Q7B_QACTION_ENABLED(actionSelect_All, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1998", "1");
Q7B_QACTION_ENABLED(actionFind_Replace, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "1999", "1");
Q7B_QACTION_ENABLED(actionFind_Next, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2000", "1");
Q7B_QACTION_ENABLED(actionGo_To_Line, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2001", "1");
Q7B_QACTION_ENABLED(actionToggle_Breakpoint, Q7B_ID(true));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2004", "1");
Q7B bDefault; Q7B_ASSIGNMENT(&bDefault, &(Q7B__BOOLEAN(Q7B_ID(false))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2005", "1");

if (Q7B_CBOOL(bDebug)){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2006", "1");
Q7B_QACTION_TEXT(actionDebug, Q7B_ID("Continue"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2007", "1");
Q7B_QACTION_ENABLED(actionDebug, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2009", "1");
Q7B_ASSIGNMENT(&bDefault, &Q7B__BOOLEAN(Q7B_ID(true)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2011", "1");
Q7B_QACTION_ENABLED(actionStep_Into, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2012", "1");
Q7B_QACTION_ENABLED(actionStep_Over, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2013", "1");
Q7B_QACTION_ENABLED(actionStep_Out, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2014", "1");
Q7B_QACTION_ENABLED(actionRun_To_Cursor, Q7B_ID(true));

} else if (Q7B_CBOOL(bRunOrBuild)){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2017", "1");
Q7B_QACTION_TEXT(actionDebug, Q7B_ID("Debug"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2018", "1");
Q7B_QACTION_ENABLED(actionDebug, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2020", "1");
Q7B_ASSIGNMENT(&bDefault, &Q7B__BOOLEAN(Q7B_ID(true)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2022", "1");
Q7B_QWIDGET_VISIBLE(dockDebug, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2023", "1");
Q7B_QWIDGET_VISIBLE(dockLog, Q7B_NOT(bBuildOnly));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2027", "1");
Q7B_QACTION_TEXT(actionDebug, Q7B_ID("Debug"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2028", "1");
Q7B_QACTION_ENABLED(actionDebug, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2030", "1");
Q7B_QWIDGET_VISIBLE(dockDebug, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2031", "1");
Q7B_QWIDGET_VISIBLE(dockLog, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2032", "1");
Q7B_QWIDGET_VISIBLE(dockCompiler, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2035", "1");
Q7B_QACTION_ENABLED(actionRun, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2036", "1");
Q7B_QACTION_ENABLED(actionBuild, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2037", "1");
Q7B_QACTION_ENABLED(actionStop, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2038", "1");
Q7B_QACTION_ENABLED(actionClean_RebuildAll, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2039", "1");
Q7B_QACTION_ENABLED(actionDebug, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2040", "1");
Q7B_QACTION_ENABLED(actionBinary, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2041", "1");
Q7B_QACTION_ENABLED(gcc, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2042", "1");
Q7B_QACTION_ENABLED(vs, Q7B_BOOLEAN(Q7B_AND(Q7B_ID(true), Q7B_OS_ISWINDOWS(Q7B_OS_Object())), Q7B_ID(false)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2043", "1");
Q7B_QACTION_ENABLED(vm, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2045", "1");
Q7B_QACTION_ENABLED(actionStep_Into, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2046", "1");
Q7B_QACTION_ENABLED(actionStep_Over, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2047", "1");
Q7B_QACTION_ENABLED(actionStep_Out, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2048", "1");
Q7B_QACTION_ENABLED(actionRun_To_Cursor, Q7B_ID(false));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2052", "1");

if (Q7B_CBOOL(Q7B_EQUAL(bDefault, Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2054", "1");
Q7B_QWIDGET_VISIBLE(dockCompiler, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2055", "1");
Q7B_QACTION_ENABLED(actionRun, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2056", "1");
Q7B_QACTION_ENABLED(actionBuild, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2057", "1");
Q7B_QACTION_ENABLED(actionStop, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2058", "1");
Q7B_QACTION_ENABLED(actionClean_RebuildAll, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2059", "1");
Q7B_QACTION_ENABLED(actionBinary, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2060", "1");
Q7B_QACTION_ENABLED(gcc, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2061", "1");
Q7B_QACTION_ENABLED(vs, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2062", "1");
Q7B_QACTION_ENABLED(vm, Q7B_ID(false));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "DoActions", "2068", "2");
}

Q7B MainWindow::ExampleMenuIsProjectDir(Q7B s)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ExampleMenuIsProjectDir", "847", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ExampleMenuIsProjectDir", "847", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ExampleMenuIsProjectDir", "848", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_ID(Q7B_List::init()))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ExampleMenuIsProjectDir", "850", "1");
Q7B_ASSIGNMENT(&a, &Q7B__LIST(Q7B_DIR_LIST(Q7B_Dir_Object(), s)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ExampleMenuIsProjectDir", "852", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "ExampleMenuIsProjectDir", "852", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ExampleMenuIsProjectDir", "853", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_DIR_EXISTS(Q7B_Dir_Object(), Q7B_LIST_OBJECT(a, i))) && Q7B_CBOOL(Q7B_NOT(Q7B_ENDSWITH(Q7B_LIST_OBJECT(a, i), Q7B_ID("/Copy"), Q7B_ID(true))))))) && Q7B_CBOOL(Q7B_NOT(Q7B_ENDSWITH(Q7B_LIST_OBJECT(a, i), Q7B_ID("/cpp"), Q7B_ID(true))))))) && Q7B_CBOOL(Q7B_NOT(Q7B_ENDSWITH(Q7B_LIST_OBJECT(a, i), Q7B_ID("/gcc"), Q7B_ID(true))))))) && Q7B_CBOOL(Q7B_NOT(Q7B_ENDSWITH(Q7B_LIST_OBJECT(a, i), Q7B_ID("/Resources"), Q7B_ID(true)))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ExampleMenuIsProjectDir", "854", "1");
return Q7B_ID(Q7B_ID(false));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ExampleMenuIsProjectDir", "858", "1");
return Q7B_ID(Q7B_ID(true));
return Q7B_ID(Q7B_IDNULL());
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ExampleMenuIsProjectDir", "860", "2");
}

MainWindow::~MainWindow()
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Finalize", "1102", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "Finalize", "1107", "2");
  delete ui;
  q7b_this->ref = 0;
}

MainWindow::MainWindow(Q7B _q7b_this)
{
  ui->setupUi(this);
}

void MainWindow::OpenUI(Q7B s, Q7B s2)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2503", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2507", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2508", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2509", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2512", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_EQUAL(Q7B_FILEEXTENSION(s), Q7B_ID("QObject"))) || Q7B_CBOOL(Q7B_EQUAL(Q7B_FILEBASENAME(s), Q7B_ID("Global")))))) || Q7B_CBOOL(Q7B_EQUAL(Q7B_FILEBASENAME(s), Q7B_ID("Application")))))) || Q7B_CBOOL(Q7B_EQUAL(Q7B_FILEBASENAME(s), Q7B_ID("SystemTrayIcon"))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2513", "1");
Q7B__MSGBOX(Q7B_ID("Creating a GUI ui file for the current code file is not allowed and makes no sense.\nNormally, you would open the MainWindow.QMainWindow code file and hit the Qt Designer button."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2514", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2523", "1");

if (Q7B_CBOOL(Q7B_FILE(s2))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2527", "1");

if (Q7B_CBOOL(Q7B_OS_ISMAC(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2528", "1");
Q7B_LAUNCH(Q7B_CONCAT(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Designer.app/Contents/MacOS/Designer")), Q7B_List::init(s2), Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID(false));

} else if (Q7B_CBOOL(Q7B_OS_ISWINDOWS(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2530", "1");
Q7B_LAUNCH(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/designer")), Q7B_List::init(s2), Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID(false));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2533", "1");
Q7B_LAUNCH(Q7B_ID("/usr/bin/designer"), Q7B_List::init(s2), Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID(false));

}

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2538", "1");
Q7B s3; Q7B_ASSIGNMENT(&s3, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2541", "1");

if (Q7B_CBOOL(Q7B_ENDSWITH(s, Q7B_ID("QMainWindow.q7b"), Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2542", "1");
Q7B_ASSIGNMENT(&s3, &Q7B__STRING(Q7B_ID("QMainWindow.ui")));

} else if (Q7B_CBOOL(Q7B_ENDSWITH(s, Q7B_ID("QDialog.q7b"), Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2544", "1");
Q7B_ASSIGNMENT(&s3, &Q7B__STRING(Q7B_ID("QDialog.ui")));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2546", "1");
Q7B_ASSIGNMENT(&s3, &Q7B__STRING(Q7B_ID("QWidget.ui")));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2549", "1");
Q7B_COPY(Q7B_ADD(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Templates/")), s3), s2);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2551", "1");

if (Q7B_CBOOL(Q7B_OS_ISMAC(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2552", "1");
Q7B_LAUNCH(Q7B_CONCAT(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Designer.app/Contents/MacOS/Designer")), Q7B_List::init(s2), Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID(false));

} else if (Q7B_CBOOL(Q7B_OS_ISWINDOWS(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2554", "1");
Q7B_LAUNCH(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/designer")), Q7B_List::init(s2), Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID(false));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2557", "1");
Q7B_LAUNCH(Q7B_ID("/usr/bin/designer"), Q7B_List::init(s2), Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID(false));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "OpenUI", "2561", "2");
}

void MainWindow::PerformRegister()
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PerformRegister", "2665", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PerformRegister", "2665", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__ID(Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_ID("Serial")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PerformRegister", "2666", "1");

if (Q7B_CBOOL(Q7B_EQUAL(s, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PerformRegister", "2667", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PerformRegister", "2669", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_LEN(s), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PerformRegister", "2670", "1");
Q7B__MSGBOX(Q7B_ID("Basic For Qt is already successfully registered."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PerformRegister", "2671", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PerformRegister", "2674", "1");
Q7B sSerial; Q7B_ASSIGNMENT(&sSerial, &(Q7B__ID(Q7B_IDNULL())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PerformRegister", "2675", "1");
Q7B_ASSIGNMENT(&sSerial, &Q7B__ID(Q7B_INPUTBOX(Q7B_ID("Please enter the serial number to unlock Basic For Qt."), Q7B_ID("Register..."), Q7B_ID(""))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PerformRegister", "2676", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sSerial, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PerformRegister", "2677", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PerformRegister", "2679", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("Serial"), sSerial);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PerformRegister", "2681", "2");
}

void MainWindow::PrintStatusBar(Q7B s)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PrintStatusBar", "1403", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PrintStatusBar", "1403", "1");

if (Q7B_CBOOL(Q7B_CONTAINS(s, Q7B_ID("\n"), Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PrintStatusBar", "1403", "1");
Q7B_ASSIGNMENT(&s, &Q7B__ID(Q7B_LEFT(s, Q7B_INSTR(s, Q7B_ID("\n"), Q7B_ID((qint64) 0), Q7B_ID(true)))));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PrintStatusBar", "1405", "1");
Q7B_QLABEL_TEXT(statusBar, Q7B_ADD(Q7B_ID(" "), s));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "PrintStatusBar", "1406", "2");
}

void MainWindow::ReopenCode(Q7B PathFileName, Q7B nGoto)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "970", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "971", "1");
Q7B_ASSIGNMENT(&PathFileName, &Q7B__ID(Q7B_REPLACE(PathFileName, Q7B_ID("\\"), Q7B_ID("/"), Q7B_ID(true))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "972", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "973", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "975", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "975", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "976", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "977", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "978", "1");
Q7B_ASSIGNMENT(&s, &Q7B__STRING(Q7B_REPLACE(s, Q7B_ID("\\"), Q7B_ID("/"), Q7B_ID(true))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "980", "1");

if (Q7B_CBOOL(Q7B_EQUAL(s, PathFileName))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "982", "1");
Q7B_SETFOCUSMDI(w);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "984", "1");
Q7B_Q7BProjectWindow_Class(theProjectWindow)->PerformSelect(Q7B_CQSTRING(PathFileName));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "986", "1");

if (Q7B_CBOOL(Q7B_GREATER(nGoto, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "987", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "988", "1");
Q7B_Q7BCodeView_Class(cb)->GotoLineAndSelectLine(Q7B_CQINT64(nGoto));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "991", "1");
return;

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCode", "995", "2");
}

void MainWindow::ReopenCodeAndLoadBefore(Q7B PathFileName, Q7B nGoto)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCodeAndLoadBefore", "998", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCodeAndLoadBefore", "999", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCodeAndLoadBefore", "1000", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCodeAndLoadBefore", "1002", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "ReopenCodeAndLoadBefore", "1002", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCodeAndLoadBefore", "1003", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCodeAndLoadBefore", "1004", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_PROPERTY(w, Q7B_ID("PathFileName")), PathFileName))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCodeAndLoadBefore", "1007", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCodeAndLoadBefore", "1008", "1");
Q7B_Q7BCodeView_Class(cb)->Load(Q7B_CQSTRING(PathFileName));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCodeAndLoadBefore", "1009", "1");

if (Q7B_CBOOL(Q7B_GREATER(nGoto, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCodeAndLoadBefore", "1010", "1");
Q7B_Q7BCodeView_Class(cb)->GotoLineAndSelectLine(Q7B_CQINT64(nGoto));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCodeAndLoadBefore", "1013", "1");
return;

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ReopenCodeAndLoadBefore", "1017", "2");
}

void MainWindow::RequeryMenuRuntimeExtensionFiles()
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "387", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "387", "1");
Q7B_QMENU_CLEAR(mMenuRuntimeExtension);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "388", "1");
Q7B_QMENU_CLEAR(menuAdd_Runtime_Extension);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "390", "1");
Q7B q; Q7B_ASSIGNMENT(&q, &(Q7B__QACTION(Q7B_QACTION_INIT(this, "q"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "393", "1");
Q7B ll; Q7B_ASSIGNMENT(&ll, &(Q7B__LIST(Q7B_List::init(Q7B_ID("*.pro")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "395", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_EQUAL(ll, Q7B_IDNULL())) || Q7B_CBOOL(Q7B_EQUAL(Q7B_LIST_LENGTH(ll), Q7B_ID((qint64) 0))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "395", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "398", "1");
Q7B dd; Q7B_ASSIGNMENT(&dd, &(Q7B__ID(Q7B_DIR_FINDFILE(Q7B_Dir_Object(), Q7B_APPLICATION_PATH(Q7B_Application_Object()), ll, Q7B_ID(QDir::NoFilter), Q7B_ID(QDir::NoSort)))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "400", "1");

if (Q7B_CBOOL(Q7B_EQUAL(dd, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "400", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "402", "1");
Q7B_ASSIGNMENT(&lMenuRuntimeExtension, &Q7B__LIST(dd));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "407", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "408", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(lMenuRuntimeExtension), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "408", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "410", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mMenuRuntimeExtension, Q7B_FILENAME(Q7B_LIST_OBJECT(lMenuRuntimeExtension, i)))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "410", "1");
Q7B_QACTION_TAG(q, Q7B_LIST_OBJECT(lMenuRuntimeExtension, i));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "410", "1");
Q7B_QMENU_ADDACTION2(menuAdd_Runtime_Extension, q);

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryMenuRuntimeExtensionFiles", "413", "2");
}

void MainWindow::RequeryUIFiles()
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "450", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "450", "1");
Q7B_QMENU_CLEAR(mUIFiles);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "451", "1");
Q7B_QMENU_CLEAR(menuUi_Files);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "453", "1");
Q7B q; Q7B_ASSIGNMENT(&q, &(Q7B__QACTION(Q7B_QACTION_INIT(this, "q"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "456", "1");
Q7B ll; Q7B_ASSIGNMENT(&ll, &(Q7B__LIST(Q7B_List::init(Q7B_ID("*.ui")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "458", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_EQUAL(ll, Q7B_IDNULL())) || Q7B_CBOOL(Q7B_EQUAL(Q7B_LIST_LENGTH(ll), Q7B_ID((qint64) 0))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "458", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "461", "1");
Q7B dd; Q7B_ASSIGNMENT(&dd, &(Q7B__ID(Q7B_DIR_FINDFILE(Q7B_Dir_Object(), Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, ll, Q7B_ID(QDir::NoFilter), Q7B_ID(QDir::NoSort)))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "463", "1");

if (Q7B_CBOOL(Q7B_EQUAL(dd, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "463", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "465", "1");
Q7B_ASSIGNMENT(&lUIFiles, &Q7B__LIST(dd));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "470", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "471", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(lUIFiles), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "471", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "473", "1");
Q7B_ASSIGNMENT(&q, &Q7B__QACTION(Q7B_QMENU_ADDACTION(mUIFiles, Q7B_FILENAME(Q7B_LIST_OBJECT(lUIFiles, i)))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "473", "1");
Q7B_QACTION_TAG(q, Q7B_LIST_OBJECT(lUIFiles, i));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "473", "1");
Q7B_QMENU_ADDACTION2(menuUi_Files, q);

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "RequeryUIFiles", "476", "2");
}

void MainWindow::ResetDebugPosition()
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ResetDebugPosition", "2071", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ResetDebugPosition", "2071", "1");

if (Q7B_CBOOL(bDebug)){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ResetDebugPosition", "2072", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ResetDebugPosition", "2073", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ResetDebugPosition", "2074", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "ResetDebugPosition", "2074", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ResetDebugPosition", "2075", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ResetDebugPosition", "2076", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ResetDebugPosition", "2077", "1");
Q7B_Q7BCodeView_Class(cb)->setCurrentDebugPosition(Q7B_CQINT64(Q7B_ID((qint64) 0)));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ResetDebugPosition", "2080", "2");
}

void MainWindow::SetWindowTitle(Q7B s)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "SetWindowTitle", "367", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "SetWindowTitle", "367", "1");
Q7B_QWIDGET_WINDOWTITLE(q7b_this, s);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "SetWindowTitle", "368", "2");
}

void MainWindow::ShowError(Q7B sError)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1532", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1532", "1");

if (Q7B_CBOOL(Q7B_STARTSWITH(sError, Q7B_ID("Q7Basic: "), Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1533", "1");
Q7B_ASSIGNMENT(&sError, &Q7B__ID(Q7B_MID(sError, Q7B_ID((qint64) 9), Q7B_ID((qint64) -1))));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1537", "1");
Q7B_MSGBOX(Q7B_ID("Error"), sError, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1541", "1");
Q7B n; Q7B_ASSIGNMENT(&n, &(Q7B__INTEGER(Q7B_INSTR(sError, Q7B_ID("\n"), Q7B_ID((qint64) 0), Q7B_ID(true)))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1543", "1");

if (Q7B_CBOOL(Q7B_GREATEREQUAL(n, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1544", "1");
PrintStatusBar(Q7B_LEFT(sError, n));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1546", "1");
PrintStatusBar(sError);

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1552", "1");

if (Q7B_CBOOL(Q7B_STARTSWITH(sError, Q7B_ID("syntax error or parser error "), Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1553", "1");
Q7B m; Q7B_ASSIGNMENT(&m, &(Q7B__INTEGER(Q7B_INSTR(sError, Q7B_ID(" in line "), Q7B_ID((qint64) 0), Q7B_ID(true)))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1554", "1");
Q7B_ASSIGNMENT(&m, &Q7B__INTEGER(Q7B_ADD(m, Q7B_ID((qint64) 9))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1555", "1");
Q7B m2; Q7B_ASSIGNMENT(&m2, &(Q7B__INTEGER(Q7B_INSTR(sError, Q7B_ID(" in file "), Q7B_ID((qint64) 0), Q7B_ID(true)))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1556", "1");
Q7B sLine; Q7B_ASSIGNMENT(&sLine, &(Q7B__STRING(Q7B_TRIM(Q7B_MID(sError, m, Q7B_SUB(m2, m))))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1560", "1");
Q7B_ASSIGNMENT(&m, &Q7B__INTEGER(Q7B_INSTR(sError, Q7B_ID(" in file "), Q7B_ID((qint64) 0), Q7B_ID(true))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1561", "1");
Q7B_ASSIGNMENT(&m, &Q7B__INTEGER(Q7B_ADD(m, Q7B_ID((qint64) 9))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1562", "1");
Q7B_ASSIGNMENT(&m2, &Q7B__INTEGER(Q7B_INSTR(sError, Q7B_ID("\n"), Q7B_ID((qint64) 0), Q7B_ID(true))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1563", "1");
Q7B sFile; Q7B_ASSIGNMENT(&sFile, &(Q7B__STRING(Q7B_TRIM(Q7B_MID(sError, m, Q7B_SUB(m2, m))))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1565", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1566", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1567", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1567", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1568", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1573", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sFile, Q7B_FILENAME(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1575", "1");
Q7B_SETFOCUSMDI(w);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1576", "1");
Q7B_Q7BProjectWindow_Class(theProjectWindow)->PerformSelect(Q7B_CQSTRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1578", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1579", "1");
Q7B_Q7BCodeView_Class(cb)->GotoLineAndSelectLine(Q7B_CQINT64(Q7B_INTEGER(sLine, Q7B_ID(false))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1582", "1");
break;

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1587", "1");
Q7B_ASSIGNMENT(&sError, &Q7B__ID((Q7B_LEFT(sError, n))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1589", "1");
ShowLastError(sError, sFile, Q7B_INTEGER(sLine, Q7B_ID(false)));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1593", "1");
myStop();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1594", "1");
Q7B_ASSIGNMENT(&bCompilerError, &Q7B__BOOLEAN(Q7B_ID(true)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1596", "1");
Q7B_QWIDGET_VISIBLE(dockCompiler, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowError", "1601", "2");
}

void MainWindow::ShowInternalError(Q7B s)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowInternalError", "2182", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowInternalError", "2182", "1");
myStop();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowInternalError", "2183", "1");
Q7B_ASSIGNMENT(&bCompilerError, &Q7B__BOOLEAN(Q7B_ID(true)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowInternalError", "2185", "1");
ShowLastError(s, Q7B_ID(""), Q7B_ID((qint64) 0));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowInternalError", "2186", "1");
PrintStatusBar(s);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowInternalError", "2187", "1");
Q7B_MSGBOX(Q7B_ID("Internal Error. Please report back to us."), s, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowInternalError", "2189", "1");
Q7B_QWIDGET_VISIBLE(dockCompiler, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowInternalError", "2190", "2");
}

void MainWindow::ShowLastError(Q7B Text, Q7B sFileName, Q7B nLine)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowLastError", "1524", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowLastError", "1525", "1");
Q7B_ASSIGNMENT(&sLastErrorText, &Q7B__STRING(Text));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowLastError", "1526", "1");
Q7B_ASSIGNMENT(&sLastErrorFile, &Q7B__STRING(sFileName));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowLastError", "1528", "1");
Q7B_ASSIGNMENT(&nLastErrorLine, &Q7B__INTEGER(nLine));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "ShowLastError", "1529", "2");
}

void MainWindow::UpdateRecentProjects(Q7B sNewlyOpenedProject)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "171", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "172", "1");
Q7B m; Q7B_ASSIGNMENT(&m, &(Q7B__QMENU(menuRecent_Projects)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "174", "1");

if (Q7B_CBOOL(Q7B_UNEQUAL(sNewlyOpenedProject, Q7B_ID("")))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "175", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_LIST_LENGTH(aRecentProjects), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "176", "1");

if (Q7B_CBOOL(Q7B_UNEQUAL(Q7B_LIST_OBJECT(aRecentProjects, Q7B_ID((qint64) 0)), sNewlyOpenedProject))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "177", "1");
Q7B_LIST_INSERT(aRecentProjects, Q7B_ID((qint64) 0), sNewlyOpenedProject);

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "179", "1");
return;

}

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "182", "1");
Q7B_LIST_INSERT(aRecentProjects, Q7B_ID((qint64) 0), sNewlyOpenedProject);

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "187", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_LIST_LENGTH(aRecentProjects), Q7B_ID((qint64) 5)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "188", "1");
Q7B_LIST_REMOVE(aRecentProjects, Q7B_SUB(Q7B_LIST_LENGTH(aRecentProjects), Q7B_ID((qint64) 1)));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "191", "1");
Q7B_WRITELIST(aRecentProjects, Q7B_CONCAT(Q7B_DIR_TEMPPATH(Q7B_Dir_Object()), Q7B_ID("/Q7Basic/RecentProjects.txt")));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "193", "1");

if (Q7B_CBOOL(Q7B_FILE_EXISTS(Q7B_File_Object(), Q7B_CONCAT(Q7B_DIR_TEMPPATH(Q7B_Dir_Object()), Q7B_ID("/Q7Basic/RecentProjects.txt"))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "194", "1");
Q7B_ASSIGNMENT(&aRecentProjects, &Q7B__LIST(Q7B_READLIST(Q7B_CONCAT(Q7B_DIR_TEMPPATH(Q7B_Dir_Object()), Q7B_ID("/Q7Basic/RecentProjects.txt")))));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "200", "1");
Q7B_QMENU_CLEAR(m);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "201", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "202", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(aRecentProjects), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "202", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "203", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_LIST_OBJECT(aRecentProjects, i))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "204", "1");

if (Q7B_CBOOL(Q7B_OS_ISWINDOWS(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "204", "1");
Q7B_ASSIGNMENT(&s, &Q7B__STRING(Q7B_REPLACE(s, Q7B_ID("/"), Q7B_ID("\\"), Q7B_ID(true))));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "205", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__QACTION(Q7B_QMENU_ADDACTION(m, s))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "206", "1");
Q7B_QACTION_TAG(a, Q7B_LIST_OBJECT(aRecentProjects, i));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "UpdateRecentProjects", "211", "2");
}

void MainWindow::cleanandrebuildall(Q7B bDeployment)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1807", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1809", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_CONTAINS(Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_ID("QtDir")), Q7B_ID(" "), Q7B_ID(true))) || Q7B_CBOOL(Q7B_CONTAINS(Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_ID("QtMINGWDir")), Q7B_ID(" "), Q7B_ID(true))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1810", "1");
Q7B__MSGBOX(Q7B_ID("Make sure that the installation path of Basic For Qt (or path of Qt) does not include spaces.\n\nThis is a limitation caused by Qt.\nSorry for the inconvenience."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1811", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("QtDir"), Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1812", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("QtMINGWDir"), Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1813", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1817", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_LEN(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1818", "1");
Q7B_Project_Class(Q7B_Project_Object())->SaveAll();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1819", "1");
myStop();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1821", "1");

if (Q7B_CBOOL(bDeployment)){

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1826", "1");
PrintStatusBar(Q7B_ID("Deploy..."));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1828", "1");
PrintStatusBar(Q7B_ID("Clean & Rebuild All..."));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1831", "1");

if (Q7B_CBOOL(Q7B_OS_ISMAC(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1832", "1");
Q7B_DELETE(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc/Build/")), Q7B_FILENAME(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath)), Q7B_ID(".app/Contents/MacOS/plugins")));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1836", "1");
Q7B_DIR_RECURSIVEREMOVE(Q7B_Dir_Object(), Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1841", "1");
Q7B_QPLAINTEXTEDIT_PLAINTEXT(plainTextEditCompiler, Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1842", "1");
Q7B_ASSIGNMENT(&bCompilerError, &Q7B__BOOLEAN(Q7B_ID(false)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1844", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1845", "1");

if (Q7B_CBOOL(bDeployment)){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1846", "1");
Q7B_ASSIGNMENT(&s, &Q7B__STRING(Q7B_ID(Q7B_Q7BCompiler_Class(Compiler)->Deploy(Q7B_CQSTRING(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath)))));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1848", "1");
Q7B_ASSIGNMENT(&s, &Q7B__STRING(Q7B_ID(Q7B_Q7BCompiler_Class(Compiler)->Build(Q7B_CQSTRING(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath)))));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1850", "1");
Q7B_ASSIGNMENT(&bRunOrBuild, &Q7B__BOOLEAN(Q7B_ID(true)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1851", "1");
Q7B_ASSIGNMENT(&bBuildOnly, &Q7B__BOOLEAN(Q7B_ID(true)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1852", "1");
DoActions();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "cleanandrebuildall", "1854", "2");
}

Q7B MainWindow::currentMDIWindowIsForm()
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "currentMDIWindowIsForm", "2453", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "currentMDIWindowIsForm", "2453", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "currentMDIWindowIsForm", "2454", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "currentMDIWindowIsForm", "2455", "1");
return Q7B_ID(Q7B_ID(false));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "currentMDIWindowIsForm", "2458", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "currentMDIWindowIsForm", "2459", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "currentMDIWindowIsForm", "2460", "1");
return Q7B_ID(Q7B_ENDSWITH(s, Q7B_ID(".Form.q7b"), Q7B_ID(true)));
return Q7B_ID(Q7B_IDNULL());
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "currentMDIWindowIsForm", "2461", "2");
}

Q7B MainWindow::getCurrentFileName()
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "getCurrentFileName", "2442", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "getCurrentFileName", "2442", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "getCurrentFileName", "2443", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "getCurrentFileName", "2444", "1");
return Q7B_ID(Q7B_ID(""));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "getCurrentFileName", "2447", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "getCurrentFileName", "2448", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "getCurrentFileName", "2449", "1");
return Q7B_ID(s);
return Q7B_ID(Q7B_IDNULL());
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "getCurrentFileName", "2450", "2");
}

void MainWindow::myStop()
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "myStop", "2083", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "myStop", "2084", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_LEN(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "myStop", "2086", "1");
Q7B_QPROGRESSBAR_VALUE(progressBar, Q7B_ID((qint64) 0));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "myStop", "2088", "1");
Q7B_ASSIGNMENT(&bDebug, &Q7B__BOOLEAN(Q7B_ID(false)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "myStop", "2089", "1");
Q7B_ASSIGNMENT(&bRunOrBuild, &Q7B__BOOLEAN(Q7B_ID(false)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "myStop", "2090", "1");
Q7B_ASSIGNMENT(&bBuildOnly, &Q7B__BOOLEAN(Q7B_ID(false)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "myStop", "2091", "1");
Q7B_QWIDGET_VISIBLE(progressBar, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "myStop", "2093", "1");
DoActions();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "myStop", "2095", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ID(Q7B_Q7BCompiler_Class(Compiler)->Stop(Q7B_CQSTRING(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "myStop", "2096", "1");
ResetDebugPosition();

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "myStop", "2099", "2");
}

void MainWindow::Q7B_on_Compiler_BreakpointReached(Q7B sFile, Q7B sLine)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_BreakpointReached", "1609", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_BreakpointReached", "1610", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_EQUAL(sFile, Q7B_ID(""))) && Q7B_CBOOL(Q7B_EQUAL(sLine, Q7B_ID(""))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_BreakpointReached", "1611", "1");
ResetDebugPosition();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_BreakpointReached", "1612", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_BreakpointReached", "1615", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_BreakpointReached", "1616", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_BreakpointReached", "1617", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_BreakpointReached", "1617", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_BreakpointReached", "1618", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_BreakpointReached", "1622", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sFile, Q7B_FILENAME(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_BreakpointReached", "1624", "1");
Q7B_SETFOCUSMDI(w);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_BreakpointReached", "1625", "1");
Q7B_Q7BProjectWindow_Class(theProjectWindow)->PerformSelect(Q7B_CQSTRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_BreakpointReached", "1627", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_BreakpointReached", "1628", "1");
Q7B_Q7BCodeView_Class(cb)->setCurrentDebugPosition(Q7B_CQINT64(Q7B_INTEGER(sLine, Q7B_ID(false))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_BreakpointReached", "1629", "1");
Q7B_Q7BCodeView_Class(cb)->GotoLine(Q7B_CQINT64(Q7B_INTEGER(sLine, Q7B_ID(false))));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_BreakpointReached", "1638", "2");
}

void MainWindow::Q7B_on_Compiler_Compiled(Q7B sPathFileName, Q7B nCountFilesCompiled)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Compiled", "1377", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Compiled", "1378", "1");

if (Q7B_CBOOL(Q7B_EQUAL(nCountFilesCompiled, Q7B_MINUS(Q7B_ID((qint64) 2))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Compiled", "1379", "1");
PrintStatusBar(Q7B_ID("Linking..."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Compiled", "1380", "1");
Q7B_QPROGRESSBAR_MAXIMUM(progressBar, Q7B_ID((qint64) 0));

} else if (Q7B_CBOOL(Q7B_EQUAL(nCountFilesCompiled, Q7B_ID((qint64) -1)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Compiled", "1383", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QPROGRESSBAR_VALUE(progressBar), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Compiled", "1384", "1");
Q7B_QPROGRESSBAR_VALUE(progressBar, Q7B_ID((qint64) 1));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Compiled", "1386", "1");
Q7B_QPROGRESSBAR_MAXIMUM(progressBar, _nCountFilesToCompile);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Compiled", "1387", "1");
PrintStatusBar(Q7B_CONCAT(Q7B_ID("Compiling "), sPathFileName));

} else if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_GREATER(nCountFilesCompiled, Q7B_ID((qint64) 10000))) || Q7B_CBOOL(Q7B_SMALLER(nCountFilesCompiled, Q7B_MINUS(Q7B_ID((qint64) 10000))))))) || Q7B_CBOOL(Q7B_GREATER(_nCountFilesToCompile, Q7B_ID((qint64) 10000)))))) || Q7B_CBOOL(Q7B_SMALLER(_nCountFilesToCompile, Q7B_MINUS(Q7B_ID((qint64) 10000)))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Compiled", "1391", "1");
PrintStatusBar(Q7B_ID("Compiling..."));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Compiled", "1394", "1");
Q7B_QPROGRESSBAR_VALUE(progressBar, nCountFilesCompiled);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Compiled", "1395", "1");
Q7B_QPROGRESSBAR_MAXIMUM(progressBar, _nCountFilesToCompile);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Compiled", "1396", "1");

if (Q7B_CBOOL(Q7B_SMALLEREQUAL(nCountFilesCompiled, _nCountFilesToCompile))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Compiled", "1397", "1");
PrintStatusBar(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_ID("Compiling "), sPathFileName), Q7B_ID(" - ")), nCountFilesCompiled), Q7B_ID(" of ")), _nCountFilesToCompile), Q7B_ID(" file(s)")));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Compiled", "1400", "2");
}

void MainWindow::Q7B_on_Compiler_CompilerOrApplicationFinished(Q7B bApplication)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_CompilerOrApplicationFinished", "2199", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_CompilerOrApplicationFinished", "2200", "1");
myStop();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_CompilerOrApplicationFinished", "2201", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_NOT(bApplication)) && Q7B_CBOOL(Q7B_NOT(bCompilerError)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_CompilerOrApplicationFinished", "2202", "1");
Q7B_QPROGRESSBAR_MINIMUM(progressBar, Q7B_ID((qint64) 0));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_CompilerOrApplicationFinished", "2203", "1");
Q7B_QPROGRESSBAR_MAXIMUM(progressBar, Q7B_ID((qint64) 100));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_CompilerOrApplicationFinished", "2204", "1");
Q7B_QPROGRESSBAR_VALUE(progressBar, Q7B_ID((qint64) 100));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_CompilerOrApplicationFinished", "2206", "2");
}

void MainWindow::Q7B_on_Compiler_Error(Q7B sError)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Error", "1604", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Error", "1604", "1");
ShowError(sError);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Error", "1606", "2");
}

void MainWindow::Q7B_on_Compiler_Finished(Q7B nCountFilesCompiled)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1409", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1411", "1");
DoActions();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1413", "1");
Q7B_QPROGRESSBAR_MINIMUM(progressBar, Q7B_ID((qint64) 0));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1414", "1");
Q7B_QPROGRESSBAR_MAXIMUM(progressBar, Q7B_ID((qint64) 100));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1415", "1");
Q7B_QPROGRESSBAR_VALUE(progressBar, Q7B_ID((qint64) 100));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1417", "1");

if (Q7B_CBOOL(Q7B_EQUAL(nCountFilesCompiled, Q7B_MINUS(Q7B_ID((qint64) 1))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1418", "1");
PrintStatusBar(Q7B_ID("Ready. Made Basic For Qt Only "));

} else if (Q7B_CBOOL(Q7B_EQUAL(nCountFilesCompiled, Q7B_ID((qint64) -999999)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1421", "1");
PrintStatusBar(Q7B_ID("Ready. Deployment ready"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1423", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1425", "1");

if (Q7B_CBOOL(Q7B_OS_ISWINDOWS(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1426", "1");
Q7B_OPENURL(Q7B_CONCAT(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc/Build/release")));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1428", "1");
Q7B_OPENURL(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath);

}

}

} else if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_GREATER(nCountFilesCompiled, Q7B_ID((qint64) 10000))) || Q7B_CBOOL(Q7B_SMALLER(nCountFilesCompiled, Q7B_MINUS(Q7B_ID((qint64) 10000))))))) || Q7B_CBOOL(Q7B_GREATER(_nCountFilesToCompile, Q7B_ID((qint64) 10000)))))) || Q7B_CBOOL(Q7B_SMALLER(_nCountFilesToCompile, Q7B_MINUS(Q7B_ID((qint64) 10000)))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1434", "1");
PrintStatusBar(Q7B_ID("Ready. Compilation finished"));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1436", "1");
PrintStatusBar(Q7B_CONCAT(Q7B_CONCAT(Q7B_ID("Ready. Compiled "), nCountFilesCompiled), Q7B_ID(" file(s)")));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1440", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1442", "1");

if (Q7B_CBOOL(Q7B_OS_ISWINDOWS(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1443", "1");
Q7B_WRITESTRING(Q7B_ID("Windows"), Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc/Platform.txt")), Q7B_ID(""));

} else if (Q7B_CBOOL(Q7B_OS_ISMAC(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1445", "1");
Q7B_WRITESTRING(Q7B_ID("Mac"), Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc/Platform.txt")), Q7B_ID(""));

} else if (Q7B_CBOOL(Q7B_OS_ISLINUX(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1447", "1");
Q7B_WRITESTRING(Q7B_ID("Linux"), Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc/Platform.txt")), Q7B_ID(""));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Finished", "1452", "2");
}

void MainWindow::Q7B_on_Compiler_ReadyForDebugging()
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2101", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2104", "1");
Q7B_QWIDGET_VISIBLE(dockCompiler, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2105", "1");
Q7B_QWIDGET_VISIBLE(dockLog, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2107", "1");
Q7B_QPROGRESSBAR_MINIMUM(progressBar, Q7B_ID((qint64) 0));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2108", "1");
Q7B_QPROGRESSBAR_MAXIMUM(progressBar, Q7B_ID((qint64) 100));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2109", "1");
Q7B_QPROGRESSBAR_VALUE(progressBar, Q7B_ID((qint64) 100));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2110", "1");
PrintStatusBar(Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2112", "1");
Q7B_Q7BCompiler_Class(Compiler)->clearBreakpoints();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2114", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2115", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2116", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2116", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2117", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2118", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2120", "1");
Q7B k; Q7B_ASSIGNMENT(&k, &(Q7B__STRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2121", "1");
Q7B kk; Q7B_ASSIGNMENT(&kk, &(Q7B__QSTRINGLIST(Q7B_ID(Q7B_Q7BCodeView_Class(cb)->getAllBreakpoints()))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2122", "1");
Q7B_Q7BCompiler_Class(Compiler)->setBreakpoints(Q7B_CQSTRING(k), Q7B_CQSTRINGLIST(kk));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_ReadyForDebugging", "2126", "2");
}

void MainWindow::Q7B_on_Compiler_StandardError(Q7B s)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_StandardError", "2173", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_StandardError", "2173", "1");
Q7B_QPLAINTEXTEDIT_APPENDPLAINTEXT(plainTextEditLog, Q7B_CONCAT(s, Q7B_ID("\n")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_StandardError", "2174", "2");
}

void MainWindow::Q7B_on_Compiler_StandardErrorOfCompiler(Q7B s)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_StandardErrorOfCompiler", "2194", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_StandardErrorOfCompiler", "2194", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_STARTSWITH(s, Q7B_ID("Q7Basic: "), Q7B_ID(true))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_StandardErrorOfCompiler", "2194", "1");
ShowInternalError(s);

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_StandardErrorOfCompiler", "2195", "1");
Q7B_QPLAINTEXTEDIT_APPENDPLAINTEXT(plainTextEditCompiler, Q7B_CONCAT(s, Q7B_ID("\n")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_StandardErrorOfCompiler", "2196", "2");
}

void MainWindow::Q7B_on_Compiler_StandardOutput(Q7B s)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_StandardOutput", "2169", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_StandardOutput", "2169", "1");
Q7B_QPLAINTEXTEDIT_APPENDPLAINTEXT(plainTextEditLog, Q7B_CONCAT(s, Q7B_ID("\n")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_StandardOutput", "2170", "2");
}

void MainWindow::Q7B_on_Compiler_StandardOutputOfCompiler(Q7B s)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_StandardOutputOfCompiler", "2177", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_StandardOutputOfCompiler", "2178", "1");
Q7B_QPLAINTEXTEDIT_APPENDPLAINTEXT(plainTextEditCompiler, Q7B_CONCAT(s, Q7B_ID("\n")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_StandardOutputOfCompiler", "2179", "2");
}

void MainWindow::Q7B_on_Compiler_Started(Q7B nCountFilesToCompile)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Started", "315", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Started", "318", "1");
Q7B_QPROGRESSBAR_MINIMUM(progressBar, Q7B_ID((qint64) 0));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Started", "319", "1");
Q7B_QPROGRESSBAR_MAXIMUM(progressBar, Q7B_ID((qint64) 100));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Started", "320", "1");
Q7B_QPROGRESSBAR_VALUE(progressBar, Q7B_ID((qint64) 100));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Started", "321", "1");
Q7B_QPROGRESSBAR_MAXIMUM(progressBar, Q7B_ID((qint64) 0));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Started", "325", "1");
Q7B_ASSIGNMENT(&_nCountFilesToCompile, &Q7B__INTEGER(nCountFilesToCompile));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Started", "326", "1");

if (Q7B_CBOOL(Q7B_GREATER(nCountFilesToCompile, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Started", "327", "1");
Q7B_ASSIGNMENT(&_nCountFilesToCompile, &Q7B__INTEGER(nCountFilesToCompile));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Started", "328", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QACTION_CHECKED(vs), Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Started", "329", "1");
PrintStatusBar(Q7B_CONCAT(Q7B_CONCAT(Q7B_ID("About to compile "), _nCountFilesToCompile), Q7B_ID(" file(s) estimated")));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Started", "331", "1");
PrintStatusBar(Q7B_CONCAT(Q7B_CONCAT(Q7B_ID("About to compile "), _nCountFilesToCompile), Q7B_ID(" file(s)")));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_Compiler_Started", "335", "2");
}

void MainWindow::Q7B_on_ProjectOpen()
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "503", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "523", "1");
Q7B_APPLICATION_APPLICATIONNAME(Q7B_Application_Object(), Q7B_ID("Basic For Qt"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "531", "1");
Q7B_QPROGRESSBAR_VALUE(progressBar, Q7B_ID((qint64) 0));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "532", "1");
Q7B_QWIDGET_MINIMUMWIDTH(progressBar, Q7B_ID((qint64) 100));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "533", "1");
Q7B_QWIDGET_MAXIMUMWIDTH(progressBar, Q7B_ID((qint64) 100));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "534", "1");
Q7B_QPROGRESSBAR_TEXTVISIBLE(progressBar, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "535", "1");
Q7B_TOOLBAR_ADDPERMANENTWIDGET(Q7B_ToolBar_Object(), progressBar, actionLast_Error);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "537", "1");
Q7B_QWIDGET_MINIMUMWIDTH(statusBar, Q7B_ID((qint64) 400));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "538", "1");

if (Q7B_CBOOL(Q7B_OS_ISMAC(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "539", "1");
Q7B_QWIDGET_X(q7b_this, Q7B_ID((qint64) 0));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "540", "1");
Q7B_QWIDGET_Y(q7b_this, Q7B_ID((qint64) 0));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "541", "1");
Q7B_QWIDGET_MAXIMUMWIDTH(statusBar, Q7B_ID((qint64) 600));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "543", "1");
Q7B_QWIDGET_MAXIMUMWIDTH(statusBar, Q7B_ID((qint64) 800));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "545", "1");
Q7B_TOOLBAR_ADDPERMANENTWIDGET(Q7B_ToolBar_Object(), statusBar, actionLast_Error);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "548", "1");
Q7B_PROPERTY(tb_uilist, Q7B_ID("autoRaise"), Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "549", "1");
Q7B_PROPERTY(tb_uilist, Q7B_ID("popupMode"), Q7B_ID((qint64) 2));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "550", "1");
Q7B_QABSTRACTBUTTON_TEXT(tb_uilist, Q7B_ID("*.ui"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "554", "1");
Q7B_TOOLBAR_ADDPERMANENTWIDGET(Q7B_ToolBar_Object(), tb_uilist, actionMainWindow_ui_2);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "561", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_OS_ISMAC(Q7B_OS_Object())))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "562", "1");
Q7B_QWIDGET_SHOWMAXIMIZED(Q7B_MainWindow_Object());

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "566", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_ID("Project.sProjectPath")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "570", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_NOT(Q7B_OS_ISLINUX(Q7B_OS_Object()))) && Q7B_CBOOL(Q7B_EQUAL(Q7B_LEN(Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_ID("Serial"))), Q7B_ID((qint64) 0))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "570", "1");
Q7B_OPENDIALOG(Q7B_ID("Evaluation"));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "574", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_PREFERENCES_EXISTS(Q7B_Preferences_Object(), Q7B_ID("ActivateHelp"))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "575", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_MESSAGEBOX_QUESTION(Q7B_MessageBox_Object(), Q7B_ID("What is your preference?"), Q7B_ID("Do you like to activate help entries and tips?\nMany experienced BASIC user would NOT need such stuff. You can change the preferences anyway later.\n\nIf you are new to BASIC or coding, I suggest you to select 'Yes'. Otherwise please select 'No' -> deactivate help entries.\n"), Q7B_OR(Q7B_ID((qint64) 16384), Q7B_ID((qint64) 65536)), Q7B_ID(QMessageBox::NoButton)), Q7B_ID((qint64) 16384)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "576", "1");
Q7B_PREFERENCES_SETBOOLEAN(Q7B_Preferences_Object(), Q7B_ID("ActivateHelp"), Q7B_ID(true));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "579", "1");
Q7B_PREFERENCES_SETBOOLEAN(Q7B_Preferences_Object(), Q7B_ID("ActivateHelp"), Q7B_ID(false));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "584", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_LEN(s), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "585", "1");
Q7B_Project_Class(Q7B_Project_Object())->Open(s);

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "588", "1");

if (Q7B_CBOOL(Q7B_OS_ISMAC(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "589", "1");

if (Q7B_CBOOL(Q7B_CONTAINS(Q7B_RUN(Q7B_ID("gcc"), Q7B_List::init()), Q7B_ID("command not found"), Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "590", "1");
Q7B_MSGBOX(Q7B_ID("Installation incomplete"), Q7B_ID("You must have the Xcode Developer Tools (GCC C/C++ Compiler) installed as described on the download page on www.q7basic.org."), Q7B_ID(false));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "592", "1");

if (Q7B_CBOOL(Q7B_CONTAINS(Q7B_RUN(Q7B_ID("qmake"), Q7B_List::init()), Q7B_ID("command not found"), Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "593", "1");
Q7B_MSGBOX(Q7B_ID("Installation incomplete"), Q7B_ID("You must have Qt installed as described on the download page on www.q7basic.org."), Q7B_ID(false));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "598", "1");

if (Q7B_CBOOL(Q7B_OS_ISMAC(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "600", "1");
Q7B_ASSIGNMENT(&s, &Q7B__STRING(Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_ID("QtMINGWDir"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "602", "1");

if (Q7B_CBOOL(Q7B_AND(Q7B_GREATER(Q7B_LEN(s), Q7B_ID((qint64) 0)), Q7B_FILE(Q7B_ADD(s, Q7B_ID("/bin/qmake.exe")))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "603", "1");
Q7B_Q7BCompiler_Class(Compiler)->setMINGWDir(Q7B_CQSTRING(s));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "604", "1");
Q7B_ASSIGNMENT(&sQtMINGWDir, &Q7B__STRING(s));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "607", "1");
Q7B bManual; Q7B_ASSIGNMENT(&bManual, &(Q7B__BOOLEAN(Q7B_ID(true))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "608", "1");
Q7B locations; Q7B_ASSIGNMENT(&locations, &(Q7B__LIST(Q7B_ID(Q7B_List::init()))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "611", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "615", "1");
Q7B_LIST_APPEND(locations, Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "616", "1");
Q7B_LIST_APPEND(locations, Q7B_ADD(Q7B_DIR_HOMEPATH(Q7B_Dir_Object()), Q7B_ID("/")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "617", "1");
Q7B_LIST_APPEND(locations, Q7B_ADD(Q7B_DIR_DESKTOPPATH(Q7B_Dir_Object()), Q7B_ID("/")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "621", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(locations), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "621", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "625", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_LIST_OBJECT(locations, i), Q7B_ID("QtSDK/Desktop/Qt/")), sQtVersion), Q7B_ID("/gcc/bin/qmake"))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "626", "1");
Q7B_ASSIGNMENT(&sQtMINGWDir, &Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_LIST_OBJECT(locations, i), Q7B_ID("QtSDK/Desktop/Qt/")), sQtVersion), Q7B_ID("/gcc"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "627", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("QtMINGWDir"), sQtMINGWDir);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "628", "1");
Q7B_Q7BCompiler_Class(Compiler)->setMINGWDir(Q7B_CQSTRING(sQtMINGWDir));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "629", "1");
Q7B_ASSIGNMENT(&bManual, &Q7B__BOOLEAN(Q7B_ID(false)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "630", "1");
break;

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "634", "1");

if (Q7B_CBOOL(bManual)){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "636", "1");
Q7B_MSGBOX(Q7B_ID("Configuration"), Q7B_ADD(Q7B_ADD(Q7B_ID("Please select the QtSDK directory in which the directory "), sQtVersion), Q7B_ID(" is located (normally in your home folder).")), Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "638", "1");
Q7B_ASSIGNMENT(&sQtMINGWDir, &Q7B__STRING(Q7B_OPENFILEDIALOG_GETDIRECTORY(Q7B_OpenFileDialog_Object())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "641", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_ADD(sQtMINGWDir, Q7B_ID("/")), Q7B_ID("QtSDK/Desktop/Qt/")), sQtVersion), Q7B_ID("/gcc/bin/qmake"))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "643", "1");
Q7B_ASSIGNMENT(&sQtMINGWDir, &Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_ADD(sQtMINGWDir, Q7B_ID("/")), Q7B_ID("QtSDK/Desktop/Qt/")), sQtVersion), Q7B_ID("/gcc"))));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "647", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("QtMINGWDir"), sQtMINGWDir);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "648", "1");
Q7B_Q7BCompiler_Class(Compiler)->setMINGWDir(Q7B_CQSTRING(sQtMINGWDir));

}

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "655", "1");

if (Q7B_CBOOL(Q7B_OS_ISWINDOWS(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "657", "1");
Q7B_ASSIGNMENT(&s, &Q7B__STRING(Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_ID("QtMINGWDir"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "660", "1");

if (Q7B_CBOOL(Q7B_AND(Q7B_GREATER(Q7B_LEN(s), Q7B_ID((qint64) 0)), Q7B_FILE(Q7B_ADD(s, Q7B_ID("/bin/qmake.exe")))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "661", "1");
Q7B_Q7BCompiler_Class(Compiler)->setMINGWDir(Q7B_CQSTRING(s));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "662", "1");
Q7B_ASSIGNMENT(&sQtMINGWDir, &Q7B__STRING(s));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "663", "1");
Q7B_Q7BCompiler_Class(Compiler)->setMINGWDLLDir(Q7B_CQSTRING(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/mingw"))));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "673", "1");
Q7B bManual; Q7B_ASSIGNMENT(&bManual, &(Q7B__BOOLEAN(Q7B_ID(true))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "674", "1");
Q7B locations; Q7B_ASSIGNMENT(&locations, &(Q7B__LIST(Q7B_ID(Q7B_List::init()))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "676", "1");
Q7B ddrives; Q7B_ASSIGNMENT(&ddrives, &(Q7B__LIST(Q7B_DRIVES())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "677", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "678", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(ddrives), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "678", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "679", "1");
Q7B_LIST_APPEND(locations, Q7B_LIST_OBJECT(ddrives, i));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "681", "1");
Q7B_LIST_APPEND(locations, Q7B_ADD(Q7B_ID("C:/Program Files"), Q7B_ID("/")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "682", "1");
Q7B_LIST_APPEND(locations, Q7B_ADD(Q7B_DIR_APPLICATIONSPATH(Q7B_Dir_Object()), Q7B_ID("/")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "683", "1");
Q7B_LIST_APPEND(locations, Q7B_ADD(Q7B_DIR_HOMEPATH(Q7B_Dir_Object()), Q7B_ID("/")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "684", "1");
Q7B_LIST_APPEND(locations, Q7B_ADD(Q7B_DIR_DESKTOPPATH(Q7B_Dir_Object()), Q7B_ID("/")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "688", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(locations), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "688", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "693", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/QtSDK/Desktop/Qt/")), sQtVersion), Q7B_ID("/mingw/bin/qmake.exe"))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "694", "1");
Q7B_ASSIGNMENT(&sQtMINGWDir, &Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/QtSDK/Desktop/Qt/")), sQtVersion), Q7B_ID("/mingw"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "695", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("QtMINGWDir"), sQtMINGWDir);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "696", "1");
Q7B_Q7BCompiler_Class(Compiler)->setMINGWDir(Q7B_CQSTRING(sQtMINGWDir));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "697", "1");
Q7B_ASSIGNMENT(&bManual, &Q7B__BOOLEAN(Q7B_ID(false)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "698", "1");
Q7B_Q7BCompiler_Class(Compiler)->setMINGWDLLDir(Q7B_CQSTRING(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/mingw"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "699", "1");
break;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "702", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_LIST_OBJECT(locations, i), Q7B_ID("QtSDK/Desktop/Qt/")), sQtVersion), Q7B_ID("/mingw/bin/qmake.exe"))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "703", "1");
Q7B_ASSIGNMENT(&sQtMINGWDir, &Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_LIST_OBJECT(locations, i), Q7B_ID("QtSDK/Desktop/Qt/")), sQtVersion), Q7B_ID("/mingw"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "704", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("QtMINGWDir"), sQtMINGWDir);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "705", "1");
Q7B_Q7BCompiler_Class(Compiler)->setMINGWDir(Q7B_CQSTRING(sQtMINGWDir));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "706", "1");
Q7B_ASSIGNMENT(&bManual, &Q7B__BOOLEAN(Q7B_ID(false)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "707", "1");
Q7B_Q7BCompiler_Class(Compiler)->setMINGWDLLDir(Q7B_CQSTRING(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/mingw"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "708", "1");
break;

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "712", "1");

if (Q7B_CBOOL(bManual)){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "714", "1");
Q7B_MSGBOX(Q7B_ID("Configuration"), Q7B_ADD(Q7B_ADD(Q7B_ID("Please select the Qt SDK directory in which the directory "), sQtVersion), Q7B_ID(" is located (normally C:\\QtSDK\\Desktop\\Qt).")), Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "716", "1");
Q7B_ASSIGNMENT(&sQtMINGWDir, &Q7B__STRING(Q7B_OPENFILEDIALOG_GETDIRECTORY(Q7B_OpenFileDialog_Object())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "719", "1");

if (Q7B_CBOOL(Q7B_DIR(Q7B_ADD(Q7B_ADD(Q7B_ADD(sQtMINGWDir, Q7B_ID("/")), sQtVersion), Q7B_ID("/mingw")), Q7B_ID(false)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "720", "1");
Q7B_ASSIGNMENT(&sQtMINGWDir, &Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(sQtMINGWDir, Q7B_ID("/")), sQtVersion), Q7B_ID("/mingw"))));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "724", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("QtMINGWDir"), sQtMINGWDir);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "725", "1");
Q7B_Q7BCompiler_Class(Compiler)->setMINGWDir(Q7B_CQSTRING(sQtMINGWDir));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "726", "1");
Q7B_Q7BCompiler_Class(Compiler)->setMINGWDLLDir(Q7B_CQSTRING(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/mingw"))));

}

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "731", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_PREFERENCES_BOOLEAN(Q7B_Preferences_Object(), Q7B_ID("vs")), Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "732", "1");
Configuration(vs, Q7B_ID(false));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "736", "1");
Q7B ba; Q7B_ASSIGNMENT(&ba, &(Q7B__QBYTEARRAY(Q7B_PREFERENCES_QBYTEARRAY(Q7B_Preferences_Object(), Q7B_ID("MDI_savestate")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "737", "1");
Q7B_QMAINWINDOW_RESTORESTATE(Q7B_MainWindow_Object(), ba, Q7B_ID((qint64) 0));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_ProjectOpen", "743", "2");
}

void MainWindow::Q7B_on_actionAbout_Q7Basic_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionAbout_Q7Basic_triggered", "2704", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionAbout_Q7Basic_triggered", "2705", "1");

if (Q7B_CBOOL(Q7B_OS_ISMAC(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionAbout_Q7Basic_triggered", "2706", "1");
Q7B__MSGBOX(Q7B_ID("\nAbout Basic For Qt\n\n\n\n(C) Copyright KBasic Software 2010-2011\n\nBy Bernd Noetscher. All rights reserved.\n\n\n\nThis is the open source edition. The compiler, the IDE and the runtime are licensed under the terms of GPL v3 as published by the Free Software Foundation. \n\n\n\nFull featured modern BASIC language for all major platforms\n\nHighly optimizedoptimized top-down, recursive descent, two-pass scanner & parser & compiler, LL(1) \n\n\n\nMost Icons are copyrighted KBasic Software \n\nThe Crystal Icon Theme is based on http://www.everaldo.com/ (License: LGPL)\n\n\n\nThe program is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE WARRANTY OF DESIGN, MERCHANTIBILTY AND FITNESS FOR A PARTICULAR PURPOSE.\n\n\n\nBasic For Qt and its documentations are copyrighted and are protected by German copyright laws and international treaty provisions. \n\n"));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionAbout_Q7Basic_triggered", "2725", "1");
Q7B_OPENDIALOG(Q7B_ID("About"));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionAbout_Q7Basic_triggered", "2728", "1");
Q7B l; Q7B_ASSIGNMENT(&l, &(Q7B__LIST(Q7B_PREFERENCES_IDS(Q7B_Preferences_Object()))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionAbout_Q7Basic_triggered", "2731", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ID(""))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionAbout_Q7Basic_triggered", "2733", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionAbout_Q7Basic_triggered", "2734", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(l), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "on_actionAbout_Q7Basic_triggered", "2734", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionAbout_Q7Basic_triggered", "2737", "1");
Q7B_ASSIGNMENT(&s, &Q7B__STRING(Q7B_APPEND(s, Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_LIST_OBJECT(l, i), Q7B_ID(" = ")), Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_LIST_OBJECT(l, i))), Q7B_ID("\n")))));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionAbout_Q7Basic_triggered", "2739", "1");
Q7B_MSGBOX(Q7B_ID("Preferences"), s, Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionAbout_Q7Basic_triggered", "2740", "2");
}

void MainWindow::Q7B_on_actionApplication_QApplication_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionApplication_QApplication_triggered", "1132", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionApplication_QApplication_triggered", "1133", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionApplication_QApplication_triggered", "1134", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionApplication_QApplication_triggered", "1135", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionApplication_QApplication_triggered", "1138", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_FILE(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/Application.QApplication.q7b")))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionApplication_QApplication_triggered", "1139", "1");
Q7B_WRITESTRING(Q7B_ID(" ' this is for the application"), Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/Application.QApplication.q7b")), Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionApplication_QApplication_triggered", "1140", "1");
Q7B_Project_Class(Q7B_Project_Object())->OpenCodeView(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/Application.QApplication.q7b")));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionApplication_QApplication_triggered", "1143", "1");
Q7B_Project_Class(Q7B_Project_Object())->UpdateProjectFilesList();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionApplication_QApplication_triggered", "1144", "2");
}

void MainWindow::Q7B_on_actionBinary_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBinary_triggered", "2247", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBinary_triggered", "2247", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_ID("Serial")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBinary_triggered", "2248", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_LEN(s), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBinary_triggered", "2249", "1");
cleanandrebuildall(Q7B_ID(true));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBinary_triggered", "2251", "1");
Q7B__MSGBOX(Q7B_ID("This feature is for registered Basic For Qt versions available only."));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBinary_triggered", "2253", "2");
}

void MainWindow::Q7B_on_actionBug_Report_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBug_Report_triggered", "2604", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBug_Report_triggered", "2605", "1");
Q7B_OPENURL(Q7B_ID("http://www.q7basic.org/forum/viewforum.php?f=4"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBug_Report_triggered", "2607", "1");
Q7B_MSGBOX(Q7B_ID("How to Report A Bug"), Q7B_ID("If you think you have found a bug, we would like To hear about it so that we can fix it. Before reporting a bug, please check If the issue Is already known.\n   \nAlways include the following information in your bug report:\n\n+ The version\n+ The name and version number of your operating system\n\nIf the problem you are reporting is only visible at run-time, try to create a small test program that shows the problem when run. Often, such a program can be created with some minor changes. \n\nThanks! \nThe following (and probably many others) have provided bug reports, suggestions, patches, beta testing, or done us other favors. We thank you all:\n\nF Maurice Butler, Christoph Engelbert, Mark Goossens, Serge Dejardin, ScreenHunter, Dr.Kaiser, C.Michael Levy PhD., Reiner Goerlach, Francis Hineman, Michael Nix, Christopher Scott Wyatt, Laverne Dietzel, Klaus Lengfeld, Pete Baker, J?rgen Putzmann, Gerald Veurink, Joe Johnson, Ad Verburg, Ben Jimenez, Muhammed Cotwal, Donald Darden, Achim Rogalski, Peter Bially, Wolfgang Praxl, Michel Krommenaker, Rolf Henning, Joost van Zijl, Egan Saunders, Stuart Galloway\n\nWe hope there are not too many omissions from the list."), Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBug_Report_triggered", "2623", "2");
}

void MainWindow::Q7B_on_actionBuild_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBuild_triggered", "1777", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBuild_triggered", "1778", "1");

if (Q7B_CBOOL(CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary())){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBuild_triggered", "1778", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBuild_triggered", "1780", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_LEN(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBuild_triggered", "1781", "1");
Q7B_Project_Class(Q7B_Project_Object())->SaveAll();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBuild_triggered", "1782", "1");
myStop();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBuild_triggered", "1784", "1");
PrintStatusBar(Q7B_ID("Build..."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBuild_triggered", "1787", "1");
Q7B_QPLAINTEXTEDIT_PLAINTEXT(plainTextEditCompiler, Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBuild_triggered", "1788", "1");
Q7B_ASSIGNMENT(&bCompilerError, &Q7B__BOOLEAN(Q7B_ID(false)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBuild_triggered", "1792", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ID(Q7B_Q7BCompiler_Class(Compiler)->Build(Q7B_CQSTRING(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBuild_triggered", "1793", "1");
Q7B_ASSIGNMENT(&bRunOrBuild, &Q7B__BOOLEAN(Q7B_ID(true)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBuild_triggered", "1794", "1");
Q7B_ASSIGNMENT(&bBuildOnly, &Q7B__BOOLEAN(Q7B_ID(true)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBuild_triggered", "1795", "1");
DoActions();

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionBuild_triggered", "1802", "2");
}

void MainWindow::Q7B_on_actionClean_RebuildAll_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionClean_RebuildAll_triggered", "1857", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionClean_RebuildAll_triggered", "1857", "1");
cleanandrebuildall(Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionClean_RebuildAll_triggered", "1858", "2");
}

void MainWindow::Q7B_on_actionComment_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionComment_triggered", "1348", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionComment_triggered", "1348", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionComment_triggered", "1350", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionComment_triggered", "1353", "1");
Q7B_Q7BCodeView_Class(cb)->PerformComment();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionComment_triggered", "1356", "2");
}

void MainWindow::Q7B_on_actionCompiler_Window_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCompiler_Window_triggered", "1332", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCompiler_Window_triggered", "1332", "1");
Q7B_QWIDGET_VISIBLE(dockCompiler, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCompiler_Window_triggered", "1333", "2");
}

void MainWindow::Q7B_on_actionContribute_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionContribute_triggered", "2600", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionContribute_triggered", "2600", "1");
Q7B_OPENURL(Q7B_ID("http://www.q7basic.org/forum/viewtopic.php?f=5&t=18"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionContribute_triggered", "2601", "2");
}

void MainWindow::Q7B_on_actionCopy_2_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCopy_2_triggered", "1188", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCopy_2_triggered", "1189", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCopy_2_triggered", "1190", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCopy_2_triggered", "1191", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCopy_2_triggered", "1194", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_DIR(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/Copy")), Q7B_ID(false))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCopy_2_triggered", "1195", "1");
Q7B_DIR(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/Copy")), Q7B_ID(true));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCopy_2_triggered", "1198", "2");
}

void MainWindow::Q7B_on_actionCopy_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCopy_triggered", "1226", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCopy_triggered", "1226", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCopy_triggered", "1227", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCopy_triggered", "1228", "1");
Q7B_Q7BCodeView_Class(cb)->PerformCopy();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCopy_triggered", "1229", "2");
}

void MainWindow::Q7B_on_actionCpp_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCpp_triggered", "1175", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCpp_triggered", "1176", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCpp_triggered", "1177", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCpp_triggered", "1178", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCpp_triggered", "1181", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_DIR(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/cpp")), Q7B_ID(false))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCpp_triggered", "1182", "1");
Q7B_DIR(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/cpp")), Q7B_ID(true));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCpp_triggered", "1185", "2");
}

void MainWindow::Q7B_on_actionCut_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCut_triggered", "1220", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCut_triggered", "1220", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCut_triggered", "1221", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCut_triggered", "1222", "1");
Q7B_Q7BCodeView_Class(cb)->PerformCut();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionCut_triggered", "1223", "2");
}

void MainWindow::Q7B_on_actionDebug_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDebug_triggered", "2139", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDebug_triggered", "2142", "1");

if (Q7B_CBOOL(CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary())){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDebug_triggered", "2142", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDebug_triggered", "2144", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_LEN(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDebug_triggered", "2145", "1");

if (Q7B_CBOOL(Q7B_EQUAL(bDebug, Q7B_ID(false)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDebug_triggered", "2146", "1");
Q7B_Project_Class(Q7B_Project_Object())->SaveAll();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDebug_triggered", "2147", "1");
myStop();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDebug_triggered", "2148", "1");
PrintStatusBar(Q7B_ID("Debug..."));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDebug_triggered", "2152", "1");
Q7B_QPLAINTEXTEDIT_PLAINTEXT(plainTextEditLog, Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDebug_triggered", "2153", "1");
Q7B_QPLAINTEXTEDIT_PLAINTEXT(plainTextEditCompiler, Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDebug_triggered", "2154", "1");
Q7B_ASSIGNMENT(&bCompilerError, &Q7B__BOOLEAN(Q7B_ID(false)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDebug_triggered", "2158", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ID(Q7B_Q7BCompiler_Class(Compiler)->Debug(Q7B_CQSTRING(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath), Q7B_CQSTRING(Q7B_FILENAME(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath)))))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDebug_triggered", "2160", "1");

if (Q7B_CBOOL(Q7B_EQUAL(bDebug, Q7B_ID(false)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDebug_triggered", "2161", "1");
Q7B_ASSIGNMENT(&bDebug, &Q7B__BOOLEAN(Q7B_ID(true)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDebug_triggered", "2162", "1");
DoActions();

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDebug_triggered", "2166", "2");
}

void MainWindow::Q7B_on_actionDelete_Current_File_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2376", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2377", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2378", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2379", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2382", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2383", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2384", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2387", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2388", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2389", "1");

if (Q7B_CBOOL(Q7B_ENDSWITH(s, Q7B_ID("Global.QObject.q7b"), Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2390", "1");
Q7B__MSGBOX(Q7B_ID("Global.QObject must not be deleted."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2391", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2393", "1");

if (Q7B_CBOOL(Q7B_ENDSWITH(s, Q7B_ID("MainWindow.QMainWindow.q7b"), Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2394", "1");
Q7B__MSGBOX(Q7B_ID("MainWindow.QMainWindow must not be deleted."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2395", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2401", "1");
Q7B sYes; Q7B_ASSIGNMENT(&sYes, &(Q7B__ID(Q7B_IDNULL())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2402", "1");
Q7B_ASSIGNMENT(&sYes, &Q7B__ID(Q7B_INPUTBOX(Q7B_ID("Should be the following file deleted?"), Q7B_ID("Delete Current File"), Q7B_FILENAME(s))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2403", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sYes, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2404", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2406", "1");
Q7B_CLOSEMDI(w);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2408", "1");
Q7B_DELETE(s);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2409", "1");
Q7B_Project_Class(Q7B_Project_Object())->UpdateProjectFilesList();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2410", "1");
Q7B_MainWindow_Class(Q7B_MainWindow_Object())->theProjectWindow_PerformOpenProject(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_Current_File_triggered", "2412", "2");
}

void MainWindow::Q7B_on_actionDelete_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_triggered", "1238", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_triggered", "1238", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_triggered", "1239", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_triggered", "1240", "1");
Q7B_Q7BCodeView_Class(cb)->PerformDelete();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDelete_triggered", "1241", "2");
}

void MainWindow::Q7B_on_actionDuplicate_Current_File_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2415", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2416", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2417", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2418", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2421", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2422", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2423", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2426", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2427", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2430", "1");
Q7B sYes; Q7B_ASSIGNMENT(&sYes, &(Q7B__ID(Q7B_IDNULL())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2431", "1");
Q7B_ASSIGNMENT(&sYes, &Q7B__ID(Q7B_INPUTBOX(Q7B_ADD(Q7B_ID("Enter the duplicate name for "), Q7B_FILENAME(s)), Q7B_ID("Duplicate Current File"), Q7B_FILENAME(s))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2432", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sYes, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2433", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2435", "1");
Q7B s2; Q7B_ASSIGNMENT(&s2, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_FILEPATH(s), Q7B_ID("/")), sYes))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2436", "1");
Q7B_COPY(s, s2);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2437", "1");
Q7B_Project_Class(Q7B_Project_Object())->OpenCodeView(s2);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2438", "1");
Q7B_Project_Class(Q7B_Project_Object())->UpdateProjectFilesList();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionDuplicate_Current_File_triggered", "2439", "2");
}

void MainWindow::Q7B_on_actionFind_Definition_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Definition_triggered", "1324", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Definition_triggered", "1324", "1");
Q7B__MSGBOX(Q7B_ID("Sorry. Not implemented yet."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Definition_triggered", "1325", "2");
}

void MainWindow::Q7B_on_actionFind_File_Replace_File_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_File_Replace_File_triggered", "1276", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_File_Replace_File_triggered", "1277", "1");
Q7B_OPENTOOLWINDOW(Q7B_ID("FindReplaceFile"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_File_Replace_File_triggered", "1279", "2");
}

void MainWindow::Q7B_on_actionFind_Next_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Next_triggered", "1266", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Next_triggered", "1267", "1");

if (Q7B_CBOOL(currentMDIWindowIsForm())){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Next_triggered", "1267", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Next_triggered", "1269", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Next_triggered", "1270", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Next_triggered", "1272", "1");
Q7B b; Q7B_ASSIGNMENT(&b, &(Q7B__BOOLEAN(Q7B_ID(Q7B_Q7BCodeView_Class(cb)->PerformFind(Q7B_CQSTRING(sFind))))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Next_triggered", "1273", "2");
}

void MainWindow::Q7B_on_actionFind_Replace_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Replace_triggered", "1251", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Replace_triggered", "1252", "1");

if (Q7B_CBOOL(currentMDIWindowIsForm())){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Replace_triggered", "1252", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Replace_triggered", "1254", "1");
Q7B_ASSIGNMENT(&sFind, &Q7B__ID(Q7B_INPUTBOX(Q7B_ID(""), Q7B_ID("Find..."), sFind)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Replace_triggered", "1255", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sFind, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Replace_triggered", "1256", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Replace_triggered", "1259", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Replace_triggered", "1260", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Replace_triggered", "1262", "1");
Q7B b; Q7B_ASSIGNMENT(&b, &(Q7B__BOOLEAN(Q7B_ID(Q7B_Q7BCodeView_Class(cb)->PerformFind(Q7B_CQSTRING(sFind))))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionFind_Replace_triggered", "1263", "2");
}

void MainWindow::Q7B_on_actionGeneral_Manual_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGeneral_Manual_triggered", "2653", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGeneral_Manual_triggered", "2653", "1");
Q7B_OPENURL(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Q7Basic_General Manual.pdf")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGeneral_Manual_triggered", "2654", "2");
}

void MainWindow::Q7B_on_actionGlobal_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGlobal_triggered", "1311", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGlobal_triggered", "1311", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGlobal_triggered", "1312", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGlobal_triggered", "1313", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "on_actionGlobal_triggered", "1313", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGlobal_triggered", "1314", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGlobal_triggered", "1315", "1");

if (Q7B_CBOOL(Q7B_ENDSWITH(Q7B_PROPERTY(w, Q7B_ID("PathFileName")), Q7B_ID("Global.QObject.q7b"), Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGlobal_triggered", "1316", "1");
Q7B_SETFOCUSMDI(w);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGlobal_triggered", "1317", "1");
Q7B_Q7BProjectWindow_Class(theProjectWindow)->PerformSelect(Q7B_CQSTRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGlobal_triggered", "1318", "1");
return;

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGlobal_triggered", "1321", "2");
}

void MainWindow::Q7B_on_actionGo_To_Line_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGo_To_Line_triggered", "1292", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGo_To_Line_triggered", "1292", "1");

if (Q7B_CBOOL(currentMDIWindowIsForm())){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGo_To_Line_triggered", "1292", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGo_To_Line_triggered", "1294", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__ID(Q7B_INPUTBOX(Q7B_ID("Go To Line..."), Q7B_ID(""), Q7B_ID("")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGo_To_Line_triggered", "1295", "1");

if (Q7B_CBOOL(Q7B_EQUAL(s, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGo_To_Line_triggered", "1296", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGo_To_Line_triggered", "1299", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_LEN(s), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGo_To_Line_triggered", "1300", "1");
Q7B n; Q7B_ASSIGNMENT(&n, &(Q7B__INTEGER(Q7B_INTEGER(s, Q7B_ID(false)))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGo_To_Line_triggered", "1301", "1");

if (Q7B_CBOOL(Q7B_GREATER(n, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGo_To_Line_triggered", "1302", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGo_To_Line_triggered", "1303", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGo_To_Line_triggered", "1304", "1");
Q7B_Q7BCodeView_Class(cb)->GotoLineAndSelectLine(Q7B_CQINT64(n));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionGo_To_Line_triggered", "1308", "2");
}

void MainWindow::Q7B_on_actionLanguage_Reference_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLanguage_Reference_triggered", "2590", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLanguage_Reference_triggered", "2590", "1");
Q7B_OPENURL(Q7B_ID("Language Reference.html"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLanguage_Reference_triggered", "2592", "2");
}

void MainWindow::Q7B_on_actionLast_Error_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Error_triggered", "1457", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Error_triggered", "1457", "1");

if (Q7B_CBOOL(Q7B_UNEQUAL(sLastErrorFile, Q7B_ID("")))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Error_triggered", "1459", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Error_triggered", "1460", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Error_triggered", "1461", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Error_triggered", "1461", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Error_triggered", "1462", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Error_triggered", "1464", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sLastErrorFile, Q7B_FILENAME(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Error_triggered", "1466", "1");
Q7B_SETFOCUSMDI(w);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Error_triggered", "1467", "1");
Q7B_Q7BProjectWindow_Class(theProjectWindow)->PerformSelect(Q7B_CQSTRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Error_triggered", "1469", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Error_triggered", "1470", "1");
Q7B_Q7BCodeView_Class(cb)->GotoLineAndSelectLine(Q7B_CQINT64(nLastErrorLine));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Error_triggered", "1472", "1");
break;

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Error_triggered", "1477", "1");
PrintStatusBar(sLastErrorText);

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Error_triggered", "1479", "2");
}

void MainWindow::Q7B_on_actionLast_Position_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Position_triggered", "1487", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Position_triggered", "1490", "1");
Q7B_ASSIGNMENT(&bBlockLastPosition, &Q7B__BOOLEAN(Q7B_ID(true)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Position_triggered", "1492", "1");

if (Q7B_CBOOL(Q7B_UNEQUAL(sLastPositionFile, Q7B_ID("")))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Position_triggered", "1494", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Position_triggered", "1495", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Position_triggered", "1496", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Position_triggered", "1496", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Position_triggered", "1497", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Position_triggered", "1500", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sLastPositionFile, Q7B_PROPERTY(w, Q7B_ID("PathFileName"))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Position_triggered", "1502", "1");
Q7B_SETFOCUSMDI(w);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Position_triggered", "1503", "1");
Q7B_Q7BProjectWindow_Class(theProjectWindow)->PerformSelect(Q7B_CQSTRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Position_triggered", "1505", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Position_triggered", "1507", "1");
Q7B_Q7BCodeView_Class(cb)->GotoLineAndSelectLine(Q7B_CQINT64(nLastPositionLine));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Position_triggered", "1509", "1");
break;

}

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Position_triggered", "1516", "1");
Q7B_ASSIGNMENT(&bBlockLastPosition, &Q7B__BOOLEAN(Q7B_ID(false)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLast_Position_triggered", "1517", "2");
}

void MainWindow::Q7B_on_actionLicense_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLicense_triggered", "2700", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLicense_triggered", "2700", "1");
Q7B_OPENTEXTWINDOW(Q7B_READSTRING(Q7B_ID(":/Resources/License.txt"), Q7B_ID("")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLicense_triggered", "2701", "2");
}

void MainWindow::Q7B_on_actionLog_Window_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLog_Window_triggered", "1328", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLog_Window_triggered", "1328", "1");
Q7B_QWIDGET_VISIBLE(dockLog, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionLog_Window_triggered", "1329", "2");
}

void MainWindow::Q7B_on_actionMainWindow_ui_2_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionMainWindow_ui_2_triggered", "2564", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionMainWindow_ui_2_triggered", "2564", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/")), Q7B_ID("MainWindow.QMainWindow.q7b")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionMainWindow_ui_2_triggered", "2565", "1");
Q7B s2; Q7B_ASSIGNMENT(&s2, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_FILEPATH(s), Q7B_ID("/")), Q7B_ID("MainWindow.ui")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionMainWindow_ui_2_triggered", "2567", "1");
OpenUI(s, s2);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionMainWindow_ui_2_triggered", "2568", "2");
}

void MainWindow::Q7B_on_actionMore_Manuals_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionMore_Manuals_triggered", "125", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionMore_Manuals_triggered", "125", "1");
Q7B_OPENURL(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/More Q7Basic manuals.pdf")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionMore_Manuals_triggered", "126", "2");
}

void MainWindow::Q7B_on_actionMySQL_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionMySQL_triggered", "2637", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionMySQL_triggered", "2637", "1");
Q7B_OPENURL(Q7B_ID("http://dev.mysql.com/doc/refman/5.1/en/index.html"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionMySQL_triggered", "2638", "2");
}

void MainWindow::Q7B_on_actionNew_Class_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Class_triggered", "2300", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Class_triggered", "2301", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Class_triggered", "2302", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Class_triggered", "2303", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Class_triggered", "2306", "1");
Q7B sClass; Q7B_ASSIGNMENT(&sClass, &(Q7B__ID(Q7B_IDNULL())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Class_triggered", "2307", "1");
Q7B_ASSIGNMENT(&sClass, &Q7B__ID(Q7B_INPUTBOX(Q7B_ID("Class.SuperClass.q7b"), Q7B_ID("New File As Class"), Q7B_ID("myClass"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Class_triggered", "2308", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sClass, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Class_triggered", "2309", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Class_triggered", "2312", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/")), sClass), Q7B_ID(".Class.q7b")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Class_triggered", "2313", "1");
Q7B_WRITESTRING(Q7B_ID(" 'just created this file"), s, Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Class_triggered", "2314", "1");
Q7B_Project_Class(Q7B_Project_Object())->OpenCodeView(s);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Class_triggered", "2315", "1");
Q7B_Project_Class(Q7B_Project_Object())->UpdateProjectFilesList();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Class_triggered", "2316", "2");
}

void MainWindow::Q7B_on_actionNew_File_With_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_File_With_triggered", "2357", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_File_With_triggered", "2358", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_File_With_triggered", "2359", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_File_With_triggered", "2360", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_File_With_triggered", "2363", "1");
Q7B sClass; Q7B_ASSIGNMENT(&sClass, &(Q7B__ID(Q7B_IDNULL())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_File_With_triggered", "2364", "1");
Q7B_ASSIGNMENT(&sClass, &Q7B__ID(Q7B_INPUTBOX(Q7B_ID("Class.SuperClass.q7b"), Q7B_ID("New File With..."), Q7B_ID("myClass.QObject.q7b"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_File_With_triggered", "2365", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sClass, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_File_With_triggered", "2366", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_File_With_triggered", "2369", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/")), sClass))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_File_With_triggered", "2370", "1");
Q7B_WRITESTRING(Q7B_ID(" 'just created this file"), s, Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_File_With_triggered", "2371", "1");
Q7B_Project_Class(Q7B_Project_Object())->OpenCodeView(s);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_File_With_triggered", "2372", "1");
Q7B_Project_Class(Q7B_Project_Object())->UpdateProjectFilesList();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_File_With_triggered", "2373", "2");
}

void MainWindow::Q7B_on_actionNew_Form_2_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "28", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "29", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "30", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "31", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "34", "1");
Q7B sForm; Q7B_ASSIGNMENT(&sForm, &(Q7B__ID(Q7B_IDNULL())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "35", "1");
Q7B_ASSIGNMENT(&sForm, &Q7B__ID(Q7B_INPUTBOX(Q7B_ID("myForm.Form.q7b"), Q7B_ID("New Form"), Q7B_ID("myForm"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "36", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sForm, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "37", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "40", "1");
Q7B ss; Q7B_ASSIGNMENT(&ss, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/")), sForm), Q7B_ID(".FormClass.q7b")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "41", "1");
Q7B_WRITESTRING(Q7B_ID("' just created code file for form"), ss, Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "42", "1");
Q7B_Project_Class(Q7B_Project_Object())->OpenCodeView(ss);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "44", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/")), sForm), Q7B_ID(".Form.q7b")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "46", "1");
Q7B_Project_Class(Q7B_Project_Object())->OpenFormDesigner(s);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "48", "1");
Q7B_Project_Class(Q7B_Project_Object())->UpdateProjectFilesList();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "50", "1");
Q7B_MainWindow_Class(Q7B_MainWindow_Object())->theProjectWindow_PerformOpenProject(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "51", "1");
Q7B_Q7BProjectWindow_Class(theProjectWindow)->PerformSelect(Q7B_CQSTRING(s));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Form_2_triggered", "56", "2");
}

void MainWindow::Q7B_on_actionNew_Module_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Module_triggered", "2319", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Module_triggered", "2320", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Module_triggered", "2321", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Module_triggered", "2322", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Module_triggered", "2325", "1");
Q7B sClass; Q7B_ASSIGNMENT(&sClass, &(Q7B__ID(Q7B_IDNULL())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Module_triggered", "2326", "1");
Q7B_ASSIGNMENT(&sClass, &Q7B__ID(Q7B_INPUTBOX(Q7B_ID("Module"), Q7B_ID("New File As Module"), Q7B_ID("myModule"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Module_triggered", "2327", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sClass, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Module_triggered", "2328", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Module_triggered", "2331", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/")), sClass), Q7B_ID(".Module.q7b")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Module_triggered", "2332", "1");
Q7B_WRITESTRING(Q7B_ID(" 'just created this file"), s, Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Module_triggered", "2333", "1");
Q7B_Project_Class(Q7B_Project_Object())->OpenCodeView(s);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Module_triggered", "2334", "1");
Q7B_Project_Class(Q7B_Project_Object())->UpdateProjectFilesList();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Module_triggered", "2335", "2");
}

void MainWindow::Q7B_on_actionNew_Project_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "789", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "790", "1");
static Q7B bFirstTime = Q7B_STATICASSIGNMENT(&bFirstTime, &Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "792", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(bFirstTime) && Q7B_CBOOL(Q7B_PREFERENCES_BOOLEAN(Q7B_Preferences_Object(), Q7B_ID("ActivateHelp"))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "793", "1");
Q7B_ASSIGNMENT(&bFirstTime, &Q7B__BOOLEAN(Q7B_ID(false)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "795", "1");
Q7B__MSGBOX(Q7B_ID("Projects keep your work together. When developing an application in Basic For Qt, you work \n    mainly with projects. A project is a collection of files that make up your Basic For Qt \n    application. \n\nYou create a project to manage and organize these files. Basic For Qt provides \n    an easy yet sophisticated system to manage the collection of files that make up a \n    project. The project window shows each item in a project. \nStarting a new application \n    with Basic For Qt begins with the creation of a project. So before you can construct an \n    Application With Basic For Qt, you need To create a New project.A project consists of\n    many separate files collected in one project directory, where one *.q7basic_project\n    file is and many other files: \n       *.q7b\n       *.ui \n       *.Form.q7b \n	"));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "812", "1");
Q7B sProjectName; Q7B_ASSIGNMENT(&sProjectName, &(Q7B__ID(Q7B_IDNULL())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "813", "1");
Q7B_ASSIGNMENT(&sProjectName, &Q7B__ID(Q7B_INPUTBOX(Q7B_ID("Please enter the project name."), Q7B_ID("New Project..."), Q7B_ID("MyProject"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "815", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sProjectName, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "816", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "819", "1");
myStop();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "822", "1");
Q7B sDir; Q7B_ASSIGNMENT(&sDir, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_DESKTOP_DESKTOPLOCATION(Q7B_Desktop_Object()), Q7B_ID("/")), sProjectName))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "825", "1");

if (Q7B_CBOOL(Q7B_DIR(sDir, Q7B_ID(false)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "826", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_INPUTBOX(Q7B_ID("Delete existing project?"), Q7B_ADD(Q7B_ADD(Q7B_ID("There is already a directory with the selected name. Should existing files be replaced in\n"), sDir), Q7B_ID(" ?")), sProjectName))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "827", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_EQUAL(s, Q7B_IDNULL())) || Q7B_CBOOL(Q7B_ISEMPTY(s)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "828", "1");
return;

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "833", "1");
Q7B_DIR(sDir, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "838", "1");
Q7B_WRITESTRING(Q7B_ID("' this is the global scope\n\nEvent Init()\n  MsgBox(\"Init\")\n\nEnd Event\n"), Q7B_ADD(sDir, Q7B_ID("/Global.QObject.q7b")), Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "839", "1");
Q7B_WRITESTRING(Q7B_ID("' this is the mainwindow scope"), Q7B_ADD(sDir, Q7B_ID("/MainWindow.QMainWindow.q7b")), Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "841", "1");
Q7B_Project_Class(Q7B_Project_Object())->Open(sDir);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Project_triggered", "843", "2");
}

void MainWindow::Q7B_on_actionNew_Single_File_Project_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Single_File_Project_triggered", "754", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Single_File_Project_triggered", "755", "1");
Q7B__MSGBOX(Q7B_ID("Sorry, this feature is not completed yet."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Single_File_Project_triggered", "756", "1");
return;
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Single_File_Project_triggered", "758", "1");
Q7B sProjectName; Q7B_ASSIGNMENT(&sProjectName, &(Q7B__ID(Q7B_IDNULL())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Single_File_Project_triggered", "759", "1");
Q7B_ASSIGNMENT(&sProjectName, &Q7B__ID(Q7B_INPUTBOX(Q7B_ID("Please enter the file name."), Q7B_ID("New Single Project File..."), Q7B_ID("MyFile"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Single_File_Project_triggered", "761", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sProjectName, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Single_File_Project_triggered", "762", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Single_File_Project_triggered", "769", "1");
myStop();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Single_File_Project_triggered", "771", "1");
Q7B sFile; Q7B_ASSIGNMENT(&sFile, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_DESKTOP_DESKTOPLOCATION(Q7B_Desktop_Object()), Q7B_ID("/")), sProjectName), Q7B_ID(".q7basic")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Single_File_Project_triggered", "773", "1");

if (Q7B_CBOOL(Q7B_FILE(sFile))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Single_File_Project_triggered", "774", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_INPUTBOX(Q7B_ID("Delete existing file?"), Q7B_ADD(Q7B_ADD(Q7B_ID("There is already a file with the selected name. Should the existing file be replaced in\n"), sFile), Q7B_ID(" ?")), sProjectName))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Single_File_Project_triggered", "775", "1");

if (Q7B_CBOOL(Q7B_EQUAL(s, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Single_File_Project_triggered", "776", "1");
return;

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Single_File_Project_triggered", "783", "1");
Q7B_WRITESTRING(Q7B_ID("' this is the global scope\n\nSub Main()\n  MsgBox(\"Init\")\n\nEnd Sub\n"), sFile, Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Single_File_Project_triggered", "785", "1");
Q7B_Project_Class(Q7B_Project_Object())->Open(sFile);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_Single_File_Project_triggered", "786", "2");
}

void MainWindow::Q7B_on_actionNew_uiCode_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_uiCode_triggered", "133", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_uiCode_triggered", "134", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_uiCode_triggered", "135", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_uiCode_triggered", "136", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_uiCode_triggered", "139", "1");
Q7B sClass; Q7B_ASSIGNMENT(&sClass, &(Q7B__ID(Q7B_IDNULL())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_uiCode_triggered", "140", "1");
Q7B_ASSIGNMENT(&sClass, &Q7B__ID(Q7B_INPUTBOX(Q7B_ID("Class.uiClass.q7b"), Q7B_ID("New File With Super Class uiClass"), Q7B_ID("myClass"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_uiCode_triggered", "141", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sClass, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_uiCode_triggered", "142", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_uiCode_triggered", "145", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/")), sClass), Q7B_ID(".uiClass.q7b")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_uiCode_triggered", "146", "1");
Q7B_WRITESTRING(Q7B_ID(" 'just created this file"), s, Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_uiCode_triggered", "147", "1");
Q7B_Project_Class(Q7B_Project_Object())->OpenCodeView(s);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_uiCode_triggered", "149", "1");
Q7B_Project_Class(Q7B_Project_Object())->UpdateProjectFilesList();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionNew_uiCode_triggered", "150", "2");
}

void MainWindow::Q7B_on_actionOpen_Project_With_Qt_Creator_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_With_Qt_Creator_triggered", "99", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_With_Qt_Creator_triggered", "99", "1");
Q7B_OPENURL(Q7B_CONCAT(Q7B_CONCAT(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc/Build/")), Q7B_FILENAME(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath)), Q7B_ID(".pro")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_With_Qt_Creator_triggered", "100", "1");

if (Q7B_CBOOL(Q7B_OS_ISWINDOWS(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_With_Qt_Creator_triggered", "103", "1");
Q7B_COPY(Q7B_CONCAT(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/mingw")), Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc/Build/debug")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_With_Qt_Creator_triggered", "104", "1");
Q7B_COPY(Q7B_CONCAT(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/MySQL")), Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc/Build/debug")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_With_Qt_Creator_triggered", "105", "1");
Q7B_COPY(Q7B_CONCAT(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/PostgreSQL")), Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc/Build/debug")));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_With_Qt_Creator_triggered", "107", "2");
}

void MainWindow::Q7B_on_actionOpen_Project_With_Visual_C_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_With_Visual_C_triggered", "110", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_With_Visual_C_triggered", "110", "1");

if (Q7B_CBOOL(Q7B_OS_ISWINDOWS(Q7B_OS_Object()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_With_Visual_C_triggered", "111", "1");
Q7B_OPENURL(Q7B_CONCAT(Q7B_CONCAT(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc/Build/")), Q7B_FILENAME(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath)), Q7B_ID(".vcproj")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_With_Visual_C_triggered", "112", "1");
Q7B_COPY(Q7B_CONCAT(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/vs")), Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc/Build/debug")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_With_Visual_C_triggered", "113", "1");
Q7B_COPY(Q7B_CONCAT(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/MySQL")), Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc/Build/debug")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_With_Visual_C_triggered", "114", "1");
Q7B_COPY(Q7B_CONCAT(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/PostgreSQL")), Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/gcc/Build/debug")));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_With_Visual_C_triggered", "116", "1");
Q7B__MSGBOX(Q7B_ID("Supported on Windows only, of course ;-)"));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_With_Visual_C_triggered", "118", "2");
}

void MainWindow::Q7B_on_actionOpen_Project_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_triggered", "1116", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_triggered", "1117", "1");
Q7B_MSGBOX(Q7B_ID("Open Project..."), Q7B_ID("Please select the project directory you want to open in the following dialog."), Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_triggered", "1119", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__ID(Q7B_OPENFILEDIALOG_GETDIRECTORY(Q7B_OpenFileDialog_Object()))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_triggered", "1120", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_EQUAL(s, Q7B_IDNULL())) || Q7B_CBOOL(Q7B_ISEMPTY(s)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_triggered", "1121", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_triggered", "1124", "1");
myStop();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_triggered", "1125", "1");
Q7B_Project_Class(Q7B_Project_Object())->Open(s);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Project_triggered", "1127", "2");
}

void MainWindow::Q7B_on_actionOpen_Single_File_Project_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Single_File_Project_triggered", "288", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Single_File_Project_triggered", "289", "1");
Q7B__MSGBOX(Q7B_ID("Sorry, this feature is not completed yet."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Single_File_Project_triggered", "290", "1");
return;
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Single_File_Project_triggered", "292", "1");
Q7B_MSGBOX(Q7B_ID("Open Single Project File..."), Q7B_ID("Please select the file (*.q7basic) you want to open in the following dialog."), Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Single_File_Project_triggered", "294", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_OPENFILEDIALOG_GETFILE2(Q7B_OpenFileDialog_Object(), Q7B_ID("Open Single Project File..."), Q7B_ID(""), Q7B_ID("*.q7basic")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Single_File_Project_triggered", "295", "1");

if (Q7B_CBOOL(Q7B_ID((Q7B_CBOOL(Q7B_EQUAL(s, Q7B_IDNULL())) || Q7B_CBOOL(Q7B_EQUAL(s, Q7B_ID(""))))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Single_File_Project_triggered", "296", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Single_File_Project_triggered", "301", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_ENDSWITH(s, Q7B_ID(".q7basic"), Q7B_ID(false))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Single_File_Project_triggered", "302", "1");
Q7B__MSGBOX(Q7B_ID("Selected file has no valid file extension (*.q7basic)"));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Single_File_Project_triggered", "305", "1");
myStop();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Single_File_Project_triggered", "308", "1");
Q7B_Project_Class(Q7B_Project_Object())->Open(s);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionOpen_Single_File_Project_triggered", "311", "2");
}

void MainWindow::Q7B_on_actionPaste_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPaste_triggered", "1232", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPaste_triggered", "1232", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPaste_triggered", "1233", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPaste_triggered", "1234", "1");
Q7B_Q7BCodeView_Class(cb)->PerformPaste();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPaste_triggered", "1235", "2");
}

void MainWindow::Q7B_on_actionPostgreSQL_2_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPostgreSQL_2_triggered", "2641", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPostgreSQL_2_triggered", "2641", "1");
Q7B_OPENURL(Q7B_ID("http://www.postgresql.org/docs/8.4/interactive/index.html"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPostgreSQL_2_triggered", "2642", "2");
}

void MainWindow::Q7B_on_actionPreferences_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPreferences_triggered", "95", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPreferences_triggered", "95", "1");
Q7B_OPENDIALOG(Q7B_ID("Settings"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPreferences_triggered", "96", "2");
}

void MainWindow::Q7B_on_actionPrint_2_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPrint_2_triggered", "17", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPrint_2_triggered", "17", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPrint_2_triggered", "18", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPrint_2_triggered", "20", "1");
Q7B te; Q7B_ASSIGNMENT(&te, &(Q7B__QPLAINTEXTEDIT(Q7B_ID("QPlainTextEdit", Q7B_connectSlotsByNameForGivenObjectAndReturnIt(this, new QPlainTextEdit(), "te")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPrint_2_triggered", "21", "1");
Q7B_ASSIGNMENT(&te, &Q7B__QPLAINTEXTEDIT(Q7B_ID(Q7B_Q7BCodeView_Class(cb)->getQPlainTextEdit())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPrint_2_triggered", "23", "1");
Q7B_QPLAINTEXTEDIT_PRINT(te);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionPrint_2_triggered", "25", "2");
}

void MainWindow::Q7B_on_actionProperties_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionProperties_triggered", "1112", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionProperties_triggered", "1112", "1");
Q7B_OPENDIALOG(Q7B_ID("ProjectProperties"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionProperties_triggered", "1113", "2");
}

void MainWindow::Q7B_on_actionQ7Basic_Essentials_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQ7Basic_Essentials_triggered", "2645", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQ7Basic_Essentials_triggered", "2645", "1");
Q7B_OPENURL(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Q7Basic_essentials.pdf")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQ7Basic_Essentials_triggered", "2646", "2");
}

void MainWindow::Q7B_on_actionQ7Basic_Tutorial_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQ7Basic_Tutorial_triggered", "2649", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQ7Basic_Tutorial_triggered", "2649", "1");
Q7B_OPENURL(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Q7BTutorial.pdf")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQ7Basic_Tutorial_triggered", "2650", "2");
}

void MainWindow::Q7B_on_actionQDialog_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQDialog_triggered", "2338", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQDialog_triggered", "2339", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQDialog_triggered", "2340", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQDialog_triggered", "2341", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQDialog_triggered", "2344", "1");
Q7B sClass; Q7B_ASSIGNMENT(&sClass, &(Q7B__ID(Q7B_IDNULL())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQDialog_triggered", "2345", "1");
Q7B_ASSIGNMENT(&sClass, &Q7B__ID(Q7B_INPUTBOX(Q7B_ID("Class.QDialog.q7b"), Q7B_ID("New File With Super Class QDialog"), Q7B_ID("myClass"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQDialog_triggered", "2346", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sClass, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQDialog_triggered", "2347", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQDialog_triggered", "2350", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/")), sClass), Q7B_ID(".QDialog.q7b")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQDialog_triggered", "2351", "1");
Q7B_WRITESTRING(Q7B_ID(" 'just created this file"), s, Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQDialog_triggered", "2352", "1");
Q7B_Project_Class(Q7B_Project_Object())->OpenCodeView(s);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQDialog_triggered", "2353", "1");
Q7B_Project_Class(Q7B_Project_Object())->UpdateProjectFilesList();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQDialog_triggered", "2354", "2");
}

void MainWindow::Q7B_on_actionQObject_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQObject_triggered", "2256", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQObject_triggered", "2258", "1");

if (Q7B_CBOOL(Q7B_Project_Class(Q7B_Project_Object())->IsSingleFileProject())){

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQObject_triggered", "2262", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQObject_triggered", "2263", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQObject_triggered", "2264", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQObject_triggered", "2267", "1");
Q7B sClass; Q7B_ASSIGNMENT(&sClass, &(Q7B__ID(Q7B_IDNULL())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQObject_triggered", "2268", "1");
Q7B_ASSIGNMENT(&sClass, &Q7B__ID(Q7B_INPUTBOX(Q7B_ID("Class.QObject.q7b"), Q7B_ID("New File With Super Class QObject"), Q7B_ID("myClass"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQObject_triggered", "2269", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sClass, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQObject_triggered", "2270", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQObject_triggered", "2273", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/")), sClass), Q7B_ID(".QObject.q7b")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQObject_triggered", "2274", "1");
Q7B_WRITESTRING(Q7B_ID("' just created this file"), s, Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQObject_triggered", "2275", "1");
Q7B_Project_Class(Q7B_Project_Object())->OpenCodeView(s);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQObject_triggered", "2277", "1");
Q7B_Project_Class(Q7B_Project_Object())->UpdateProjectFilesList();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQObject_triggered", "2278", "2");
}

void MainWindow::Q7B_on_actionQWidget_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQWidget_triggered", "2281", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQWidget_triggered", "2282", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQWidget_triggered", "2283", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQWidget_triggered", "2284", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQWidget_triggered", "2287", "1");
Q7B sClass; Q7B_ASSIGNMENT(&sClass, &(Q7B__ID(Q7B_IDNULL())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQWidget_triggered", "2288", "1");
Q7B_ASSIGNMENT(&sClass, &Q7B__ID(Q7B_INPUTBOX(Q7B_ID("Class.QWidget.q7b"), Q7B_ID("New File With Super Class QWidget"), Q7B_ID("myClass"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQWidget_triggered", "2289", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sClass, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQWidget_triggered", "2290", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQWidget_triggered", "2293", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/")), sClass), Q7B_ID(".QWidget.q7b")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQWidget_triggered", "2294", "1");
Q7B_WRITESTRING(Q7B_ID(" 'just created this file"), s, Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQWidget_triggered", "2295", "1");
Q7B_Project_Class(Q7B_Project_Object())->OpenCodeView(s);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQWidget_triggered", "2296", "1");
Q7B_Project_Class(Q7B_Project_Object())->UpdateProjectFilesList();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQWidget_triggered", "2297", "2");
}

void MainWindow::Q7B_on_actionQt_DesignerHelp_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_DesignerHelp_triggered", "2595", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_DesignerHelp_triggered", "2595", "1");
Q7B_OPENURL(Q7B_ID("http://qt-project.org/doc/qt-4.8/designer-manual.html"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_DesignerHelp_triggered", "2596", "2");
}

void MainWindow::Q7B_on_actionQt_Designer_for_MainWindow_ui_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Designer_for_MainWindow_ui_triggered", "2571", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Designer_for_MainWindow_ui_triggered", "2571", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(getCurrentFileName())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Designer_for_MainWindow_ui_triggered", "2572", "1");
Q7B s2; Q7B_ASSIGNMENT(&s2, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_FILEPATH(s), Q7B_ID("/")), Q7B_FILEBASENAME(s)), Q7B_ID(".ui")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Designer_for_MainWindow_ui_triggered", "2574", "1");
OpenUI(s, s2);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Designer_for_MainWindow_ui_triggered", "2575", "2");
}

void MainWindow::Q7B_on_actionQt_Designer_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Designer_triggered", "2661", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Designer_triggered", "2661", "1");
Q7B_OPENURL(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Qt Designer.pdf")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Designer_triggered", "2662", "2");
}

void MainWindow::Q7B_on_actionQt_Quick_Manual_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Quick_Manual_triggered", "121", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Quick_Manual_triggered", "121", "1");
Q7B_OPENURL(Q7B_ID("http://qt-project.org/doc/qt-4.8/qtquick.html"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Quick_Manual_triggered", "122", "2");
}

void MainWindow::Q7B_on_actionQt_Quick_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Quick_triggered", "129", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Quick_triggered", "129", "1");
Q7B_OPENURL(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Qt Quick.pdf")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Quick_triggered", "130", "2");
}

void MainWindow::Q7B_on_actionQt_Reference_Documentation_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Reference_Documentation_triggered", "2627", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Reference_Documentation_triggered", "2629", "1");
Q7B_OPENURL(Q7B_ID("http://qt-project.org/doc/qt-4.8/"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQt_Reference_Documentation_triggered", "2630", "2");
}

void MainWindow::Q7B_on_actionQuick_Start_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQuick_Start_triggered", "2657", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQuick_Start_triggered", "2657", "1");
Q7B_OPENURL(Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Q7Basic_Quick Start.pdf")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQuick_Start_triggered", "2658", "2");
}

void MainWindow::Q7B_on_actionQuit_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQuit_triggered", "1202", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQuit_triggered", "1202", "1");
Q7B_APPLICATION_QUIT(Q7B_Application_Object());
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionQuit_triggered", "1203", "2");
}

void MainWindow::Q7B_on_actionReadme_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionReadme_triggered", "2696", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionReadme_triggered", "2696", "1");
Q7B_OPENTEXTWINDOW(Q7B_READSTRING(Q7B_ID(":/Resources/Readme.txt"), Q7B_ID("")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionReadme_triggered", "2697", "2");
}

void MainWindow::Q7B_on_actionRedo_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRedo_triggered", "1214", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRedo_triggered", "1214", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRedo_triggered", "1215", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRedo_triggered", "1216", "1");
Q7B_Q7BCodeView_Class(cb)->PerformRedo();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRedo_triggered", "1217", "2");
}

void MainWindow::Q7B_on_actionRegister_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRegister_triggered", "2684", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRegister_triggered", "2684", "1");
PerformRegister();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRegister_triggered", "2685", "2");
}

void MainWindow::Q7B_on_actionRename_Current_File_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2465", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2466", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2467", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2468", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2471", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2472", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(getCurrentFileName())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2474", "1");

if (Q7B_CBOOL(Q7B_ENDSWITH(s, Q7B_ID("Global.QObject.q7b"), Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2475", "1");
Q7B__MSGBOX(Q7B_ID("Global.QObject.q7b must not be renamed."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2476", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2478", "1");

if (Q7B_CBOOL(Q7B_ENDSWITH(s, Q7B_ID("MainWindow.QMainWindow.q7b"), Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2479", "1");
Q7B__MSGBOX(Q7B_ID("MainWindow.QMainWindow.q7b must not be renamed."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2480", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2484", "1");
Q7B sYes; Q7B_ASSIGNMENT(&sYes, &(Q7B__ID(Q7B_IDNULL())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2485", "1");
Q7B_ASSIGNMENT(&sYes, &Q7B__ID(Q7B_INPUTBOX(Q7B_ADD(Q7B_ID("Enter the new name for "), Q7B_FILENAME(s)), Q7B_ID("Rename Current File"), Q7B_FILENAME(s))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2486", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sYes, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2487", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2489", "1");
Q7B_CLOSEMDI(w);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2490", "1");
Q7B s2; Q7B_ASSIGNMENT(&s2, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_FILEPATH(s), Q7B_ID("/")), sYes))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2491", "1");
Q7B_MOVE(s, s2);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2492", "1");

if (Q7B_CBOOL(Q7B_CONTAINS(s, Q7B_ID("."), Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2493", "1");
Q7B sui; Q7B_ASSIGNMENT(&sui, &(Q7B__STRING(Q7B_CONCAT(Q7B_LEFT(s, Q7B_INSTR(s, Q7B_ID("."), Q7B_ID((qint64) 0), Q7B_ID(true))), Q7B_ID(".ui")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2494", "1");
Q7B sui2; Q7B_ASSIGNMENT(&sui2, &(Q7B__STRING(Q7B_CONCAT(Q7B_LEFT(s2, Q7B_INSTR(s2, Q7B_ID("."), Q7B_ID((qint64) 0), Q7B_ID(true))), Q7B_ID(".ui")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2495", "1");

if (Q7B_CBOOL(Q7B_FILE(sui))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2495", "1");
Q7B_MOVE(sui, sui2);

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2498", "1");
Q7B_Project_Class(Q7B_Project_Object())->OpenCodeView(s2);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2499", "1");
Q7B_Project_Class(Q7B_Project_Object())->UpdateProjectFilesList();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRename_Current_File_triggered", "2500", "2");
}

void MainWindow::Q7B_on_actionReplace_File_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionReplace_File_triggered", "1282", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionReplace_File_triggered", "1283", "1");
Q7B_MSGBOX(Q7B_ID("Replace In File"), Q7B_ID("Watch out! There is no way to undo file replacements. So be sure about what you are doing\n  \nor what you want to replace. All project files will be searched and if the searched string is found, \n  \nit will modify the matched file and replace the occurance of that string."), Q7B_ID(false));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionReplace_File_triggered", "1287", "1");
Q7B_OPENTOOLWINDOW(Q7B_ID("FindReplaceFile"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionReplace_File_triggered", "1289", "2");
}

void MainWindow::Q7B_on_actionResources_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionResources_triggered", "1162", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionResources_triggered", "1163", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionResources_triggered", "1164", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionResources_triggered", "1165", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionResources_triggered", "1168", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_DIR(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/Resources")), Q7B_ID(false))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionResources_triggered", "1169", "1");
Q7B_DIR(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/Resources")), Q7B_ID(true));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionResources_triggered", "1172", "2");
}

void MainWindow::Q7B_on_actionRun_To_Cursor_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_To_Cursor_triggered", "2221", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_To_Cursor_triggered", "2221", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_LEN(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_To_Cursor_triggered", "2222", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_To_Cursor_triggered", "2223", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_To_Cursor_triggered", "2225", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_To_Cursor_triggered", "2226", "1");
Q7B ss; Q7B_ASSIGNMENT(&ss, &(Q7B__STRING(Q7B_STRING(Q7B_ID(Q7B_Q7BCodeView_Class(cb)->getCurrentLine()), Q7B_ID(false)))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_To_Cursor_triggered", "2227", "1");
Q7B_Q7BCompiler_Class(Compiler)->RunToCursor(Q7B_CQSTRING(s), Q7B_CQSTRING(ss));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_To_Cursor_triggered", "2229", "2");
}

void MainWindow::Q7B_on_actionRun_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_triggered", "1755", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_triggered", "1756", "1");

if (Q7B_CBOOL(CheckCompilerWithGCCDirVersionDateTimeAndRebuildIfNeccessary())){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_triggered", "1756", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_triggered", "1758", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_LEN(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_triggered", "1759", "1");
Q7B_Project_Class(Q7B_Project_Object())->SaveAll();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_triggered", "1760", "1");
myStop();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_triggered", "1761", "1");
PrintStatusBar(Q7B_ID("Run..."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_triggered", "1763", "1");
Q7B_QPLAINTEXTEDIT_PLAINTEXT(plainTextEditLog, Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_triggered", "1764", "1");
Q7B_QPLAINTEXTEDIT_PLAINTEXT(plainTextEditCompiler, Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_triggered", "1765", "1");
Q7B_ASSIGNMENT(&bCompilerError, &Q7B__BOOLEAN(Q7B_ID(false)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_triggered", "1769", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_ID(Q7B_Q7BCompiler_Class(Compiler)->Run(Q7B_CQSTRING(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath), Q7B_CQSTRING(Q7B_FILENAME(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath)))))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_triggered", "1770", "1");
Q7B_ASSIGNMENT(&bRunOrBuild, &Q7B__BOOLEAN(Q7B_ID(true)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_triggered", "1771", "1");
DoActions();

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionRun_triggered", "1774", "2");
}

void MainWindow::Q7B_on_actionSQLite_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSQLite_triggered", "2633", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSQLite_triggered", "2633", "1");
Q7B_OPENURL(Q7B_ID("http://www.sqlite.org/docs.html"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSQLite_triggered", "2634", "2");
}

void MainWindow::Q7B_on_actionSave_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSave_triggered", "2690", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSave_triggered", "2690", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_LEN(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSave_triggered", "2691", "1");
Q7B_Project_Class(Q7B_Project_Object())->SaveAll();

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSave_triggered", "2693", "2");
}

void MainWindow::Q7B_on_actionSelect_All_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSelect_All_triggered", "1244", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSelect_All_triggered", "1244", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSelect_All_triggered", "1245", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSelect_All_triggered", "1246", "1");
Q7B_Q7BCodeView_Class(cb)->PerformSelectAll();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSelect_All_triggered", "1247", "2");
}

void MainWindow::Q7B_on_actionShift_Left_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShift_Left_triggered", "1336", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShift_Left_triggered", "1336", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShift_Left_triggered", "1337", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShift_Left_triggered", "1338", "1");
Q7B_Q7BCodeView_Class(cb)->PerformUnindent();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShift_Left_triggered", "1339", "2");
}

void MainWindow::Q7B_on_actionShift_Right_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShift_Right_triggered", "1342", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShift_Right_triggered", "1342", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShift_Right_triggered", "1343", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShift_Right_triggered", "1344", "1");
Q7B_Q7BCodeView_Class(cb)->PerformIndent();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShift_Right_triggered", "1345", "2");
}

void MainWindow::Q7B_on_actionShow_Code_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Code_triggered", "1903", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Code_triggered", "1904", "1");
Q7B PathFileName; Q7B_ASSIGNMENT(&PathFileName, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/")), Q7B_FILEBASENAME(getCurrentFileName())), Q7B_ID(".FormClass.q7b")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Code_triggered", "1905", "1");
Q7B_ASSIGNMENT(&PathFileName, &Q7B__STRING(Q7B_REPLACE(PathFileName, Q7B_ID("\\"), Q7B_ID("/"), Q7B_ID(true))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Code_triggered", "1907", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Code_triggered", "1908", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Code_triggered", "1910", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Code_triggered", "1910", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Code_triggered", "1911", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Code_triggered", "1912", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Code_triggered", "1913", "1");
Q7B_ASSIGNMENT(&s, &Q7B__STRING(Q7B_REPLACE(s, Q7B_ID("\\"), Q7B_ID("/"), Q7B_ID(true))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Code_triggered", "1915", "1");

if (Q7B_CBOOL(Q7B_EQUAL(s, PathFileName))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Code_triggered", "1917", "1");
Q7B_SETFOCUSMDI(w);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Code_triggered", "1919", "1");
Q7B_Q7BProjectWindow_Class(theProjectWindow)->PerformSelect(Q7B_CQSTRING(PathFileName));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Code_triggered", "1921", "1");
return;

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Code_triggered", "1927", "2");
}

void MainWindow::Q7B_on_actionShow_Form_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Form_triggered", "1930", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Form_triggered", "1931", "1");
Q7B PathFileName; Q7B_ASSIGNMENT(&PathFileName, &(Q7B__STRING(Q7B_ADD(Q7B_ADD(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/")), Q7B_FILEBASENAME(getCurrentFileName())), Q7B_ID(".Form.q7b")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Form_triggered", "1932", "1");
Q7B_ASSIGNMENT(&PathFileName, &Q7B__STRING(Q7B_REPLACE(PathFileName, Q7B_ID("\\"), Q7B_ID("/"), Q7B_ID(true))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Form_triggered", "1934", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Form_triggered", "1935", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Form_triggered", "1937", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Form_triggered", "1937", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Form_triggered", "1938", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Form_triggered", "1939", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Form_triggered", "1940", "1");
Q7B_ASSIGNMENT(&s, &Q7B__STRING(Q7B_REPLACE(s, Q7B_ID("\\"), Q7B_ID("/"), Q7B_ID(true))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Form_triggered", "1942", "1");

if (Q7B_CBOOL(Q7B_EQUAL(s, PathFileName))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Form_triggered", "1944", "1");
Q7B_SETFOCUSMDI(w);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Form_triggered", "1946", "1");
Q7B_Q7BProjectWindow_Class(theProjectWindow)->PerformSelect(Q7B_CQSTRING(PathFileName));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Form_triggered", "1948", "1");
return;

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Form_triggered", "1954", "2");
}

void MainWindow::Q7B_on_actionShow_Project_Folder_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Project_Folder_triggered", "2578", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Project_Folder_triggered", "2579", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Project_Folder_triggered", "2580", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Project_Folder_triggered", "2581", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Project_Folder_triggered", "2584", "1");
Q7B_OPENURL(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionShow_Project_Folder_triggered", "2585", "2");
}

void MainWindow::Q7B_on_actionStep_Into_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionStep_Into_triggered", "2209", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionStep_Into_triggered", "2209", "1");
Q7B_Q7BCompiler_Class(Compiler)->StepInto();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionStep_Into_triggered", "2210", "2");
}

void MainWindow::Q7B_on_actionStep_Out_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionStep_Out_triggered", "2217", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionStep_Out_triggered", "2217", "1");
Q7B_Q7BCompiler_Class(Compiler)->StepOut();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionStep_Out_triggered", "2218", "2");
}

void MainWindow::Q7B_on_actionStep_Over_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionStep_Over_triggered", "2213", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionStep_Over_triggered", "2213", "1");
Q7B_Q7BCompiler_Class(Compiler)->StepOver();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionStep_Over_triggered", "2214", "2");
}

void MainWindow::Q7B_on_actionStop_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionStop_triggered", "2129", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionStop_triggered", "2129", "1");
myStop();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionStop_triggered", "2130", "2");
}

void MainWindow::Q7B_on_actionSystemTray_QSystemTrayIcon_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSystemTray_QSystemTrayIcon_triggered", "1147", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSystemTray_QSystemTrayIcon_triggered", "1148", "1");

if (Q7B_CBOOL(Q7B_FILE(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSystemTray_QSystemTrayIcon_triggered", "1149", "1");
Q7B__MSGBOX(Q7B_ID("Current project is a single file project, therefore this feature is not available now. "));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSystemTray_QSystemTrayIcon_triggered", "1150", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSystemTray_QSystemTrayIcon_triggered", "1153", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_FILE(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/SystemTrayIcon.QSystemTrayIcon.q7b")))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSystemTray_QSystemTrayIcon_triggered", "1154", "1");
Q7B_WRITESTRING(Q7B_ID(" ' this is for the systemtray"), Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/SystemTrayIcon.QSystemTrayIcon.q7b")), Q7B_ID(""));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSystemTray_QSystemTrayIcon_triggered", "1155", "1");
Q7B_Project_Class(Q7B_Project_Object())->OpenCodeView(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/SystemTrayIcon.QSystemTrayIcon.q7b")));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSystemTray_QSystemTrayIcon_triggered", "1158", "1");
Q7B_Project_Class(Q7B_Project_Object())->UpdateProjectFilesList();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionSystemTray_QSystemTrayIcon_triggered", "1159", "2");
}

void MainWindow::Q7B_on_actionTo_UPPERCASE_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionTo_UPPERCASE_triggered", "339", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionTo_UPPERCASE_triggered", "339", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionTo_UPPERCASE_triggered", "340", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionTo_UPPERCASE_triggered", "341", "1");
Q7B_Q7BCodeView_Class(cb)->PerformUpper();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionTo_UPPERCASE_triggered", "342", "2");
}

void MainWindow::Q7B_on_actionTo_lowercase_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionTo_lowercase_triggered", "1367", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionTo_lowercase_triggered", "1367", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionTo_lowercase_triggered", "1368", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionTo_lowercase_triggered", "1369", "1");
Q7B_Q7BCodeView_Class(cb)->PerformLower();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionTo_lowercase_triggered", "1370", "2");
}

void MainWindow::Q7B_on_actionToggle_Breakpoint_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionToggle_Breakpoint_triggered", "2232", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionToggle_Breakpoint_triggered", "2232", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_LEN(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionToggle_Breakpoint_triggered", "2233", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionToggle_Breakpoint_triggered", "2234", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionToggle_Breakpoint_triggered", "2235", "1");
Q7B n; Q7B_ASSIGNMENT(&n, &(Q7B__INTEGER(Q7B_ID(Q7B_Q7BCodeView_Class(cb)->getCurrentLine()))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionToggle_Breakpoint_triggered", "2236", "1");
Q7B_Q7BCodeView_Class(cb)->setUnsetBreaktpoint(Q7B_CQINT64(n));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionToggle_Breakpoint_triggered", "2239", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionToggle_Breakpoint_triggered", "2240", "1");
Q7B ss; Q7B_ASSIGNMENT(&ss, &(Q7B__STRING(Q7B_STRING(Q7B_ID(Q7B_Q7BCodeView_Class(cb)->getCurrentLine()), Q7B_ID(false)))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionToggle_Breakpoint_triggered", "2241", "1");
Q7B_Q7BCompiler_Class(Compiler)->Breakpoint(Q7B_CQSTRING(s), Q7B_CQSTRING(ss));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionToggle_Breakpoint_triggered", "2244", "2");
}

void MainWindow::Q7B_on_actionUncomment_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionUncomment_triggered", "1360", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionUncomment_triggered", "1360", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionUncomment_triggered", "1361", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionUncomment_triggered", "1362", "1");
Q7B_Q7BCodeView_Class(cb)->PerformUncomment();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionUncomment_triggered", "1363", "2");
}

void MainWindow::Q7B_on_actionUndo_triggered(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionUndo_triggered", "1206", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionUndo_triggered", "1207", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionUndo_triggered", "1209", "1");
Q7B cb; Q7B_ASSIGNMENT(&cb, &(Q7B__Q7BCODEVIEW(Q7B_QWIDGET_WIDGET(w, Q7B_ID("Q7BCodeBox")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionUndo_triggered", "1210", "1");
Q7B_Q7BCodeView_Class(cb)->PerformUndo();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_actionUndo_triggered", "1211", "2");
}

void MainWindow::Q7B_on_mUIFiles_triggered(Q7B Action)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_mUIFiles_triggered", "494", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_mUIFiles_triggered", "494", "1");
OpenUI(Q7B_ID("MainWindow.QMainWindow.q7b"), Q7B_QACTION_TAG(Action));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_mUIFiles_triggered", "495", "2");
}

void MainWindow::Q7B_on_mdiArea_GotFocusMDI(Q7B theWidget)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_mdiArea_GotFocusMDI", "61", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_mdiArea_GotFocusMDI", "62", "1");

if (Q7B_CBOOL(Q7B_UNEQUAL(theWidget, Q7B_IDNULL()))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_mdiArea_GotFocusMDI", "63", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(theWidget)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_mdiArea_GotFocusMDI", "64", "1");
Q7B_Q7BProjectWindow_Class(theProjectWindow)->PerformSelect(Q7B_CQSTRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName"))));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_mdiArea_GotFocusMDI", "66", "1");
DoActions();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_mdiArea_GotFocusMDI", "67", "2");
}

void MainWindow::Q7B_on_menuAdd_Runtime_Extension_aboutToShow()
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuAdd_Runtime_Extension_aboutToShow", "383", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuAdd_Runtime_Extension_aboutToShow", "383", "1");
RequeryMenuRuntimeExtensionFiles();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuAdd_Runtime_Extension_aboutToShow", "384", "2");
}

void MainWindow::Q7B_on_menuAdd_Runtime_Extension_triggered(Q7B Action)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuAdd_Runtime_Extension_triggered", "416", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuAdd_Runtime_Extension_triggered", "417", "1");
Q7B sInfo; Q7B_ASSIGNMENT(&sInfo, &(Q7B__STRING(Q7B_READSTRING(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_FILEPATH(Q7B_QACTION_TAG(Action)), Q7B_ID("/")), Q7B_FILEBASENAME(Q7B_QACTION_TAG(Action))), Q7B_ID("/")), Q7B_FILEBASENAME(Q7B_QACTION_TAG(Action))), Q7B_ID(".txt")), Q7B_ID("")))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuAdd_Runtime_Extension_triggered", "419", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B___MSGBOX(sInfo, Q7B_ID((qint64) 4), Q7B_ID("Add Runtime Extension?"), Q7B_ID(true)), Q7B_ID((qint64) 7)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuAdd_Runtime_Extension_triggered", "420", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuAdd_Runtime_Extension_triggered", "423", "1");

if (Q7B_CBOOL(Q7B_NOT(Q7B_DIR(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/cpp")), Q7B_ID(false))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuAdd_Runtime_Extension_triggered", "424", "1");
Q7B_DIR(Q7B_ADD(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/cpp")), Q7B_ID(true));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuAdd_Runtime_Extension_triggered", "427", "1");
Q7B_COPY(Q7B_QACTION_TAG(Action), Q7B_CONCAT(Q7B_CONCAT(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/cpp/")), Q7B_FILENAME(Q7B_QACTION_TAG(Action))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuAdd_Runtime_Extension_triggered", "428", "1");
Q7B_COPY(Q7B_CONCAT(Q7B_CONCAT(Q7B_FILEPATH(Q7B_QACTION_TAG(Action)), Q7B_ID("/")), Q7B_FILEBASENAME(Q7B_QACTION_TAG(Action))), Q7B_CONCAT(Q7B_CONCAT(Q7B_Project_Class(Q7B_Project_Object())->sProjectPath, Q7B_ID("/cpp/")), Q7B_FILEBASENAME(Q7B_QACTION_TAG(Action))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuAdd_Runtime_Extension_triggered", "430", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__CODEVIEW(Q7B_FOCUSMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuAdd_Runtime_Extension_triggered", "431", "1");
Q7B_CodeView_Class(w)->InsertCodeAtCurrentPosition(sInfo);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuAdd_Runtime_Extension_triggered", "434", "2");
}

void MainWindow::Q7B_on_menuConfiguration_triggered(Q7B Action)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuConfiguration_triggered", "2748", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuConfiguration_triggered", "2748", "1");
Configuration(Action, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuConfiguration_triggered", "2749", "2");
}

void MainWindow::Q7B_on_menuExamples_aboutToShow()
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuExamples_aboutToShow", "897", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuExamples_aboutToShow", "897", "1");
Q7B_QMENU_CLEAR(menuExamples);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuExamples_aboutToShow", "899", "1");
BuildExampleMenu(menuExamples, Q7B_ADD(Q7B_APPLICATION_PATH(Q7B_Application_Object()), Q7B_ID("/Examples")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuExamples_aboutToShow", "901", "2");
}

void MainWindow::Q7B_on_menuExamples_triggered(Q7B Action)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuExamples_triggered", "904", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuExamples_triggered", "905", "1");
myStop();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuExamples_triggered", "907", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QACTION_TAG(Action), Q7B_ID("Browser")))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuExamples_triggered", "908", "1");
Q7B_OPENDIALOG(Q7B_ID("Examples"));

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuExamples_triggered", "911", "1");
Q7B_Project_Class(Q7B_Project_Object())->Open(Q7B_QACTION_TAG(Action));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuExamples_triggered", "914", "2");
}

void MainWindow::Q7B_on_menuRecent_Projects_triggered(Q7B Action)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuRecent_Projects_triggered", "167", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuRecent_Projects_triggered", "167", "1");
Q7B_Project_Class(Q7B_Project_Object())->Open(Q7B_QACTION_TAG(Action));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuRecent_Projects_triggered", "168", "2");
}

void MainWindow::Q7B_on_menuUi_Files_aboutToShow()
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuUi_Files_aboutToShow", "442", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuUi_Files_aboutToShow", "442", "1");
RequeryUIFiles();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuUi_Files_aboutToShow", "443", "2");
}

void MainWindow::Q7B_on_menuWindows_aboutToShow()
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "917", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "917", "1");
Q7B_QMENU_CLEAR(menuWindows);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "918", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__QACTION(Q7B_QACTION_INIT(this, "a"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "923", "1");
Q7B_ASSIGNMENT(&a, &Q7B__QACTION(Q7B_QMENU_ADDACTION(menuWindows, Q7B_ID("Log Window"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "924", "1");
Q7B_QACTION_TAG(a, Q7B_ID("Log Window"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "925", "1");
Q7B_QACTION_ICON(a, Q7B_QICON_INIT(this, "a", Q7B_ID(":/Icons/Resources/ti_log.png")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "926", "1");
Q7B_QACTION_ENABLED(a, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "928", "1");
Q7B_ASSIGNMENT(&a, &Q7B__QACTION(Q7B_QMENU_ADDACTION(menuWindows, Q7B_ID("Screen Window"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "929", "1");
Q7B_QACTION_TAG(a, Q7B_ID("Screen Window"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "930", "1");
Q7B_QACTION_ICON(a, Q7B_QICON_INIT(this, "a", Q7B_ID(":/Icons/Resources/ti_screen.png")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "931", "1");
Q7B_QACTION_ENABLED(a, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "933", "1");
Q7B_ASSIGNMENT(&a, &Q7B__QACTION(Q7B_QMENU_ADDACTION(menuWindows, Q7B_ID("Debug Window"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "934", "1");
Q7B_QACTION_TAG(a, Q7B_ID("Debug Window"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "935", "1");
Q7B_QACTION_ENABLED(a, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "937", "1");
Q7B_ASSIGNMENT(&a, &Q7B__QACTION(Q7B_QMENU_ADDACTION(menuWindows, Q7B_ID("Compiler Window"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "938", "1");
Q7B_QACTION_TAG(a, Q7B_ID("Compiler Window"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "939", "1");
Q7B_QACTION_ENABLED(a, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "941", "1");
Q7B_ASSIGNMENT(&a, &Q7B__QACTION(Q7B_QMENU_ADDACTION(menuWindows, Q7B_ID("Project Window"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "942", "1");
Q7B_QACTION_TAG(a, Q7B_ID("Project Window"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "943", "1");
Q7B_QACTION_ENABLED(a, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "945", "1");
Q7B aa; Q7B_ASSIGNMENT(&aa, &(Q7B__LIST(Q7B_Project_Class(Q7B_Project_Object())->aProjectFiles)));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "947", "1");

if (Q7B_CBOOL(Q7B_GREATER(Q7B_LIST_LENGTH(aa), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "948", "1");
Q7B_QMENU_ADDSEPARATOR(menuWindows);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "950", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "951", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(aa), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "951", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "952", "1");
Q7B_ASSIGNMENT(&a, &Q7B__QACTION(Q7B_QMENU_ADDACTION(menuWindows, Q7B_FILENAME(Q7B_LIST_OBJECT(aa, i)))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "953", "1");
Q7B_QACTION_TAG(a, Q7B_LIST_OBJECT(aa, i));

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "957", "1");
Q7B_QMENU_ADDSEPARATOR(menuWindows);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "958", "1");
Q7B_ASSIGNMENT(&a, &Q7B__QACTION(Q7B_QMENU_ADDACTION(menuWindows, Q7B_ID("Global"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "959", "1");
Q7B_QACTION_TAG(a, Q7B_ID("Global"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "960", "1");
Q7B_QACTION_ICON(a, Q7B_QICON_INIT(this, "i", Q7B_ID(":/Icons/Resources/ti_global.png")));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_aboutToShow", "961", "2");
}

void MainWindow::Q7B_on_menuWindows_triggered(Q7B Action)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1020", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1021", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QACTION_TAG(Action), Q7B_ID("Debug Window")))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1023", "1");
Q7B__MSGBOX(Q7B_ID("Sorry. Not implemented yet."));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1029", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_QDOCKWIDGET_WIDGET(dockDebug))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1033", "1");
Q7B_ASSIGNMENT(&DebugStack, &Q7B__QCOMBOBOX(Q7B_QWIDGET_WIDGET(w, Q7B_ID("DebugStack"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1034", "1");
Q7B_ASSIGNMENT(&DebugGlobal, &Q7B__QTABLEWIDGET(Q7B_QWIDGET_WIDGET(w, Q7B_ID("DebugGlobal"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1035", "1");
Q7B_ASSIGNMENT(&DebugLocal, &Q7B__QTABLEWIDGET(Q7B_QWIDGET_WIDGET(w, Q7B_ID("DebugLocal"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1036", "1");
Q7B_ASSIGNMENT(&DebugMe, &Q7B__QTABLEWIDGET(Q7B_QWIDGET_WIDGET(w, Q7B_ID("DebugMe"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1039", "1");
Q7B_QCOMBOBOX_APPEND(DebugStack, Q7B_ID("Hello"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1043", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1046", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QACTION_TAG(Action), Q7B_ID("Log Window")))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1047", "1");
Q7B_QWIDGET_VISIBLE(dockLog, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1048", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1051", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QACTION_TAG(Action), Q7B_ID("Screen Window")))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1052", "1");
Q7B_SHOWSCREEN();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1053", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1056", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QACTION_TAG(Action), Q7B_ID("Compiler Window")))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1057", "1");
Q7B_QWIDGET_VISIBLE(dockCompiler, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1058", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1061", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QACTION_TAG(Action), Q7B_ID("Project Window")))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1062", "1");
Q7B_QWIDGET_VISIBLE(dockProjectWindow, Q7B_ID(true));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1063", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1066", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1067", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1068", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QACTION_TAG(Action), Q7B_ID("Global")))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1069", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1069", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1070", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1071", "1");

if (Q7B_CBOOL(Q7B_ENDSWITH(Q7B_PROPERTY(w, Q7B_ID("PathFileName")), Q7B_ID("Global.QObject.q7b"), Q7B_ID(true)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1072", "1");
Q7B_SETFOCUSMDI(w);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1073", "1");
Q7B_Q7BProjectWindow_Class(theProjectWindow)->PerformSelect(Q7B_CQSTRING(Q7B_PROPERTY(w, Q7B_ID("PathFileName"))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1075", "1");
return;

}

}

} else {
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1079", "1");
ReopenCode(Q7B_QACTION_TAG(Action), Q7B_MINUS(Q7B_ID((qint64) 1)));

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_menuWindows_triggered", "1091", "2");
}

void MainWindow::Q7B_on_tb_uilist_clicked(Q7B Checked)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_tb_uilist_clicked", "479", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_tb_uilist_clicked", "480", "1");
RequeryUIFiles();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_tb_uilist_clicked", "482", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_LIST_LENGTH(lUIFiles), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_tb_uilist_clicked", "483", "1");
Q7B__MSGBOX(Q7B_ID("No ui files in the project yet"));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_tb_uilist_clicked", "484", "1");
return;

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_tb_uilist_clicked", "487", "1");
Q7B_QTOOLBUTTON_MENU(tb_uilist, mUIFiles);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_tb_uilist_clicked", "488", "1");
((QToolButton* )(tb_uilist)->ref)->showMenu();
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_tb_uilist_clicked", "489", "1");
Q7B_QTOOLBUTTON_MENU(tb_uilist, Q7B_IDNULL());
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_tb_uilist_clicked", "491", "2");
}

void MainWindow::Q7B_on_theProjectWindow_Open(Q7B sFileName)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_theProjectWindow_Open", "70", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_theProjectWindow_Open", "71", "1");
Q7B a; Q7B_ASSIGNMENT(&a, &(Q7B__LIST(Q7B_LISTMDI())));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_theProjectWindow_Open", "73", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_theProjectWindow_Open", "75", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_LIST_LENGTH(a), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("MainWindow.QMainWindow.q7b", "on_theProjectWindow_Open", "75", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_theProjectWindow_Open", "76", "1");
Q7B w; Q7B_ASSIGNMENT(&w, &(Q7B__QWIDGET(Q7B_LIST_OBJECT(a, i))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_theProjectWindow_Open", "77", "1");
Q7B s; Q7B_ASSIGNMENT(&s, &(Q7B__STRING(Q7B_REPLACE(Q7B_PROPERTY(w, Q7B_ID("PathFileName")), Q7B_ID("\\"), Q7B_ID("/"), Q7B_ID(true)))));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_theProjectWindow_Open", "79", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sFileName, s))){
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_theProjectWindow_Open", "80", "1");
Q7B_SETFOCUSMDI(w);
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_theProjectWindow_Open", "81", "1");
return;

}

}
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "on_theProjectWindow_Open", "84", "2");
}

void MainWindow::theProjectWindow_PerformOpenProject(Q7B sFileName)
{
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "theProjectWindow_PerformOpenProject", "87", "0");
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "theProjectWindow_PerformOpenProject", "87", "1");
Q7B_Q7BProjectWindow_Class(theProjectWindow)->PerformOpenProject(Q7B_CQSTRING(sFileName));
                                                                  Q7BS("MainWindow.QMainWindow.q7b", "theProjectWindow_PerformOpenProject", "88", "2");
}

