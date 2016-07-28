
/*
'***************************************************************************
'Copyright (C) 2010-2011 KBasic Software: www.kbasic.com. All rights reserved.
'Source codes are created by Bernd Noetscher sales@kbasic.com 
'
'You may use this source codes under the terms of the GNU Public License (Version 3) as published 
'by the Free Software Foundation. 
'
'If you are interested in using the source codes for other licenses or 
'commercial development, you must buy commercial licenses from KBasic Software.
'***************************************************************************
*/

#ifndef Q7BCompiler_h
#define Q7BCompiler_h

#include "../Global.h"

/*

#if defined(Q7BASIC) || defined(OBJB)
//#if ! defined(Q7BASIC) && ! defined(OBJB)
#else*/

//#ifdef Q7BASIC

// exe wird erstellt in QtRuntime/ compiler project

#include <QStringList>
#include <QProcess>
#include <QThread>
#include <QMap>
#include <QFileSystemWatcher>
//#include <QMessageBox>



class Q7BCompiler : public QObject  //QThread
{
    

  Q_OBJECT


public:

Q7BCompiler(QObject *parent = 0) : QObject (parent)
{  
  QObject::connect(&p, SIGNAL(readyReadStandardOutput()), this, SLOT(readyReadStandardOutput()));
  QObject::connect(&p, SIGNAL(readyReadStandardError()), this, SLOT(readyReadStandardError()));
  QObject::connect(&p, SIGNAL(finished(int, QProcess::ExitStatus)), this, SLOT(finished(int, QProcess::ExitStatus)));

  QObject::connect(&watch, SIGNAL(fileChanged(const QString &)), this, SLOT(fileChanged(const QString &)));

  bGo = false;
  bQ7BCompilerNotCPP = false;
}

~Q7BCompiler()
{
  //QMessageBox::information(0, "~Q7BCompiler", "");
  Stop("");
}

void run();

QString Make(const QString & sProjectPath);

QString Go2(const QString & sProjectPath, const QString & sProjectName, bool bDoRunForGo);

QString Go(const QString & sProjectPath, const QString & sProjectName);

QString Run(const QString & sProjectPath, const QString & sProjectName);

QString Debug(const QString & sProjectPath, const QString & sProjectName);

QString Deploy(const QString & sProjectPath);

QString Build(const QString & sProjectPath);

QString Stop(QString sProjectPath);

void Continue();
void StepInto();
void StepOut();
void StepOver();
void RunToCursor(QString sFile, QString sLine);
void Breakpoint(QString sFile, QString sLine);

void clearBreakpoints()
{  
  breakpoints.clear();
}

void setBreakpoints(QString sFile, QStringList l)
{  
  breakpoints[sFile] = l;
}

void SendStop();

void setVM(bool b);
void setVCDir(QString s);
void setQtDir(QString s);
void setMINGWDir(QString s);
void setMINGWDLLDir(QString s);

void myclose();

QString getName(QString s);

//QString Rebuild(const QString & sProjectPath);

public:
//void Started2(int nCountFilesToCompile);
//void Finished2(int nCountFilesCompiled);

public slots:
  void readyReadStandardOutput();
  void readyReadStandardError();
  void finished ( int exitCode, QProcess::ExitStatus  exitStatus );
   
  void fileChanged ( const QString  & path);
  

signals:
//emit textChanged();
void Started(int nCountFilesToCompile);
void Compiled(const QString & sPathFileName, int nCountFilesCompiled);
void Error(const QString & sError);
void Finished(int nCountFilesCompiled);
void BreakpointReached(QString sFile, QString sLine);
void ReadyForDebugging();
void StandardOutput(QString s);
void StandardError(QString s);
void StandardOutputOfCompiler(QString s);
void StandardErrorOfCompiler(QString s);
void CompilerOrApplicationFinished(bool bApplication);



public:
 int nCountNeeded;
 int nCountDone;
 QStringList sOBJECTFILES;
 QProcess p;
 bool bMayRun;
 bool bRun;
 bool bDebug;
 bool bGo;
 bool bDeployment;

 bool bQ7BCompilerNotCPP;
 
 /*
 bool bMake;
 bool bBuild;
 */
 QString _sProjectPath;
 QString _sProjectName;
 
 QString sError;
  
 bool bVM;
 QString sMINGWDLLDIR;
 QString sMINGWDIR;
 QString sVC;
 QString sQt;

 QFileSystemWatcher watch;

 QMap<QString, QStringList> breakpoints;

 ;

};

//#endif
//#endif

#endif