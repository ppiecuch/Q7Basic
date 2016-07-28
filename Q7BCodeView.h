
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
 
#ifndef q7bcodeview_h
#define q7bcodeview_h


#include <QtGui>

class Q7BCodeView;


class LineNumberArea;


class _codeInsight
{
public:
  QString sFileName;

  QString sKind;
  QString sName;
  QString sArgs;
  QString sType;
};

class CodeCompletion1: public QListWidget
{
Q_OBJECT
public:
  CodeCompletion1(QWidget *parent, Q7BCodeView *_cw);

  void focusOutEvent(QFocusEvent *e);
  
  
  void keyPressEvent(QKeyEvent *e);
  
  void ShowUp(QStringList & _items);


QString currentText()
{
  QListWidgetItem *i = item(currentRow());
  return i ? i->text() : "";
}

QListWidgetItem *itemWithText(QString s)
{

  for (int i = 0; i < count(); i++){
    QListWidgetItem *l = item(i);
    if (l->text().startsWith(s, Qt::CaseInsensitive)){
      return l;
    }
  }

  return 0;
}

public slots:
  void this_itemActivated(QListWidgetItem *item);
private:
  Q7BCodeView *cw;
  QString sInputedText;
  QStringList items;
  
};


class CodeCompletion2: public QLabel
{
Q_OBJECT
public:
  CodeCompletion2(QWidget *parent, Q7BCodeView *_cw);

  
  //void focusInEvent(QFocusEvent *e);
  
 
  
  void ShowUp(QString sSignature);

  void setLabel(QString sLine, int nCursorPos, bool bStart);

private:
  Q7BCodeView *cw;
  QString sSignature;
};

class Code;

class CodeSyntaxHighlighter : public QSyntaxHighlighter
{
    Q_OBJECT

public:
    CodeSyntaxHighlighter(QTextDocument *parent = 0, Code *me = 0);

public:
    void highlightBlock(const QString &text);

    void setMyFormat(int a, int b, QTextCharFormat & f)
    {
      setFormat(a, b, f); 
    }



 // bool bString_string;
  

    

    //QRegExp commentStartExpression;
    //QRegExp commentEndExpression;

  

    Code *me;


    QTextCharFormat declareFormat;
    QTextCharFormat errorFormat;
    QTextCharFormat errorFormat2;
    QTextCharFormat normalFormat;
    QTextCharFormat builtinFormat;
    QTextCharFormat keywordFormat;
    
    QTextCharFormat typeFormat;
    QTextCharFormat commentFormat;
    QTextCharFormat quotationFormat;
    QTextCharFormat specialFormat;    
    QTextCharFormat specialFormat1;    
    QTextCharFormat specialFormat2;    
    QTextCharFormat specialFormat3;    
    QTextCharFormat separatorFormat;    
    QTextCharFormat signalFormat;    
    QTextCharFormat outletFormat;    
    QTextCharFormat eventFormat;    
    

};

class Code : public QPlainTextEdit 
{
  Q_OBJECT
public:

Code(Q7BCodeView *parent);



void move_codecompletion(QWidget *w);
void keyPressEvent(QKeyEvent* e);
void focusInEvent(QFocusEvent* e);
void insertCorrectIdentForLine(bool bAppend);

bool bUpdateForChangedText;

void mousePressEvent(QMouseEvent* e);
void wheelEvent(QWheelEvent* e);

public slots:
  void this_blockCountChanged (int);

public:
  CodeCompletion1 *codecompletion1;
  CodeCompletion2 *codecompletion2;

private:

  void paintEvent ( QPaintEvent * event );


Q7BCodeView *cw;

QString sLineBeforeInput;
int nStartTrigger;

public:
    void lineNumberAreaPaintEvent(QPaintEvent *event);
    int lineNumberAreaWidth();

protected:
    void resizeEvent(QResizeEvent *event);

private slots:
    void updateLineNumberAreaWidth(int newBlockCount);
    
    void updateLineNumberArea(const QRect &, int);

private:
    QWidget *lineNumberArea;


};

class Q7BCodeView : public QFrame
{
  Q_OBJECT
public:


Q7BCodeView(QWidget *parent = 0);

void setCPPKeywords(QStringList l);
void setKeywords(QStringList l);
void setConsts(QStringList l);
void setTypes(QStringList l);
void setFunctions(QStringList l);
void setClasses(QStringList l);
void setObjects(QStringList l);

void setFontName(QString s);
void setFontSize(int n);
void setShowLineNumbers(bool b);
void setShowLineSeparators(bool b);
void setDefaultSyntaxHighlighting(bool b);
void setSyntaxHighlightingColors(QStringList l);


void GotoLineAndSelectLine(int nLine);
void GotoLine(int nLine, bool bTryToSaveCursorColumn = false);


void RefreshControls();

void emit_GetCompletion(QString s);
void emit_GetCompletion2(QString s);

void RefreshEvents();

void RefreshBrowser();


void PerformUndo();


void PerformRedo();

void PerformCut();


void PerformCopy();


void PerformPaste();


void PerformDelete();


void PerformSelectAll();

void PerformComment();

void PerformUncomment();

void PerformIndent();

void PerformUnindent();

void PerformUpper();

void PerformLower();

void PerformInsertFile();

void PerformInsertText(const QString & s);

void PerformGotoLine();

QString getBeforeCurrentLineAsString();

QString getCurrentCompletionTrigger();

QString getCurrentLineAsString(int nLineOffset = 0);

void SetCompletion(QStringList l);

void SetCompletion2(QString s);

int getCurrentPosition();

int getCurrentLine();

int getCurrentColumn();

bool PerformFind(const QString & sSearch);

void PerformReplace();

bool Load(const QString & sFilename);
bool Save();

void browserGoto(QVariant vv);

QString beautify(QString k);


QPlainTextEdit *getQPlainTextEdit()
{
  return code;
}


void closeEvent( QCloseEvent *e);



public:
void UndoRedoCut();

public slots:

  void cbDocu_clicked(bool);

void commands_activated( const QString &);

void browser_activated(int index);

void code_copyAvailable(bool b);

void code_pasteAvailable();

void code_redoAvailable(bool b);

void code_undoAvailable(bool b);

void timerbrowser_timeout();

void code_contentsChange(int, int, int);

void code_textChanged();

void code_cursorPositionChanged(void);


void triggered(QAction *action);

 void highlightCurrentLine();


 
signals:

void GetCompletion(QString sCompletion);
void GetCompletion2(QString sCompletion);

void textChanged();

void cursorPositionChanged();

void CopyAvailable(bool);
void PasteAvailable(bool);
void RedoAvailable(bool);
void UndoAvailable(bool);

public:

void setUnsetBreaktpoint(int nLine);
void setCurrentDebugPosition(int nLine);

QStringList lCompletion1;
QString sCompletion2;

QStringList getAllBreakpoints();

int code_cursorPositionChanged_nLine;
bool code_cursorPositionChanged_lock;

 

QList<QAction*> actions;

QComboBox *browser;
QList<_codeInsight> codeInsight;

QToolButton *cbSub;
QToolButton *cbFunction;
QToolButton *cbOutlet;
QToolButton *cbDim;
QToolButton *cbVar;
QToolButton *cbConst;
QToolButton *cbEvent;
QToolButton *cbSignal;
QToolButton *cbSlot;
QToolButton *cbEnum;
QToolButton *cbType;
QToolButton *cbDocu;


QMenu *mSub;
QMenu *mFunction;
QMenu *mOutlet;
QMenu *mDim;
QMenu *mVar;
QMenu *mConst;
QMenu *mEvent;
QMenu *mSignal;
QMenu *mSlot;
QMenu *mEnum;
QMenu *mType;


Code *code;

  bool bUndoAvailable;
  bool bRedoAvailable;
  bool bCopyAvailable;

  

  int nCurrentDebugPosition;


private:

  QString sDocu;

  bool bBlock;

  QComboBox *commands;
 
 // QComboBox *events;
  
  QLabel *info;

  CodeSyntaxHighlighter *codesyntaxhighlighter;

  QTimer *timerbrowser;

  QString sFilename;


  

};


 class aBreakpoint : public QTextBlockUserData
 {
 public:
     aBreakpoint(int _nBreakpointLine) : QTextBlockUserData() 
     {       
       nBreakpointLine = _nBreakpointLine;
     }

 public:
     int nBreakpointLine;
 };



 
class LineNumberArea : public QWidget
{
public:
    LineNumberArea(Code *editor) : QWidget(editor) {
        codeEditor = editor;
    }

    QSize sizeHint() const {
        return QSize(codeEditor->lineNumberAreaWidth(), 0);
    }

protected:
    void paintEvent(QPaintEvent *event) {
        codeEditor->lineNumberAreaPaintEvent(event);
    }

private:
    Code *codeEditor;
};


#endif
