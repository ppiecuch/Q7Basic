
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
 





Signal "MouseDown" ___("X As Integer, Y As Integer, GlobalX As Integer, GlobalY As Integer, LeftButton As Boolean, RightButton As Boolean, MidButton As Boolean") Declare "void MouseDown(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton)"   COMMENT = "";
Signal "Click" ___("X As Integer, Y As Integer, GlobalX As Integer, GlobalY As Integer, LeftButton As Boolean, RightButton As Boolean, MidButton As Boolean") Declare "void Click(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton)"   COMMENT = "";
Signal "DblClick" ___("X As Integer, Y As Integer, GlobalX As Integer, GlobalY As Integer, LeftButton As Boolean, RightButton As Boolean, MidButton As Boolean") Declare "void DblClick(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton)"   COMMENT = "";
Signal "MouseUp" ___("X As Integer, Y As Integer, GlobalX As Integer, GlobalY As Integer, LeftButton As Boolean, RightButton As Boolean, MidButton As Boolean") Declare "void MouseUp(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton)"   COMMENT = "";
Signal "GotFocus" ___("") Declare "void GotFocus()"   COMMENT = "";
Signal "LostFocus" ___("") Declare "void LostFocus()"   COMMENT = "";
Signal "Enter" ___("") Declare "void Enter()"   COMMENT = "";
Signal "Exit" ___("") Declare "void Exit()"   COMMENT = "";
Signal "Resize" ___("Width As Integer, Height As Integer, OldWidth As Integer, OldHeight As Integer") Declare "void Resize(int Width, int Height, int OldWidth, int OldHeight)"   COMMENT = "";





