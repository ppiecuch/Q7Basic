
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
 #ifndef Q7B_settings_h
#define Q7B_settings_h

#include "Q7BRuntime.h"

namespace Ui {
  class Settings;
}


class Settings;
extern Settings *Q7B_Settings_Class(Q7B o);
extern Q7B Q7B_Settings_Object();
extern Settings *q7b_Settings_Object;
extern Q7B q7b_Settings_Object_Q7B;
extern bool q7b_Settings_Object_Finalized;
extern bool q7b_Settings_Object_Init;


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
class Settings : public QDialog
{
Q_OBJECT
public:
Settings(Q7B _q7b_this, QWidget *parent = 0);
Settings(QWidget *parent = 0);
Ui::Settings *ui;

~Settings();
void closeEvent(QCloseEvent *e);
void Init();

public slots:
void on_DefaultSyntaxHighlighting_clicked(bool checked = false)
{
  this->Q7B_on_DefaultSyntaxHighlighting_clicked(Q7B_ID(checked));
}
void on_listWidget_itemClicked(QListWidgetItem *item)
{
  this->Q7B_on_listWidget_itemClicked(Q7B_ID(item));
}
void on_pbBackground_clicked(bool checked = false)
{
  this->Q7B_on_pbBackground_clicked(Q7B_ID(checked));
}
void on_pushButton_clicked(bool checked = false)
{
  this->Q7B_on_pushButton_clicked(Q7B_ID(checked));
}
public:
Q7B fontComboBox;
Q7B spinBox;
Q7B Showlinenumbers;
Q7B Showlineseparators;
Q7B DefaultSyntaxHighlighting;
Q7B activateHelp;
Q7B backround;
Q7B pbBackground;
Q7B listWidget;



public:
static void SingleTonInit(Settings*me)
{
q7b_Settings_Object = me;
q7b_Settings_Object_Q7B = me->q7b_this;
q7b_Settings_Object_Init = true;
me->Init();
}

static Q7B SingleTonObject()
{
SingleTonObjectPointer();
return q7b_Settings_Object_Q7B;
}


static Settings* SingleTonObjectPointer()
{
if (q7b_Settings_Object_Finalized) return 0;
if (q7b_Settings_Object == 0){
q7b_Settings_Object_Init = true;
if (q7b_ui.contains("Settings")){
  q7b_Settings_Object = (Settings *) (QWidget *) q7b_ui["Settings"]->ref; 
} else {
  q7b_Settings_Object = new Settings(q7b_Settings_Object_Q7B, 0); q7b_Settings_Object->Init();
}
}
return q7b_Settings_Object;
}


static Settings* ClassPointer(Q7B o)
{
return (Settings*) o->ref;
}


public:
Settings(Q7B _q7b_this);
void Q7B_on_DefaultSyntaxHighlighting_clicked(Q7B Checked);
void Q7B_on_listWidget_itemClicked(Q7B Item);
void Q7B_on_pbBackground_clicked(Q7B Checked);
void Q7B_on_pushButton_clicked(Q7B Checked);
private:
Q7B q7b_this;

};

#endif
