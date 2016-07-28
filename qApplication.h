
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
 





Property "Path" As "String";    COMMENT = "";
Property "FileName" As "String";    COMMENT = "";
Property "PID" As "Integer";    COMMENT = "";
Property "Arguments" As "List";    COMMENT = "";

Property "ApplicationName" As "String";    COMMENT = "";
Property "ApplicationVersion" As "String";    COMMENT = "";
Property "OrganizationDomain" As "String";    COMMENT = "";
Property "OrganizationName" As "String";    COMMENT = "";

Sub      "Quit"___("");   COMMENT = "";
Sub      "CursorSetWait"___("");   COMMENT = "";
Sub      "CursorUnsetWait"___("");   COMMENT = "";

Function "ClipboardText"___("") As "String";   COMMENT = "";
Function "QtVersion"___("") As "String";   COMMENT = "";
Function "OperatingSystemName"___("") As "String";   COMMENT = "";

Sub      "CloseAllWindows"___("");   COMMENT = "";

Function "IsRightToLeftLayoutDirection"___("") As "Boolean";   COMMENT = "";
Function "FocusWindow"___("") As "QWidget";   COMMENT = "";
Function "Focus"___("") As "QWidget";   COMMENT = "";

Sub      "AboutQt"___("");   COMMENT = "";

Sub      "SetDefaultWindowIcon"___("Argument As QIcon");   COMMENT = "";
Sub      "SetQuitOnLastWindowClosed"___("Argument As Boolean");   COMMENT = "";
Sub      "SetRightToLeftLayoutDirection"___("Argument As Boolean");   COMMENT = "";
Sub      "SetClipboardText"___("Argument As String");   COMMENT = "";

Sub      "PrintHtml"___("Html As String");   COMMENT = "";
Sub      "PrintHtmlAsPdf"___("Html As String, PDFFilePath As String");   COMMENT = "";

Signal "lastWindowClosed"___("") Declare "void lastWindowClosed()"   COMMENT = "";
