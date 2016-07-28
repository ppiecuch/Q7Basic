
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
 #ifndef Q7B_projectproperties_h
#define Q7B_projectproperties_h

#include "Q7BRuntime.h"

namespace Ui {
  class ProjectProperties;
}


class ProjectProperties;
extern ProjectProperties *Q7B_ProjectProperties_Class(Q7B o);
extern Q7B Q7B_ProjectProperties_Object();
extern ProjectProperties *q7b_ProjectProperties_Object;
extern Q7B q7b_ProjectProperties_Object_Q7B;
extern bool q7b_ProjectProperties_Object_Finalized;
extern bool q7b_ProjectProperties_Object_Init;

#define uiClass Q7B_uiClass

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
class ProjectProperties : public QDialog
{
Q_OBJECT
public:
ProjectProperties(Q7B _q7b_this, QWidget *parent = 0);
ProjectProperties(QWidget *parent = 0);
Ui::ProjectProperties *ui;

~ProjectProperties();
void closeEvent(QCloseEvent *e);
void Init();

public slots:
void on_pushButton_clicked(bool checked = false)
{
  this->Q7B_on_pushButton_clicked(Q7B_ID(checked));
}
public:
Q7B commandline;
Q7B comment;
Q7B proname;
Q7B profile;



public:
static void SingleTonInit(ProjectProperties*me)
{
q7b_ProjectProperties_Object = me;
q7b_ProjectProperties_Object_Q7B = me->q7b_this;
q7b_ProjectProperties_Object_Init = true;
me->Init();
}

static Q7B SingleTonObject()
{
SingleTonObjectPointer();
return q7b_ProjectProperties_Object_Q7B;
}


static ProjectProperties* SingleTonObjectPointer()
{
if (q7b_ProjectProperties_Object_Finalized) return 0;
if (q7b_ProjectProperties_Object == 0){
q7b_ProjectProperties_Object_Init = true;
if (q7b_ui.contains("ProjectProperties")){
  q7b_ProjectProperties_Object = (ProjectProperties *) (QWidget *) q7b_ui["ProjectProperties"]->ref; 
} else {
  q7b_ProjectProperties_Object = new ProjectProperties(q7b_ProjectProperties_Object_Q7B, 0); q7b_ProjectProperties_Object->Init();
}
}
return q7b_ProjectProperties_Object;
}


static ProjectProperties* ClassPointer(Q7B o)
{
return (ProjectProperties*) o->ref;
}


public:
ProjectProperties(Q7B _q7b_this);
void Q7B_on_pushButton_clicked(Q7B Checked);
private:
Q7B q7b_this;

};

#endif
