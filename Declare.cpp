
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


#include "Declare.h"


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

Declare *Q7B_Declare_Class(Q7B o){ return Declare::ClassPointer(o); }
Q7B Q7B_Declare_Object(){ return Declare::SingleTonObject(); }
Declare *q7b_Declare_Object = 0;
Q7B q7b_Declare_Object_Q7B;
bool q7b_Declare_Object_Finalized = false;
bool q7b_Declare_Object_Init = false;

Declare::Declare(QObject *parent)
 : Module(parent)
{
  Init();
}

Declare::~Declare()
{
  if (this == q7b_Declare_Object){ q7b_Declare_Object = 0; q7b_Declare_Object_Q7B = Q7B_IDNIL(); }
  q7b_this->ref = 0;
}

Declare::Declare(Q7B _q7b_this)
{
  q7b_this = _q7b_this;
}

void Declare::Init()
{
  if (q7b_Declare_Object_Init){ q7b_Declare_Object_Init = false; q7b_Declare_Object_Q7B = q7b_this = Q7B(new Q7B_id(typeid(Declare).name(), this)); } else q7b_this = Q7B(new Q7B_id(typeid(Declare).name(), this)); 
  setObjectName("Declare");
}

