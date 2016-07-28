
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
 

#ifndef GLOBAL_H
#define GLOBAL_H



#define Q7BASIC

//#define DROIDBASIC



#include <QtWidgets>




#ifdef Q_OS_WIN32
#elif defined Q_WS_MAC
#elif defined Q_WS_X11
#endif



extern QMap<QString, QString> CONFIG;

extern int StartMeUp(int argc, char *argv[]); 




class Scanner
{
public:

static QStringList scan(QString s, bool *bError, QString *sError, int *nErrorLine);

};


class _statement
{
public:
  QString id;
  QVariant value;
  QVariant value2;
  QList<_statement> list;
  bool bReturn;
};


#define _statements QList<_statement>

#define DEFAULTTYPE "id"


#define SLOTESCAPE QString("Q7B_")
#define PREFIX QString("Q7B_")
#define DEFAULTNAME "Q7B"
#define DEFAULTCLASS "QObject"

#define Q7B_MAX_ARRAYDIM 4

class _array
{
public:
  _array()
  {
    nCount = 0;
    bEmpty = false;
  }
  _statements Statements;
  _statements Statement[Q7B_MAX_ARRAYDIM];
  int nCount;
  bool bEmpty;

  bool isValid()
  {
    return bEmpty == true || nCount > 0;
  }
};

struct _argument
{
  QString sNamedAs;
  QString sName;
  QString sType;
  bool bIsPointer;
  _array Array;
};

class _label
{ 
public:
  
_label(const QString & _sName, const int & _nLine)
{
  sName = _sName;
  nLine = _nLine;
}

  QString sName;
  int nLine;

bool operator==(const _label & l)
{
  return sName == l.sName;
}

};

class _variableconstant
{
public:
_variableconstant()
{
  nLine = 0;
  nBlock = 0;
  bOutlet = false;
  bConstant = false;
  bAlloc = false;
}

  QString sFileName;
  int nLine;

  QString sPublicPrivateGlobalLocal;
  QString sName;
  QString sType;

  int nBlock; 

  bool bAlloc;
  bool bOutlet;
  bool bConstant;

  _array Array;
  _array ArrayAccess;

};

class _subfunction
{
public:
  _subfunction()
  {
      bLocalLoop = false;
      bExitFunctionUsed = false;
      bCallAble = false;
      bProperty = false;
      bStatic = false;

      bDeclare = false;
  }

  QString sFileName;

  QString sPublicPrivateGlobal;
  QString sSubFunctionIBActionActionSignalEventDelegateSlot; 
  QString sName;
  QString sType;
  _array Array; 

  QList<_argument>Arguments; 
  _statements Statements; 

  QList<_variableconstant>VariablesConstants; 

  QList<_label>Labels;
  QList<_label>GoTos;  
  
  bool bProperty;  
  bool bLocalLoop;
  bool bExitFunctionUsed;
  _variableconstant ExitFunctionVariable;
  bool bCallAble;
  bool bStatic;

  QString sDeclareAlias;
  QString sDeclareClass;
  QString sDeclareNative;
  bool bDeclare;


};

 
class _expressions
{
public:
_expressions()
{
  bReturn = true;
  bDeclareUsed = false;
  bAlloc = false;
}

_expressions(const QString & _sType, const bool & _bReturn)
{
  sType = _sType;
  bReturn = _bReturn;
}

_expressions(const bool & _bReturn)
{
  bReturn = _bReturn;
}

  _statements Statements;
  QString sType;
  bool bAlloc;
  bool bReturn;
  QString sParserErrorDescription;
  bool bDeclareUsed;
};

struct _declare
{
  QStringList EnumValues;
  QStringList Const;
};

struct _enumeration
{
  QString sPublicPrivateGlobal;
  QString sFileName;
  QString sName;

  QStringList EnumNames;
  QList<_statements> EnumValues;
};

struct _type
{
  QString sPublicPrivateGlobal;
  QString sFileName;
  QString sName;

  QStringList   Names;
  QStringList   Types;
  QList<_array> Arrays;
  QList<int>    Sizes;
  QStringList   Encodings;
};

struct _comment
{     
  QString _ARGUMENTS;
  QString _RETURN;
  QString _GROUP;
  QString _SEEALSO;
  QString _ALIAS;
  QString _COMMENT;
  QString _EXAMPLE;
  QString _CATEGORY;
  QString _OLDBASIC;  
  QString _Isfake;
};

#define _DONE_ return true;

#define _BEGIN_ int nSaveTokenPos = Me.nTokenPos; 
#define _BEGIN2_ nSaveTokenPos = Me.nTokenPos;
#define _END_ Me.nTokenPos = nSaveTokenPos; return false;
#define _END2_ Me.nTokenPos = nSaveTokenPos; 


//#define _END3_ Me.nTokenPos = nSaveTokenPos3; 



class _parser_me
{     
public:
  _parser_me()
  {
    bError = false;
    nLine = 1;
    nBlock = 0;
    nTokenPos = 0;

    bOnlyFunction = false;

    bVB6MsgBox = false;
    bCheckArrayDimension = true;
    bBlockArrayParsingDueToParseReDim = false;
    
  }

  bool isLocal(){ return !SubFunction.sName.isEmpty(); }

  bool bError;
  bool bOnlyFunction;
 

  _subfunction SubFunction;

  int nLine;
  int nTokenPos;
  int nBlock;
  int nPass;  
  QString sFileName;
  
  QString sVarNameForOnAction;  

  QString sPublicPrivateGlobal;

  QMap<QString, QString> sSourceCode;
  QMap<QString, QStringList> tokens;

  QMap<QString, QString> sFileNameForClass;

  QMap<QString, QStringList> sOutletsName;
  QMap<QString, QStringList> sOutletsType;
  QMap<QString, QStringList> sOutletsSet;
  
  QMap<QString, QStringList> sOutletsCode;

  QStringList files;
  QStringList uiCompileFiles;
  QStringList uiCompileFiles2;
  QStringList uiRuntimeFiles;
  QStringList uiRuntimeFiles2;

  

  // *** Declare ************************************************************

  QString sCPPProHeaderFiles;

  
  QMap<QString, QString> DeclareClasses;
  QMap<QString, QString> DeclareClassesFileName;
  QMap<QString, QString> DeclareClassesImport;
  QMap<QString, QStringList> DeclareClassesDeclaredInClass; 

  // classname   subname
  QMap<QString, QMap<QString, _subfunction> > DeclareSignals;
  QMap<QString, QMap<QString, _subfunction> > DeclareEvents;
  QMap<QString, QMap<QString, _subfunction> > DeclareDelegates;
  QMap<QString, QMap<QString, _subfunction> > DeclareSubsFunctions;
  QMap<QString, QMap<QString, _subfunction> > DeclareSubsFunctionsSignalsEventsDelegates;
  
  QMap<QString, _subfunction> DeclareDelegatesList;


  QMap<QString, QString> DeclareEnums;
  QMap<QString, QString> DeclareEnumTypes;
  QMap<QString, QStringList> DeclareEnumConsts;  
  QMap<QString, QString> DeclareEnumConsts2;  

  QMap<QString, QString> DeclareConstValues;
  QMap<QString, QString> DeclareConstTypes;

  
  //QList<_subfunction> DeclareEventsFlat;
  

  // ************************************************************
  
  bool bVB6MsgBox;
  bool bCheckArrayDimension;
  bool bBlockArrayParsingDueToParseReDim;

  QString sParsingPreviousValidEnumName;

  
    
  //   ClassName SuperClassName
    QMap<QString, QString>                 			Classes;

    
    QMap<QString, QMap<QString, _variableconstant> > VariablesConstants;

    
    QMap<QString, _variableconstant> GlobalVariablesConstants;  

    
    QMap<QString, QMap<QString, _subfunction> > SubsFunctions;

    
    QMap<QString, _subfunction> GlobalSubsFunctions;

    
    QMap<QString, QMap<QString, _type> > Types;

    
    QMap<QString, _type> GlobalTypes;

    
    QMap<QString, QMap<QString, _enumeration> > Enums;

    
    QMap<QString, _enumeration> GlobalEnums;


    
    QMap<QString, _statements> ClassStatements;

  
    //   ClassName child_classes
    


    //QMap<QString, QStringList> sub_classes;
    QMap<QString, QStringList> super_classes;

    
    QMap<QString, QString>                 			classes;
    
    QMap<QString, QMap<QString, QString> > 			classes_properties;
    
    QMap<QString, QMap<QString, QStringList> > 	classes_subsfunctions;
    QMap<QString, QMap<QString, QStringList> > 	classes_events;
    QMap<QString, QMap<QString, QStringList> > 	classes_signals;
    QMap<QString, QMap<QString, QStringList> > 	classes_delegates;
    QMap<QString, QMap<QString, QString> >    	classes_declare_events_signals_delegates;
    QMap<QString, QMap<QString, QString> >    	classes_declarecast_events_signals_delegates;
    QMap<QString, QMap<QString, QString> >    	classes_declarecode_events_signals_delegates;
    QMap<QString, QMap<QString, QString> >    	classes_declaretype_events_signals_delegates;

    
    QMap<QString, QString>                 			objects;
    
    QMap<QString, QMap<QString, QString> > 			objects_properties;
    
    QMap<QString, QMap<QString, QStringList> > 	objects_subsfunctions;
    QMap<QString, QMap<QString, QStringList> > 	objects_events;
    QMap<QString, QMap<QString, QStringList> > 	objects_signals;
    QMap<QString, QMap<QString, QStringList> > 	objects_delegates;
    QMap<QString, QMap<QString, QString> >    	objects_declare_events_signals_delegates;
    QMap<QString, QMap<QString, QString> >    	objects_declarecast_events_signals_delegates;
    QMap<QString, QMap<QString, QString> >    	objects_declarecode_events_signals_delegates;
    QMap<QString, QMap<QString, QString> >    	objects_declaretype_events_signals_delegates;
      
    
    QMap<QString, QString>                      controls;
    
    QMap<QString, QMap<QString, QString> > 			controls_properties;
    
    QMap<QString, QMap<QString, QStringList> > 	controls_subsfunctions;
    QMap<QString, QMap<QString, QStringList> > 	controls_events;
    QMap<QString, QMap<QString, QStringList> > 	controls_signals;
    QMap<QString, QMap<QString, QStringList> > 	controls_delegates;
    QMap<QString, QMap<QString, QString> >    	controls_declare_events_signals_delegates;
    QMap<QString, QMap<QString, QString> >    	controls_declarecast_events_signals_delegates;
    QMap<QString, QMap<QString, QString> >    	controls_declarecode_events_signals_delegates;
    QMap<QString, QMap<QString, QString> >    	controls_declaretype_events_signals_delegates;
      
    QStringList 										            cppobjcjava_keywords;
    QStringList 										            keywords;
    QStringList 										            types;
    QStringList 										            operators;

    
    QMap<QString, QStringList> 							    subsfunctions;
    QMap<QString, bool> 							          subsfunctions_inits;
    QMap<QString, QString> 							        subsfunctions_aliasrealname;

    
    QMap<QString, QList<QVariant> > 						constants;


  

  QMap<QString, _comment> 		comments_subsfunctions;
  QMap<QString, _comment> 		comments_constants;
  QMap<QString, _comment> 		comments_operators;
  QMap<QString, _comment> 		comments_types;
  QMap<QString, _comment> 		comments_keywords;
  QMap<QString, _comment> 		comments_cppobjb_keywords;

  QMap<QString, QMap<QString, _comment> > 		comments_objects;
  QMap<QString, QMap<QString, _comment> > 		comments_classes;
  QMap<QString, QMap<QString, _comment> > 		comments_controls;


};

class Parser
{
public:



static bool runCompiler();

static bool build();




static void createDocumentation(); 



static QStringList FindFile(QString Path, QStringList NameFilter, bool bRecursiveCall = false, bool bbb = false);

static void createCompilerFiles();

static void createRuntimeFiles(); 

static void createTxtFiles(); 




static bool isQtDesignerClassFileName(QString s){ 
  return false 
    || s.endsWith("QMainWindow.q7b")
    || s.endsWith("QWidget.q7b")
    || s.endsWith("QDialog.q7b")
    || s.endsWith("QDockWidget.q7b")
    || s.endsWith("uiClass.q7b")
    ;
}

static bool isTemplateType(QString s){ 
  return false 
    || s == ("QList") 
    ;
}

static bool isAndroidLayoutClassFileName(QString s){ 
  return false 
    || s.endsWith(".Activity.droidbasic")
    ;
}



static bool isStringType(QString s){ return s == "String" || s == "QString"; }



  static bool isGlobalFile(QString s){ return s.endsWith("Global.QObject.q7b"); }

  static bool isSourceFile(QString s){ return s.endsWith(".q7b"); }




static bool isMainWindowFile(QString s){ return s.endsWith("MainWindow.QMainWindow.q7b"); }

static bool isSystemTrayIcon(QString s){ return s.endsWith("SystemTrayIcon.QSystemTrayIcon.q7b"); }

static bool isApplication(QString s){ return s.endsWith("Application.QApplication.q7b"); }

static bool isFileSuperClassValid(QString s);

static bool isCppObjcKeyword(QString s, QString sErrorBeginning)
{ 
  bool b = Me.cppobjcjava_keywords.contains(s); 
  if (b){

    error(sErrorBeginning + " '" + s + "' is not allowed, because it is equal to an C++ keyword");

  }
  return b;
}



static QString convertDeclareType(QString sCast, int bConvertDirectionToC = 0);

static bool parseDeclareSubFunction(QString sSubFunctionIBActionActionSignalEventDelegateSlot, bool bStatic);

static void addDeclareSubFunction(QString sSubFunctionIBActionActionSignalEventDelegateSlot, QString sDeclareAlias, QString sName, QString sFileName, QString sDeclareClass, QString sType, bool bStatic, QString sDeclareNative);



static void addDeclareEnum(QString sName, QString sType, QStringList EnumNames);



static void addDeclareConst(QString sName, QString sType);


static bool parseDeclareCall(bool bDelegate, bool bEvent, bool bSignal);



// *** Helper.cpp

static void Write_To_stdout(const QString & s);

static void Write_To_stderr(const QString & s);

static bool projectContainsClass(QString s);

static void error(QString s, bool bDetailedInfo = true);

static void CopyOverwrite(QString s, QString s2);

static QString format(QString s);

static QString getPath(const QString & s);

static QString getFileName(const QString & s);

static QString getBaseName(const QString & s);

static QString getExtension(const QString & s);

static QString getSignalOutletName(const QString & s);

static QString getSignalSignalName(const QString & s);

static QString getFileNameForClass(const QString & s);

static QString getClassName(const QString & s);

static QString getSuperClassName(const QString & s);

static QString getSuperClassNameOfType(const QString & sClass);

static QString LoadFile(const QString & sFile);

static QStringList LoadFileAsStringList(const QString & sFile);

static void SaveFile(const QString & sFile, const QString & s, bool bUTF8);

static void SaveFileAsStringList(const QString & sFile, const QStringList & sl);

static bool shellCopy(QString a, QString b);

static bool copyDir(const QString& from, const QString& to, bool bCopyFilesEvenExists = true, QStringList ignoreFilter = QStringList(), bool bFirst = true, QString ignoreFilterEndsWith = "", QString ignoreFilterEndsWith2 = "");
  
static void copyResourceFolder(QString & sResourceFiles, QString sPath, QString sPathTo, QString sPrefix);

static bool copyIfNeeded(QString s, QString s2, bool bContentOnly = false);

static bool removeDirectory(QDir aDir, bool bFollowLinks = true);



// *** Statements.cpp

static bool parseStatements(_statements & ReturnStatement, bool bOnlyOneStatement = false);



static void AddFunction(QString sName, QString sArguments, QString sType, QString sGroup, QString sSeeAlso, QString sComment, QString sExample, bool bAppend = false);

static void CreateListOfSubsFunctions();

static bool parseBuiltinSubFunction(_expressions & Expression);

static void CreateListOfInitFunctions();



static void CreateListOfConstants();

static bool parseBuiltinConstant(_expressions & ReturnExpression);



static void CreateListOfKeywords();



static void CreateListOfcppobjcjava_keywords();



static void CreateListOfTypes();



static void CreateListOfObjects();



static void CreateListOfControls();



static void CreateListOfClasses();

static bool parseBuiltinClassOrControlOrObjectHelper(_expressions & ReturnExpression, bool bAssignment, _variableconstant Variable, _statements VariableStatements, QString sClass, QString sProcedureOrProperty, bool *bFakeAlreadyHandled, bool bFirst);

static bool parseBuiltinClassOrControlOrObject_PropertyOrProcedure(_expressions & ReturnExpression, _variableconstant Variable, _statements VariableStatements, bool *bFakeAlreadyHandled, bool bAssignment = false);

static void doComment
(  
  QString & CLASS,
  QString & SUPERCLASS,
  QString & SUBFUNCTION,
  QStringList & lAlias ,
  QString & sType,
  QStringList & l,

  QString & sGROUP,
  QString & sSEEALSO,
  QString & sCOMMENT,
  QString & sCLASSCOMMENT,
  QString & sEXAMPLE,

  bool & bProperty,
  bool & bEvent,
  bool & bSignal,
  bool & bDelegate,

  QMap<QString, QMap<QString, _comment> >     & comments_classes,
  QMap<QString, QMap<QString, QString> > 			& classes_properties,
  QMap<QString, QMap<QString, QStringList> > 	& classes_subsfunctions,
  QMap<QString, QMap<QString, QStringList> > 	& classes_events,
  QMap<QString, QMap<QString, QStringList> > 	& classes_signals,
  QMap<QString, QMap<QString, QStringList> > 	& classes_delegates,

  QMap<QString, QMap<QString, QString> >    	& classes_declare_events_signals_delegates,
  QMap<QString, QMap<QString, QString> >    	& classes_declarecast_events_signals_delegates,
  QMap<QString, QMap<QString, QString> >    	& classes_declarecode_events_signals_delegates,
  QMap<QString, QMap<QString, QString> >    	& classes_declaretype_events_signals_delegates,
  
  QString & sDeclare,
  QString & sCast,
  QString & sCode
)
{
  int i = 0;

  if (SUBFUNCTION == "ShouldChangeText"){
    SUBFUNCTION = SUBFUNCTION;
  }

  QString CLASS2;


  CLASS2 = CLASS;

  if (classes_properties.contains(CLASS) && classes_properties[CLASS].contains(SUBFUNCTION)) return; 

  if (!bProperty){

    l.prepend(sType);    
    
    lAlias.sort();
    QString sAlias;
    if (lAlias.count() > 0){
      sAlias = lAlias.join(",")+","+SUBFUNCTION;
    }

    do {

      if(i==0){
        sGROUP=comments_classes[CLASS][SUBFUNCTION]._GROUP;
        sCOMMENT=comments_classes[CLASS][SUBFUNCTION]._COMMENT;
        sEXAMPLE=comments_classes[CLASS][SUBFUNCTION]._EXAMPLE;
      } 

      comments_classes[CLASS][SUBFUNCTION]._GROUP=sGROUP;
      comments_classes[CLASS][SUBFUNCTION]._SEEALSO=sSEEALSO;
      comments_classes[CLASS][SUBFUNCTION]._COMMENT=sCOMMENT;
      comments_classes[CLASS][SUBFUNCTION]._EXAMPLE=sEXAMPLE;      

      comments_classes[CLASS][SUBFUNCTION]._RETURN=sType;

      QStringList ll = l; ll.removeFirst();
      comments_classes[CLASS][SUBFUNCTION]._ARGUMENTS=ll.count() > 0 ? ll.join(", ") : "";

      if(bEvent)classes_events[CLASS2][SUBFUNCTION]=l;
      else if(bSignal)classes_signals[CLASS2][SUBFUNCTION]=l;
      else if(bDelegate)classes_delegates[CLASS2][SUBFUNCTION]=l;
      else classes_subsfunctions[CLASS][SUBFUNCTION]=l;

      if (!sDeclare.isEmpty() || !sCode.isEmpty()){
        classes_declare_events_signals_delegates[CLASS2][SUBFUNCTION] = sDeclare;
        classes_declarecast_events_signals_delegates[CLASS2][SUBFUNCTION] = sCast;
        classes_declarecode_events_signals_delegates[CLASS2][SUBFUNCTION] = sCode;
        if (bEvent) classes_declaretype_events_signals_delegates[CLASS2][SUBFUNCTION] = "Event";
        else if (bSignal) classes_declaretype_events_signals_delegates[CLASS2][SUBFUNCTION] = "Signal";
        else if (bDelegate) classes_declaretype_events_signals_delegates[CLASS2][SUBFUNCTION] = "Delegate";
      }
      
      comments_classes[CLASS][SUBFUNCTION]._ALIAS=sAlias;
      
      if(bEvent) comments_classes[CLASS][SUBFUNCTION]._CATEGORY="Event";
      else if(bSignal) comments_classes[CLASS][SUBFUNCTION]._CATEGORY="Signal";      
      else if(bDelegate) comments_classes[CLASS][SUBFUNCTION]._CATEGORY="Delegate";
      else comments_classes[CLASS][SUBFUNCTION]._CATEGORY="SubFunction";

      if(lAlias.size()>0&&i<lAlias.size())SUBFUNCTION=lAlias.at(i);
      
    } while(i++<lAlias.size());

    i=0; sType="";

    bProperty=false;bEvent=false;bSignal=false;bDelegate=false;lAlias.clear();
  } else {
    classes_properties[CLASS][SUBFUNCTION]=sType;

    comments_classes[CLASS][SUBFUNCTION]._RETURN=sType;
    comments_classes[CLASS][SUBFUNCTION]._SEEALSO=sSEEALSO;
    comments_classes[CLASS][SUBFUNCTION]._COMMENT=sCOMMENT;
    comments_classes[CLASS][SUBFUNCTION]._EXAMPLE=sEXAMPLE;      
   
    comments_classes[CLASS][SUBFUNCTION]._CATEGORY="Property";
    bProperty=false;
  }
  

  l.clear();
  sCOMMENT = "";
  sSEEALSO = "";
  sEXAMPLE = "";
  sCLASSCOMMENT = "";
}


  
static bool parseObjectIdentifier(_statements & ReturnStatements, _variableconstant & Variable);

static bool parseProcedure_Call(_expressions & Expression, QString sClass = "", QString sIdentifier = "", QString *sType = 0, bool bPrependSelf = true);

static QStringList SubFunction(QString s = "");

static bool parseBuiltin_Procedure(QString sIdentifier, QStringList & Arguments, _expressions & Expression);

static bool parseBuiltinClassControlObject_Procedure(QString *sProcedure, _expressions & Expression, QMap<QString, QStringList> & procedures);

static bool parse(QString sFileName);

static bool parseLocalConst(_statements & Statements);

static bool parseConst(_statements & Statements, bool bAddLocalConstant, bool bDeclare);

static bool parseLocalDim(_statements & Statements);

static bool parseDimOutlet(_statements & ReturnStatement, bool bAddLocalVariablem, bool bDeclare);

static bool parseSubFunctionDimConstOutletPropertyDeclare(_expressions & Expression);

static bool parseMe(_statements & ReturnStatements);

static bool parseType(_expressions & Expression, _statements & VariableStatements, _array VariableArray, _array TypeArray, QString sIdentifier = "", QString sIdentifier2 = "");

static bool parseEnum(_expressions & Expression, QString sIdentifier = "", QString sIdentifier2 = "");

static bool parseProperty(_statements & ReturnStatements, _variableconstant & Variable, QString sClass, bool bReturn);

static bool parseVariable(_statements & ReturnStatements, _variableconstant & Variable, _statements & VariableStatements, QString sClass = "", bool bReturn = false, bool bStandaloneVariableAllowed = true);

static bool parseQObjectPropertyOrKVC(QString *sQObjectProperty);

static bool existsUDFType(QString sType);



static bool existsAllType(QString sType, QString *sReturnType = 0);

static bool parseAllType(QString *sType, QString *sTypeL, QString *sTypeR, _type *Type, bool bLookUpOnly = false);



static bool parseVariableOrObjectIdentifierOrProcedureCall(_statements & ReturnStatements, _variableconstant & Variable, bool bAssignment, bool bReturn);

static bool autoInitForType(_statements & ReturnStatements, QString sVariable, QString sClass, QString sTypeL, QString sTypeR, bool *bType, _array Array, bool bMustMatch, bool *bParseBrackets);

static bool typeArrayInit(_statements & ReturnStatements, QString sVariable, _type Type, QString sType, _array Array);



static QString getToken(int nOffset = 0);

static bool peekReturn(int nOffset);

static bool peekIdentifier(int nOffset, QString s = "");

static bool peekTerm(QString s, int nOffset = 0);

static bool parseTerm(QString s, bool bAllowSingleColon = false);

static bool parseTerm(QString *s);

static bool parseUntil(QString s, QString s2 = "", QString *s3 = 0);

static bool parseUntilNextProcecureHelper();

static bool parseUntilNextProcecure(QString s, QString s2 = "");

static bool parseString(QString *sString);

static bool parseNumber(QString *sNumber);

static bool parseReturn(bool bColonOnly = false);

static bool parseComment();

static void parseMultiLine();

static bool parseIdentifier(QString *sIdentifier);

static bool parseIdentifier(QString sIdentifier);

static _array parseArrayDimReDim(bool bEmptyAllowed);




static bool parseExpression(_expressions & Expression, bool bAllowNamedArguments = true);

static bool parseExpressionIntegerFloatDecimal(QString sExpressionType, QString sDummy);

static bool parseExpressionBoolean(_expressions & Expression);
static bool parseExpressionInteger(_expressions & Expression);
static bool parseExpressionFloat(_expressions & Expression);
static bool parseExpressionString(_expressions & Expression);
static bool parseExpressionid(_expressions & Expression);
static bool parseExpressionList(_expressions & Expression);
static bool parseExpressionDictionary(_expressions & Expression);
static bool parseExpressionData(_expressions & Expression);
static bool parseExpressionDecimal(_expressions & Expression);
static bool parseExpressionDateTime(_expressions & Expression);

static bool parseExpressionQWidget(_expressions & Expression);

static bool parseExpressionRect(_expressions & Expression);
static bool parseExpressionPoint(_expressions & Expression);
static bool parseExpressionLong(_expressions & Expression);
static bool parseExpressionByte(_expressions & Expression);
static bool parseExpressionSingle(_expressions & Expression);
static bool parseExpressionDouble(_expressions & Expression);
static bool parseExpressionNSImage(_expressions & Expression);

static bool parseExpressionNSView(_expressions & Expression);
static bool parseExpressionNSWindow(_expressions & Expression);
static bool parseExpressionNSDrawer(_expressions & Expression);
static bool parseExpressionNSMenuItem(_expressions & Expression);

static bool parseCondition(_expressions & Expression);




static bool parseClassConst(_statements & Statements, bool bDeclare);

static bool parseClassDimOutlet(_statements & Statements, bool bDeclare);

static bool parseClass(QString sFileName);



static bool parseFactor(_expressions & ReturnExpression);

static bool parseFactor(_statements & Statements);



static bool parseAssignment(_expressions & Expression);

static bool parseAssignment(_statements & ReturnStatements);



static void CreateListOfOperators();

static bool parseMulDivMod(_expressions & ReturnExpression);

static bool parseAddSub(_expressions & ReturnExpression);

static bool parseExponent(_expressions & ReturnExpression);

static bool parseShift(_expressions & ReturnExpression);

static bool parseComparision(_expressions & ReturnExpression);

static bool parseAnd(_expressions & ReturnExpression);

static bool parseOr(_expressions & ReturnExpression);

static bool parseAndAlso(_expressions & ReturnExpression);

static bool parseOrElse(_expressions & ReturnExpression);



static void addHierarchy(QString sClass, QString sSuperClass);

static QString plainCType(QString sCast);

static bool StringInit(QString l, QString r);

static QString convertType(QString s);

static bool checkClassHierarchy(QString l, QString r);

static bool typeCompatible(QString l, QString r, QString o = "");

static void addEnumType(QString sFileName, QString sName, QString sPublicPrivateGlobal, QStringList EnumNames, QList<_statements> & EnumValues);

static void addTypeType(QString sFileName, QString sName, QString sPublicPrivateGlobal, QStringList names, QStringList types, QList<_array>arrays, QList<int> sizes, QStringList encodings);

static void addSubFunction(QString sSubFunctionIBActionActionSignalEventDelegateSlot, QString sFileName, QString sName, _statements Statements, QString sPublicPrivateGlobal, QList<_argument> Arguments, QString sType, _array & Array);

static void addLocalVariable(QString sName, QString sType, bool bConstant, _statements Statement, _array Array, bool bStatic);

static void addVariable(QString sName, QString sType, QString sPrivatePublicGlobal, bool bConstant, bool bOutlet, _array & Array, bool bSet);




static _parser_me Me;

};




struct _compiler_me
{     
public:
  _compiler_me()
  {   
  }

  QString sFileName;

  _subfunction SubFunction;

  QMap<QString, QString> GCC_sInterface;
  QMap<QString, QString> GCC_sImplementation;

  QMap<QString, QStringList> sReferences;

  QMap<QString, QString> OBJB_allFrameworks;

};


class Compiler
{
public:

static QString decode(_statements & _AllStatements, bool bFirst = true, QString *s2ndOutput = 0, QString *s3ndOutput = 0);

static bool compile(QString sFileName);

static QString decode_function(_statements & AllStatements, QString sSubFunctionIBActionActionSignalEventDelegateSlot = "");


static void addReference(QString sFileName);

static void addReferenceToClass(QString sFileName);

static  QString getDeclare(QString sOutletType, QString sSignalName, _subfunction ForSubFunction, QString *sDeclare, QString *sCast, QString *sCode, _subfunction *SubFunction);


static _compiler_me Me;


static _statements pushExpression(_statements l)
{
  if (l.size() > 0 && l.at(0).id == "Expression"){     
    return l;
  }

  _statement v;

  v.id = "Expression";
  v.list = l;

  _statements vv; vv << v; return vv;    
}

static bool popExpression(_statements & v, _statements *l)
{
  QString sdf;
  if (v.size() > 0){
    sdf = v.at(0).id;
  }

  if (v.size() > 0 && v.at(0).id == "Expression"){     

    *l = v.at(0).list;

    v.removeFirst();
    return true;
  }
  return false;  
}









static _statements pushMe()
{
  _statement v;

  v.id = "Me";
 // v.value = sClass;

  _statements vv; vv << v; return vv;    
}

static bool popMe(_statements & v)
{
  if (v.size() > 0 && v.at(0).id == "Me"){
    
   
    v.removeFirst();

    return true;
  }

  return false;
}

static _statements pushObject(QString b)
{
  _statement v;

  v.id = "Object";
  v.value = b;

  _statements vv; vv << v; return vv;    
}

static bool popObject(_statements & v, QString *b)
{
  if (v.size() > 0 && v.at(0).id == "Object"){
   

    *b = v.at(0).value.toString(); v.removeFirst();
    return true;
  }

  return false;
}

static _statements pushAlloc(QString b)
{
  _statement v;

  v.id = "Alloc";
  v.value = b;

  _statements vv; vv << v; return vv;
}

static bool popAlloc(_statements & v, QString *b)
{
  if (v.size() > 0 && v.at(0).id == "Alloc"){
   

    *b = v.at(0).value.toString(); v.removeFirst();
    return true;
  }

  return false;
}

static _statements pushAllocInit(QString b)
{
  _statement v;

  v.id = "AllocInit";
  v.value = b;

  _statements vv; vv << v; return vv;
}

static bool popAllocInit(_statements & v, QString *b)
{
  if (v.size() > 0 && v.at(0).id == "AllocInit"){
   

    *b = v.at(0).value.toString(); v.removeFirst();
    return true;
  }

  return false;
}

static _statements pushObjectRef(QString b, _statements l)
{
  _statement v;

  v.id = "ObjectRef";
  v.value = b;
  _statements vv; vv << v; 

  vv << pushExpression(l);

  return vv;    
}

static bool popObjectRef(_statements & v, QString *b)
{
  if (v.size() > 0 && v.at(0).id == "ObjectRef"){
   

    *b = v.at(0).value.toString(); 

   
   // bool b = popExpression2(q, l);
    v.removeFirst();
    return b;
  }

  return false;
}

static _statements pushObjectRefDirectCast(QString b, _statements l)
{
  _statement v;

  v.id = "ObjectRefDirectCast";
  v.value = b;
  _statements vv; vv << v; 

  vv << pushExpression(l);

  return vv;    
}

static bool popObjectRefDirectCast(_statements & v, QString *b)
{
  if (v.size() > 0 && v.at(0).id == "ObjectRefDirectCast"){
   

    *b = v.at(0).value.toString(); 

   
   // bool b = popExpression2(q, l);
    v.removeFirst();
    return b;
  }

  return false;
}

static _statements pushBoolean(bool b)
{
  _statement v;

  v.id = "Boolean";
  v.value = b;

  _statements vv; vv << v; return vv;    
}

static bool popBoolean(_statements & v, bool *b)
{
  if (v.size() > 0 && v.at(0).id == "Boolean"){
   

    *b = v.at(0).value.toBool(); v.removeFirst();
    return true;
  }

  return false;
}

static _statements pushInteger(qint64 n)
{
  _statement v;

  v.id = "Integer";
  v.value = n;

  _statements vv; vv << v; return vv;    
}

static bool popInteger(_statements & v, qint64 *n)
{
  if (v.size() > 0 && v.at(0).id == "Integer"){
   

    *n = v.at(0).value.toLongLong(); v.removeFirst();
    return true;
  }

  return false;
}

static _statements pushFloat(qreal n)
{
  _statement v;

  v.id = "Float";
  v.value = n;

  _statements vv; vv << v; return vv;    
}

static bool popFloat(_statements & v, qreal *n)
{
  if (v.size() > 0 && v.at(0).id == "Float"){
    

    *n = v.at(0).value.toDouble(); v.removeFirst();
    return true;
  }

  return false;
}


static _statements pushNil()
{
  _statement v;

  v.id = "Nil";

  _statements vv; vv << v; return vv;
}

static bool popNil(_statements & v)
{
  if (v.size() > 0 && v.at(0).id == "Nil"){
    v.removeFirst();

    return true;
  }

  return false;
}

static _statements pushNull()
{
  _statement v;

  v.id = "Null";

  _statements vv; vv << v; return vv;    
}

static bool popNull(_statements & v)
{
  if (v.size() > 0 && v.at(0).id == "Null"){
    v.removeFirst();

    return true;
  }

  return false;
}

static _statements pushIdentifier(QString s)
{
  _statement v;

  v.id = "Identifier";
  v.value = s;
 
  _statements vv; vv << v; return pushExpression(vv);  
}

static bool popIdentifier(_statements & v, QString *s)
{
  if (v.size() > 0 && v.at(0).id == "Identifier"){
   

    *s = v.at(0).value.toString(); v.removeFirst();
    return true;
  }

  return false;
}

static _statements pushString(QString s)
{
  _statement v;

  v.id = "String";
  v.value = s;

  _statements vv; vv << v; return vv;    
}

static bool popString(_statements & v, QString *s)
{
  if (v.size() > 0 && v.at(0).id == "String"){
   

    *s = v.at(0).value.toString(); v.removeFirst();
    return true;
  }

  return false;
}

static _statements pushDecimal(QString s)
{
  _statement v;

  v.id = "Decimal";
  v.value = s;

  _statements vv; vv << v; return vv;    
}

static bool popDecimal(_statements & v, QString *s)
{
  if (v.size() > 0 && v.at(0).id == "Decimal"){
  

    *s = v.at(0).value.toString(); v.removeFirst();
    return true;
  }

  return false;
}




static _statements pushOperator(QString s, _statements l, _statements r)
{
  _statement v;
  
  
  v.id = "Operator";
  v.value = s;
  

  _statements vv; vv << v;
 
  vv << pushExpression(l);
  vv << pushExpression(r);

   return vv;    
}

static _statements pushOperator(QString s, _statements l)
{
  _statement v;

  v.id = "Operator";
  v.value = s;
  
  _statements vv; vv << v;
  vv << pushExpression(l);

 
 // vv << pushExpression(r);

  return vv;    
}

static bool popOperator(_statements & v, QString *s)
{
  
  //QString w = v.at(0).toString();

  if (v.size() > 0 && v.at(0).id == "Operator"){
   

    *s = v.at(0).value.toString(); 
   
    _statements q;

  
  //  if (!popExpression(q, l)) return false;

   
   // if (!popExpression(q, r)) return false;

    v.removeFirst();
    return true;
  }

  return false;
}

static _statements pushBuiltinSubFunctionWithArguments(QString s, bool bReturn, _statements a)
{
  _statement v;

  v.id = "BuiltinSubFunction";
  v.value = s; 
  v.bReturn = bReturn;

  _statements vv; vv << v;
  vv << pushExpression(a);

  return vv;    
}

static _statements pushBuiltinSubFunction(QString s, bool bReturn, _statements a = _statements(), _statements b = _statements(), _statements c = _statements(), _statements d = _statements(), _statements e = _statements(), _statements f = _statements(), _statements g = _statements())
{
  _statement v;

  v.id = "BuiltinSubFunction";
  v.value = s;  
  v.bReturn = bReturn;

  _statements vv; vv << v;

  if (a.size() > 0) vv << pushExpression(a); else goto re;
  if (b.size() > 0) vv << pushExpression(b); else goto re;
  if (c.size() > 0) vv << pushExpression(c); else goto re;
  if (d.size() > 0) vv << pushExpression(d); else goto re;
  if (e.size() > 0) vv << pushExpression(e); else goto re;
  if (f.size() > 0) vv << pushExpression(f); else goto re;
  if (g.size() > 0) vv << pushExpression(g); else goto re;
re:
  return vv;    
}

static bool popBuiltinSubFunction(_statements & v, QString *s, bool *bReturn)
{
  
  //QString w = v.at(0).toString();

  if (v.size() > 0 && v.at(0).id == "BuiltinSubFunction"){
 
//    _statement st = v.at(0);
    *s = v.at(0).value.toString(); 
    *bReturn = v.at(0).bReturn;
    v.removeFirst();
    return true;
  }

  return false;
}

static _statements pushBuiltinObjectProperty(QString sObject, QString sProperty, _statements a = _statements())
{
  _statement v;

  v.id = "BuiltinObjectProperty";
  v.value = sObject;
  v.value2 = sProperty;
 
  _statements vv; vv << v; 

  vv << pushExpression(a);



  return vv;    
}

static bool popBuiltinObjectProperty(_statements & v, QString *sObject, QString *sProperty)
{
 
 // QString w = v.at(0).toString();

  if (v.size() > 0 && v.at(0).id == "BuiltinObjectProperty"){
    

    *sObject = v.at(0).value.toString();
    *sProperty = v.at(0).value2.toString();
    v.removeFirst();
    return true;
  }

  return false;
}

static _statements pushBuiltinObjectProcedure(QString sObject, QString sProcedure, _statements Expression)
{
  _statement v;

  v.id = "BuiltinObjectProcedure";
  v.value = sObject;
  v.value2 = sProcedure;

  _statements vv; vv << v; 

  vv << pushExpression(Expression);

  return vv;    
}

static bool popBuiltinObjectProcedure(_statements & v, QString *sObject, QString *sProcedure)
{
 
 // QString w = v.at(0).toString();

  if (v.size() > 0 && v.at(0).id == "BuiltinObjectProcedure"){
 

    *sObject = v.at(0).value.toString();
    *sProcedure = v.at(0).value2.toString(); 

    v.removeFirst();
    
    return true;//popExpression2(v.at(0).list, a);
  }

  return false;
}

static _statements pushBuiltinClassProperty(QString sClass, bool bReturn, QString sProperty, _statements Object, _statements Expression = _statements())
{
  _statement v;

  v.id = "BuiltinClassProperty";
  v.value = sClass;
  v.value2 = sProperty;
  v.bReturn = bReturn;

  _statements vv; vv << v; 

  vv << pushExpression(Object);
  vv << pushExpression(Expression);

  QString sadf = Compiler::decode(vv);

  return vv;    
}

static bool popBuiltinClassProperty(_statements & v, QString *sClass, bool *bReturn, QString *sProperty)
{
 
//  QString w = v.at(0).toString();

  if (v.size() > 0 && v.at(0).id == "BuiltinClassProperty"){
   

    *sClass = v.at(0).value.toString(); 
    *sProperty = v.at(0).value2.toString(); 
    *bReturn = v.at(0).bReturn;
    v.removeFirst();
    return true;
  }

  return false;
}

static _statements pushBuiltinClassProcedure(QString sClass, bool bReturn, QString sProcedure, _statements Object, _statements a)
{
  _statement v;

  v.id = "BuiltinClassProcedure";
  v.value = sClass;
  v.value2 = sProcedure;
  v.bReturn = bReturn;

  _statements vv; vv << v; 

  vv << pushExpression(Object);
  vv << pushExpression(a);

  return vv;    
}

static bool popBuiltinClassProcedure(_statements & v, QString *sClass, bool *bReturn, QString *sProcedure)
{
  
  //QString w = v.at(0).toString();

  if (v.size() > 0 && v.at(0).id == "BuiltinClassProcedure"){
  

    *sClass = v.at(0).value.toString();
    *bReturn = v.at(0).bReturn;
    *sProcedure = v.at(0).value2.toString();
    v.removeFirst();    

    
    //if (!popExpression2(v.at(0).list, a)) return false;
    
    return true;
  }

  return false;
}

static _statements push(QString s, _statements a = _statements(), _statements b = _statements(), _statements c = _statements(), _statements d = _statements(), _statements e = _statements(), _statements f = _statements(), _statements g = _statements())
{
  _statement v;

  v.id = s;

  _statements vv; vv << v;

  if (a.size() > 0) vv << pushExpression(a); else goto re;
  if (b.size() > 0) vv << pushExpression(b); else goto re;
  if (c.size() > 0) vv << pushExpression(c); else goto re;
  if (d.size() > 0) vv << pushExpression(d); else goto re;
  if (e.size() > 0) vv << pushExpression(e); else goto re;
  if (f.size() > 0) vv << pushExpression(f); else goto re;
  if (g.size() > 0) vv << pushExpression(g); else goto re;
re:
  return vv;    
}

static bool pop(_statements & v, QString *s)
{
 
 // QString w = v.at(0).toString();

  if (v.size() > 0){
    *s = v.at(0).id; 
    v.removeFirst();    
    return true;
  }

  return false;
}



static _statements pushCode(QString s)
{
  _statement v;

  v.id = "Code";
  v.value = s;

  _statements vv; vv << v; return vv;    
}

static bool popCode(_statements & v, QString *s)
{

 // QString w = v.at(0).toString();

  if (v.size() > 0 && v.at(0).id == "Code"){
   

    *s = v.at(0).value.toString(); v.removeFirst();
    return true;
  }

  return false;
}



static _statements pushDebug(_statements a = _statements(), _statements b = _statements(), _statements c = _statements(), _statements d = _statements(), _statements e = _statements(), _statements f = _statements(), _statements g = _statements())
{
  _statement v;

  v.id = "Debug";  

  _statements vv; vv << v; 

  if (a.size() > 0) vv << pushExpression(a); else goto re;
  if (b.size() > 0) vv << pushExpression(b); else goto re;
  if (c.size() > 0) vv << pushExpression(c); else goto re;
  if (d.size() > 0) vv << pushExpression(d); else goto re;
  if (e.size() > 0) vv << pushExpression(e); else goto re;
  if (f.size() > 0) vv << pushExpression(f); else goto re;
  if (g.size() > 0) vv << pushExpression(g); else goto re;
re:
  return vv;    
}

static _statements pushDebugAndAlso(_statements a = _statements(), _statements b = _statements(), _statements c = _statements(), _statements d = _statements(), _statements e = _statements(), _statements f = _statements(), _statements g = _statements())
{
  _statement v;

  v.id = "DebugAndAlso";  

  _statements vv; vv << v; 

  if (a.size() > 0) vv << pushExpression(a); else goto re;
  if (b.size() > 0) vv << pushExpression(b); else goto re;
  if (c.size() > 0) vv << pushExpression(c); else goto re;
  if (d.size() > 0) vv << pushExpression(d); else goto re;
  if (e.size() > 0) vv << pushExpression(e); else goto re;
  if (f.size() > 0) vv << pushExpression(f); else goto re;
  if (g.size() > 0) vv << pushExpression(g); else goto re;
re:
  return vv;    
}



static bool popDebug(_statements & v)
{
 
 // QString w = v.at(0).toString();
  if (v.size() > 0 && (v.at(0).id == "Debug" || v.at(0).id == "DebugAndAlso")){
    v.removeFirst();

    return true;
  }

  return false;
}




};


class MakeInterface : public QObject
{
Q_OBJECT
public:

MakeInterface(QObject *parent = 0) : QObject (parent)
{  
  if (file.open(stdout, QIODevice::WriteOnly)){
  }
}

public slots:

void readyReadStandardOutput()
{
  file.write(p.readAllStandardOutput());
  file.flush();
}
  void directoryChanged(const QString & path);
  
public:
QProcess p;
QFile file;

QFileSystemWatcher watch;

};



#endif
