
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


#include "Settings.h"


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

Settings *Q7B_Settings_Class(Q7B o){ return Settings::ClassPointer(o); }
Q7B Q7B_Settings_Object(){ return Settings::SingleTonObject(); }
Settings *q7b_Settings_Object = 0;
Q7B q7b_Settings_Object_Q7B;
bool q7b_Settings_Object_Finalized = false;
bool q7b_Settings_Object_Init = false;

#include "ui_Settings.h"

Settings::Settings(Q7B _q7b_this, QWidget *parent)
 : QDialog(parent), ui(new Ui::Settings)
{
  q7b_this = _q7b_this;
  ui->setupUi(this);
}

Settings::Settings(QWidget *parent)
 : QDialog(parent), ui(new Ui::Settings)
{
  ui->setupUi(this);
  Init();
}

Settings::~Settings()
{
  if (this == q7b_Settings_Object){ q7b_Settings_Object = 0; q7b_Settings_Object_Q7B = Q7B_IDNIL(); }
  delete ui;
  q7b_this->ref = 0;
}

void Settings::closeEvent(QCloseEvent *e)
{
  if (e->isAccepted() && this == q7b_Settings_Object){ q7b_Settings_Object = 0; q7b_Settings_Object_Q7B = Q7B_IDNIL(); }
}

void Settings::Init()
{
  if (q7b_Settings_Object_Init){ q7b_Settings_Object_Init = false; q7b_Settings_Object_Q7B = q7b_this = Q7B(new Q7B_id(typeid(Settings).name(), this)); } else q7b_this = Q7B(new Q7B_id(typeid(Settings).name(), this)); 
  setObjectName("Settings");
  Q7B q;
  QObject *o;
  o = findChild<QObject *>("DefaultSyntaxHighlighting"); if (o){ q = Q7B(new Q7B_id(typeid(QCheckBox).name(), o, false)); DefaultSyntaxHighlighting = q; } else { DefaultSyntaxHighlighting = Q7B_IDNULL(); }
  o = findChild<QObject *>("Showlinenumbers"); if (o){ q = Q7B(new Q7B_id(typeid(QCheckBox).name(), o, false)); Showlinenumbers = q; } else { Showlinenumbers = Q7B_IDNULL(); }
  o = findChild<QObject *>("Showlineseparators"); if (o){ q = Q7B(new Q7B_id(typeid(QCheckBox).name(), o, false)); Showlineseparators = q; } else { Showlineseparators = Q7B_IDNULL(); }
  o = findChild<QObject *>("activateHelp"); if (o){ q = Q7B(new Q7B_id(typeid(QCheckBox).name(), o, false)); activateHelp = q; } else { activateHelp = Q7B_IDNULL(); }
  o = findChild<QObject *>("fontComboBox"); if (o){ q = Q7B(new Q7B_id(typeid(QFontComboBox).name(), o, false)); fontComboBox = q; } else { fontComboBox = Q7B_IDNULL(); }
  o = findChild<QObject *>("listWidget"); if (o){ q = Q7B(new Q7B_id(typeid(QListWidget).name(), o, false)); listWidget = q; } else { listWidget = Q7B_IDNULL(); }
  o = findChild<QObject *>("pbBackground"); if (o){ q = Q7B(new Q7B_id(typeid(QPushButton).name(), o, false)); pbBackground = q; } else { pbBackground = Q7B_IDNULL(); }
  o = findChild<QObject *>("spinBox"); if (o){ q = Q7B(new Q7B_id(typeid(QSpinBox).name(), o, false)); spinBox = q; } else { spinBox = Q7B_IDNULL(); }
  Q7B_ASSIGNMENT(&backround, &(Q7B_QCOLOR_INIT(this, "backround")));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "61", "0");
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "61", "1");
Q7B sFontName; Q7B_ASSIGNMENT(&sFontName, &(Q7B__STRING(Q7B_PREFERENCES_STRING(Q7B_Preferences_Object(), Q7B_ID("FontName")))));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "62", "1");
Q7B nFontSize; Q7B_ASSIGNMENT(&nFontSize, &(Q7B__INTEGER(Q7B_PREFERENCES_INTEGER(Q7B_Preferences_Object(), Q7B_ID("FontSize")))));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "63", "1");
Q7B_QABSTRACTBUTTON_CHECKED(Showlinenumbers, Q7B_CBOOL(Q7B_PREFERENCES_EXISTS(Q7B_Preferences_Object(), Q7B_ID("ShowLineNumbers"))) ? Q7B_PREFERENCES_BOOLEAN(Q7B_Preferences_Object(), Q7B_ID("ShowLineNumbers")) : Q7B_ID(true));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "64", "1");
Q7B_QABSTRACTBUTTON_CHECKED(Showlineseparators, Q7B_CBOOL(Q7B_PREFERENCES_EXISTS(Q7B_Preferences_Object(), Q7B_ID("Showlineseparators"))) ? Q7B_PREFERENCES_BOOLEAN(Q7B_Preferences_Object(), Q7B_ID("Showlineseparators")) : Q7B_ID(true));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "65", "1");
Q7B_QABSTRACTBUTTON_CHECKED(DefaultSyntaxHighlighting, Q7B_CBOOL(Q7B_PREFERENCES_EXISTS(Q7B_Preferences_Object(), Q7B_ID("DefaultSyntaxHighlighting"))) ? Q7B_PREFERENCES_BOOLEAN(Q7B_Preferences_Object(), Q7B_ID("DefaultSyntaxHighlighting")) : Q7B_ID(true));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "66", "1");
Q7B_QABSTRACTBUTTON_CHECKED(activateHelp, Q7B_CBOOL(Q7B_PREFERENCES_EXISTS(Q7B_Preferences_Object(), Q7B_ID("ActivateHelp"))) ? Q7B_PREFERENCES_BOOLEAN(Q7B_Preferences_Object(), Q7B_ID("ActivateHelp")) : Q7B_ID(true));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "68", "1");

if (Q7B_CBOOL(Q7B_ISEMPTY(sFontName))){
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "69", "1");

if (Q7B_CBOOL(Q7B_OS_ISWINDOWS(Q7B_OS_Object()))){
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "70", "1");
Q7B_ASSIGNMENT(&sFontName, &Q7B__STRING(Q7B_ID("Courier New")));

} else if (Q7B_CBOOL(Q7B_OS_ISMAC(Q7B_OS_Object()))){
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "72", "1");
Q7B_ASSIGNMENT(&sFontName, &Q7B__STRING(Q7B_ID("Monaco")));

} else if (Q7B_CBOOL(Q7B_OS_ISLINUX(Q7B_OS_Object()))){
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "74", "1");
Q7B_ASSIGNMENT(&sFontName, &Q7B__STRING(Q7B_ID("Monospace")));

}

}
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "78", "1");

if (Q7B_CBOOL(Q7B_EQUAL(nFontSize, Q7B_ID((qint64) 0)))){
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "79", "1");

if (Q7B_CBOOL(Q7B_OS_ISWINDOWS(Q7B_OS_Object()))){
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "80", "1");
Q7B_ASSIGNMENT(&nFontSize, &Q7B__INTEGER(Q7B_ID((qint64) 10)));

} else if (Q7B_CBOOL(Q7B_OS_ISMAC(Q7B_OS_Object()))){
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "82", "1");
Q7B_ASSIGNMENT(&nFontSize, &Q7B__INTEGER(Q7B_ID((qint64) 12)));

} else if (Q7B_CBOOL(Q7B_OS_ISLINUX(Q7B_OS_Object()))){
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "84", "1");
Q7B_ASSIGNMENT(&nFontSize, &Q7B__INTEGER(Q7B_ID((qint64) 10)));

}

}
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "88", "1");
Q7B f; Q7B_ASSIGNMENT(&f, &(Q7B__QFONT(Q7B_QFONT_INIT(this, "f"))));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "89", "1");
Q7B_QFONT_SETFAMILY(f, sFontName);
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "90", "1");
Q7B_QFONTCOMBOBOX_SETCURRENTFONT(fontComboBox, f);
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "91", "1");
Q7B_QSPINBOX_VALUE(spinBox, nFontSize);
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "93", "1");
Q7B l; Q7B_ASSIGNMENT(&l, &(Q7B__QSTRINGLIST(Q7B_PREFERENCES_QSTRINGLIST(Q7B_Preferences_Object(), Q7B_ID("SyntaxHighlightingColors")))));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "94", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "96", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_QSTRINGLIST_LENGTH(l), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("Settings.QDialog.q7b", "Init", "96", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "97", "1");
Q7B k; Q7B_ASSIGNMENT(&k, &(Q7B__QSTRING(Q7B_QSTRINGLIST_AT(l, i))));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "99", "1");
Q7B sKey; Q7B_ASSIGNMENT(&sKey, &(Q7B__QSTRING(Q7B_QSTRING_LEFT(k, Q7B_QSTRING_INDEXOF(k, Q7B_ID(":"), Q7B_ID((qint64) 0), Q7B_ID((qint64) 0))))));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "101", "1");
Q7B sValue; Q7B_ASSIGNMENT(&sValue, &(Q7B__QSTRING(Q7B_QSTRING_MID(k, Q7B_ADD(Q7B_QSTRING_INDEXOF(k, Q7B_ID(":"), Q7B_ID((qint64) 0), Q7B_ID((qint64) 0)), Q7B_ID((qint64) 1)), Q7B_MINUS(Q7B_ID((qint64) 1))))));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "103", "1");
Q7B ll; Q7B_ASSIGNMENT(&ll, &(Q7B__QSTRINGLIST(Q7B_QSTRING_SPLIT(sValue, Q7B_ID(","), Q7B_ID((qint64) 0), Q7B_ID((qint64) 0)))));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "105", "1");
Q7B red; Q7B_ASSIGNMENT(&red, &(Q7B__INTEGER(Q7B_INTEGER(Q7B_QSTRINGLIST_AT(ll, Q7B_ID((qint64) 0)), Q7B_ID(false)))));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "106", "1");
Q7B green; Q7B_ASSIGNMENT(&green, &(Q7B__INTEGER(Q7B_INTEGER(Q7B_QSTRINGLIST_AT(ll, Q7B_ID((qint64) 1)), Q7B_ID(false)))));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "107", "1");
Q7B blue; Q7B_ASSIGNMENT(&blue, &(Q7B__INTEGER(Q7B_INTEGER(Q7B_QSTRINGLIST_AT(ll, Q7B_ID((qint64) 2)), Q7B_ID(false)))));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "109", "1");

if (Q7B_CBOOL(Q7B_EQUAL(sKey, Q7B_ID("Background")))){
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "111", "1");
Q7B_QCOLOR_SETRED(backround, red);
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "112", "1");
Q7B_QCOLOR_SETGREEN(backround, green);
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "113", "1");
Q7B_QCOLOR_SETBLUE(backround, blue);
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "115", "1");
Q7B_QWIDGET_STYLESHEET(pbBackground, Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_ID("background-color: rgb("), Q7B_STRING(red, Q7B_ID(false))), Q7B_ID(", ")), Q7B_STRING(green, Q7B_ID(false))), Q7B_ID(", ")), Q7B_STRING(blue, Q7B_ID(false))), Q7B_ID(");")));

} else {
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "119", "1");
Q7B lll; Q7B_ASSIGNMENT(&lll, &(Q7B__LIST(Q7B_QLISTWIDGET_FINDITEMS(listWidget, sKey, Q7B_ID((qint64) 0)))));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "121", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_LIST_LENGTH(lll), Q7B_ID((qint64) 0)))){
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "122", "1");
continue;

}
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "124", "1");
Q7B it; Q7B_ASSIGNMENT(&it, &(Q7B__QLISTWIDGETITEM(Q7B_LIST_OBJECT(lll, Q7B_ID((qint64) 0)))));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "126", "1");
Q7B co; Q7B_ASSIGNMENT(&co, &(Q7B__QCOLOR(Q7B_QCOLOR_INIT(this, "co"))));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "127", "1");
Q7B_QCOLOR_SETRED(co, red);
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "128", "1");
Q7B_QCOLOR_SETGREEN(co, green);
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "129", "1");
Q7B_QCOLOR_SETBLUE(co, blue);
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "131", "1");
Q7B br; Q7B_ASSIGNMENT(&br, &(Q7B__QBRUSH(Q7B_QBRUSH_INIT(this, "br"))));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "131", "1");
Q7B_QBRUSH_SETCOLOR(br, co);
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "132", "1");
Q7B_QLISTWIDGETITEM_SETFOREGROUND(it, br);

}

}
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "137", "1");
Q7B_QWIDGET_ENABLED(listWidget, Q7B_NOT(Q7B_QABSTRACTBUTTON_CHECKED(DefaultSyntaxHighlighting)));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "138", "1");
Q7B_QWIDGET_ENABLED(pbBackground, Q7B_NOT(Q7B_QABSTRACTBUTTON_CHECKED(DefaultSyntaxHighlighting)));
                                                                  Q7BS("Settings.QDialog.q7b", "Init", "140", "2");
}

Settings::Settings(Q7B _q7b_this)
{
  ui->setupUi(this);
}

void Settings::Q7B_on_DefaultSyntaxHighlighting_clicked(Q7B Checked)
{
                                                                  Q7BS("Settings.QDialog.q7b", "on_DefaultSyntaxHighlighting_clicked", "143", "0");
                                                                  Q7BS("Settings.QDialog.q7b", "on_DefaultSyntaxHighlighting_clicked", "143", "1");
Q7B_QWIDGET_ENABLED(listWidget, Q7B_NOT(Q7B_QABSTRACTBUTTON_CHECKED(DefaultSyntaxHighlighting)));
                                                                  Q7BS("Settings.QDialog.q7b", "on_DefaultSyntaxHighlighting_clicked", "144", "1");
Q7B_QWIDGET_ENABLED(pbBackground, Q7B_NOT(Q7B_QABSTRACTBUTTON_CHECKED(DefaultSyntaxHighlighting)));
                                                                  Q7BS("Settings.QDialog.q7b", "on_DefaultSyntaxHighlighting_clicked", "145", "2");
}

void Settings::Q7B_on_listWidget_itemClicked(Q7B Item)
{
                                                                  Q7BS("Settings.QDialog.q7b", "on_listWidget_itemClicked", "167", "0");
                                                                  Q7BS("Settings.QDialog.q7b", "on_listWidget_itemClicked", "167", "1");

if (Q7B_CBOOL(Q7B_COLORDIALOG_GETCOLOR(Q7B_ColorDialog_Object()))){
                                                                  Q7BS("Settings.QDialog.q7b", "on_listWidget_itemClicked", "169", "1");
Q7B it; Q7B_ASSIGNMENT(&it, &(Q7B__QLISTWIDGETITEM(Q7B_QLISTWIDGET_CURRENTITEM(listWidget))));
                                                                  Q7BS("Settings.QDialog.q7b", "on_listWidget_itemClicked", "171", "1");
Q7B co; Q7B_ASSIGNMENT(&co, &(Q7B__QCOLOR(Q7B_QCOLOR_INIT(this, "co"))));
                                                                  Q7BS("Settings.QDialog.q7b", "on_listWidget_itemClicked", "172", "1");
Q7B_QCOLOR_SETRED(co, Q7B_COLORDIALOG_RED(Q7B_ColorDialog_Object()));
                                                                  Q7BS("Settings.QDialog.q7b", "on_listWidget_itemClicked", "173", "1");
Q7B_QCOLOR_SETGREEN(co, Q7B_COLORDIALOG_GREEN(Q7B_ColorDialog_Object()));
                                                                  Q7BS("Settings.QDialog.q7b", "on_listWidget_itemClicked", "174", "1");
Q7B_QCOLOR_SETBLUE(co, Q7B_COLORDIALOG_BLUE(Q7B_ColorDialog_Object()));
                                                                  Q7BS("Settings.QDialog.q7b", "on_listWidget_itemClicked", "176", "1");
Q7B br; Q7B_ASSIGNMENT(&br, &(Q7B__QBRUSH(Q7B_QBRUSH_INIT(this, "br"))));
                                                                  Q7BS("Settings.QDialog.q7b", "on_listWidget_itemClicked", "176", "1");
Q7B_QBRUSH_SETCOLOR(br, co);
                                                                  Q7BS("Settings.QDialog.q7b", "on_listWidget_itemClicked", "177", "1");
Q7B_QLISTWIDGETITEM_SETFOREGROUND(it, br);

}
                                                                  Q7BS("Settings.QDialog.q7b", "on_listWidget_itemClicked", "179", "2");
}

void Settings::Q7B_on_pbBackground_clicked(Q7B Checked)
{
                                                                  Q7BS("Settings.QDialog.q7b", "on_pbBackground_clicked", "151", "0");
                                                                  Q7BS("Settings.QDialog.q7b", "on_pbBackground_clicked", "151", "1");

if (Q7B_CBOOL(Q7B_COLORDIALOG_GETCOLOR(Q7B_ColorDialog_Object()))){
                                                                  Q7BS("Settings.QDialog.q7b", "on_pbBackground_clicked", "153", "1");
Q7B it; Q7B_ASSIGNMENT(&it, &(Q7B__QLISTWIDGETITEM(Q7B_QLISTWIDGET_CURRENTITEM(listWidget))));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pbBackground_clicked", "155", "1");
Q7B_QCOLOR_SETRED(backround, Q7B_COLORDIALOG_RED(Q7B_ColorDialog_Object()));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pbBackground_clicked", "156", "1");
Q7B_QCOLOR_SETGREEN(backround, Q7B_COLORDIALOG_GREEN(Q7B_ColorDialog_Object()));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pbBackground_clicked", "157", "1");
Q7B_QCOLOR_SETBLUE(backround, Q7B_COLORDIALOG_BLUE(Q7B_ColorDialog_Object()));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pbBackground_clicked", "159", "1");
Q7B_QWIDGET_STYLESHEET(pbBackground, Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_ID("background-color: rgb("), Q7B_STRING(Q7B_COLORDIALOG_RED(Q7B_ColorDialog_Object()), Q7B_ID(false))), Q7B_ID(", ")), Q7B_STRING(Q7B_COLORDIALOG_GREEN(Q7B_ColorDialog_Object()), Q7B_ID(false))), Q7B_ID(", ")), Q7B_STRING(Q7B_COLORDIALOG_BLUE(Q7B_ColorDialog_Object()), Q7B_ID(false))), Q7B_ID(");")));

}
                                                                  Q7BS("Settings.QDialog.q7b", "on_pbBackground_clicked", "162", "2");
}

void Settings::Q7B_on_pushButton_clicked(Q7B Checked)
{
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "26", "0");
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "27", "1");
Q7B f; Q7B_ASSIGNMENT(&f, &(Q7B__QFONT(Q7B_QFONTCOMBOBOX_CURRENTFONT(fontComboBox))));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "29", "1");
Q7B_PREFERENCES_SETSTRING(Q7B_Preferences_Object(), Q7B_ID("FontName"), Q7B_QFONT_FAMILY(f));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "30", "1");
Q7B_PREFERENCES_SETINTEGER(Q7B_Preferences_Object(), Q7B_ID("FontSize"), Q7B_QSPINBOX_VALUE(spinBox));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "31", "1");
Q7B_PREFERENCES_SETBOOLEAN(Q7B_Preferences_Object(), Q7B_ID("ShowLineNumbers"), Q7B_QABSTRACTBUTTON_CHECKED(Showlinenumbers));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "32", "1");
Q7B_PREFERENCES_SETBOOLEAN(Q7B_Preferences_Object(), Q7B_ID("Showlineseparators"), Q7B_QABSTRACTBUTTON_CHECKED(Showlineseparators));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "33", "1");
Q7B_PREFERENCES_SETBOOLEAN(Q7B_Preferences_Object(), Q7B_ID("DefaultSyntaxHighlighting"), Q7B_QABSTRACTBUTTON_CHECKED(DefaultSyntaxHighlighting));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "34", "1");
Q7B_PREFERENCES_SETBOOLEAN(Q7B_Preferences_Object(), Q7B_ID("ActivateHelp"), Q7B_QABSTRACTBUTTON_CHECKED(activateHelp));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "36", "1");

if (Q7B_CBOOL(Q7B_EQUAL(Q7B_QABSTRACTBUTTON_CHECKED(DefaultSyntaxHighlighting), Q7B_ID(false)))){
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "37", "1");
Q7B l; Q7B_ASSIGNMENT(&l, &(Q7B__QSTRINGLIST(Q7B_QSTRINGLIST_INIT(this, "l"))));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "39", "1");
Q7B i; Q7B_ASSIGNMENT(&i, &(Q7B__INTEGER(Q7B_ID((qint64) 0))));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "41", "1");
Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ID((qint64) 0)));
for (;Q7B_CBOOL(Q7B_SMALLEREQUAL(i, Q7B_SUB(Q7B_QLISTWIDGET_COUNT(listWidget), Q7B_ID((qint64) 1))));Q7B_ANDALSO(Q7B_ID(Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "41", "1")), Q7B_ASSIGNMENT(&i, &Q7B__INTEGER(Q7B_ADD(i, Q7B_ID((qint64) 1)))))){
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "43", "1");
Q7B it; Q7B_ASSIGNMENT(&it, &(Q7B__QLISTWIDGETITEM(Q7B_QLISTWIDGET_ITEM(listWidget, i))));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "45", "1");
Q7B br; Q7B_ASSIGNMENT(&br, &(Q7B__QBRUSH(Q7B_QLISTWIDGETITEM_FOREGROUND(it))));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "46", "1");
Q7B co; Q7B_ASSIGNMENT(&co, &(Q7B__QCOLOR(Q7B_QBRUSH_COLOR(br))));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "47", "1");
Q7B_QSTRINGLIST_APPEND(l, Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_QLISTWIDGETITEM_TEXT(it), Q7B_ID(":")), Q7B_QCOLOR_RED(co)), Q7B_ID(",")), Q7B_QCOLOR_GREEN(co)), Q7B_ID(",")), Q7B_QCOLOR_BLUE(co)));

}
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "51", "1");
Q7B_QSTRINGLIST_APPEND(l, Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_CONCAT(Q7B_ID("Background:"), Q7B_QCOLOR_RED(backround)), Q7B_ID(",")), Q7B_QCOLOR_GREEN(backround)), Q7B_ID(",")), Q7B_QCOLOR_BLUE(backround)));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "53", "1");
Q7B_PREFERENCES_SETQSTRINGLIST(Q7B_Preferences_Object(), Q7B_ID("SyntaxHighlightingColors"), l);

}
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "56", "1");
Q7B__MSGBOX(Q7B_ID("Changes will apply after application restart"));
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "57", "1");
Q7B_QWIDGET_CLOSE(q7b_this);
                                                                  Q7BS("Settings.QDialog.q7b", "on_pushButton_clicked", "58", "2");
}

