
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
 
#include "Q7BCodeView.h"

#define WINDOWS true



QSet<QString> Q7B_CPPKeywords;
QSet<QString> Q7B_KeywordsAndRest;
QSet<QString> Q7B_Functions;

QColor Q7B_currentLineColor;    

QStringList Q7B_keywords;
QStringList Q7B_separators;
QStringList Q7B_whitespaces;
QStringList Q7B_operators;

QString Q7B_sFontName;
int Q7B_nFontSize;

bool Q7B_bShowLineNumbers = true;
bool Q7B_bShowLineSeparators = true;
bool Q7B_bDefaultSyntaxHighlighting = true;
QStringList Q7B_SyntaxHighlightingColors;


QColor Q7B_foreground = Qt::black;
QColor Q7B_background = Qt::white;

bool Parser_isTemplateType(QString s)
{
  return false 
    || s == ("QList")
    ;
}

inline bool isWhitespace(const QString & s, int p, int len){ return s.at(p + 0) == '\v' || s.at(p + 0) == '\t' || s.at(p + 0) == '\r' || s.at(p + 0) == ' '; }



inline bool isSeparator(const QString & s, int p, int len){ return s.at(p + 0) == '_' || s.at(p + 0) == '^' || s.at(p + 0) == ']' || s.at(p + 0) == '\n' || s.at(p + 0) == '\"' || s.at(p + 0) == '[' || (s.at(p + 0) == '>' && p + 1 < len && s.at(p + 1) == '=') || s.at(p + 0) == '>' || (s.at(p + 0) == '=' && p + 1 < len && s.at(p + 1) == '=' && p + 2 < len && s.at(p + 2) == '=') || (s.at(p + 0) == '=' && p + 1 < len && s.at(p + 1) == '=') || s.at(p + 0) == '=' || s.at(p + 0) == '=' || (s.at(p + 0) == '<' && p + 1 < len && s.at(p + 1) == 's' && p + 2 < len && s.at(p + 2) == 't' && p + 3 < len && s.at(p + 3) == 'r' && p + 4 < len && s.at(p + 4) == 'i' && p + 5 < len && s.at(p + 5) == 'n' && p + 6 < len && s.at(p + 6) == 'g' && p + 7 < len && s.at(p + 7) == '>') || (s.at(p + 0) == '<' && p + 1 < len && s.at(p + 1) == '=') || (s.at(p + 0) == '<' && p + 1 < len && s.at(p + 1) == '/' && p + 2 < len && s.at(p + 2) == 's' && p + 3 < len && s.at(p + 3) == 't' && p + 4 < len && s.at(p + 4) == 'r' && p + 5 < len && s.at(p + 5) == 'i' && p + 6 < len && s.at(p + 6) == 'n' && p + 7 < len && s.at(p + 7) == 'g' && p + 8 < len && s.at(p + 8) == '>') || s.at(p + 0) == '<' || s.at(p + 0) == ':' || s.at(p + 0) == '/' || s.at(p + 0) == '.' || s.at(p + 0) == '-' || s.at(p + 0) == ',' || s.at(p + 0) == '+' || (s.at(p + 0) == '*' && p + 1 < len && s.at(p + 1) == '*') || s.at(p + 0) == '*' || s.at(p + 0) == ')' || s.at(p + 0) == '(' || s.at(p + 0) == '\'' || s.at(p + 0) == '&' || s.at(p + 0) == '$' || s.at(p + 0) == '!'; }



QStringList scan(const QString &s, CodeSyntaxHighlighter *csh, bool *bError)
{
  // ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  //bool bBraces = false;
  int nBraces = 0;
  bool bDeclare = false;
  int nDeclare = 0;
  

  

int len = s.length();
bool bString1 = false;
bool bString11 = false;
bool bString2 = false;
bool bString22 = false;
bool bIdentifier = false;
bool bKeyword = false;
bool bNumber = false;
bool bNumberX = false;
bool bNumberDot = false;
bool bNumberE = false;
bool bNumberPlusMinus1 = false;
bool bNumberPlusMinus2 = false;
bool bNumberEDone = false;
bool bNewLine = false;
bool bComment = false;
int nComment = -1;
int nComment2 = -1;
int nStringLine = -1;
int nString = -1;
int nNumber = -1;
int nIdentifier = -1;
int nCurrentLine = 1;
int l = 0;
QString v;
QStringList tokens;
QChar c0;
QChar c1;
QChar c2;
int p = 0;
for (; *bError == false && p < len; p++){
c0 = s.at(p + 0);
c1 = p + 1 < len ? s.at(p + 1) : 0;
c2 = p + 2 < len ? s.at(p + 2) : 0;
if (c0 == '\r') continue;
if (bString1 && (c0 != '\n' && (c0 != '\"' || c1 == '\"'))){
if (c0 == '\"' && c1 == '\"'){ p++; continue; }
if (c0 == '\\' && c1 == '\"'){ p++; continue; }
continue;
}
if (bString2 && !(c0 == '<' && c1 == '/' && c2 == 's' && p + 3 < len && s.at(p + 3) == 't' && p + 4 < len && s.at(p + 4) == 'r' && p + 5 < len && s.at(p + 5) == 'i' && p + 6 < len && s.at(p + 6) == 'n' && p + 7 < len && s.at(p + 7) == 'g' && p + 8 < len && s.at(p + 8) == '>' && p + 9 < len && (s.at(p + 9).isDigit() || s.at(p + 9).isLetter() || isWhitespace(s, p + 9, len) || isSeparator(s, p + 9, len)))) continue;

if (!bString1 && !bString2 && isWhitespace(s, p + 0, len)){
  if (bIdentifier || bNumber){
  l = 0; goto identifier; }
 continue; 
}


if (!bIdentifier && !bNumber && c0.isLetter()){
switch(c0.toAscii()){
case 'A':
if (c1 == 's' && (p + 2 == len || (p + 2 < len && (isWhitespace(s, p + 2, len) || isSeparator(s, p + 2, len))))){ v = "As"; l = 1; bKeyword = true; goto identifier; }

if (c1 == 'n' && c2 == 'd' && p + 3 < len && s.at(p + 3) == 'A' && p + 4 < len && s.at(p + 4) == 'l' && p + 5 < len && s.at(p + 5) == 's' && p + 6 < len && s.at(p + 6) == 'o' && (p + 7 == len || (p + 7 < len && (isWhitespace(s, p + 7, len) || isSeparator(s, p + 7, len))))){ v = "AndAlso"; l = 6; bKeyword = true; goto identifier; }

if (c1 == 'n' && c2 == 'd' && (p + 3 == len || (p + 3 < len && (isWhitespace(s, p + 3, len) || isSeparator(s, p + 3, len))))){ v = "And"; l = 2; bKeyword = true; goto identifier; }

if (c1 == 'l' && c2 == 'i' && p + 3 < len && s.at(p + 3) == 'a' && p + 4 < len && s.at(p + 4) == 's' && (p + 5 == len || (p + 5 < len && (isWhitespace(s, p + 5, len) || isSeparator(s, p + 5, len))))){ v = "Alias"; l = 4; bKeyword = true; goto identifier; }

break;
case 'B':
if (c1 == 'y' && c2 == 'V' && p + 3 < len && s.at(p + 3) == 'a' && p + 4 < len && s.at(p + 4) == 'l' && (p + 5 == len || (p + 5 < len && (isWhitespace(s, p + 5, len) || isSeparator(s, p + 5, len))))){ v = "ByVal"; l = 4; bKeyword = true; goto identifier; }

if (c1 == 'y' && c2 == 'R' && p + 3 < len && s.at(p + 3) == 'e' && p + 4 < len && s.at(p + 4) == 'f' && (p + 5 == len || (p + 5 < len && (isWhitespace(s, p + 5, len) || isSeparator(s, p + 5, len))))){ v = "ByRef"; l = 4; bKeyword = true; goto identifier; }

if (c1 == 'r' && c2 == 'e' && p + 3 < len && s.at(p + 3) == 'a' && p + 4 < len && s.at(p + 4) == 'k' && (p + 5 == len || (p + 5 < len && (isWhitespace(s, p + 5, len) || isSeparator(s, p + 5, len))))){ v = "Break"; l = 4; bKeyword = true; goto identifier; }

break;
case 'C':
if (c1 == 'o' && c2 == 'n' && p + 3 < len && s.at(p + 3) == 't' && p + 4 < len && s.at(p + 4) == 'i' && p + 5 < len && s.at(p + 5) == 'n' && p + 6 < len && s.at(p + 6) == 'u' && p + 7 < len && s.at(p + 7) == 'e' && (p + 8 == len || (p + 8 < len && (isWhitespace(s, p + 8, len) || isSeparator(s, p + 8, len))))){ v = "Continue"; l = 7; bKeyword = true; goto identifier; }

if (c1 == 'o' && c2 == 'n' && p + 3 < len && s.at(p + 3) == 's' && p + 4 < len && s.at(p + 4) == 't' && (p + 5 == len || (p + 5 < len && (isWhitespace(s, p + 5, len) || isSeparator(s, p + 5, len))))){ v = "Const"; l = 4; bKeyword = true; goto identifier; }

if (c1 == 'l' && c2 == 'a' && p + 3 < len && s.at(p + 3) == 's' && p + 4 < len && s.at(p + 4) == 's' && (p + 5 == len || (p + 5 < len && (isWhitespace(s, p + 5, len) || isSeparator(s, p + 5, len))))){ v = "Class"; l = 4; bKeyword = true; goto identifier; }

if (c1 == 'a' && c2 == 's' && p + 3 < len && s.at(p + 3) == 'e' && (p + 4 == len || (p + 4 < len && (isWhitespace(s, p + 4, len) || isSeparator(s, p + 4, len))))){ v = "Case"; l = 3; bKeyword = true; goto identifier; }

break;
case 'D':
if (c1 == 'o' && (p + 2 == len || (p + 2 < len && (isWhitespace(s, p + 2, len) || isSeparator(s, p + 2, len))))){ v = "Do"; l = 1; bKeyword = true; goto identifier; }

if (c1 == 'i' && c2 == 'm' && (p + 3 == len || (p + 3 < len && (isWhitespace(s, p + 3, len) || isSeparator(s, p + 3, len))))){ v = "Dim"; l = 2; bKeyword = true; goto identifier; }

if (c1 == 'e' && c2 == 'c' && p + 3 < len && s.at(p + 3) == 'l' && p + 4 < len && s.at(p + 4) == 'a' && p + 5 < len && s.at(p + 5) == 'r' && p + 6 < len && s.at(p + 6) == 'e' && (p + 7 == len || (p + 7 < len && (isWhitespace(s, p + 7, len) || isSeparator(s, p + 7, len))))){ v = "Declare"; l = 6; bKeyword = true; goto identifier; }

break;
case 'E':
if (c1 == 'x' && c2 == 'i' && p + 3 < len && s.at(p + 3) == 't' && (p + 4 == len || (p + 4 < len && (isWhitespace(s, p + 4, len) || isSeparator(s, p + 4, len))))){ v = "Exit"; l = 3; bKeyword = true; goto identifier; }

if (c1 == 'v' && c2 == 'e' && p + 3 < len && s.at(p + 3) == 'n' && p + 4 < len && s.at(p + 4) == 't' && (p + 5 == len || (p + 5 < len && (isWhitespace(s, p + 5, len) || isSeparator(s, p + 5, len))))){ v = "Event"; l = 4; bKeyword = true; goto identifier; }

if (c1 == 'n' && c2 == 'u' && p + 3 < len && s.at(p + 3) == 'm' && (p + 4 == len || (p + 4 < len && (isWhitespace(s, p + 4, len) || isSeparator(s, p + 4, len))))){ v = "Enum"; l = 3; bKeyword = true; goto identifier; }

if (c1 == 'n' && c2 == 'd' && (p + 3 == len || (p + 3 < len && (isWhitespace(s, p + 3, len) || isSeparator(s, p + 3, len))))){ v = "End"; l = 2; bKeyword = true; goto identifier; }

if (c1 == 'l' && c2 == 's' && p + 3 < len && s.at(p + 3) == 'e' && (p + 4 == len || (p + 4 < len && (isWhitespace(s, p + 4, len) || isSeparator(s, p + 4, len))))){ v = "Else"; l = 3; bKeyword = true; goto identifier; }

break;
case 'F':
if (c1 == 'u' && c2 == 'n' && p + 3 < len && s.at(p + 3) == 'c' && p + 4 < len && s.at(p + 4) == 't' && p + 5 < len && s.at(p + 5) == 'i' && p + 6 < len && s.at(p + 6) == 'o' && p + 7 < len && s.at(p + 7) == 'n' && (p + 8 == len || (p + 8 < len && (isWhitespace(s, p + 8, len) || isSeparator(s, p + 8, len))))){ v = "Function"; l = 7; bKeyword = true; goto identifier; }

if (c1 == 'o' && c2 == 'r' && p + 3 < len && s.at(p + 3) == 'm' && (p + 4 == len || (p + 4 < len && (isWhitespace(s, p + 4, len) || isSeparator(s, p + 4, len))))){ v = "Form"; l = 3; bKeyword = true; goto identifier; }

if (c1 == 'o' && c2 == 'r' && (p + 3 == len || (p + 3 < len && (isWhitespace(s, p + 3, len) || isSeparator(s, p + 3, len))))){ v = "For"; l = 2; bKeyword = true; goto identifier; }

if (c1 == 'l' && c2 == 'i' && p + 3 < len && s.at(p + 3) == 'p' && (p + 4 == len || (p + 4 < len && (isWhitespace(s, p + 4, len) || isSeparator(s, p + 4, len))))){ v = "Flip"; l = 3; bKeyword = true; goto identifier; }

if (c1 == 'a' && c2 == 'l' && p + 3 < len && s.at(p + 3) == 's' && p + 4 < len && s.at(p + 4) == 'e' && (p + 5 == len || (p + 5 < len && (isWhitespace(s, p + 5, len) || isSeparator(s, p + 5, len))))){ v = "False"; l = 4; bKeyword = true; goto identifier; }

break;
case 'G':
if (c1 == 'o' && c2 == 'T' && p + 3 < len && s.at(p + 3) == 'o' && (p + 4 == len || (p + 4 < len && (isWhitespace(s, p + 4, len) || isSeparator(s, p + 4, len))))){ v = "GoTo"; l = 3; bKeyword = true; goto identifier; }

if (c1 == 'l' && c2 == 'o' && p + 3 < len && s.at(p + 3) == 'b' && p + 4 < len && s.at(p + 4) == 'a' && p + 5 < len && s.at(p + 5) == 'l' && (p + 6 == len || (p + 6 < len && (isWhitespace(s, p + 6, len) || isSeparator(s, p + 6, len))))){ v = "Global"; l = 5; bKeyword = true; goto identifier; }

break;
case 'I':
if (c1 == 't' && c2 == 'e' && p + 3 < len && s.at(p + 3) == 'r' && p + 4 < len && s.at(p + 4) == 'a' && p + 5 < len && s.at(p + 5) == 't' && p + 6 < len && s.at(p + 6) == 'e' && (p + 7 == len || (p + 7 < len && (isWhitespace(s, p + 7, len) || isSeparator(s, p + 7, len))))){ v = "Iterate"; l = 6; bKeyword = true; goto identifier; }

if (c1 == 's' && (p + 2 == len || (p + 2 < len && (isWhitespace(s, p + 2, len) || isSeparator(s, p + 2, len))))){ v = "Is"; l = 1; bKeyword = true; goto identifier; }

if (c1 == 'f' && (p + 2 == len || (p + 2 < len && (isWhitespace(s, p + 2, len) || isSeparator(s, p + 2, len))))){ v = "If"; l = 1; bKeyword = true; goto identifier; }

if (c1 == 'I' && c2 == 'f' && (p + 3 == len || (p + 3 < len && (isWhitespace(s, p + 3, len) || isSeparator(s, p + 3, len))))){ v = "IIf"; l = 2; bKeyword = true; goto identifier; }

break;
case 'L':
if (c1 == 'o' && c2 == 'o' && p + 3 < len && s.at(p + 3) == 'p' && (p + 4 == len || (p + 4 < len && (isWhitespace(s, p + 4, len) || isSeparator(s, p + 4, len))))){ v = "Loop"; l = 3; bKeyword = true; goto identifier; }

if (c1 == 'B' && c2 == 'o' && p + 3 < len && s.at(p + 3) == 'u' && p + 4 < len && s.at(p + 4) == 'n' && p + 5 < len && s.at(p + 5) == 'd' && (p + 6 == len || (p + 6 < len && (isWhitespace(s, p + 6, len) || isSeparator(s, p + 6, len))))){ v = "LBound"; l = 5; bKeyword = true; goto identifier; }

break;
case 'M':
if (c1 == 'o' && c2 == 'd' && p + 3 < len && s.at(p + 3) == 'u' && p + 4 < len && s.at(p + 4) == 'l' && p + 5 < len && s.at(p + 5) == 'e' && (p + 6 == len || (p + 6 < len && (isWhitespace(s, p + 6, len) || isSeparator(s, p + 6, len))))){ v = "Module"; l = 5; bKeyword = true; goto identifier; }

if (c1 == 'o' && c2 == 'd' && (p + 3 == len || (p + 3 < len && (isWhitespace(s, p + 3, len) || isSeparator(s, p + 3, len))))){ v = "Mod"; l = 2; bKeyword = true; goto identifier; }

if (c1 == 'i' && c2 == 'd' && (p + 3 == len || (p + 3 < len && (isWhitespace(s, p + 3, len) || isSeparator(s, p + 3, len))))){ v = "Mid"; l = 2; bKeyword = true; goto identifier; }

if (c1 == 'e' && (p + 2 == len || (p + 2 < len && (isWhitespace(s, p + 2, len) || isSeparator(s, p + 2, len))))){ v = "Me"; l = 1; bKeyword = true; goto identifier; }

break;
case 'N':
if (c1 == 'u' && c2 == 'l' && p + 3 < len && s.at(p + 3) == 'l' && (p + 4 == len || (p + 4 < len && (isWhitespace(s, p + 4, len) || isSeparator(s, p + 4, len))))){ v = "Null"; l = 3; bKeyword = true; goto identifier; }

if (c1 == 'o' && c2 == 't' && (p + 3 == len || (p + 3 < len && (isWhitespace(s, p + 3, len) || isSeparator(s, p + 3, len))))){ v = "Not"; l = 2; bKeyword = true; goto identifier; }

if (c1 == 'e' && c2 == 'x' && p + 3 < len && s.at(p + 3) == 't' && (p + 4 == len || (p + 4 < len && (isWhitespace(s, p + 4, len) || isSeparator(s, p + 4, len))))){ v = "Next"; l = 3; bKeyword = true; goto identifier; }

break;
case 'O':
if (c1 == 'u' && c2 == 't' && p + 3 < len && s.at(p + 3) == 'l' && p + 4 < len && s.at(p + 4) == 'e' && p + 5 < len && s.at(p + 5) == 't' && (p + 6 == len || (p + 6 < len && (isWhitespace(s, p + 6, len) || isSeparator(s, p + 6, len))))){ v = "Outlet"; l = 5; bKeyword = true; goto identifier; }

if (c1 == 'r' && c2 == 'E' && p + 3 < len && s.at(p + 3) == 'l' && p + 4 < len && s.at(p + 4) == 's' && p + 5 < len && s.at(p + 5) == 'e' && (p + 6 == len || (p + 6 < len && (isWhitespace(s, p + 6, len) || isSeparator(s, p + 6, len))))){ v = "OrElse"; l = 5; bKeyword = true; goto identifier; }

if (c1 == 'r' && (p + 2 == len || (p + 2 < len && (isWhitespace(s, p + 2, len) || isSeparator(s, p + 2, len))))){ v = "Or"; l = 1; bKeyword = true; goto identifier; }

break;
case 'P':
if (c1 == 'u' && c2 == 'b' && p + 3 < len && s.at(p + 3) == 'l' && p + 4 < len && s.at(p + 4) == 'i' && p + 5 < len && s.at(p + 5) == 'c' && (p + 6 == len || (p + 6 < len && (isWhitespace(s, p + 6, len) || isSeparator(s, p + 6, len))))){ v = "Public"; l = 5; bKeyword = true; goto identifier; }

if (c1 == 'r' && c2 == 'o' && p + 3 < len && s.at(p + 3) == 'p' && p + 4 < len && s.at(p + 4) == 'e' && p + 5 < len && s.at(p + 5) == 'r' && p + 6 < len && s.at(p + 6) == 't' && p + 7 < len && s.at(p + 7) == 'y' && (p + 8 == len || (p + 8 < len && (isWhitespace(s, p + 8, len) || isSeparator(s, p + 8, len))))){ v = "Property"; l = 7; bKeyword = true; goto identifier; }

if (c1 == 'r' && c2 == 'i' && p + 3 < len && s.at(p + 3) == 'v' && p + 4 < len && s.at(p + 4) == 'a' && p + 5 < len && s.at(p + 5) == 't' && p + 6 < len && s.at(p + 6) == 'e' && (p + 7 == len || (p + 7 < len && (isWhitespace(s, p + 7, len) || isSeparator(s, p + 7, len))))){ v = "Private"; l = 6; bKeyword = true; goto identifier; }

if (c1 == 'r' && c2 == 'e' && p + 3 < len && s.at(p + 3) == 's' && p + 4 < len && s.at(p + 4) == 'e' && p + 5 < len && s.at(p + 5) == 'r' && p + 6 < len && s.at(p + 6) == 'v' && p + 7 < len && s.at(p + 7) == 'e' && (p + 8 == len || (p + 8 < len && (isWhitespace(s, p + 8, len) || isSeparator(s, p + 8, len))))){ v = "Preserve"; l = 7; bKeyword = true; goto identifier; }

break;
case 'R':
if (c1 == 'e' && c2 == 't' && p + 3 < len && s.at(p + 3) == 'u' && p + 4 < len && s.at(p + 4) == 'r' && p + 5 < len && s.at(p + 5) == 'n' && (p + 6 == len || (p + 6 < len && (isWhitespace(s, p + 6, len) || isSeparator(s, p + 6, len))))){ v = "Return"; l = 5; bKeyword = true; goto identifier; }

if (c1 == 'e' && c2 == 'D' && p + 3 < len && s.at(p + 3) == 'i' && p + 4 < len && s.at(p + 4) == 'm' && (p + 5 == len || (p + 5 < len && (isWhitespace(s, p + 5, len) || isSeparator(s, p + 5, len))))){ v = "ReDim"; l = 4; bKeyword = true; goto identifier; }

break;
case 'S':
if (c1 == 'u' && c2 == 'p' && p + 3 < len && s.at(p + 3) == 'e' && p + 4 < len && s.at(p + 4) == 'r' && (p + 5 == len || (p + 5 < len && (isWhitespace(s, p + 5, len) || isSeparator(s, p + 5, len))))){ v = "Super"; l = 4; bKeyword = true; goto identifier; }

if (c1 == 'u' && c2 == 'b' && (p + 3 == len || (p + 3 < len && (isWhitespace(s, p + 3, len) || isSeparator(s, p + 3, len))))){ v = "Sub"; l = 2; bKeyword = true; goto identifier; }

if (c1 == 't' && c2 == 'e' && p + 3 < len && s.at(p + 3) == 'p' && (p + 4 == len || (p + 4 < len && (isWhitespace(s, p + 4, len) || isSeparator(s, p + 4, len))))){ v = "Step"; l = 3; bKeyword = true; goto identifier; }

if (c1 == 't' && c2 == 'a' && p + 3 < len && s.at(p + 3) == 't' && p + 4 < len && s.at(p + 4) == 'i' && p + 5 < len && s.at(p + 5) == 'c' && (p + 6 == len || (p + 6 < len && (isWhitespace(s, p + 6, len) || isSeparator(s, p + 6, len))))){ v = "Static"; l = 5; bKeyword = true; goto identifier; }

if (c1 == 'l' && c2 == 'o' && p + 3 < len && s.at(p + 3) == 't' && (p + 4 == len || (p + 4 < len && (isWhitespace(s, p + 4, len) || isSeparator(s, p + 4, len))))){ v = "Slot"; l = 3; bKeyword = true; goto identifier; }

if (c1 == 'i' && c2 == 'g' && p + 3 < len && s.at(p + 3) == 'n' && p + 4 < len && s.at(p + 4) == 'a' && p + 5 < len && s.at(p + 5) == 'l' && (p + 6 == len || (p + 6 < len && (isWhitespace(s, p + 6, len) || isSeparator(s, p + 6, len))))){ v = "Signal"; l = 5; bKeyword = true; goto identifier; }

if (c1 == 'h' && c2 == 'r' && (p + 3 == len || (p + 3 < len && (isWhitespace(s, p + 3, len) || isSeparator(s, p + 3, len))))){ v = "Shr"; l = 2; bKeyword = true; goto identifier; }

if (c1 == 'h' && c2 == 'l' && (p + 3 == len || (p + 3 < len && (isWhitespace(s, p + 3, len) || isSeparator(s, p + 3, len))))){ v = "Shl"; l = 2; bKeyword = true; goto identifier; }

if (c1 == 'e' && c2 == 't' && (p + 3 == len || (p + 3 < len && (isWhitespace(s, p + 3, len) || isSeparator(s, p + 3, len))))){ v = "Set"; l = 2; bKeyword = true; goto identifier; }

if (c1 == 'e' && c2 == 'l' && p + 3 < len && s.at(p + 3) == 'e' && p + 4 < len && s.at(p + 4) == 'c' && p + 5 < len && s.at(p + 5) == 't' && (p + 6 == len || (p + 6 < len && (isWhitespace(s, p + 6, len) || isSeparator(s, p + 6, len))))){ v = "Select"; l = 5; bKeyword = true; goto identifier; }

break;
case 'T':
if (c1 == 'y' && c2 == 'p' && p + 3 < len && s.at(p + 3) == 'e' && (p + 4 == len || (p + 4 < len && (isWhitespace(s, p + 4, len) || isSeparator(s, p + 4, len))))){ v = "Type"; l = 3; bKeyword = true; goto identifier; }

if (c1 == 'r' && c2 == 'u' && p + 3 < len && s.at(p + 3) == 'e' && (p + 4 == len || (p + 4 < len && (isWhitespace(s, p + 4, len) || isSeparator(s, p + 4, len))))){ v = "True"; l = 3; bKeyword = true; goto identifier; }

if (c1 == 'o' && (p + 2 == len || (p + 2 < len && (isWhitespace(s, p + 2, len) || isSeparator(s, p + 2, len))))){ v = "To"; l = 1; bKeyword = true; goto identifier; }

if (c1 == 'h' && c2 == 'e' && p + 3 < len && s.at(p + 3) == 'n' && (p + 4 == len || (p + 4 < len && (isWhitespace(s, p + 4, len) || isSeparator(s, p + 4, len))))){ v = "Then"; l = 3; bKeyword = true; goto identifier; }

break;
case 'U':
if (c1 == 'n' && c2 == 't' && p + 3 < len && s.at(p + 3) == 'i' && p + 4 < len && s.at(p + 4) == 'l' && (p + 5 == len || (p + 5 < len && (isWhitespace(s, p + 5, len) || isSeparator(s, p + 5, len))))){ v = "Until"; l = 4; bKeyword = true; goto identifier; }

if (c1 == 'B' && c2 == 'o' && p + 3 < len && s.at(p + 3) == 'u' && p + 4 < len && s.at(p + 4) == 'n' && p + 5 < len && s.at(p + 5) == 'd' && (p + 6 == len || (p + 6 < len && (isWhitespace(s, p + 6, len) || isSeparator(s, p + 6, len))))){ v = "UBound"; l = 5; bKeyword = true; goto identifier; }

break;
case 'W':
if (c1 == 'h' && c2 == 'i' && p + 3 < len && s.at(p + 3) == 'l' && p + 4 < len && s.at(p + 4) == 'e' && (p + 5 == len || (p + 5 < len && (isWhitespace(s, p + 5, len) || isSeparator(s, p + 5, len))))){ v = "While"; l = 4; bKeyword = true; goto identifier; }

break;
case 'X':
if (c1 == 'o' && c2 == 'r' && (p + 3 == len || (p + 3 < len && (isWhitespace(s, p + 3, len) || isSeparator(s, p + 3, len))))){ v = "Xor"; l = 2; bKeyword = true; goto identifier; }

break;
case 'u':
if (c1 == 'i' && c2 == 'C' && p + 3 < len && s.at(p + 3) == 'l' && p + 4 < len && s.at(p + 4) == 'a' && p + 5 < len && s.at(p + 5) == 's' && p + 6 < len && s.at(p + 6) == 's' && (p + 7 == len || (p + 7 < len && (isWhitespace(s, p + 7, len) || isSeparator(s, p + 7, len))))){ v = "uiClass"; l = 6; bKeyword = true; goto identifier; }

break;
}
}


if (!c0.isLetter()){
switch(c0.toAscii()){
case '!':
{ v = "!"; l = 0; goto identifier; }

break;
case '$':
{ v = "$"; l = 0; goto identifier; }

break;
case '&':
{ if (c1 != 'H' && !c2.isDigit() && !(c2 == 'A' || c2 == 'B' || c2 == 'C' || c2 == 'D' || c2 == 'E' || c2 == 'F' || c2 == 'a' || c2 == 'b' || c2 == 'c' || c2 == 'd' || c2 == 'e' || c2 == 'f')){ l = 0; v = "&"; goto identifier; } } 

break;
case '\'':
{ 
  nComment = p + 1; nComment2 = p; 
  while(nComment2 + 1 < len && s.at(nComment2) != '\n') nComment2++;  
  bComment = true; 
  if (s.at(nComment2) == '\n'){ 
    nComment2--; l = 1; 
  } else l = 1; 

  
  if (csh){
    csh->setMyFormat(nComment - 1, nComment2 - nComment + 2, csh->commentFormat); 
  }
  // ------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  goto identifier; } 

break;
case '(':
{ v = "("; l = 0; goto identifier; }

break;
case ')':
{ v = ")"; l = 0; goto identifier; }

break;
case '*':
if ((c1 == '*')){ v = "**"; l = 1; goto identifier; }

{ v = "*"; l = 0; goto identifier; }

break;
case '+':
{ if (!bNumberE || bNumberEDone){ if (!bIdentifier && !bNumberEDone && tokens.size() > 0 && (tokens.last() == "K^" || tokens.last() == "K\\" || tokens.last() == "KXor" || tokens.last() == "KShr" || tokens.last() == "KShl" || tokens.last() == "KOrElse" || tokens.last() == "KOr" || tokens.last() == "KMod" || tokens.last() == "KAndAlso" || tokens.last() == "KAnd" || tokens.last() == "K>=" || tokens.last() == "K>" || tokens.last() == "K===" || tokens.last() == "K==" || tokens.last() == "K=" || tokens.last() == "K=" || tokens.last() == "K<=" || tokens.last() == "K<" || tokens.last() == "K/" || tokens.last() == "K-" || tokens.last() == "K+" || tokens.last() == "K*" || tokens.last() == "K&")){ bNumber = true; nNumber = p; continue; } v = "+"; l = 0; goto identifier; } } 

break;
case ',':
{ v = ","; l = 0; goto identifier; }

break;
case '-':
{ if (!bNumberE || bNumberEDone){ if (!bIdentifier && !bNumberEDone && tokens.size() > 0 && (tokens.last() == "K^" || tokens.last() == "K\\" || tokens.last() == "KXor" || tokens.last() == "KShr" || tokens.last() == "KShl" || tokens.last() == "KOrElse" || tokens.last() == "KOr" || tokens.last() == "KMod" || tokens.last() == "KAndAlso" || tokens.last() == "KAnd" || tokens.last() == "K>=" || tokens.last() == "K>" || tokens.last() == "K===" || tokens.last() == "K==" || tokens.last() == "K=" || tokens.last() == "K=" || tokens.last() == "K<=" || tokens.last() == "K<" || tokens.last() == "K/" || tokens.last() == "K-" || tokens.last() == "K+" || tokens.last() == "K*" || tokens.last() == "K&")){ bNumber = true; nNumber = p; continue; } v = "-"; l = 0; goto identifier; } } 

break;

case ';':
{ v = ";"; l = 0; goto identifier; }

break;

case '.':
{ int pp = p; while(p + 1 < len && s.at(++p).isSpace()); if (s.at(p).isDigit() || s.at(p) == '+' || s.at(p) == '-'){ p = pp; } else { p = pp; l = 0; v = "."; goto identifier; } } //  v = "."; l = 0; goto identifier; }

break;
case '/':
{ v = "/"; l = 0; goto identifier; }

break;
case ':':
{ v = ":"; l = 0; goto identifier; }

break;
case '<':
if ((c1 == 's' && c2 == 't' && p + 3 < len && s.at(p + 3) == 'r' && p + 4 < len && s.at(p + 4) == 'i' && p + 5 < len && s.at(p + 5) == 'n' && p + 6 < len && s.at(p + 6) == 'g' && p + 7 < len && s.at(p + 7) == '>')){ bString22 = true; l = 7; goto identifier; }

if ((c1 == '>')){ v = "<>"; l = 1; goto identifier; }

if ((c1 == '=')){ v = "<="; l = 1; goto identifier; }

if ((c1 == '/' && c2 == 's' && p + 3 < len && s.at(p + 3) == 't' && p + 4 < len && s.at(p + 4) == 'r' && p + 5 < len && s.at(p + 5) == 'i' && p + 6 < len && s.at(p + 6) == 'n' && p + 7 < len && s.at(p + 7) == 'g' && p + 8 < len && s.at(p + 8) == '>')){ bString22 = true; l = 8; goto identifier; }

{
    QString sTestForTemplateType;
    if (nIdentifier >= 0){
     sTestForTemplateType = s.mid(nIdentifier, p - nIdentifier);
    }
    if (Parser_isTemplateType(sTestForTemplateType)){      

      QChar cq;
      if (!(++p < len && (s.at(p).isLetter() || s.at(p).isSpace()))){
        //Parser::Me.nLine = s.left(p).count("\n") + 1;
        //Parser::error("template data type error: " + s.mid(nString, p - nString));
        *bError = true;
        return QStringList();
      }
      while (++p < len){
        cq = s.at(p);
        if (cq == '>'){
          p++;
          break;
        }
        if (!cq.isLetterOrNumber() && !cq.isSpace()){
          //Parser::Me.nLine = s.left(p).count("\n") + 1;
          //Parser::error("template data type not closed (watch for < >): " + s.mid(nString, p - nString));
          *bError = true;
          return QStringList();
        }
        p++;
      }
      bIdentifier = true;
      { v = ""; l = 0; goto identifier; }
    }
  }
{ v = "<"; l = 0; goto identifier; }
  break;
case '=':
if ((c1 == '=' && c2 == '=')){ v = "==="; l = 2; goto identifier; }

if ((c1 == '=')){ v = "=="; l = 1; goto identifier; }

{ v = "="; l = 0; goto identifier; }

{ v = "="; l = 0; goto identifier; }

break;
case '>':
if ((c1 == '=')){ v = ">="; l = 1; goto identifier; }

{ v = ">"; l = 0; goto identifier; }

break;
case '[':
{ v = "["; l = 0; goto identifier; }

break;
case '\"':
{ bString11 = true; l = 0; goto identifier; }

break;
case '\n':
{

  if (bString1){ *bError = true; return QStringList(); }} //error("string literal not closed (watch for escape codes): " + s.mid(nString, p - nString)); nString = -1; return; } if (bIdentifier || bNumber){ bNewLine = true; l = 0; v = "\n"; goto identifier; } nCurrentLine++; tokens.append("K\n"); continue; } //l = 0; goto identifier; }

break;
case ']':
{ v = "]"; l = 0; goto identifier; }

break;
case '^':
{ v = "^"; l = 0; goto identifier; }

break;
case '_':
{ if (!bString1 && !bString2 && !bIdentifier){ int pp = p; while(p + 1 < len && isWhitespace(s, ++p, len)); if (s.at(p) == '\''){ while(p + 1 < len && s.at(++p) != '\n'); } if (s.at(p) == '\n'){ p++; nCurrentLine++; continue; } else { p = pp; } } } //  v = "_"; l = 0; goto identifier; }

break;
}
}


if (!bNumber){
if (!bIdentifier && c0.isLetter()){ bIdentifier = true; nIdentifier = p; continue; }
else if (bIdentifier && (c0 == '_' || c0.isLetter() || c0.isDigit())){ continue; }
else if (!bNumberPlusMinus1 && (c0 == '+' || c0 == '-')){ bNumber = true; bNumberPlusMinus1 = true; nNumber = p; continue; }
else if (bNumberDot && !bNumberPlusMinus2 && (c0 == '+' || c0 == '-')){ bNumber = true; bNumberPlusMinus2 = true; nNumber = p; continue; }
else if (c0 == '.'){ bNumber = true; bNumberDot = true; nNumber = p; continue; }
else if (!bNumberX && c0 == '&' && c1 == 'H'){ bNumber = true; bNumberX = true; nNumber = p; p++; continue; }
}
else if (bNumber){
if (c0 == 'D' || c0 == 'F' || c0 == 'd' || c0 == 'f'){ p++; goto identifier; }
else if (!bNumberX && (c0 == 'x' || c0 == 'X') && p - nNumber == 1 && s.at(p - 1) == '0'){ bNumberX = true; continue; }
else if (!bNumberDot && !bNumberX && c0 == '.'){ bNumberDot = true; continue; }
else if (!bNumberE && !bNumberX && (c0 == 'e' || c0 == 'E')){ bNumberE = true; continue; }
else if (bNumberE && (s.at(p - 1) == 'e' || s.at(p - 1) == 'E') && (c0 == '+' || c0 == '-')){ continue; }
else if (bNumberX && (c0 == 'A' || c0 == 'B' || c0 == 'C' || c0 == 'D' || c0 == 'E' || c0 == 'F' || c0 == 'a' || c0 == 'b' || c0 == 'c' || c0 == 'd' || c0 == 'e' || c0 == 'f')){ continue; }
}
if (c0.isDigit()){ if (!bNumber){ nNumber = p; bNumber = true; bNumberEDone = false; } if (bNumberE) bNumberEDone = true; continue; }
else { *bError = true; return QStringList();} // error("scanner error"); return; } 
continue;
identifier:
 if (bIdentifier){ 
   
   if (csh){
     if (tokens.size() > 0 && tokens.last() == "KAs"){ 
       csh->setMyFormat(nIdentifier, p -  nIdentifier, csh->typeFormat);  
     } else if (tokens.size() > 0 && tokens.last() == "KEvent"){ 
       csh->setMyFormat(nIdentifier, p -  nIdentifier, csh->eventFormat);  
     } else if (tokens.size() > 0 && tokens.last() == "KSignal"){ 
       QString text = s.mid(nIdentifier, p - nIdentifier);

       if (!text.startsWith("on_")){
         csh->setMyFormat(nIdentifier, p -  nIdentifier, csh->errorFormat);
       } else {
         csh->setMyFormat(nIdentifier, 3, csh->signalFormat);  

         int n = text.length();
         int n2 = text.lastIndexOf("_");
         if (n >= 0 && n2 >= 0){
            csh->setMyFormat(nIdentifier + 3, n - (nIdentifier + 3), csh->outletFormat); 
            csh->setMyFormat(nIdentifier + n2, nIdentifier + n - n2, csh->signalFormat);       
         }
       }

     } else {
       if (bDeclare){
         if (Q7B_CPPKeywords.contains(s.mid(nIdentifier, p - nIdentifier))){
           csh->setMyFormat(nIdentifier, p -  nIdentifier, csh->keywordFormat);
         } else {
           csh->setMyFormat(nIdentifier, p -  nIdentifier, csh->declareFormat);
         }
       } else {
         bool b = (tokens.size() > 0 && tokens.last() != "K." && tokens.last() != "K!" || tokens.size() == 0);
         if (b && Q7B_CPPKeywords.contains(s.mid(nIdentifier, p - nIdentifier))){ 
           csh->setMyFormat(nIdentifier, p -  nIdentifier, csh->errorFormat2);
         } else if (b && Q7B_KeywordsAndRest.contains(s.mid(nIdentifier, p - nIdentifier))){
           csh->setMyFormat(nIdentifier, p -  nIdentifier, csh->errorFormat2); 
         } else if (b && Q7B_Functions.contains(s.mid(nIdentifier, p - nIdentifier))){
           csh->setMyFormat(nIdentifier, p -  nIdentifier, csh->builtinFormat);
         } else {
           csh->setMyFormat(nIdentifier, p -  nIdentifier, csh->normalFormat);
         }
       }
     }
   }
   
   tokens.append("I" + s.mid(nIdentifier, p - nIdentifier)); 
   nIdentifier = -1; bIdentifier = false; }
 else if (bNumber){ 
   // ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
   if (csh){
     csh->setMyFormat(nNumber, p -  nNumber, csh->typeFormat); 
   }
   
   bNumber = false; bNumberPlusMinus1 = false; bNumberPlusMinus2 = false; bNumberX = false; bNumberDot = false; bNumberE = false; bNumberEDone = false; tokens.append("N" + s.mid(nNumber, p - nNumber)); nNumber = -1; }
 if (bComment){ bComment = false; tokens.append("C" + s.mid(nComment, nComment2 - nComment + l)); p = nComment2; nComment2 = -1; nComment = -1; l = 0; }
 else if (bString11){ 
   if (bString1){ 
   
   if (csh){
     csh->setMyFormat(nString - 1, p - nString + 2, csh->quotationFormat);
   }
   // ------------------------------------------------------------------------------------------------------------------------------------------------------------------------
   tokens.append("S" + s.mid(nString, p - nString)); nString = -1; } else { nString = p + 1; } bString1 = !bString1; bString11 = false; }
 else if (bString22){ if (bString2){ tokens.append("S" + s.mid(nString, p - nString)); nString = -1; nStringLine = -1; } else { nStringLine = nCurrentLine; nString = p + l + 1; } bString2 = !bString2; bString22 = false; }
 if (!v.isEmpty()){ 
   
   if (v == ")") nBraces--;
   if (csh){
     if (bDeclare && nDeclare > 1){
       csh->setMyFormat(nIdentifier, p -  nIdentifier, csh->declareFormat);
     } else {
       if (!bDeclare && v == "(" || v == ")"){
         if (nBraces == 0) csh->setMyFormat(p, l + 1, csh->specialFormat);    
         else if (nBraces == 1) csh->setMyFormat(p, l + 1, csh->specialFormat1);    
         else if (nBraces == 2) csh->setMyFormat(p, l + 1, csh->specialFormat2);    
         else csh->setMyFormat(p, l + 1, csh->specialFormat3);    
       }
       else if (v == "." || v == "!" || v == ":") csh->setMyFormat(p, l + 1, csh->specialFormat);    
       else if (((v == "Sub" || v == "Function" || v == "Event" || v == "Signal" || v == "Slot") && !(tokens.size() > 0 && tokens.last() == "KExit")) && s.at(0).isSpace()) csh->setMyFormat(p, l + 1, csh->errorFormat); 
       else if ((v == "Outlet" || v == "Type" || v == "Enum" || v == "Global" || v == "Public" || v == "Private") && s.at(0).isSpace()) csh->setMyFormat(p, l + 1, csh->errorFormat); 
       else if (v == "<string>" || v == "</string>") csh->setMyFormat(p, l + 1, csh->errorFormat); 
       else csh->setMyFormat(p, l + 1, bKeyword ? csh->keywordFormat : csh->separatorFormat); 
     }
   }
   if (bDeclare) nDeclare++;
   if (v == "Declare") bDeclare = true;
   if (v == "(") nBraces++;   
   
   tokens.append("K" + v); v = ""; bKeyword = false; }
 if (l > 0){ p += l; l = 0; } if (bNewLine){ bNewLine = false; nCurrentLine++; }
}
//if (bString2){ error(QString("</string> missing start from line %1").arg(nStringLine)); return; }
if (!v.isEmpty() || bIdentifier || bNumber) goto identifier; 

if (csh && nBraces != 0 && len > 0){ 
  int nIdent = 0;
  int y = 0;
  while(y < s.length() && s.at(y++).isSpace()) nIdent++;

  if (len - nIdent > 0) csh->setMyFormat(nIdent, len - nIdent, csh->errorFormat2); 
}

return tokens;

}


QString kbasicPath(QString)
{
  return "";
}

QString DefaultFontName()
{
    QString sFamily = Q7B_sFontName;//DefaultFontSize();//EXTERN_my_mainwindow->getPreference("FontSize").toInt();
if (sFamily.isEmpty()){
#ifdef Q_OS_WIN32
sFamily = "Courier New";
#elif defined Q_WS_MAC
sFamily = "Monaco";
#elif defined Q_WS_X11
sFamily = "Monospace";
#endif
  
}
return sFamily;
}

int DefaultFontSize()
{
    int nSize = Q7B_nFontSize;//EXTERN_my_mainwindow->getPreference("FontSize").toInt();
if (nSize == 0) nSize = 10;
#ifdef Q_OS_MAC
     nSize += 2;
#endif
  return nSize;
}




QSet<QString> Q7B_keyword_set;
QMap<QString, QString> Q7B_keyword;

//QMap<QString, QString> types;  // todo qtbasic types

//QMap<QString, QString> methods;  // todo qtbasic methods + builtins und user methods

//QMap<QString, QString> variables;  // todo user variables
// qtbasic_identifiers    user_identifiers

QSet<QString> Q7B_type_set;
QMap<QString, QString> Q7B_type;





CodeSyntaxHighlighter::CodeSyntaxHighlighter(QTextDocument *parent, Code *_me) : QSyntaxHighlighter(parent)
 {
   me = _me;

   if (Q7B_keywords.size() == 0){

    Q7B_keywords << "Alias" << "As" << "Break" << "ByRef" << "ByVal" << "Case" << "Class" << "Const" << "Continue" << "Declare" << "Dim" << "Var" << "Do" << "Else" << "End" << "Enum" << "Event" << "Exit" << "False" << "For" << "Form" << "Function" << "Global" << "GoTo" << "IIf" << "If" << "Is" << "Iterate" << "LBound" << "Loop" << "Me" << "Mid" << "Module" << "Next" << "Null" << "Outlet" << "Preserve" << "Private" << "Property" << "Public" << "ReDim" << "Return" << "Select" << "Set" << "Signal" << "Slot" << "Static" << "Step" << "Sub" << "Super" << "Then" << "To" << "True" << "Type" << "UBound" << "Until" << "While" << "uiClass";

    
    Q7B_keywords << "Flip" << "Not" << "Mod" << "Shl" << "Shr" << "And" << "Or" << "Xor" << "AndAlso" << "OrElse"; 
    
    Q7B_separators << ":" << "!" << "$" << "," << "." << "(" << ")" << "[" << "]" << "**" << "'" << "\\n" << "\\\"";
    Q7B_separators << "<" << ">" << "=" << "<=" << ">=" << "=" << "==" << "===" << "^" << "&" << "+" << "-" << "*" << "/";
    Q7B_separators << "_";
    Q7B_separators << "</string>" << "<string>";

    
    Q7B_operators << "<" << ">" << "=" << "<=" << ">=" << "=" << "==" << "===" << "^" << "&" << "+" << "-" << "*" << "/" << "\\\\" << "Mod" << "Shl" << "Shr" << "And" << "Or" << "Xor" << "AndAlso" << "OrElse"; 

    Q7B_whitespaces << " " << "\\r" << "\\t" << "\\v";

    Q7B_keywords.sort();
    Q7B_separators.sort();
    Q7B_whitespaces.sort();
    Q7B_operators.sort();

   }

     


     QString sFamily = DefaultFontName();//EXTERN_my_mainwindow->getPreference("FontName");
     int nSize = DefaultFontSize();//EXTERN_my_mainwindow->getPreference("FontSize").toInt();

//    QMessageBox::information(0, "sFamily", sFamily);
//     QMessageBox::information(0, "nSize", QString("%1").arg(nSize));
   
     declareFormat.setFontFamily(sFamily); 
     declareFormat.setFontPointSize(nSize);

     errorFormat2.setFontFamily(sFamily); 
     errorFormat2.setFontPointSize(nSize);
     errorFormat2.setFontUnderline(true); 
     errorFormat2.setUnderlineStyle(QTextCharFormat::WaveUnderline); 

     errorFormat.setFontFamily(sFamily); 
     errorFormat.setFontPointSize(nSize);

     
     normalFormat.setFontFamily(sFamily); 
     normalFormat.setFontPointSize(nSize);

     typeFormat.setFontFamily(sFamily); 
     typeFormat.setFontPointSize(nSize);

     builtinFormat.setFontFamily(sFamily); 
     builtinFormat.setFontPointSize(nSize);     

     keywordFormat.setFontFamily(sFamily); 
     keywordFormat.setFontPointSize(nSize);

     commentFormat.setFontFamily(sFamily); 
     commentFormat.setFontPointSize(nSize);

     quotationFormat.setFontFamily(sFamily); 
     quotationFormat.setFontPointSize(nSize);

     separatorFormat.setFontFamily(sFamily); 
     separatorFormat.setFontPointSize(nSize);

     signalFormat.setFontFamily(sFamily); 
     signalFormat.setFontPointSize(nSize);     

     QColor ccc;

     if (Q7B_bDefaultSyntaxHighlighting){

       declareFormat.setForeground(Qt::darkGray);

       errorFormat2.setForeground(Qt::red);

       errorFormat.setForeground(Qt::red);

       normalFormat.setForeground(Qt::black);

       typeFormat.setForeground(Qt::darkCyan);

       builtinFormat.setForeground(Qt::darkYellow);

       keywordFormat.setForeground(Qt::blue);

       commentFormat.setForeground(Qt::darkGreen);

       quotationFormat.setForeground(Qt::darkBlue);

       separatorFormat.setForeground(Qt::darkBlue);

       signalFormat.setForeground(Qt::darkGray);
       
       ccc = Qt::darkRed;
       static QColor c1 = QColor(194, 150, 264).darker();
       static QBrush b1 = c1;
       eventFormat.setForeground(Qt::darkMagenta); 

       static QColor c2 = QColor(61, 208, 244).darker(); 
       static QBrush b2 = c2;
       outletFormat.setForeground(b2);

       
       //static QBrush b3 = c3;
       specialFormat.setForeground(Qt::darkRed);

         //QMessageBox::information(0, "true", "");
     } else {


      // QMessageBox::information(0, "false", "");


       QColor background = Qt::white;

       for (int i = 0; i < Q7B_SyntaxHighlightingColors.size(); i++){
         QString k = Q7B_SyntaxHighlightingColors.at(i);
         QString sKey = k.left(k.indexOf(":"));
         QString sValue = k.mid(k.indexOf(":") + 1);
         QStringList ll = sValue.split(",");
         int red = ll.at(0).toInt();
         int green = ll.at(1).toInt();
         int blue = ll.at(2).toInt();

         if (sKey == "Normal"){
           normalFormat.setForeground(QColor(red, green, blue));
           Q7B_foreground = QColor(red, green, blue);
         }
         else if (sKey == "Keyword") keywordFormat.setForeground(QColor(red, green, blue));
         else if (sKey == "Current Line") Q7B_currentLineColor = (QColor(red, green, blue));
         else if (sKey == "Built-in") builtinFormat.setForeground(QColor(red, green, blue));
         else if (sKey == "Comment") commentFormat.setForeground(QColor(red, green, blue));
         else if (sKey == "Declare") declareFormat.setForeground(QColor(red, green, blue));
         //else if (sKey == "Selection") declareFormat.setForeground(QColor(red, green, blue));
         else if (sKey == "Error") errorFormat.setForeground(QColor(red, green, blue));
         else if (sKey == "Error2") errorFormat2.setForeground(QColor(red, green, blue));
         else if (sKey == "Normal") normalFormat.setForeground(QColor(red, green, blue));
         else if (sKey == "Type") typeFormat.setForeground(QColor(red, green, blue));
         else if (sKey == "Quotation") quotationFormat.setForeground(QColor(red, green, blue));
         else if (sKey == "Separator") separatorFormat.setForeground(QColor(red, green, blue));
         else if (sKey == "Signal") signalFormat.setForeground(QColor(red, green, blue));
         else if (sKey == "Event") eventFormat.setForeground(QColor(red, green, blue));
         else if (sKey == "Outlet") outletFormat.setForeground(QColor(red, green, blue));
         else if (sKey == "Special"){
           ccc = QColor(red, green, blue);
           specialFormat.setForeground(QColor(red, green, blue));
         }

         else if (sKey == "Background") background = QColor(red, green, blue);

       }

       Q7B_background = background;

       normalFormat.setBackground(background);
       keywordFormat.setBackground(background);
       
       builtinFormat.setBackground(background);
       commentFormat.setBackground(background);
       declareFormat.setBackground(background);
       errorFormat.setBackground(background);
       errorFormat2.setBackground(background);
       normalFormat.setBackground(background);
       typeFormat.setBackground(background);
       quotationFormat.setBackground(background);
       separatorFormat.setBackground(background);
       signalFormat.setBackground(background);
       eventFormat.setBackground(background);
       outletFormat.setBackground(background);
       specialFormat.setBackground(background);

       
       if (me){
          QPalette p = me->palette();
          p.setColor(QPalette::Active, QPalette::Base, Q7B_background);
          p.setColor(QPalette::Inactive, QPalette::Base, Q7B_background);
          me->setPalette(p);
       }
  


     }

     eventFormat.setFontFamily(sFamily); 
     eventFormat.setFontPointSize(nSize);

     outletFormat.setFontFamily(sFamily); 
     outletFormat.setFontPointSize(nSize);

     specialFormat.setFontFamily(sFamily); 
     specialFormat.setFontPointSize(nSize);

     static QColor cc1 = ccc.darker(); 
     static QBrush bb1 = cc1;
     specialFormat1.setForeground(bb1);
     specialFormat1.setFontFamily(sFamily); 
     specialFormat1.setFontPointSize(nSize);
     
     static QColor cc2 = ccc.darker().darker(); 
     static QBrush bb2 = cc2;
     specialFormat2.setForeground(bb2);
     specialFormat2.setFontFamily(sFamily); 
     specialFormat2.setFontPointSize(nSize);

     static QColor cc3 = ccc.darker().darker().darker(); 
     static QBrush bb3 = cc3;
     specialFormat3.setForeground(bb3);
     specialFormat3.setFontFamily(sFamily); 
     specialFormat3.setFontPointSize(nSize);


   

 }



void CodeSyntaxHighlighter::highlightBlock(const QString &s)
{



  bool bError = false;
  scan(s, this, &bError);
 


 }

 
CodeCompletion2::CodeCompletion2(QWidget *parent, Q7BCodeView *_cw) : QLabel (parent)
{
  cw = _cw;  
  
  setAutoFillBackground(true);
    setMargin(0);
    setIndent(4);    
 QPalette p = palette();
  
 p.setColor(QPalette::Base, QColor(0xFFFF9F));
  //p.setColor(QPalette::Button, QColor(0, 0, 0, 128));  
 setPalette(p);
 setFrameShape(QFrame::Box);

}

void CodeCompletion2::ShowUp(QString _sSignature)
{
  sSignature = _sSignature;
  setLabel("", 0, true);
  this->adjustSize();
  show();  
  setFocus();
}

void CodeCompletion2::setLabel(QString sLine, int nCursorPos, bool bStart)
{
 
  QString s = sSignature;
  int nStart = 0;
  int nEnd = 0;

  int nComma = 0;
  int nParamPos = 0;
  int h = 1;

  while (h > 0){
    h = sSignature.indexOf(",", h + 1);
    if (h > 0) nComma++;
  }  
  
  h = 1;

  while (h > 0){
    h = sLine.indexOf(",", h + 1);
    if (h > 0) nParamPos++;
  }

  if (nParamPos > nComma) nParamPos = nComma;

  if (nParamPos == 0){
    nStart = s.indexOf("(");
    nEnd = s.indexOf(",");
    if (nEnd == -1) nEnd = s.indexOf(")");   
  } else {
    nStart = s.indexOf("(");
    for (int i = 0; i < nParamPos; i++){
      int n = s.indexOf(",", nStart + 1);
      if (n == -1) n = s.indexOf(")");   
      nStart = n;      
    }
    nEnd = s.indexOf(",", nStart + 1);
    if (nEnd == -1) nEnd = s.indexOf(")", nStart);   
  }

  if (nCursorPos > 0){
    s.insert(nEnd, "</b></font>");
    s.insert(nStart + 1, "<font color=\"#111183\"><b>");
  }
  //s = s + "<br><i> <font color=\"blue\">" + sSignatureDesc + "</i></font>";
  setText(s + " ");
  adjustSize();
  show();
}


CodeCompletion1::CodeCompletion1(QWidget *parent, Q7BCodeView *_cw) : QListWidget (parent)
{
  cw = _cw;  
  
  //setFrameShape(QFrame::StyledPanel);


  connect(this, SIGNAL(itemActivated(QListWidgetItem *)), this, SLOT(this_itemActivated(QListWidgetItem *)));
  connect(this, SIGNAL(itemClicked(QListWidgetItem *)), this, SLOT(this_itemActivated(QListWidgetItem *)));

  setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);




}

void CodeCompletion1::this_itemActivated(QListWidgetItem *item)
{

  QString s = "";

  if (currentText().isEmpty()) return;

  s = currentText();    
  
  if (s.startsWith(sInputedText, Qt::CaseInsensitive) && !s.isEmpty()){
    cw->PerformInsertText(s.mid(sInputedText.length()));
  }
  cw->setFocus();
  hide();       
}

void CodeCompletion1::ShowUp(QStringList & _items)
{
  clear();
  sInputedText = "";  
  items = _items;
  addItems(items);
  setCurrentRow(0);
  
  
  show();  
  setFocus();
 // cw->setFocus();
 
 // setFocus();
 // cw->code->viewport()->update();
}

void CodeCompletion1::focusOutEvent(QFocusEvent *e)
{  
  QListWidget::focusOutEvent(e);
  cw->code->setFocus();
  hide();
}


void CodeCompletion1::keyPressEvent(QKeyEvent *e)
{

  int n  = e->key();

  if (n == Qt::Key_Return || n == Qt::Key_Enter){        

    QString s = currentText();
    if (s.startsWith(sInputedText, Qt::CaseInsensitive)){
      cw->PerformInsertText(s.mid(sInputedText.length()));
    }
    cw->setFocus();
    hide(); 

  } else if (n == Qt::Key_BraceLeft){    

    QString s = currentText();
    if (s.startsWith(sInputedText, Qt::CaseInsensitive)){
      cw->PerformInsertText(s.mid(sInputedText.length()));
    }
    cw->setFocus();
    hide(); 

  } else if (n == Qt::Key_Escape){
    cw->setFocus();
    hide(); 
  } else if (n == Qt::Key_Backspace){  
    int k = sInputedText.length() - 1;

    e->ignore();
    if (k == -1){      
      hide(); 
      cw->setFocus();
    } else {      
      sInputedText = sInputedText.left(k);

      QListWidgetItem *k = itemWithText(sInputedText);
      if (k == 0){
        clearSelection();
      } else {

        clear();
        foreach(QString s, items)
        {
          if (s.startsWith(sInputedText, Qt::CaseInsensitive)){
            addItem(s);
          }
        }
        QListWidgetItem *k = itemWithText(sInputedText);
        if (k == 0){
          hide(); 
          cw->setFocus();
        } else {
          setCurrentItem(k);
        }
        
      }

    }
  } else {
    cw->code->setCursorWidth(1); cw->code->setCursorWidth(2); 
    QString s = e->text();
    if (!s.isNull() && s.length() > 0){
      e->ignore();

      sInputedText.append(s);

      QListWidgetItem *k = itemWithText(sInputedText);
      if (k == 0){
        hide(); 
        cw->setFocus();
       
      } else {

        clear();
        foreach(QString s, items)
        {
          if (s.startsWith(sInputedText, Qt::CaseInsensitive)){
            addItem(s);
          }
        }
        QListWidgetItem *k = itemWithText(sInputedText);
        if (k == 0){
          hide(); 
          cw->setFocus();
        } else {
          setCurrentItem(k);
        }
        
      }
    } else {

      if (n == Qt::Key_Up && currentRow() == 0){}
      else if (n == Qt::Key_Down && currentRow() == count() - 1){}
      else { 

        QListWidget::keyPressEvent(e);
      }
    }
  }

}



Code::Code(Q7BCodeView *parent = 0) : QPlainTextEdit (parent)
{



  cw = parent;
  
  
  setCursorWidth(2);
  setFrameStyle(QFrame::NoFrame);
  setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
  
  document()->setDocumentMargin(18);

  connect(this, SIGNAL(textChanged(void)), cw, SLOT(code_textChanged(void)));

  connect(this, SIGNAL(cursorPositionChanged(void)), cw, SLOT(code_cursorPositionChanged(void)));
  
 // connect(this, SIGNAL(updateRequest(const QRect & , int )), this, SLOT(updateRequest(const QRect & , int )));
  
  connect(this, SIGNAL(blockCountChanged(int)), this, SLOT(this_blockCountChanged(int)));

  bUpdateForChangedText = false;

  codecompletion1 = new CodeCompletion1(viewport(), cw);
  codecompletion1->resize(100, 200);
  codecompletion1->setHidden(true);
  codecompletion1->setCursor(Qt::ArrowCursor);

  codecompletion2 = new CodeCompletion2(viewport(), cw);
  
  codecompletion2->resize(100, 20);
  codecompletion2->setHidden(true);
  codecompletion2->setCursor(Qt::ArrowCursor);

  


 
 // ee->showMaximized();



  if (Q7B_bShowLineNumbers) lineNumberArea = new LineNumberArea(this); else lineNumberArea = 0; 
   
  if (Q7B_bShowLineNumbers){
    connect(this, SIGNAL(blockCountChanged(int)), this, SLOT(updateLineNumberAreaWidth(int)));
    connect(this, SIGNAL(updateRequest(QRect,int)), this, SLOT(updateLineNumberArea(QRect,int)));
  
   

    updateLineNumberAreaWidth(0);

    }
   // highlightCurrentLine();

}


void Code::mousePressEvent(QMouseEvent* e)
{
  if (codecompletion1->isVisible()){
    codecompletion1->hide();
  }
  if (codecompletion2->isVisible()){
    codecompletion2->hide();
  }  
  QPlainTextEdit::mousePressEvent(e);
}

void Code::wheelEvent(QWheelEvent* e)
{
  if (codecompletion1->isVisible()){
    codecompletion1->hide();
  }
  if (codecompletion2->isVisible()){
    codecompletion2->hide();
  }  
  QPlainTextEdit::wheelEvent(e);
  viewport()->update();
}


void Code::this_blockCountChanged(int)
{
  bUpdateForChangedText = true;
  
}







void Code::paintEvent ( QPaintEvent * e )
{



    QPlainTextEdit::paintEvent(e);

     QPainter painter(viewport());
    
      QRect viewportRect = viewport()->rect();
      QPointF offset(contentOffset());
      QTextBlock block = firstVisibleBlock();
      QRectF r = blockBoundingRect(block).translated(offset);
      painter.translate(0, -(this->verticalScrollBar()->value() * (r.height()) - this->contentOffset().y()));
    

    
    

    {
      painter.setPen(Qt::darkRed);
      painter.setBrush(Qt::red);

     QTextBlock block = firstVisibleBlock();
     int blockNumber = block.blockNumber();
     int top = (int) blockBoundingGeometry(block).translated(contentOffset()).top();
     int bottom = top + (int) blockBoundingRect(block).height();

     while (block.isValid() ) {
       aBreakpoint *ud = (aBreakpoint*)block.userData();
       if (ud && ud->nBreakpointLine > 0 && block.isVisible() && bottom >= e->rect().top()) {
             painter.drawEllipse(2, r.height() * (blockNumber - 1) + 2 , 11, r.height() - 6);    
         }

         block = block.next();
         top = bottom;
         bottom = top + (int) blockBoundingRect(block).height();
         ++blockNumber;
     }
    }

    if (cw->nCurrentDebugPosition != 0){
      painter.setPen(Qt::darkRed);
      painter.setBrush(Qt::yellow);
      painter.drawEllipse(2, r.height() * (cw->nCurrentDebugPosition - 1) + 2 , 11, r.height() - 6);    
    }



    if (Q7B_bShowLineSeparators){
      QTextCursor cc = textCursor();
      int nBlockNumber = cc.blockNumber();

      
      int u = r.height() / 2;
                  
      painter.setPen(Q7B_bDefaultSyntaxHighlighting ? Qt::lightGray : Q7B_foreground.darker(150));
      
      for (int i = 0; i < cw->browser->count(); i++){
        QVariant v = cw->browser->itemData(i);
        qint64 n = v.toLongLong();
        int l = n / 1000000;
        int m = n % 1000000;
        //int c = n % 1000;


        if (l && n > 0 && m > 0){
          if (bUpdateForChangedText == false || m < nBlockNumber){ 
            int y = r.height() * (m) - u;
            painter.drawLine(0, y, viewportRect.width(), y);
            
          }
  
        }
      }    
    }


   
}


void Code::move_codecompletion(QWidget *w)
{
  QPointF offset(contentOffset());
  QTextBlock block = firstVisibleBlock();
  QRectF r = blockBoundingRect(block).translated(offset);

  QTextCursor c = textCursor();
  int n = c.blockNumber() - block.blockNumber() + 1;

  int a = c.columnNumber();
  int b = QFontMetrics(currentCharFormat().font()).averageCharWidth();

  int x = a * b + offset.x() + document()->documentMargin();        
  int y = r.y() + r.height() * n;
  if (w == codecompletion2 || y + w->height() > viewport()->height()){
    y -= w->height() + r.height() + 1;
  }

  w->move(x, y);
}

void Code::focusInEvent(QFocusEvent* e)
{
  QPlainTextEdit::focusInEvent(e);
  cw->UndoRedoCut();
}

void Code::keyPressEvent(QKeyEvent* e)
{
  int n = e->key();

  if (n == Qt::Key_Return || n == Qt::Key_Enter){   
    QTextCursor f = textCursor();
    int nColumn = f.columnNumber();
    f.select(QTextCursor::LineUnderCursor);         

    QString r = f.selectedText();   
    if (!r.isEmpty() && nColumn == r.length()){
      QString k = cw->beautify(r);
      if (r != k){   
        f.beginEditBlock();
        f.insertText(k);
        setTextCursor(f);  
        f.endEditBlock();
      }
    }

  } else if (n == Qt::Key_Backtab){

    cw->PerformUnindent();
    return;
    
  } else if (n == Qt::Key_Tab){

    cw->PerformIndent();
    return;
  }

  bool bStart_codecompletion2 = false;
  QPlainTextEdit ::keyPressEvent(e);
  bool bAppend = false;

  if (!e->text().isNull()){
    QString s = e->text();
    if (false && s.compare(".") == 0){     

      

      move_codecompletion(codecompletion1);
       QStringList l;  //l << "left" <<  "right" << "mid";

       cw->emit_GetCompletion("");
       
       l = cw->lCompletion1;

       if (l.count()){
         codecompletion1->ShowUp(l);
       }
      

    } else if (s.compare("(") == 0){

      QString s = "";//"Sub testit(param1 As Integer, gut As String)";
      sLineBeforeInput = cw->getCurrentCompletionTrigger();
      nStartTrigger = textCursor().columnNumber();

      sLineBeforeInput = sLineBeforeInput.left(sLineBeforeInput.length() - 1); 
      if (sLineBeforeInput.endsWith("$")){
        sLineBeforeInput = sLineBeforeInput.left(sLineBeforeInput.length() - 1); 
      }

      //QMessageBox::information(this, "sLineBeforeInput", sLineBeforeInput);

      move_codecompletion(codecompletion2);

      cw->emit_GetCompletion2(sLineBeforeInput);

      s = cw->sCompletion2;

      if (!s.isEmpty())
      {
        codecompletion2->ShowUp(s);
        bStart_codecompletion2 = true;
      }

    } else if (codecompletion2->isVisible() && s.compare(")") == 0){

      
      QString s = cw->getCurrentLineAsString();
      int nStartTrigger2 = textCursor().columnNumber() - 1;

      s = s.mid(nStartTrigger, nStartTrigger2 - nStartTrigger);
      
      //s += ")";

      int nLeft = 0;
      int nRight = 0;
      int h = -1;

      do {
        h = s.indexOf("(", h + 1);
        if (h >= 0) nLeft++;
      } while (h >= 0);  
          
      h = -1;

      do {
        h = s.indexOf(")", h + 1);
        if (h >= 0) nRight++;
      } while (h >= 0);  
      

      if (nLeft == nRight && codecompletion2->isVisible()){
        cw->setFocus();
        codecompletion2->hide();
        sLineBeforeInput = "";
      }

    } else {
      QString s = cw->getCurrentLineAsString();
      int nIndex = cw->getCurrentColumn();
      s = s.left(nIndex);
      if (s.endsWith(" As ", Qt::CaseInsensitive) || (nIndex - 4 == 0 && s.endsWith("As ", Qt::CaseInsensitive))){                  
 
         move_codecompletion(codecompletion1);

       
         
         //codecompletion1->Shadow->show();

         QStringList l; //l << "Integer" << "Boolean" << "String" << "Abs" << "Access" << "Acs" << "AddDays" << "AddHandler" << "AddHours" << "AddMinutes" << "AddMonths" << "AddSeconds" << "AddYears" << "AppActiviate" << "Append" << "Array" << "Asc" << "Asn" << "Atn" << "Beep" << "Bin" << "Bin$" << "Binary (Builtin)" << "BLOAD" << "BSAVE" << "CBCD" << "CBool" << "CByte" << "CChar" << "CCur" << "CDate" << "CDbl" << "CDec" << "CEXT" << "CFIX" << "ChDir" << "ChDrive" << "Chr" << "Chr$" << "CInt" << "Circle" << "Class" << "Clear" << "CLng" << "Close" << "CLS" << "CObj" << "Color" << "Command" << "Command$" << "Compare" << "Contains" << "Count" << "Cos" << "CQUD" << "CreateObject" << "CShort" << "CSng" << "CsrLin" << "CType" << "CurDir" << "CurDir$" << "CVD" << "CVDMBF" << "CVERR" << "CVI" << "CVL" << "CVS" << "CVSMBF" << "Date" << "Date$" << "DateAdd" << "DateDiff" << "DatePart" << "DateSerial" << "DateValue" << "Day" << "DayName" << "DayOfWeek" << "DayOfYear" << "DaysInMonth" << "DaysInYear" << "DDB" << "Debug" << "Deg" << "DeleteSetting" << "Decode" << "DiffDay" << "DiffSeconds" << "Dir" << "Dir$" << "DoEvents" << "DOF" << "Draw" << "Encode" << "EndsWith" << "Environ" << "Environ$" << "EOF" << "ErDev" << "ErDev$" << "Erl" << "Err" << "Error" << "Error$" << "Exp" << "Fact" << "Field" << "FileAttr" << "FileCopy" << "FileDateTime" << "FileLen" << "File" << "Files" << "Fill" << "Filter" << "Fix" << "FN" << "Format" << "Format$" << "FormatCurrency" << "FormatDateTime" << "FormatNumber" << "FormatPercent" << "Frac" << "FRE" << "FreeFile" << "Function" << "FV" << "Get" << "GetAllSettings" << "GetAttr" << "GetAutoServerSettings" << "GetObject" << "GetSetting" << "GetType" << "Hex" << "Hex$" << "Hour" << "Hypot" << "IMEStatus" << "IndexOf" << "Inkey" << "Inkey$" << "Inp" << "Input" << "Input$" << "InputBox" << "Insert" << "InStr" << "InStRev" << "Int" << "IOCtl" << "IOCtl$" << "IPMT" << "IRR" << "IsArray" << "IsBoolean" << "IsByte" << "IsCharacter" << "IsCollection" << "IsCString" << "IsCurrency" << "IsDate" << "IsDateValid" << "IsDateTimeValid" << "IsDouble" << "IsEmpty" << "IsError" << "IsInteger" << "IsMissing" << "IsLinux" << "IsMac" << "IsNull" << "IsNumeric" << "IsObject" << "IsShort" << "IsSingle" << "IsLeapYear" << "IsLong" << "IsString" << "IsTimeValid" << "IsVariant" << "IsWindows" << "Join" << "KBasicDir" << "Kill" << "LastIndexOf" << "LCase" << "LCase$" << "Left" << "Left$" << "LeftJustified" << "Len" << "Length" << "Line (Debug)" << "Ln" << "Load" << "LoadPicture" << "LoadResData" << "LoadResPicture" << "LoadResString" << "Loc" << "Locate" << "Lock" << "LOF" << "Log" << "Logb" << "Lower" << "LPos" << "LPrint" << "LTrim" << "LTrim$" << "Max" << "Mid (Builtin)" << "Mid$ (Builtin)" << "Min" << "Minute" << "MIRR" << "MKD$" << "MkDir" << "MKDMBF$" << "MKI$" << "#MKL$" << "MKS" << "MKS$" << "MKSMBF$, Module" << "Month" << "MonthName" << "MsgBox" << "MTIMER" << "Name" << "Now" << "NPER" << "NPV" << "Nz" << "Oct" << "Oct$" << "Open" << "Out" << "Output" << "Paint" << "Palette" << "Partition" << "PCopy" << "Peek" << "PMAP" << "PMT" << "Point" << "Poke" << "Pos" << "PPMT" << "Prepend" << "Preset" << "Print" << "PrintScreen" << "PSet" << "Put" << "PV" << "QBCOLOR" << "Rad" << "Raise" << "RaiseEvent" << "RaiseSignal" << "Random" << "Randomize" << "Rate" << "ReadBinary" << "Remove" << "RemoveHandler" << "Replace" << "Return" << "Reset" << "Reversed" << "RGB" << "Right" << "Right$" << "RightJustified" << "RmDir" << "RND" << "Round" << "RTrim" << "RTrim$" << "SavePicture" << "SaveSetting" << "Screen" << "Sec" << "Second" << "Section" << "Seek" << "SeekBinary" << "Seg" << "SendKeys" << "SetAttr" << "Sgn" << "Shell" << "Simplified" << "Sin" << "Size" << "Sleep" << "Sln" << "Sound" << "Space" << "Space$" << "Spc" << "Split" << "Sqr" << "Stick" << "StartsWith" << "Str" << "Str$" << "StrComp" << "StrConv" << "String" << "String$" << "StrReverse" << "Sub" << "SubDays" << "SubHours" << "SubMinutes" << "SubMonths" << "SubSeconds" << "SubYears" << "SYD" << "Tab" << "Tan" << "Time" << "Time$" << "TimeSerial" << "TimeValue" << "Trim" << "Trim$" << "Trimmed" << "Truncate" << "Type" << "TypeName" << "UCase" << "UCase$" << "Unicode" << "UnLoad" << "UnLock" << "Upper" << "Using" << "Utf8" << "Utf16" << "Val" << "Value" << "VarType" << "View" << "Weekday" << "WeekdayName" << "WeekNumber" << "Width" << "Window" << "Write" << "WriteBinary" << "Year";
         l << Q7B_type_set.values();

         codecompletion1->ShowUp(l);
         
      }
      
    }
  }


  
  if (n == Qt::Key_Return || n == Qt::Key_Enter){   
    insertCorrectIdentForLine(bAppend);
  } else if (n == Qt::Key_Escape){   
    if (codecompletion2->isVisible()){
      setFocus();
      codecompletion2->hide();
    } else {



    }
  }

  if (codecompletion2->isVisible()){
    QString s = cw->getCurrentLineAsString();
    int nIndex = cw->getCurrentColumn();

    if (s.length() < sLineBeforeInput.length()){
      setFocus();
      codecompletion2->hide();
    } else {
      if (nIndex > 1) codecompletion2->setLabel(s, nIndex, false);
      cw->code->setCursorWidth(1); cw->code->setCursorWidth(2); 
    }
  }

  
  
}


void Code::insertCorrectIdentForLine(bool bAppend)
{  


  int x;
  QString d = cw->getBeforeCurrentLineAsString();  
  QString e = d.trimmed();

  for (x = 0; x < d.length(); x++){
    if (d.at(x) != ' ') break;
  }

  if (
    e.startsWith("IF ", Qt::CaseInsensitive) || e.startsWith("IF(", Qt::CaseInsensitive)
    || e.startsWith("SELECT ", Qt::CaseInsensitive) || e.startsWith("SELECT(", Qt::CaseInsensitive)
    || e.startsWith("WHILE ", Qt::CaseInsensitive) || e.startsWith("WHILE(", Qt::CaseInsensitive)
    || e.startsWith("DO ", Qt::CaseInsensitive) || e.startsWith("DO(", Qt::CaseInsensitive)
    || e.startsWith("FOR ", Qt::CaseInsensitive) || e.startsWith("FOR(", Qt::CaseInsensitive)
    || (e.startsWith("ELSE", Qt::CaseInsensitive) && e.length() == 4)
    || (e.startsWith("ELSEIF", Qt::CaseInsensitive) && e.length() == 6)
    || (e.startsWith("ELSE IF", Qt::CaseInsensitive) && e.length() == 7)
//    || e.startsWith("ELSE ", Qt::CaseInsensitive) || e.startsWith("ELSE(", Qt::CaseInsensitive)
    //|| e.startsWith("ELSEIF ", Qt::CaseInsensitive) || e.startsWith("ELSEIF(", Qt::CaseInsensitive)

    //|| e.startsWith("PUBLIC EVENT ", Qt::CaseInsensitive)
    //|| e.startsWith("PRIVATE EVENT ", Qt::CaseInsensitive)
    || e.startsWith("EVENT ", Qt::CaseInsensitive)

    || e.startsWith("CASE ", Qt::CaseInsensitive)
    || e.startsWith("CASE(", Qt::CaseInsensitive)
    //|| e.startsWith("STATIC SUB ", Qt::CaseInsensitive)
    || e.startsWith("PUBLIC SUB ", Qt::CaseInsensitive)
    //|| e.startsWith("PROTECTED SUB ", Qt::CaseInsensitive)
    || e.startsWith("PRIVATE SUB ", Qt::CaseInsensitive)
    || e.startsWith("GLOBAL SUB ", Qt::CaseInsensitive)
    || e.startsWith("PROPERTY SUB ", Qt::CaseInsensitive)
    || e.startsWith("PUBLIC PROPERTY SUB ", Qt::CaseInsensitive)
    || e.startsWith("PRIVATE PROPERTY SUB ", Qt::CaseInsensitive)
    //|| e.startsWith("STATIC PUBLIC SUB ", Qt::CaseInsensitive)
    //|| e.startsWith("STATIC PROTECTED SUB ", Qt::CaseInsensitive)
    //|| e.startsWith("STATIC PRIVATE SUB ", Qt::CaseInsensitive)
    //|| e.startsWith("STATIC PUBLIC SUB ", Qt::CaseInsensitive)
    //|| e.startsWith("STATIC PROTECTED SUB ", Qt::CaseInsensitive)
    //|| e.startsWith("STATIC PRIVATE SUB ", Qt::CaseInsensitive)
    || e.startsWith("SUB ", Qt::CaseInsensitive)
    //|| e.startsWith("STATIC FUNCTION ", Qt::CaseInsensitive)
    || e.startsWith("PUBLIC FUNCTION ", Qt::CaseInsensitive)
    //|| e.startsWith("PROTECTED FUNCTION ", Qt::CaseInsensitive)
    || e.startsWith("PRIVATE FUNCTION ", Qt::CaseInsensitive)
    || e.startsWith("GLOBAL FUNCTION ", Qt::CaseInsensitive)
    || e.startsWith("PROPERTY FUNCTION ", Qt::CaseInsensitive)
    || e.startsWith("PUBLIC PROPERTY FUNCTION ", Qt::CaseInsensitive)
    || e.startsWith("PRIVATE PROPERTY FUNCTION ", Qt::CaseInsensitive)
    //|| e.startsWith("PUBLIC STATIC FUNCTION ", Qt::CaseInsensitive)
    //|| e.startsWith("PROTECTED STATIC FUNCTION ", Qt::CaseInsensitive)
    //|| e.startsWith("PRIVATE STATIC FUNCTION ", Qt::CaseInsensitive)
    //|| e.startsWith("STATIC PUBLIC FUNCTION ", Qt::CaseInsensitive)
    //|| e.startsWith("STATIC PROTECTED FUNCTION ", Qt::CaseInsensitive)
    //|| e.startsWith("STATIC PRIVATE FUNCTION ", Qt::CaseInsensitive)
    || e.startsWith("FUNCTION ", Qt::CaseInsensitive)
    //|| e.startsWith("PUBLIC SIGNAL ", Qt::CaseInsensitive)
    //|| e.startsWith("PROTECTED SIGNAL ", Qt::CaseInsensitive)
    //|| e.startsWith("PRIVATE SIGNAL ", Qt::CaseInsensitive)
    || e.startsWith("SIGNAL ", Qt::CaseInsensitive)
    //|| e.startsWith("PUBLIC SLOT ", Qt::CaseInsensitive)
    //|| e.startsWith("PROTECTED SLOT ", Qt::CaseInsensitive)
    //|| e.startsWith("PRIVATE SLOT ", Qt::CaseInsensitive)
    || e.startsWith("SLOT ", Qt::CaseInsensitive)
    || e.startsWith("PUBLIC ENUM ", Qt::CaseInsensitive)
    || e.startsWith("PRIVATE ENUM ", Qt::CaseInsensitive)
    || e.startsWith("ENUM ", Qt::CaseInsensitive)
    || e.startsWith("PUBLIC TYPE ", Qt::CaseInsensitive)
    || e.startsWith("PRIVATE TYPE ", Qt::CaseInsensitive)
    || e.startsWith("TYPE ", Qt::CaseInsensitive)
    
    //|| e.startsWith("PUBLIC TYPE ", Qt::CaseInsensitive)
    //|| e.startsWith("PROTECTED TYPE ", Qt::CaseInsensitive)
    //|| e.startsWith("PRIVATE TYPE ", Qt::CaseInsensitive)
    //|| e.startsWith("TYPE ", Qt::CaseInsensitive)
    //|| e.startsWith("PUBLIC STRUCTURE ", Qt::CaseInsensitive)
    //|| e.startsWith("PROTECTED STRUCTURE ", Qt::CaseInsensitive)
    //|| e.startsWith("PRIVATE STRUCTURE ", Qt::CaseInsensitive)
    //|| e.startsWith("STRUCTURE ", Qt::CaseInsensitive)
    //|| e.startsWith("PUBLIC ENUM ", Qt::CaseInsensitive)
    //|| e.startsWith("PROTECTED ENUM ", Qt::CaseInsensitive)
    //|| e.startsWith("PRIVATE ENUM ", Qt::CaseInsensitive)
    //|| e.startsWith("ENUM ", Qt::CaseInsensitive)
    //|| e.startsWith("TRY ", Qt::CaseInsensitive)
    //|| e.startsWith("CATCH ", Qt::CaseInsensitive)
    //|| e.startsWith("CATCH(", Qt::CaseInsensitive)
    //|| e.startsWith("PUBLIC CLASS ", Qt::CaseInsensitive)
    //|| e.startsWith("PROTECTED CLASS ", Qt::CaseInsensitive)
    //|| e.startsWith("PRIVATE CLASS ", Qt::CaseInsensitive)
    //|| e.startsWith("CLASS ", Qt::CaseInsensitive)
    //|| e.startsWith("PUBLIC CONSTRUCTOR ", Qt::CaseInsensitive)
    //|| e.startsWith("PROTECTED CONSTRUCTOR ", Qt::CaseInsensitive)
    //|| e.startsWith("PRIVATE CONSTRUCTOR ", Qt::CaseInsensitive)
    //|| e.startsWith("CONSTRUCTOR ", Qt::CaseInsensitive)
    //|| e.startsWith("PUBLIC DESTRUCTOR ", Qt::CaseInsensitive)
    //|| e.startsWith("PROTECTED DESTRUCTOR ", Qt::CaseInsensitive)
    //|| e.startsWith("PRIVATE DESTRUCTOR ", Qt::CaseInsensitive)
    //|| e.startsWith("DESTRUCTOR ", Qt::CaseInsensitive)
    //|| e.startsWith("PUBLIC PROPERTY ", Qt::CaseInsensitive)
    //|| e.startsWith("PROTECTED PROPERTY ", Qt::CaseInsensitive)
    //|| e.startsWith("PRIVATE PROPERTY ", Qt::CaseInsensitive)
    //|| e.startsWith("PROPERTY ", Qt::CaseInsensitive)
    //|| e.startsWith("SET ", Qt::CaseInsensitive)
    //|| e.startsWith("SET(", Qt::CaseInsensitive)
    //|| e.startsWith("GET ", Qt::CaseInsensitive)
    //|| e.startsWith("DEF ", Qt::CaseInsensitive)
    //|| e.startsWith("WITH ", Qt::CaseInsensitive)
    || e.startsWith("WHILE ", Qt::CaseInsensitive)
    //|| e.startsWith("PUBLIC MODULE ", Qt::CaseInsensitive)
    //|| e.startsWith("PROTECTED MODULE ", Qt::CaseInsensitive)
    //|| e.startsWith("PRIVATE MODULE ", Qt::CaseInsensitive)
    //|| e.startsWith("MODULE ", Qt::CaseInsensitive)
    //|| e.startsWith("STATIC ", Qt::CaseInsensitive)
    //|| e.startsWith("PUBLIC INTERFACE ", Qt::CaseInsensitive)
    //|| e.startsWith("PROTECTED INTERFACE ", Qt::CaseInsensitive)
    //|| e.startsWith("PRIVATE INTERFACE ", Qt::CaseInsensitive)
    //|| e.startsWith("INTERFACE ", Qt::CaseInsensitive)

  ){
    d = d.left(x);

    if (e.startsWith("IF ", Qt::CaseInsensitive) || e.startsWith("IF(", Qt::CaseInsensitive)){
      int m = e.indexOf("THEN", 0, Qt::CaseInsensitive);
      static QString u; u = e.mid(m + 4);
      u = u.trimmed();
      if (u.length() == 0){
        d += "  ";
        if (bAppend){
          d += "\n";
          d += d.left(d.length() - 3);
          d += "End If";
        }
      }
      
    } else if (e.startsWith("SELECT ", Qt::CaseInsensitive) || e.startsWith("SELECT(", Qt::CaseInsensitive)){
      d += "  ";
      if (bAppend){
        d += "\n";
        d += d.left(d.length() - 3);
        d += "End Select";
      }
    } else if (e.startsWith("CASE ", Qt::CaseInsensitive) || e.startsWith("CASE(", Qt::CaseInsensitive)){
      d += "  ";
      if (bAppend){
        d += "\n";
        d += d.left(d.length() - 3);
      }    
    } else if (e.startsWith("FOR ", Qt::CaseInsensitive) || e.startsWith("FOR(", Qt::CaseInsensitive)){
      d += "  ";
      if (bAppend){
        d += "\n";
        d += d.left(d.length() - 3);
        d += "Next";
      }    
    } else if (
      //e.startsWith("STATIC SUB ", Qt::CaseInsensitive)
     
      e.startsWith("PUBLIC SUB ", Qt::CaseInsensitive)
      //|| e.startsWith("PROTECTED SUB ", Qt::CaseInsensitive)
      || e.startsWith("PRIVATE SUB ", Qt::CaseInsensitive)
      || e.startsWith("GLOBAL SUB ", Qt::CaseInsensitive)
      //|| e.startsWith("STATIC PUBLIC SUB ", Qt::CaseInsensitive)
      //|| e.startsWith("STATIC PROTECTED SUB ", Qt::CaseInsensitive)
      //|| e.startsWith("STATIC PRIVATE SUB ", Qt::CaseInsensitive)
      //|| e.startsWith("STATIC PUBLIC SUB ", Qt::CaseInsensitive)
      //|| e.startsWith("STATIC PROTECTED SUB ", Qt::CaseInsensitive)
      //|| e.startsWith("STATIC PRIVATE SUB ", Qt::CaseInsensitive)
      || e.startsWith("SUB ", Qt::CaseInsensitive)

      ){
      d += "  ";
      if (bAppend){
        d += "\n";
        d += d.left(d.length() - 3);
        d += "End Sub";
      }    
    } else if (
   //   e.startsWith("PUBLIC EVENT ", Qt::CaseInsensitive)
   //   || e.startsWith("PRIVATE EVENT ", Qt::CaseInsensitive)
       e.startsWith("EVENT ", Qt::CaseInsensitive)

      ){
      d += "  ";
      if (bAppend){
        d += "\n";
        d += d.left(d.length() - 3);
        d += "End Event";
      }   
    } else if (
      //e.startsWith("STATIC FUNCTION ", Qt::CaseInsensitive)
      
      e.startsWith("PUBLIC FUNCTION ", Qt::CaseInsensitive)
      //|| e.startsWith("PROTECTED FUNCTION ", Qt::CaseInsensitive)
      || e.startsWith("PRIVATE FUNCTION ", Qt::CaseInsensitive)
      || e.startsWith("GLOBAL FUNCTION ", Qt::CaseInsensitive)
      //|| e.startsWith("PUBLIC STATIC FUNCTION ", Qt::CaseInsensitive)
      //|| e.startsWith("PROTECTED STATIC FUNCTION ", Qt::CaseInsensitive)
      //|| e.startsWith("PRIVATE STATIC FUNCTION ", Qt::CaseInsensitive)
      //|| e.startsWith("STATIC PUBLIC FUNCTION ", Qt::CaseInsensitive)
      //|| e.startsWith("STATIC PROTECTED FUNCTION ", Qt::CaseInsensitive)
      //|| e.startsWith("STATIC PRIVATE FUNCTION ", Qt::CaseInsensitive)
      || e.startsWith("FUNCTION ", Qt::CaseInsensitive)
      ){
      d += "  ";
      if (bAppend){
        d += "\n";
        d += d.left(d.length() - 3);
        d += "End Function";
      }   
      
    } else {
      d += "  ";
    }

  } else {
    d = d.left(x);
  }
  
  QTextCursor f = textCursor();

  f.clearSelection();
  f.insertText(d);
  if (d.trimmed().length()){
    f.movePosition(QTextCursor::Up);
  }
  setTextCursor(f);  
}


Q7BCodeView::Q7BCodeView(QWidget *parent) : QFrame(parent)
{
  

  
  Q7B_sFontName = "";
  Q7B_nFontSize = 0;

  
  Q7B_bShowLineNumbers = true;
  Q7B_bShowLineSeparators = true;
  Q7B_bDefaultSyntaxHighlighting = true;


  setAttribute(Qt::WA_DeleteOnClose);
  //setWindowIcon(kbasicIcon(kbasicPath("ide/PROJECT_NEW_CLASS.png")));


  commands = 0;
//  controls = 0;
 
  info = 0;

  
  code_cursorPositionChanged_nLine = -1;
  code_cursorPositionChanged_lock = false;

  browser = new QComboBox(this); 
  connect(browser, SIGNAL(activated(int)), this, SLOT(browser_activated(int)));
  browser->setMaxVisibleItems(12);

  cbSub = new QToolButton(this); cbSub->setText("Sub"); cbSub->setMinimumWidth(80);
  cbSub->setPopupMode(QToolButton::InstantPopup);
  cbFunction = new QToolButton(this); cbFunction->setText("Function"); cbFunction->setMinimumWidth(80);
  cbFunction->setPopupMode(QToolButton::InstantPopup);
  cbOutlet = new QToolButton(this); cbOutlet->setText("Outlet"); cbOutlet->setMinimumWidth(80);
  cbOutlet->setPopupMode(QToolButton::InstantPopup);
  cbDim = new QToolButton(this); cbDim->setText("Dim"); cbDim->setMinimumWidth(80);
  cbDim->setPopupMode(QToolButton::InstantPopup);
  cbVar = new QToolButton(this); cbVar->setText("Var"); cbVar->setMinimumWidth(80);
  cbVar->setPopupMode(QToolButton::InstantPopup);
  cbConst = new QToolButton(this); cbConst->setText("Const"); cbConst->setMinimumWidth(80);
  cbConst->setPopupMode(QToolButton::InstantPopup);
  cbEvent = new QToolButton(this); cbEvent->setText("Event"); cbEvent->setMinimumWidth(80);
  cbEvent->setPopupMode(QToolButton::InstantPopup);
  cbSignal = new QToolButton(this); cbSignal->setText("Signal"); cbSignal->setMinimumWidth(80);
  cbSignal->setPopupMode(QToolButton::InstantPopup);
  cbSlot = new QToolButton(this); cbSlot->setText("Slot"); cbSlot->setMinimumWidth(80);
  cbSlot->setPopupMode(QToolButton::InstantPopup);
  cbSlot->setHidden(true);
  cbEnum = new QToolButton(this); cbEnum->setText("Enum"); cbEnum->setMinimumWidth(80);
  cbEnum->setPopupMode(QToolButton::InstantPopup);
  cbType = new QToolButton(this); cbType->setText("Type"); cbType->setMinimumWidth(80);
  cbType->setPopupMode(QToolButton::InstantPopup);

//  cbDocu = new QToolButton(this); cbDocu->setText("Docu"); cbDocu->setMinimumWidth(80);

//  connect(cbDocu, SIGNAL(clicked(bool)), this, SLOT(cbDocu_clicked(bool)));


  mSub = new QMenu(this); connect(mSub, SIGNAL(triggered(QAction *)), this, SLOT(triggered(QAction *)));
  mFunction = new QMenu(this); connect(mFunction, SIGNAL(triggered(QAction *)), this, SLOT(triggered(QAction *)));
  mOutlet = new QMenu(this); connect(mOutlet, SIGNAL(triggered(QAction *)), this, SLOT(triggered(QAction *)));
  mDim = new QMenu(this); connect(mDim, SIGNAL(triggered(QAction *)), this, SLOT(triggered(QAction *)));
  mVar = new QMenu(this); connect(mVar, SIGNAL(triggered(QAction *)), this, SLOT(triggered(QAction *)));
  mConst = new QMenu(this); connect(mConst, SIGNAL(triggered(QAction *)), this, SLOT(triggered(QAction *)));
  mEvent = new QMenu(this); connect(mEvent, SIGNAL(triggered(QAction *)), this, SLOT(triggered(QAction *)));
  mSignal = new QMenu(this); connect(mSignal, SIGNAL(triggered(QAction *)), this, SLOT(triggered(QAction *)));
  mSlot = new QMenu(this);   connect(mSlot, SIGNAL(triggered(QAction *)), this, SLOT(triggered(QAction *)));
  mEnum = new QMenu(this);   connect(mEnum, SIGNAL(triggered(QAction *)), this, SLOT(triggered(QAction *)));
  mType = new QMenu(this);   connect(mType, SIGNAL(triggered(QAction *)), this, SLOT(triggered(QAction *)));

  

  code = new Code(this);
  code->setTabChangesFocus(false);
  code->setLineWrapMode(QPlainTextEdit::NoWrap);
  QFont f(DefaultFontName(), DefaultFontSize());
  code->document()->setDefaultFont(f);






  setFocusProxy(code);

  browser->setFocusProxy(code);
  

 // events->setFocusProxy(code);



  QBoxLayout *l = new QBoxLayout(QBoxLayout::TopToBottom);
  
  l->addSpacing(2);
  QBoxLayout *j = new QBoxLayout(QBoxLayout::LeftToRight);

  j->addWidget(browser);

  j->addWidget(cbSub);
  j->addWidget(cbFunction);
  j->addWidget(cbVar);
  j->addWidget(cbDim);
  j->addWidget(cbConst);
  j->addWidget(cbType);
  j->addWidget(cbEnum);
  j->addWidget(cbEvent);
  j->addWidget(cbOutlet);
  j->addWidget(cbSignal);
  j->addWidget(cbSlot);

  
  //j->addLayoutItem(QSpacerItem(10, 1));
  
  //j->addWidget(events);

  

  j->setMargin(2);
  j->setSpacing(2);

  l->addLayout(j);
  l->addSpacing(2);


  l->addWidget(code);

  l->setMargin(0);
  l->setSpacing(0);
  setLayout(l);

  setFrameShape(QFrame::StyledPanel);

  
  bUndoAvailable = false;
  bRedoAvailable = false;
  bCopyAvailable = false;

  connect(code, SIGNAL(copyAvailable(bool)), this, SLOT(code_copyAvailable(bool)));
  connect(code, SIGNAL(redoAvailable(bool)), this, SLOT(code_redoAvailable(bool)));
  connect(code, SIGNAL(undoAvailable(bool)), this, SLOT(code_undoAvailable(bool)));

//  connect(code->document(), SIGNAL(contentsChange(int, int, int)), this, SLOT(code_contentsChange(int, int, int)));   


 timerbrowser = new QTimer(this);
 connect(timerbrowser, SIGNAL(timeout()), this, SLOT(timerbrowser_timeout()));

 connect(this, SIGNAL(cursorPositionChanged()), this, SLOT(highlightCurrentLine()));

  highlightCurrentLine();


  nCurrentDebugPosition = 0;

  //Load("C:\\Users\\Bernd\\Desktop\\objb\\QtBasic\\CodeView.QWidget");

 

  //SLOT_Load(qApp->applicationDirPath() + "/" + "test.class");

  codesyntaxhighlighter = new CodeSyntaxHighlighter(code->document(), code);
  

}

void Q7BCodeView::cbDocu_clicked(bool)
{

  QTextBrowser *t = new QTextBrowser(0);
  t->setAttribute(Qt::WA_DeleteOnClose);

  QString s = "<html><body>";

  s += sDocu;

  s += "</body></html>";

  t->setHtml(s);
  t->showMaximized();
}

 void Q7BCodeView::highlightCurrentLine()
 {
     code_pasteAvailable();

     QList<QTextEdit::ExtraSelection> extraSelections;

     if (!code->isReadOnly()) {
         QTextEdit::ExtraSelection selection;         

         QColor lineColor;
         if (Q7B_bDefaultSyntaxHighlighting){
           lineColor = QColor(Qt::yellow).lighter(160);
         } else {
           lineColor = Q7B_currentLineColor;
         }

         selection.format.setBackground(lineColor);
         selection.format.setProperty(QTextFormat::FullWidthSelection, true);
         selection.cursor = code->textCursor();
         selection.cursor.clearSelection();
         extraSelections.append(selection);
     }

     code->setExtraSelections(extraSelections);
 }







void Q7BCodeView::setCPPKeywords(QStringList l)
{
  static bool b = true;
  if (b == false) return;

  Q7B_CPPKeywords = QSet<QString>::fromList(l);

  b = false;
}

void Q7BCodeView::setConsts(QStringList l)
{
  static bool b = true;
  if (b == false) return;

  if (Q7B_Functions.count() == 0){
    Q7B_Functions = QSet<QString>::fromList(l);
  } else {
    Q7B_Functions.unite(QSet<QString>::fromList(l));
  }


  
  for (int i = 0; i < l.size(); ++i) {
     Q7B_keyword[l.at(i).toLower()] = l.at(i);
  }

  if (Q7B_KeywordsAndRest.count() == 0){
    Q7B_KeywordsAndRest = QSet<QString>::fromList(Q7B_keyword.keys());
  } else {
    Q7B_KeywordsAndRest.unite(QSet<QString>::fromList(Q7B_keyword.keys()));
  }

  b = false;
}

void Q7BCodeView::setFunctions(QStringList l)
{
  static bool b = true;
  if (b == false) return;

  //QMessageBox::information(this, "", "setFunctions");

  if (Q7B_Functions.count() == 0){
    Q7B_Functions = QSet<QString>::fromList(l);
  } else {
    Q7B_Functions.unite(QSet<QString>::fromList(l));
  }


  
  for (int i = 0; i < l.size(); ++i) {
     Q7B_keyword[l.at(i).toLower()] = l.at(i);
  }

  if (Q7B_KeywordsAndRest.count() == 0){
    Q7B_KeywordsAndRest = QSet<QString>::fromList(Q7B_keyword.keys());
  } else {
    Q7B_KeywordsAndRest.unite(QSet<QString>::fromList(Q7B_keyword.keys()));
  }

  b = false;
}

void Q7BCodeView::setKeywords(QStringList l)
{
  static bool b = true;
  if (b == false) return;

  
  for (int i = 0; i < l.size(); ++i) {
     Q7B_keyword[l.at(i).toLower()] = l.at(i);
  }

  if (Q7B_KeywordsAndRest.count() == 0){
    Q7B_KeywordsAndRest = QSet<QString>::fromList(Q7B_keyword.keys());
  } else {
    Q7B_KeywordsAndRest.unite(QSet<QString>::fromList(Q7B_keyword.keys()));
  }

  b = false;
}

void Q7BCodeView::setClasses(QStringList l)
{
  static bool b = true;
  if (b == false) return;

  if (Q7B_type_set.count() == 0){
    Q7B_type_set = QSet<QString>::fromList(l);
  } else {
    Q7B_type_set.unite(QSet<QString>::fromList(l));
  }
  for (int i = 0; i < l.size(); ++i) {
     Q7B_type[l.at(i).toLower()] = l.at(i);
  }

  if (Q7B_KeywordsAndRest.count() == 0){
    Q7B_KeywordsAndRest = QSet<QString>::fromList(Q7B_type.keys());
  } else {
    Q7B_KeywordsAndRest.unite(QSet<QString>::fromList(Q7B_type.keys()));
  }

  b = false;
}

void Q7BCodeView::setFontName(QString s)
{
  Q7B_sFontName = s;
}

void Q7BCodeView::setFontSize(int n)
{
  Q7B_nFontSize = n;
  codesyntaxhighlighter = new CodeSyntaxHighlighter(code->document(), code); 
  QFont f(DefaultFontName(), DefaultFontSize());
  code->document()->setDefaultFont(f);
}

void Q7BCodeView::setShowLineNumbers(bool b)
{
  Q7B_bShowLineNumbers = b;
}

void Q7BCodeView::setShowLineSeparators(bool b)
{
  Q7B_bShowLineSeparators = b;
}

void Q7BCodeView::setDefaultSyntaxHighlighting(bool b)
{
  Q7B_bDefaultSyntaxHighlighting = b;
}

void Q7BCodeView::setSyntaxHighlightingColors(QStringList l)
{  
  Q7B_SyntaxHighlightingColors = l;
}

void Q7BCodeView::setObjects(QStringList l)
{
  static bool b = true;
  if (b == false) return;


  if (Q7B_Functions.count() == 0){
    Q7B_Functions = QSet<QString>::fromList(l);
  } else {
    Q7B_Functions.unite(QSet<QString>::fromList(l));
  }


  
  
  for (int i = 0; i < l.size(); ++i) {
     Q7B_type[l.at(i).toLower()] = l.at(i);
  }

  if (Q7B_KeywordsAndRest.count() == 0){
    Q7B_KeywordsAndRest = QSet<QString>::fromList(Q7B_type.keys());
  } else {
    Q7B_KeywordsAndRest.unite(QSet<QString>::fromList(Q7B_type.keys()));
  }

  b = false;
}

void Q7BCodeView::setTypes(QStringList l)
{
  static bool b = true;
  if (b == false) return;
 
  if (Q7B_type_set.count() == 0){
    Q7B_type_set = QSet<QString>::fromList(l);
  } else {
    Q7B_type_set.unite(QSet<QString>::fromList(l));
  }
  
  for (int i = 0; i < l.size(); ++i) {
     Q7B_type[l.at(i).toLower()] = l.at(i);
  }

  if (Q7B_KeywordsAndRest.count() == 0){
    Q7B_KeywordsAndRest = QSet<QString>::fromList(Q7B_type.keys());
  } else {
    Q7B_KeywordsAndRest.unite(QSet<QString>::fromList(Q7B_type.keys()));
  }

  b = false;
}

QString Q7BCodeView::beautify(QString k)
{  
  QString s;

  int nIdent = 0;

  int y = 0;
  while(y < k.length() && k.at(y++).isSpace()) nIdent++;

  bool bError = false;
  QStringList l = scan(k, 0, &bError);
  if (bError) return k;

  bool bComment = false;

  QString sPrev;
  QString sPrevType;

  for (int i = 0; i < l.size(); i++){
    QString m = l.at(i).mid(1);
    QString m2; if (i + 1 < l.size()) m2 = l.at(i + 1).left(1);

    QChar c = l.at(i).at(0);
  
    QChar cc = s.length() > 0 ? s.at(s.length() - 1) : 0;

    if (c == 'I'){      

      if (m.compare("endif", Qt::CaseInsensitive) == 0) m = "End If";
      else {
        bool b = sPrev != "." && sPrev != "!";
        if (b && Q7B_type.contains(m)){
          m = Q7B_type[m];
        } else if (b && Q7B_keyword.contains(m)){
          m = Q7B_keyword[m];
        }      
      }
      s += m + " ";      
    }
    else if (c == 'K'){

      if ( m == "Declare"){
        return k; 
      }

      if (m == "GoTo" && sPrev == "."){
        return k; 
      }

      if (m == ":"){
        int dsfds = l.size();
        m = m;
      }

      if (m == "." || m == "!" || m == "(" || m == ")" || m == "[" || m == "]" || (m == ":" && (i + 1 == l.size() || m2 == "C"))){
        if (m == "."){
          m = m;
        }
        if (cc == ' ') s.chop(1);
        s += m;
      }
      else if (m == ","){
        if (cc == ' ') s.chop(1);
        s += m + " ";
      }

      else if (m == "=" && sPrev == ":"){
        if (cc == ' ') s.chop(1);
        s += m + " ";
      }
    
      else if (i == 0) s += m + " ";
      else s += (cc != ' ' && cc != '(' ? " " : "") + m + " ";      
    }
    else if (c == 'N') s += m + " ";
    else if (c == 'S') s += "\"" + m + "\" ";
    else if (c == 'C'){
      int nIdentComment = 0;

      if (i > 0){
        int y = k.length() - (m.length() + 1);
        
        while(y >= 0 && k.at(y--).isSpace()) nIdentComment++;
      }

      bComment = true;
      s += QString().fill(' ', nIdentComment) + "'" + m;
    }
    else s += m;   

    sPrev = m;
    sPrevType = l.at(i).left(1);

  }

  QString r = QString().fill(' ', nIdent) + s;

  int n = 0;
  if (!bComment){
    int z = r.length() - 1;
    while(z >= 0 && r.at(z--).isSpace()) n++;
  }
  if (n > 0) r.chop(n);

  //QMessageBox::information(0, "", r);
  return r; 
  

}

void Q7BCodeView::commands_activated( const QString &s)
{
  if (s == "PerformComment"){ PerformComment(); return; }
  if (s == "PerformUncomment"){ PerformUncomment(); return; }
  if (s == "PerformIndent"){ PerformIndent(); return; }
  if (s == "PerformUnindent"){ PerformUnindent(); return; }
  if (s == "PerformUpper"){ PerformUpper(); return; }
  if (s == "PerformLower"){ PerformLower(); return; }
  if (s == "PerformInsertFile"){ PerformInsertFile(); return; }
  if (s == "PerformGotoLine"){ PerformGotoLine(); return; }

}


void Q7BCodeView::code_textChanged()
{
  timerbrowser->stop();
  timerbrowser->start(50);  
  emit textChanged();
}

void Q7BCodeView::timerbrowser_timeout()
{
  timerbrowser->stop();
  RefreshBrowser();
  
}

void Q7BCodeView::code_cursorPositionChanged(void)
{
  
  
  {
    code_cursorPositionChanged_lock = true;
    QTextCursor f = code->textCursor();
    if (f.blockNumber() != code_cursorPositionChanged_nLine){
      QTextCursor ff = code->textCursor();
      int n = f.blockNumber();
    
      if (code_cursorPositionChanged_nLine != -1){
        f.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor); 
        f.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor, code_cursorPositionChanged_nLine);    
      }

      f.select(QTextCursor::LineUnderCursor);     

      code_cursorPositionChanged_nLine = n;

      QString r = f.selectedText();   
      if (!r.isEmpty()){
        QString k = beautify(r);
        if (r != k){   
          f.beginEditBlock();
          f.insertText(k);
          code->setTextCursor(f);  
          f.endEditBlock();
          code->setTextCursor(ff);  
        }
        
      }

      
    }

   // code_cursorPositionChanged_lock = false;
  }

  emit cursorPositionChanged();

  
  
 // if (info == 0) return;



  QString sAllText = code->toPlainText();
  QTextCursor c = code->textCursor();
  int nPosition = c.position();
  int n = sAllText.indexOf("\nEnd ", nPosition);
  QString qwert = sAllText.mid(n);
  if (n == -1){ browser->setCurrentIndex(0); return; }
  n += 5;

  int n2 = sAllText.indexOf("\n", n);
  if (n2 == -1) n2 = sAllText.length();
  int n3 = sAllText.indexOf("'", n);
  if (n3 != -1 && n3 < n2) n2 = n3;
  int n4 = sAllText.indexOf(" ", n);
  if (n4 != -1 && n4 < n2) n2 = n4;

  QString sSearch = sAllText.mid(n, n2 - n);


  

  int k = sAllText.lastIndexOf(QString("\n") + sSearch + " ", n);
  
  {
    int k2 = sAllText.lastIndexOf(QString("\nPublic ") + sSearch + " ", n);
    int k3 = sAllText.lastIndexOf(QString("\nPrivate ") + sSearch + " ", n);
    int k4 = sAllText.lastIndexOf(QString("\nGlobal ") + sSearch + " ", n);
    int k5 = sAllText.lastIndexOf(QString("\nProperty ") + sSearch + " ", n);

    if (k2 > k3 && k2 > k){
      k = k2 + 7; 
    } else if (k3 >= 0 && k3 > k){
      k = k3 + 8;
    } else if (k == -1){
      k = -1;
    }

    if (k4 > k){
      k = k4 + 7; 
    }

    if (k5 > k){
      k = k5 + 9; 
    }
  }

  if (k == -1 || k > nPosition){ browser->setCurrentIndex(0); return; }
  
  int kk = sAllText.indexOf("\n", k + 1);
  if (kk == -1){ browser->setCurrentIndex(0); return; }
  k += 2 + sSearch.length();
  QString mm = sAllText.mid(k, kk - k);
  int j = browser->findText(mm);
  if (j >= 0){
    browser->setCurrentIndex(j);
  } else {
    browser->setCurrentIndex(0);
  }
 
 // QString sSearch = tb.text().mid(4).simplified() + " ";


  //int nOffset = sSearch.length();
  

  
}

void Q7BCodeView::code_contentsChange(int nPosition, int charsRemoved, int charsAdded)
{
  
}


void Q7BCodeView::browserGoto(QVariant vv)
{
  QVariant v = vv;
  qint64 n = v.toLongLong();
  int l = n / 1000000;
 
//  int c = n % 1000;

  if (l && n > 0){
    GotoLineAndSelectLine(l);
    setFocus();
  }
}

void Q7BCodeView::triggered(QAction *action)
{
  browserGoto(action->data());
}

void Q7BCodeView::browser_activated(int index)
{
  browserGoto(browser->itemData(index));
}

void Q7BCodeView::GotoLineAndSelectLine(int nLine)
{  
  QTextCursor c = code->textCursor();
  c.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor);
  c.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor, nLine - 5);
  c.movePosition(QTextCursor::Right, QTextCursor::MoveAnchor, 1);  
  code->setTextCursor(c);

  c.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor);
  c.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor, nLine + 5);
  c.movePosition(QTextCursor::Right, QTextCursor::MoveAnchor, 1);  
  code->setTextCursor(c);

  c.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor);
  c.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor, nLine - 1);
  c.movePosition(QTextCursor::EndOfLine, QTextCursor::MoveAnchor);
  c.movePosition(QTextCursor::StartOfLine, QTextCursor::KeepAnchor);
  code->setTextCursor(c);  
}

void Q7BCodeView::GotoLine(int nLine, bool bTryToSaveCursorColumn)
{  
  QTextCursor c = code->textCursor();
  int n = -1;
  if (bTryToSaveCursorColumn){
    n = c.columnNumber();
  }
  c.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor);
  c.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor, nLine - 5);
 
  code->setTextCursor(c);

  c.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor);
  c.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor, nLine + 5);

  code->setTextCursor(c);

  c.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor);
  c.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor, nLine - 1);
  c.movePosition(QTextCursor::StartOfLine, QTextCursor::MoveAnchor);
  if (bTryToSaveCursorColumn){
    c.movePosition(QTextCursor::Right, QTextCursor::MoveAnchor, n);
  } else 
 
  code->setTextCursor(c);  
}

void Q7BCodeView::RefreshControls()
{
  
  // TODO liste von form erfragen QStringList Names, QStringList Types
 
  //  controls->addItem(Names.at(i), Types.at(i));    
 
}


void Q7BCodeView::emit_GetCompletion(QString s)
{
  emit GetCompletion(s);
}

void Q7BCodeView::emit_GetCompletion2(QString s)
{
  emit GetCompletion2(s);
}

void Q7BCodeView::RefreshEvents()
{
  

  // TODO list von codeinsight erfragen
  
}

void Q7BCodeView::RefreshBrowser()
{

  sDocu = "";





    //QString sCurrentText = browser->currentText();
    
    static QStringList l;
    
    if (l.count() == 0){
      
      l << "\nPublic Sub" << "\nPrivate Sub" << "\nGlobal Sub" << "\nPublic Property Sub" << "\nPrivate Property Sub" << "\nProperty Sub" << "\nSub" << "@";
      l << "\nPublic Function" << "\nPrivate Function" << "\nGlobal Function" << "\nPublic Property Function" << "\nPrivate Property Function" << "\nProperty Function" << "\nFunction" << "@";
      l << "\nPublic Outlet" << "\nPrivate Outlet" << "\nOutlet" << "@";
      l << "\nPublic Dim" << "\nPrivate Dim" << "\nGlobal Dim" << "\nDim" << "@";
      l << "\nPublic Var" << "\nPrivate Var" << "\nGlobal Var" << "\nVar" << "@";
      l << "\nPublic Const" << "\nPrivate Const" << "\nGlobal Const" << "\nConst" << "@";
      l << "\nEvent" << "@";
      l << "\nSignal" << "@";
      l << "\nSlot" << "@";
      l << "\nPublic Enum" << "\nPrivate Enum" << "\nGlobal Enum" << "\nEnum" << "@";
      l << "\nPublic Type" << "\nPrivate Type" << "\nGlobal Type" << "\nType" << "@";

      
    }


    cbSub->setMenu(0); mSub->clear();
    cbFunction->setMenu(0); mFunction->clear();
    cbOutlet->setMenu(0); mOutlet->clear();
    cbDim->setMenu(0); mDim->clear();
    cbVar->setMenu(0); mVar->clear();
    cbConst->setMenu(0); mConst->clear();
    cbEvent->setMenu(0); mEvent->clear();
    cbSignal->setMenu(0); mSignal->clear();
    cbSlot->setMenu(0); mSlot->clear();

    codeInsight.clear();


    

    while (!actions.isEmpty()){
     delete actions.takeFirst();
    }

    QMap<QString, QVariant> data;

    QString sAllText = "\n" + code->toPlainText();

    QIcon *icon;
    QIcon iSub = QIcon(":/Resources/Sub.png"); //iSub.setThemeName("Sub");
    QIcon iFunction = QIcon(":/Resources/Function.png"); //iFunction.setThemeName("Function");
    QIcon iDim = QIcon(":/Resources/Dim.png"); //iDim.setThemeName("Dim");
    QIcon iVar = QIcon(":/Resources/Dim.png");
    QIcon iConst = QIcon(":/Resources/Const.png");
    QIcon iEvent = QIcon(":/Resources/Event.png");
    QIcon iOutlet = QIcon(":/Resources/Outlet.png");
    QIcon iSignal = QIcon(":/Resources/Signal.png");
    QIcon iSlot = QIcon(":/Resources/Slot.png");
    QIcon iEnum = QIcon(":/Resources/Enum.png");
    QIcon iType = QIcon(":/Resources/Type.png");

    browser->clear();

    QMap<QString, QAction*> mapSub;
    QMap<QString, QAction*> mapFunction;
    QMap<QString, QAction*> mapDim;
    QMap<QString, QAction*> mapVar;
    QMap<QString, QAction*> mapConst;
    QMap<QString, QAction*> mapEvent;
    QMap<QString, QAction*> mapOutlet;
    QMap<QString, QAction*> mapSignal;
    QMap<QString, QAction*> mapSlot;
    QMap<QString, QAction*> mapEnum;
    QMap<QString, QAction*> mapType;

    int nCount = 0;
    foreach(QString s, l){
      

      if (qApp->closingDown()) return;
      
      //if (qApp->closingDown()) return;

    //  s += " \\b[A-Za-z0-9_]*";
    

      int nn = 0;
      QTextCursor c;
      
      QTextDocument *d = code->document();

      QToolButton *cb = 0;
      if (s == "@"){
        nCount = 0;
        continue;
      }
      
      
      do {
        
        if (qApp->closingDown()) return;
        
        //if (qApp->closingDown()) return;

        QString www = s;
        QString hhhhhh = sAllText.mid(nn);
        nn = sAllText.indexOf(s, nn);
        if (nn == -1) break;
       
       // if (!c.hasSelection()) break;
       
        
        int nn2 = sAllText.indexOf("\n", nn + 1);

        if (nn2 == -1){
          nn2 = sAllText.length();
        } else {
       
       //   if (nn2 < 0) nn2 = 0;
        }
 
       // QString suu = tr("%1").arg(c.selectedText());
       
        QString s = sAllText.mid(nn, nn2 - nn);
        QString k = "";
        c = code->textCursor();
        c.setPosition(nn2);
        nn = nn2;
 

        int n;
        QMenu *m;
        if ((n = s.indexOf("Sub ", 0, Qt::CaseInsensitive)) >= 0){ n += 4; icon = &iSub; m = mSub; }
        else if ((n = s.indexOf("Function ", 0, Qt::CaseInsensitive)) >= 0){ n += 9; icon = &iFunction; m = mFunction; }
        else if ((n = s.indexOf("Outlet ", 0, Qt::CaseInsensitive)) >= 0){ n += 7; icon = &iOutlet; m = mOutlet; }
        else if ((n = s.indexOf("Dim ", 0, Qt::CaseInsensitive)) >= 0){ n += 4; icon = &iDim; m = mDim; }
        else if ((n = s.indexOf("Var ", 0, Qt::CaseInsensitive)) >= 0){ n += 4; icon = &iVar; m = mVar; }
        else if ((n = s.indexOf("Const ", 0, Qt::CaseInsensitive)) >= 0){ 
          n += 6; icon = &iConst; m = mConst; 
        }
        else if ((n = s.indexOf("Event ", 0, Qt::CaseInsensitive)) >= 0){ n += 6; icon = &iEvent; m = mEvent; }
        else if ((n = s.indexOf("Signal ", 0, Qt::CaseInsensitive)) >= 0){ n += 7; icon = &iSignal; m = mSignal; }
        else if ((n = s.indexOf("Slot ", 0, Qt::CaseInsensitive)) >= 0){ n += 5; icon = &iSlot; m = mSlot; }
        else if ((n = s.indexOf("Enum ", 0, Qt::CaseInsensitive)) >= 0){ n += 5; icon = &iEnum; m = mEnum; }
        else if ((n = s.indexOf("Type ", 0, Qt::CaseInsensitive)) >= 0){ n += 5; icon = &iType; m = mType; }
        else break;

        nCount++;
        //else if (s.indexOf("Signal", 0, Qt::CaseInsensitive) >= 0){ k = kbasicPath("ide/Signal.png"); s.replace("Signal ", "", Qt::CaseInsensitive); }
        //else if (s.indexOf("Slot", 0, Qt::CaseInsensitive) >= 0){ k = kbasicPath("ide/Slot.png"); s.replace("Slot ", "", Qt::CaseInsensitive); }
        //else if (s.indexOf("Constructor", 0, Qt::CaseInsensitive) >= 0){ k = kbasicPath("ide/Constructor.png"); s.replace("Constructor ", "", Qt::CaseInsensitive); }
        //else if (s.indexOf("Destructor", 0, Qt::CaseInsensitive) >= 0){ k = kbasicPath("ide/Destructor.png"); s.replace("Destructor ", "", Qt::CaseInsensitive); }
        //else if (s.indexOf("Property", 0, Qt::CaseInsensitive) >= 0){ k = kbasicPath("ide/Property.png"); s.replace("Property ", "", Qt::CaseInsensitive); }




       
        
        
        int nLineMark = c.blockNumber() - 1;
        QTextDocument *d = code->document();
        bool bLineMarkNeeded = false;
        for (int i = nLineMark; i >= 0; i--){
          QString s = d->findBlockByNumber(i).text();   
          if (s.simplified().isEmpty()){
            nLineMark = i + 1;
            bLineMarkNeeded = true;
            break;
          }
        }

        if (!bLineMarkNeeded){
          nLineMark = 0;
        }

          

          qint64 ll = ((c.blockNumber() + 0) * 1000000) + ((nLineMark) * 1); 
         // nLineMark0 = nLineMark;
          //qint64 lkkl = (1037 * 1000) + 72;
          

          QVariant v(ll);
  

          QString mm = s.mid(n);
          
            data[mm] = v;

            
            QAction *a = new QAction(*icon, mm, 0);
            a->setData(v);
            
            QString sKind;

            if (m == mSub){ mapSub[mm] = a; sKind = "Sub"; } 
            else if (m == mFunction){ mapFunction[mm] = a; sKind = "Function"; } 
            else if (m == mDim){ mapDim[mm] = a; sKind = "Dim"; } 
            else if (m == mVar){ mapVar[mm] = a; sKind = "Var"; } 
            else if (m == mConst){ mapConst[mm] = a; sKind = "Const"; } 
            else if (m == mEvent){ mapEvent[mm] = a; sKind = "Event"; } 
            else if (m == mOutlet){ mapOutlet[mm] = a; sKind = "Outlet"; } 
            else if (m == mSignal){ mapSignal[mm] = a; sKind = "Signal"; } 
            else if (m == mSlot){ mapSlot[mm] = a; sKind = "Slot"; } 
            else if (m == mEnum){ mapEnum[mm] = a; sKind = "Enum"; } 
            else if (m == mType){ mapType[mm] = a; sKind = "Type"; } 
            
            
             
            //}
            actions.append(a);
            browser->addItem(*icon, mm, v);

            


            _codeInsight ci;
            ci.sFileName = sFilename;
            ci.sKind = sKind;
            QString df = mm;
            if (df.indexOf("(") >= 0) df = df.left(df.indexOf("("));
            if (df.indexOf(" ") >= 0) df = df.left(df.indexOf(" "));
            if (df.indexOf("=") >= 0) df = df.left(df.indexOf("="));
            ci.sName = df.simplified();
            
            if (mm.indexOf("(") >= 0){
              int n = mm.indexOf("(");
              int n2 = mm.indexOf(")") + 1;
              ci.sArgs = mm.mid(n, n2 - n);
            } else {
              ci.sArgs = "";
            }

            if (mm.lastIndexOf("As") >= 0){
              ci.sType = mm.mid(mm.lastIndexOf("As") + 2);
              if (ci.sType.indexOf("=") >= 0) ci.sType = ci.sType.left(ci.sType.indexOf("="));
              ci.sType = ci.sType.simplified();
            } else {
              ci.sType = "";
            }


            codeInsight << ci;

          
         //   sdf = sdf;

        
       // }
        
//        if (browser->findData(v) == -1) browser->addItem (kbasicIcon(k), s, v); 
      } while (true);

       {
         QString o;
         QMapIterator<QString, QAction *> i(mapSub);
         while (i.hasNext()) {
             i.next();
             if (!o.isEmpty() && o != i.key().left(1)){
               mSub->addSeparator();
             }
             mSub->addAction(i.value()); 
             o = i.key().left(1);
         }
       }

       {
         QString o;
         QMapIterator<QString, QAction *> i(mapFunction);
         while (i.hasNext()) {
             i.next();
             if (!o.isEmpty() && o != i.key().left(1)){
               mFunction->addSeparator();
             }
             mFunction->addAction(i.value()); 
             o = i.key().left(1);
         }
       }

       {
         QString o;
         QMapIterator<QString, QAction *> i(mapDim);
         while (i.hasNext()) {
             i.next();
             if (!o.isEmpty() && o != i.key().left(1)){
               mDim->addSeparator();
             }
             mDim->addAction(i.value()); 
             o = i.key().left(1);
         }
       }

       {
         QString o;
         QMapIterator<QString, QAction *> i(mapVar);
         while (i.hasNext()) {
             i.next();
             if (!o.isEmpty() && o != i.key().left(1)){
               mVar->addSeparator();
             }
             mVar->addAction(i.value()); 
             o = i.key().left(1);
         }
       }

       {
         QString o;
         QMapIterator<QString, QAction *> i(mapConst);
         while (i.hasNext()) {
             i.next();
             if (!o.isEmpty() && o != i.key().left(1)){
               mConst->addSeparator();
             }
             mConst->addAction(i.value()); 
             o = i.key().left(1);
         }
       }

       {
         QString o;
         QMapIterator<QString, QAction *> i(mapEvent);
         while (i.hasNext()) {
             i.next();
             if (!o.isEmpty() && o != i.key().left(1)){
               mEvent->addSeparator();
             }
             mEvent->addAction(i.value()); 
             o = i.key().left(1);
         }
       }

       bool bMainWindow = sFilename.endsWith("MainWindow.QMainWindow");

       {
         QString o;
         QMapIterator<QString, QAction *> i(mapOutlet);
         while (i.hasNext()) {
             i.next();
             if (!o.isEmpty() && o != i.key().left(bMainWindow ? 7 : 1)){
               mOutlet->addSeparator();
             }
             mOutlet->addAction(i.value()); 
             o = i.key().left(bMainWindow ? 7 : 1);
         }
       }

       {
         QString o;
         QMapIterator<QString, QAction *> i(mapSignal);
         while (i.hasNext()) {
             i.next();
             if (!o.isEmpty() && o != i.key().left(bMainWindow ? 10 : 4)){
               mSignal->addSeparator();
             }
             mSignal->addAction(i.value()); 
             o = i.key().left(bMainWindow ? 10 : 4);
         }
       }

       {
         QString o;
         QMapIterator<QString, QAction *> i(mapSlot);
         while (i.hasNext()) {
             i.next();
             if (!o.isEmpty() && o != i.key().left(1)){
               mSlot->addSeparator();
             }
             mSlot->addAction(i.value()); 
             o = i.key().left(1);
         }
       }

       {
         QString o;
         QMapIterator<QString, QAction *> i(mapEnum);
         while (i.hasNext()) {
             i.next();
             if (!o.isEmpty() && o != i.key().left(1)){
               mEnum->addSeparator();
             }
             mEnum->addAction(i.value()); 
             o = i.key().left(1);
         }
       }

       {
         QString o;
         QMapIterator<QString, QAction *> i(mapType);
         while (i.hasNext()) {
             i.next();
             if (!o.isEmpty() && o != i.key().left(1)){
               mType->addSeparator();
             }
             mType->addAction(i.value()); 
             o = i.key().left(1);
         }
       }

      if (s == "\nSub"){ cbSub->setText(QString("Sub %1").arg(nCount)); if (nCount > 0){ cbSub->setMenu(mSub); cbSub->show();} else cbSub->hide(); }
      else if (s == "\nFunction"){ cbFunction->setText(QString("Function %1").arg(nCount)); if (nCount > 0){ cbFunction->setMenu(mFunction); cbFunction->show();} else cbFunction->hide(); }
      else if (s == "\nOutlet"){ cbOutlet->setText(QString("Outlet %1").arg(nCount)); if (nCount > 0){ cbOutlet->setMenu(mOutlet); cbOutlet->show();} else cbOutlet->hide(); }
      else if (s == "\nDim"){ cbDim->setText(QString("Dim %1").arg(nCount)); if (nCount > 0){ cbDim->setMenu(mDim); cbDim->show();} else cbDim->hide(); }
      else if (s == "\nVar"){ cbVar->setText(QString("Var %1").arg(nCount)); if (nCount > 0){ cbVar->setMenu(mVar); cbVar->show();} else cbVar->hide(); }
      else if (s == "\nConst"){ cbConst->setText(QString("Const %1").arg(nCount)); if (nCount > 0){ cbConst->setMenu(mConst); cbConst->show();} else cbConst->hide(); }
      else if (s == "\nEvent"){ cbEvent->setText(QString("Event %1").arg(nCount)); if (nCount > 0){ cbEvent->setMenu(mEvent); cbEvent->show();} else cbEvent->hide(); }
      else if (s == "\nSignal"){ cbSignal->setText(QString("Signal %1").arg(nCount)); if (nCount > 0){ cbSignal->setMenu(mSignal); cbSignal->show();} else cbSignal->hide(); }
      else if (s == "\nSlot"){  cbSlot->setText(QString("Slot %1").arg(nCount)); if (nCount > 0){ cbSlot->setMenu(mSlot); cbSlot->show();} else cbSlot->hide(); }
      else if (s == "\nEnum"){  cbEnum->setText(QString("Enum %1").arg(nCount)); if (nCount > 0){ cbEnum->setMenu(mEnum); cbEnum->show();} else cbEnum->hide(); }
      else if (s == "\nType"){  cbType->setText(QString("Type %1").arg(nCount)); if (nCount > 0){ cbType->setMenu(mType); cbType->show();} else cbType->hide(); }

     
    }

    

     browser->model()->sort(0);
    browser->insertItem(0, QString("All %1").arg(data.count()), QVariant(-1)); 
    browser->insertSeparator(1);

    for (int i = 2; i < browser->count(); i++){
      sDocu += browser->itemText(i) + "<br><br>";
    }

     code->bUpdateForChangedText = false;

     
     {
     //  code->bUpdateForChangedText = false;
       code_cursorPositionChanged(); 
       code->viewport()->update();
     }
}

void Q7BCodeView::PerformUndo()
{
  code->undo();
}

void Q7BCodeView::PerformRedo()
{
  code->redo();
}

void Q7BCodeView::PerformCut()
{
  code->cut();
}

void Q7BCodeView::PerformCopy()
{
  code->copy();
}

void Q7BCodeView::PerformPaste()
{
  code->paste();
}

void Q7BCodeView::PerformDelete()
{
  QTextCursor c = code->textCursor();

  if (c.hasSelection()){

    c.beginEditBlock();

    c.insertText("");

    c.endEditBlock();

    code->setTextCursor(c);
    code->document()->setModified(true); 

  } 
}

void Q7BCodeView::PerformSelectAll()
{
  code->selectAll();
}

void Q7BCodeView::PerformComment()
{
//QMessageBox::information(this, "QtBasic", "PerformComment");

  QTextCursor c = code->textCursor();

  if (c.hasSelection()){

    c.beginEditBlock();

    int a = c.selectionStart();
    int b = c.selectionEnd();

    int cpos = c.position();
    bool bAtStart = false;

    if (cpos == a){
      c.movePosition(QTextCursor::StartOfLine, QTextCursor::MoveAnchor);

      c.clearSelection();
      if (c.blockNumber() == 0){
        bAtStart = true;
        c.movePosition(QTextCursor::StartOfLine, QTextCursor::MoveAnchor);
      } else {
        c.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
        c.movePosition(QTextCursor::EndOfLine, QTextCursor::MoveAnchor);
      }
      c.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, b - c.position());

    } else {
      c.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, b - a);
      c.movePosition(QTextCursor::StartOfLine, QTextCursor::MoveAnchor);

      c.clearSelection();
      if (c.blockNumber() == 0){
        bAtStart = true;
        c.movePosition(QTextCursor::StartOfLine, QTextCursor::MoveAnchor);
      } else {
        c.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
        c.movePosition(QTextCursor::EndOfLine, QTextCursor::MoveAnchor);
      }
      c.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, b - c.position());

    }
    
    QString s = c.selectedText();

    QString cr = QString(QChar(0x2029));
    
 

    s.replace(cr, cr + "'");

    if (bAtStart){
      s = "'" + s;
    }
    c.insertText(s);

    c.clearSelection();

    
   // c.movePosition(QTextCursor::Left, QTextCursor::KeepAnchor, (c.position() - a - n));

    c.endEditBlock();
    code->document()->setModified(true); 

    code->setTextCursor(c);

  } 
}

void Q7BCodeView::PerformUncomment()
{
  QTextCursor c = code->textCursor();

  if (c.hasSelection()){

    c.beginEditBlock();

    int a = c.selectionStart();
    int b = c.selectionEnd();
    
    c.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, b - a);
    c.movePosition(QTextCursor::StartOfLine, QTextCursor::MoveAnchor);
    c.clearSelection();
    bool bAtStart = false;
    if (c.blockNumber() == 0){
      bAtStart = true;
      c.movePosition(QTextCursor::StartOfLine, QTextCursor::MoveAnchor);
    } else {
      c.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
      c.movePosition(QTextCursor::EndOfLine, QTextCursor::MoveAnchor);
    }
    c.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, b - c.position());

    QString s = c.selectedText();

    QString cr = QString(QChar(0x2029));
    
   

    if (s.contains(cr + "'")) s.replace(cr + "'", cr);
    else if (s.contains(cr + " '")) s.replace(cr + " '", cr + " ");
    else if (s.contains(cr + "  '")) s.replace(cr + "  '", cr + "  ");
    else if (s.contains(cr + "   '")) s.replace(cr + "   '", cr + "   ");
    else if (s.contains(cr + "    '")) s.replace(cr + "    '", cr + "    ");
    else if (s.contains(cr + "     '")) s.replace(cr + "     '", cr + "     ");
    else if (s.contains(cr + "      '")) s.replace(cr + "      '", cr + "      ");
    else if (s.contains(cr + "       '")) s.replace(cr + "       '", cr + "       ");
    else if (s.contains(cr + "        '")) s.replace(cr + "        '", cr + "        ");
    else if (s.contains(cr + "         '")) s.replace(cr + "         '", cr + "         ");
    else if (s.contains(cr + "          '")) s.replace(cr + "          '", cr + "          ");
    else if (s.contains(cr + "           '")) s.replace(cr + "           '", cr + "           ");
    else if (s.contains(cr + "            '")) s.replace(cr + "            '", cr + "            ");
    else if (s.contains(cr + "             '")) s.replace(cr + "             '", cr + "             ");
    else if (s.contains(cr + "              '")) s.replace(cr + "              '", cr + "              ");
    else if (s.contains(cr + "               '")) s.replace(cr + "               '", cr + "               ");
    else if (s.contains(cr + "                '")) s.replace(cr + "                '", cr + "                ");
    else if (s.contains(cr + "                 '")) s.replace(cr + "                 '", cr + "                 ");
    else if (s.contains(cr + "                  '")) s.replace(cr + "                  '", cr + "                  ");

    else if (bAtStart){
      if (s.startsWith("' ")) s = s.mid(2);
    }

    c.insertText(s);

    c.clearSelection();

    
    //c.movePosition(QTextCursor::Left, QTextCursor::KeepAnchor, (c.position() - a - n));

    c.endEditBlock();

    code->setTextCursor(c);
    code->document()->setModified(true); 

  } 
}

void Q7BCodeView::PerformIndent()
{
  

  QTextCursor c = code->textCursor();

  if (c.hasSelection()){

    int a = c.selectionStart();
    int b = c.selectionEnd();
    int nn = 0;

    int cpos = c.position();

    if (cpos == a){

      c.beginEditBlock();

      c.movePosition(QTextCursor::StartOfLine, QTextCursor::MoveAnchor);
      c.clearSelection();
      c.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
      c.movePosition(QTextCursor::EndOfLine, QTextCursor::MoveAnchor);
      nn = b - c.position();
      c.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, b - c.position());

    } else {
 
      c.beginEditBlock();

      c.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, b - a);
      c.movePosition(QTextCursor::StartOfLine, QTextCursor::MoveAnchor);
      c.clearSelection();
      c.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
      c.movePosition(QTextCursor::EndOfLine, QTextCursor::MoveAnchor);
      nn = b - c.position();
      c.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, nn);
      
    }
    
    QString s = c.selectedText();

    QString cr = QString(QChar(0x2029));
    
   

    s.replace(cr, cr + "  ");

    c.insertText(s);

    c.clearSelection();

    
    //c.movePosition(QTextCursor::Left, QTextCursor::KeepAnchor, (c.position() - a - n));

    c.endEditBlock();

    c.movePosition(QTextCursor::Left, QTextCursor::KeepAnchor, nn);

    code->setTextCursor(c);
    code->document()->setModified(true); 

  } else {

    c.beginEditBlock();

    c.insertText("  ");

    c.endEditBlock();

    code->setTextCursor(c);
    code->document()->setModified(true); 
  } 
}

void Q7BCodeView::PerformUnindent()
{
 

  QTextCursor c = code->textCursor();

  if (c.hasSelection()){

    c.beginEditBlock();

    int a = c.selectionStart();
    int b = c.selectionEnd();

    int nn = 0;
    
    int cpos = c.position();

    if (cpos == a){

      c.movePosition(QTextCursor::StartOfLine, QTextCursor::MoveAnchor);
      c.clearSelection();
      c.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
      c.movePosition(QTextCursor::EndOfLine, QTextCursor::MoveAnchor);
      nn = b - c.position();
      c.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, b - c.position());

    } else {

      c.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, b - a);
      c.movePosition(QTextCursor::StartOfLine, QTextCursor::MoveAnchor);
      c.clearSelection();
      c.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
      c.movePosition(QTextCursor::EndOfLine, QTextCursor::MoveAnchor);
      nn = b - c.position();
      c.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, b - c.position());

    }

    QString s = c.selectedText();

    QString cr = QString(QChar(0x2029));
    
    int n = s.count(cr);

    s.replace(cr + "  ", cr);

    c.insertText(s);

    c.clearSelection();

    
    //c.movePosition(QTextCursor::Left, QTextCursor::KeepAnchor, (c.position() - a - n));

    c.endEditBlock();

    c.movePosition(QTextCursor::Left, QTextCursor::KeepAnchor, nn - n * 2);

    code->setTextCursor(c);
    code->document()->setModified(true); 

  } else {

    c.beginEditBlock();

    c.deletePreviousChar();
    c.deletePreviousChar();

    c.endEditBlock();

    code->setTextCursor(c);
    code->document()->setModified(true); 
  } 
}

void Q7BCodeView::PerformUpper()
{
  QTextCursor c = code->textCursor();

  if (c.hasSelection()){

    c.beginEditBlock();

    QString s = c.selectedText();

    QString cr = QString(QChar(0x2029));

    c.insertText(s.toUpper());

    c.clearSelection();

    c.endEditBlock();

    code->setTextCursor(c);
    code->document()->setModified(true); 

  } 
}

void Q7BCodeView::PerformLower()
{
  QTextCursor c = code->textCursor();

  if (c.hasSelection()){

    c.beginEditBlock();

    QString s = c.selectedText();

    QString cr = QString(QChar(0x2029));

    c.insertText(s.toLower());

    c.clearSelection();

    c.endEditBlock();

    code->setTextCursor(c);
    code->document()->setModified(true); 

  } 
}

void Q7BCodeView::PerformInsertFile()
{
  QString s = QFileDialog::getOpenFileName(this, tr("Open File"), QString::null, tr("Source Codes (*.class)"));
  if (!s.isEmpty()){

    QFile f(s);
    if (!f.open(QIODevice::ReadOnly)){
      QMessageBox::information(this, "QtBasic", QString("Could not read from %1").arg(s));
      return;
    }

	  QTextStream t(&f);
    
    t.setCodec("UTF-8");
    t.setAutoDetectUnicode(true);
    t.setGenerateByteOrderMark(true);

    s = t.readAll();
    s = s.replace("\r", "");
	  f.close();

    QTextCursor c = code->textCursor();

    c.beginEditBlock();

    c.insertText(s);
    c.endEditBlock();

    code->setTextCursor(c);
    code->document()->setModified(true); 
  
  }
}

void Q7BCodeView::PerformInsertText(const QString & s)
{
  QTextCursor c = code->textCursor();

  c.beginEditBlock();

  c.insertText(s);
  c.endEditBlock();

  code->setTextCursor(c);
  code->document()->setModified(true); 
}

void Q7BCodeView::PerformGotoLine()
{
  bool b;

  int min = 1;
  QTextCursor c = code->textCursor();
  int max = c.blockNumber() + 1;

  QString s = tr("Lines (%1 - %2):").arg(min).arg(max);

  s = QInputDialog::getText(this, tr("Go To Line"), s, QLineEdit::Normal, "", &b);
  if (b && !s.isEmpty()){
    int n = s.toInt();
    if (n >= min && n <= max){
      GotoLineAndSelectLine(n);
    }
  }
}

void Q7BCodeView::UndoRedoCut()
{
  emit CopyAvailable(bCopyAvailable);
  emit PasteAvailable(code->canPaste());
  emit RedoAvailable(bRedoAvailable);
  emit UndoAvailable(bUndoAvailable);
}

void Q7BCodeView::code_copyAvailable(bool b)
{
  bCopyAvailable = b;
  emit CopyAvailable(b);
}

void Q7BCodeView::code_pasteAvailable()
{
  emit PasteAvailable(code->canPaste());
}

void Q7BCodeView::code_redoAvailable(bool b)
{
  bRedoAvailable = b;
  emit RedoAvailable(b);
}

void Q7BCodeView::code_undoAvailable(bool b)
{
  bUndoAvailable = b;
  emit UndoAvailable(b);
}



QString Q7BCodeView::getCurrentCompletionTrigger()
{
  QTextCursor c = code->textCursor();
 // if (c.blockNumber() == 0) return "";
  
  int n = c.columnNumber();
  
  c.movePosition(QTextCursor::StartOfLine, QTextCursor::KeepAnchor);

  QString k = c.selectedText();
  
  for (int i = k.length() - 1; i >= 0; i--){
    QChar c = k.at(i);

    if ((!k.at(i).isLetterOrNumber() && k.at(i) != '_' && (i != k.length() - 1 && k.at(i) != '(')) || (i != k.length() - 1 && c == '(') || c == ')' || c == '[' || c == ']' || c == '!' || c == '.' || c == '\"' || c == '\''){

      k = k.mid(i + 1);
      break;
    }
  }

  return k;
}

QString Q7BCodeView::getBeforeCurrentLineAsString()
{
  QTextCursor c = code->textCursor();
  if (c.blockNumber() == 0) return "";
  c.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
  c.movePosition(QTextCursor::EndOfLine, QTextCursor::MoveAnchor);
  c.movePosition(QTextCursor::StartOfLine, QTextCursor::KeepAnchor);

  return c.selectedText();
}

QString Q7BCodeView::getCurrentLineAsString(int nLineOffset)
{
  QTextCursor c = code->textCursor();
  if (nLineOffset < 0) c.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor, nLineOffset * -1);
  else if (nLineOffset > 0) c.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor, nLineOffset);
  c.movePosition(QTextCursor::StartOfLine, QTextCursor::MoveAnchor);
  c.movePosition(QTextCursor::EndOfLine, QTextCursor::KeepAnchor);

  return c.selectedText();
}

void Q7BCodeView::SetCompletion(QStringList l)
{
  lCompletion1 = l;
}

void Q7BCodeView::SetCompletion2(QString s)
{
  sCompletion2 = s;
}

int Q7BCodeView::getCurrentPosition()
{
  QTextCursor c = code->textCursor();

  return c.position();
}

int Q7BCodeView::getCurrentLine()
{
  QTextCursor c = code->textCursor();

  return c.blockNumber() + 1;
}

int Q7BCodeView::getCurrentColumn()
{
  QTextCursor c = code->textCursor();

  return c.columnNumber() + 1;
}

bool Q7BCodeView::PerformFind(const QString & sSearch)
{
  QTextCursor c = code->textCursor();
  c = code->document()->find(sSearch, c);
  if (!c.isNull()){
    code->setTextCursor(c);  
    return true;
  } else {
    c = code->textCursor();
    c.movePosition(QTextCursor::Start);
    code->setTextCursor(c);  
    c = code->textCursor();
    c = code->document()->find(sSearch, c);
    if (!c.isNull()){
      code->setTextCursor(c);  
      return true;
    }
  }
  return false;
}

void Q7BCodeView::PerformReplace()
{
}

bool Q7BCodeView::Save()
{  
  QFile f(sFilename);
  if (!f.open(QIODevice::WriteOnly )){
    return false;
  } else {
    QTextStream t(&f);
    
    t.setCodec("UTF-8");
    t.setAutoDetectUnicode(true);
    t.setGenerateByteOrderMark(true);

    QString s = code->toPlainText();
    t << s;
    f.close();
    
  }

  return true;
}

bool Q7BCodeView::Load(const QString & _sFilename)
{  

    QFile f(_sFilename);
    if (!f.open(QIODevice::ReadOnly)){
     //  QMessageBox::information(this, "(!f.open(QIODev", "");
      //QMessageBox::information(this, qApp->applicationName(), QString("Could not read from %1").arg(_sFilename));
      return false;
    }

	    QTextStream t(&f);
      
      t.setCodec("UTF-8");
      t.setAutoDetectUnicode(true);
      t.setGenerateByteOrderMark(true);

      

	    QString s = t.readAll();
      s = s.replace("\r", "");
	    f.close();

      //if (!filename.endsWith(".kbasic", Qt::CaseInsensitive) && !filename.endsWith(".kbasic_class", Qt::CaseInsensitive)) setWindowIcon(kbasicIcon(kbasicPath("ide/PROJECT_NEW_MODULE.png")));


  if (!s.isEmpty()){
   // QMessageBox::information(this, "(!s.isEmpty()", "");
  //  QMessageBox::information(this, ")", code->toPlainText());
    code->setPlainText(s);  
  }

  code->document()->setModified(false);
  sFilename = _sFilename;
  //QMessageBox::information(this, "QtBasic", "");
  RefreshBrowser();
  //QMessageBox::information(this, "!!!!!!!!!!!!", "");

  //code->focusInEvent(0);


  return true;
}


void Q7BCodeView::setCurrentDebugPosition(int nLine)
{
 
  int nn = nCurrentDebugPosition;
  nCurrentDebugPosition = 0;

  if (nn != 1){
    this->GotoLine(1);
    this->GotoLine(nn);
  } else {
    this->GotoLine(2);
    this->GotoLine(nn);
  }

  nCurrentDebugPosition = nLine;

 

  if (nn != 1){
    this->GotoLine(1);
    this->GotoLine(nn);
  } else {
    this->GotoLine(2);
    this->GotoLine(nn);
  }
  

 
}

void Q7BCodeView::setUnsetBreaktpoint(int nLine)
{
  QTextBlock block = code->document()->findBlockByLineNumber(nLine);

  if (block.isValid()){
    aBreakpoint *ud = (aBreakpoint*)block.userData();
    if (ud && ud->nBreakpointLine > 0){
      block.setUserData(new aBreakpoint(0));
    } else {
      block.setUserData(new aBreakpoint(nLine));
    }
  }
  
  int nn = this->getCurrentLine();
  if (nn != 1){
    this->GotoLine(1);
    this->GotoLine(nn);
  } else {
    this->GotoLine(2);
    this->GotoLine(nn);
  }

  
  
       


  
}

QStringList Q7BCodeView::getAllBreakpoints()
{
  QStringList l;
  for (int i = 0; i < code->document()->lineCount(); i++){
    QTextBlock block = code->document()->findBlockByLineNumber(i);

    if (block.isValid()){
      aBreakpoint *ud = (aBreakpoint*)block.userData();
      if (ud && ud->nBreakpointLine > 0){
        l << QString("%1").arg(ud->nBreakpointLine);
      }
    }

  }
  return l;
  
}



void Q7BCodeView::closeEvent( QCloseEvent *e)
{
  
  
  
  e->accept();

  
    //QMdiSubWindow *mdis = qobject_cast<QMdiSubWindow *>(parentWidget());
    
 // }

  QFrame::closeEvent(e);
  
  //if (EXTERN_my_parserwindow) EXTERN_my_parserwindow->refreshProject(this->getFilename());

}





int Code::lineNumberAreaWidth()
{
  if (Q7B_bShowLineNumbers == false) return 0;

    int digits = 1;
    int max = qMax(1, blockCount());
    while (max >= 10) {
        max /= 10;
        ++digits;
    }

    int space = 3 + fontMetrics().width(QLatin1Char('9')) * digits;

    return space;
}



//![slotUpdateExtraAreaWidth]

void Code::updateLineNumberAreaWidth(int )
{ 
  if (Q7B_bShowLineNumbers == false) return;

    setViewportMargins(lineNumberAreaWidth(), 0, 0, 0);
}



//![slotUpdateRequest]

void Code::updateLineNumberArea(const QRect &rect, int dy)
{
  if (Q7B_bShowLineNumbers == false) return;

    if (dy)
        lineNumberArea->scroll(0, dy);
    else
        lineNumberArea->update(0, rect.y(), lineNumberArea->width(), rect.height());

    if (rect.contains(viewport()->rect()))
        updateLineNumberAreaWidth(0);
}



//![resizeEvent]

void Code::resizeEvent(QResizeEvent *e)
{
    QPlainTextEdit::resizeEvent(e);
    if (Q7B_bShowLineNumbers){

      QRect cr = contentsRect();
      lineNumberArea->setGeometry(QRect(cr.left(), cr.top(), lineNumberAreaWidth(), cr.height()));
    }
}



//![cursorPositionChanged]




//![extraAreaPaintEvent_0]

void Code::lineNumberAreaPaintEvent(QPaintEvent *event)
{
  if (Q7B_bShowLineNumbers == false) return;

    QPainter painter(lineNumberArea);
    painter.fillRect(event->rect(), Q7B_bDefaultSyntaxHighlighting ? Qt::lightGray : Q7B_background.darker(150));



//![extraAreaPaintEvent_1]
    QTextBlock block = firstVisibleBlock();
    int blockNumber = block.blockNumber();
    int top = (int) blockBoundingGeometry(block).translated(contentOffset()).top();
    int bottom = top + (int) blockBoundingRect(block).height();


//![extraAreaPaintEvent_2]
    painter.setPen(Q7B_bDefaultSyntaxHighlighting ? Qt::black : Q7B_foreground);
    while (block.isValid() && top <= event->rect().bottom()) {
        if (block.isVisible() && bottom >= event->rect().top()) {
            QString number = QString::number(blockNumber + 1);
            painter.drawText(0, top, lineNumberArea->width(), fontMetrics().height(),
                             Qt::AlignRight, number);
        }

        block = block.next();
        top = bottom;
        bottom = top + (int) blockBoundingRect(block).height();
        ++blockNumber;
    }
}