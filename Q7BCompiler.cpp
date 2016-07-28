
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

#ifdef Q7BASIC
  #define Q7BASICCOMPILER
#elif defined(OBJB)  
#elif defined(DROIDBASIC)  
#endif // Q7BASIC_OBJB



#include "../Global.h"
/*
#if defined(Q7BASIC) || defined(OBJB)
//#if ! defined(Q7BASIC) && ! defined(OBJB)
#else
*/
//#ifdef Q7BASICCOMPILER




// exe wird erstellt 

// /Developer/Applications/Qt/Designer.app

#include "Q7BCompiler.h"
#include <QtCore>


#ifdef Q7BASICCOMPILERCOMPILER

#include <QtGui>
 #include <QMessageBox>

#endif

#ifdef Q_WS_MAC
#include <Carbon/Carbon.h>
#endif

#ifdef Q_OS_WIN32
  #include <windows.h> // for pid handling
#endif

QString sMyError;


QString LoadFile2(QString sFile)
{
  QString s;
  QFile f(sFile);
  if (f.open(QIODevice::ReadOnly)){
    QTextStream t(&f);
    s = t.readAll();
    f.close();
  }
  return s;
}

void SaveFile2(QString sFile, QString s)
{
  QFile f(sFile);
  if (f.open(QIODevice::WriteOnly | QIODevice::Truncate)){
    QTextStream t(&f);
    t << s;
    f.close();
  }
}

QString Q7BCompiler::getName(QString s)
{
  int n = s.lastIndexOf("/");
  if (n == -1) n = s.lastIndexOf("\\");
  if (n != -1) s = s.mid(n + 1);
  n = s.lastIndexOf(".");
  if (n != -1) s = s.left(n);
  return s;
}

QString Q7BCompiler::Go2(const QString & sProjectPath, const QString & sProjectName, bool bDoRunForGo)
{
  /*
  if (bDoRunForGo){
    return Run(sProjectPath, sProjectName);
  }*/

  QString sProjectPath2 = sProjectPath;
  QString sProjectName2 = getName(sProjectName);

  if (sProjectPath2.endsWith(".q7basic")){ // single project file
    sProjectPath2 = QDir::tempPath() + "/Q7Basic/" + getName(sProjectPath2);
/*
   #ifdef Q7BASICCOMPILERCOMPILER
    emit StandardError("sProjectPath2="+sProjectPath2);  // without sMyError it crashes
  #endif*/


  }

#ifdef Q_OS_WIN32
  QString s = sProjectPath2 + "/gcc/Build/debug/" + sProjectName2 + ".exe";
#elif defined Q_WS_MAC
  QString s = sProjectPath2 + "/gcc/Build/" + sProjectName2 + ".app/Contents/MacOS/" + sProjectName2;
#elif defined Q_WS_X11
  QString s = sProjectPath2 + "/gcc/Build/" + sProjectName2;
#endif

  if (QFile::exists(s)){

      
 // QMessageBox::information(0, "Go2", "!!!" + s);



    #ifdef Q7BASICCOMPILER
      emit ReadyForDebugging();
      qApp->processEvents();
    #endif  

    if (bDebug){   


  //     QMessageBox::information(0, "before", "");

      QFile::remove(QDir::tempPath() + "/Q7Basic/" + "q7b_out.txt");

      QString m = "breakpoints\n";
      QMapIterator<QString, QStringList> i(breakpoints);
      while (i.hasNext()) {
         i.next();
         if (i.value().count() > 0){
           m += QFileInfo(i.key()).fileName() + "\n";
           m += i.value().join(";") + "\n";
         }
      }

    //  QMessageBox::information(0, "breakpoints", m);
      SaveFile2(QDir::tempPath() + "/Q7Basic/" + "q7b_out.txt", m);      
    }

   // QMessageBox::information(0, "aaa", "");
    bGo = true;
/*
    QProcessEnvironment env = QProcessEnvironment::systemEnvironment();

    QString sdf = sMINGWDLLDIR.replace("/", "\\") + ";" + env.value("Path");
    env.insert("PATH", sdf);

    //QMessageBox::information(0, "1", sdf);

    this->p.setProcessEnvironment(env);
    */
    this->p.setWorkingDirectory(sMINGWDLLDIR.replace("/", "\\")); // avoid copying of DLL gcc files

    //have been working for nearly two hours now and find a solution which makes it possible to run GCC created projects within the VS created IDE WITHOUT copying the DLL files.
    //The new average project size for GCC is about 70 MB now.





   // QMessageBox::information(0, "2", env.value("Path"));


    this->p.start("\"" + s + "\""); // "\"" are needed for path with spaces on mac

  //  QMessageBox::information(0, "bbbbb", "");

    p.waitForStarted(-1);
    if (this->p.state() == QProcess::Running){
      while(this->p.pid() <= 0){
        qApp->processEvents();
      }
    }


  qint64 PID;
#ifdef Q_OS_WIN32
    PID = p.pid()->dwProcessId;
#else
    PID = p.pid();
#endif



      QFile::remove(QDir::tempPath() + "/Q7Basic/" + "q7b_out" + QString("%1").arg(PID) + ".txt");
      QFile::remove(QDir::tempPath() + "/Q7Basic/" + "q7b_in" + QString("%1").arg(PID) + ".txt");
 
//    if (bDebug){
      QString sDebugFile = QDir::tempPath() + "/Q7Basic/" + "q7b_out" + QString("%1").arg(PID) + ".txt";
      SaveFile2(sDebugFile, "");  // needed for watch
      
 // }

 #ifdef Q7BASICCOMPILER
#ifdef Q_WS_MAC
    if (this->p.state() == QProcess::Running){

       ProcessSerialNumber psn;
            OSStatus st;
            do {
              st = GetProcessForPID(this->p.pid(), &psn);
            } while (st == -600);

        //    QMessageBox::information(0, "st", QString("my_compile->pid() %1").arg(this->p.pid()));
        //   QMessageBox::information(0, "st", QString("%1").arg(st));
      if (st >=0 ){
      SetFrontProcess(&psn);
    }
  }
#endif
    #endif

    
    if (bDebug){

      QString sDebugFile = QDir::tempPath() + "/Q7Basic/" + "q7b_in" + QString("%1").arg(PID) + ".txt";
      SaveFile2(sDebugFile, "");
      watch.addPath(sDebugFile);   

      while (QFileInfo(sDebugFile).size() == 0){  // WORKAROUND  timeout here 2 seconds and then cannot connect is examle still running?
        qApp->processEvents(); 
      }
      fileChanged(sDebugFile); // WORKAROUND manually call it the first time

   }

  }
  return "";
}

void Q7BCompiler::fileChanged( const QString  & path)
{

  qint64 PID;
#ifdef Q_OS_WIN32
    PID = p.pid()->dwProcessId;
#else
    PID = p.pid();
#endif

  QString sDebugFile = QDir::tempPath() + "/Q7Basic/" + "q7b_in" + QString("%1").arg(PID) + ".txt";

  if (QFile::exists(sDebugFile)){ // we got debug information returned from our started app
    QString s = LoadFile2(sDebugFile);
    if (!s.isEmpty()){
      //QFile::remove(sDebugFile);

    #ifdef Q7BASICCOMPILER

      //QMessageBox::information(0, "debug information", s);

      if (s.startsWith("ClearBreakpoint\n")){
          emit BreakpointReached("", "");
      } else if (s.startsWith("Breakpoint\n")){
        QStringList l = s.split("\n");
        if (l.size() > 0){
          if (l.at(0) == "Breakpoint"){
            
            emit BreakpointReached(l.at(1).simplified(), l.at(2).simplified());
          }
        }
      }
    #endif  

    }
      
   }
   //watch.addPath(sDebugFile);
}

QString Q7BCompiler::Go(const QString & sProjectPath, const QString & sProjectName)
{
  bRun = true;
  bDebug = false;
  bDeployment = false;
 /* if (isRunning()) Stop(sProjectPath);
*/
  _sProjectPath = sProjectPath;
  _sProjectName = sProjectName;

  return Go2(sProjectPath, sProjectName, true);
}

QString Q7BCompiler::Make(const QString & sProjectPath)
{
  bRun = false;
  bDebug = false;
  bMayRun = false;
  bDeployment = false;

#ifdef Q_OS_WIN32
  QString program = qApp->applicationDirPath() + "/Q7BCompiler.exe";
#else
  QString program = qApp->applicationDirPath() + "/Q7BCompiler";
#endif
  QStringList arguments;
  arguments << sProjectPath << "-Make" << "-VCDIR" + sVC << "-QTDIR" + (sMINGWDIR.isEmpty() ? sQt : sMINGWDIR) << (!sMINGWDIR.isEmpty() ? "-MINGW" : "") << (bVM ? "-VM" : "");  
  myclose();
  this->p.start(program, arguments);
  this->p.waitForStarted(-1);

  return "";
}

QString Q7BCompiler::Build(const QString & sProjectPath)
{
  bRun = false;
  bDebug = false;
  bMayRun = false;
  bDeployment = false;

#ifdef Q_OS_WIN32
  QString program = qApp->applicationDirPath() + "/Q7BCompiler.exe";
#else
  QString program = qApp->applicationDirPath() + "/Q7BCompiler";
#endif
  QStringList arguments;
  arguments << sProjectPath << "-Build" << "-VCDIR" + sVC << "-QTDIR" + (sMINGWDIR.isEmpty() ? sQt : sMINGWDIR) << (!sMINGWDIR.isEmpty() ? "-MINGW" : "") << (bVM ? "-VM" : "");  
  myclose(); 
  this->p.start(program, arguments);
  this->p.waitForStarted(-1);
  
  return "";
}

QString Q7BCompiler::Deploy(const QString & sProjectPath)
{
  bRun = false;
  bDebug = false;
  bMayRun = false;
  bDeployment = true;

#ifdef Q_OS_WIN32
  QString program = qApp->applicationDirPath() + "/Q7BCompiler.exe";
#else
  QString program = qApp->applicationDirPath() + "/Q7BCompiler";
#endif
  QStringList arguments;
  arguments << sProjectPath << "-Deploy" << "-VCDIR" + sVC << "-QTDIR" + (sMINGWDIR.isEmpty() ? sQt : sMINGWDIR) << (!sMINGWDIR.isEmpty() ? "-MINGW" : "") << (bVM ? "-VM" : "");  
  myclose();
  this->p.start(program, arguments);
  this->p.waitForStarted(-1);
  
  return "";
}

QString Q7BCompiler::Run(const QString & sProjectPath, const QString & sProjectName)
{
  bRun = true;
  bDebug = false;
  bDeployment = false;

  _sProjectPath = sProjectPath;
  _sProjectName = sProjectName;

#ifdef Q_OS_WIN32
  QString program = qApp->applicationDirPath() + "/Q7BCompiler.exe";
#else
  QString program = qApp->applicationDirPath() + "/Q7BCompiler";
#endif
  QStringList arguments;
  arguments << sProjectPath << "-Run" << "-VCDIR" + sVC << "-QTDIR" + (sMINGWDIR.isEmpty() ? sQt : sMINGWDIR) << (!sMINGWDIR.isEmpty() ? "-MINGW" : "") << (bVM ? "-VM" : "");  
  myclose();
  this->p.start(program, arguments);
  this->p.waitForStarted(-1);



  return "";
}

QString Q7BCompiler::Debug(const QString & sProjectPath, const QString & sProjectName)
{
  bDeployment = false;

  if (bDebug && this->p.state() == QProcess::Running){
    Continue();
    return "";
  } else {

    bRun = true;
    

    _sProjectPath = sProjectPath;
    _sProjectName = sProjectName;

  #ifdef Q_OS_WIN32
    QString program = qApp->applicationDirPath() + "/Q7BCompiler.exe";
  #else
    QString program = qApp->applicationDirPath() + "/Q7BCompiler";
  #endif
    QStringList arguments;
    arguments << sProjectPath << "-Run" << "-VCDIR" + sVC << "-QTDIR" + (sMINGWDIR.isEmpty() ? sQt : sMINGWDIR) << (!sMINGWDIR.isEmpty() ? "-MINGW" : "") << (bVM ? "-VM" : "");  
    myclose();
    bDebug = true;
    this->p.start(program, arguments);
    this->p.waitForStarted(-1);



    return "";
  }
}

QString Q7BCompiler::Stop(QString sProjectPath)
{

  bGo = false;
  if (bDebug){
    bDebug = false;
    SendStop();

    if (bRun){
      this->p.close();
    } else {
      myclose();
    }    

  } else {

    if (bRun){
      this->p.close();
    } else {
      myclose();
    }    

  }


  return "";
}

void Q7BCompiler::setVM(bool b)
{
  bVM = b;
}

void Q7BCompiler::setVCDir(QString s)
{
  sVC = s;
}

void Q7BCompiler::setQtDir(QString s)
{
  sQt = s;
}

void Q7BCompiler::setMINGWDir(QString s)
{
  sMINGWDIR = s;

}
void Q7BCompiler::setMINGWDLLDir(QString s)
{
  sMINGWDLLDIR = s;

}



QString sStdOut;

void Q7BCompiler::finished ( int exitCode, QProcess::ExitStatus  exitStatus )  
{
  //QMessageBox::information(0, "finished",QString( "%1 %2 %3  %4  %5").arg(bRun).arg(bMayRun).arg(bGo).arg(exitCode).arg((int)exitStatus) );

  if (exitStatus == QProcess::CrashExit){
    //QMessageBox::information(0, "Internal error", "Crashed.");
  } else {

    if (bRun && bMayRun/* && bGo == false*/){
      Go2(_sProjectPath, _sProjectName, false);
      bMayRun = false;
    } else /*if (bGo == false)*/{
   // QMessageBox::information(0, "f2",QString( "%1 %2").arg(bRun).arg(bMayRun) );

      #ifdef Q7BASICCOMPILER
        emit CompilerOrApplicationFinished(bGo);
      #endif  

    }
  }
  
}


void Q7BCompiler::readyReadStandardError()
{

  static QString s; s = QString::fromLocal8Bit(p.readAllStandardError().constData());

  //QMessageBox::information(0, "Q7BCompiler::readyReadStandardError", s );

  if (s.isEmpty()) return;

#ifdef Q_OS_WIN32
  if (s.contains("D9025")) return;  // WORKAROUND omit          cl : Befehlszeile warning D9025 : "/O2" wird durch "/Od" berschrieben
#endif

  if (s.contains("syntax error or parser error in line ")){
    bQ7BCompilerNotCPP = true;
  } else {
    bQ7BCompilerNotCPP = false;
  }

  if (bGo){
#ifdef Q7BASICCOMPILER
    sMyError = sError = s;
    emit StandardError(sMyError);  // without sMyError it crashes
#endif

    return;
  } else {
#ifdef Q7BASICCOMPILER
    static QString rr; rr = s;
  //  rr = rr.simplified();
    emit StandardErrorOfCompiler(rr); 
#endif
  }
  

  

#ifdef Q7BASICCOMPILER
  sMyError = sError = s;

  // *** war nicht bei mingw
  sMyError = (sStdOut.contains("error") ?  sStdOut : "") + sMyError;// + QString::fromLocal8Bit(p.readAllStandardOutput().constData());
  // *** 
  emit Error(sMyError);  // without sMyError it crashes
  bRun = false;
  bMayRun = false;
#endif

  //qApp->processEvents();

}

void Q7BCompiler::readyReadStandardOutput()
{
  QByteArray ba = p.readAllStandardOutput();

 // if (bGo){
   // QMessageBox::information(0, "Q7BCompiler::readyReadStandardOutput", QString("%1 %2").arg(ba.size()).arg(QString::fromLocal8Bit(p.readAllStandardOutput().constData(), ba.length())));
 // }

  static QString s; s = QString::fromLocal8Bit(ba.constData());
//  static QString s; s = QString::fromLocal8Bit(p.readAllStandardOutput().constData());



 // if (bGo){
  //    QMessageBox::information(0, "Q7BCompiler::readyReadStandardOutput", s );

 // }

  // emit linking message
  if (s.contains(") : error")){ // for vc, gcc is handled in readyReadStandardError

    sMyError = sError = s.mid(s.indexOf(") : error") + 4);

    bQ7BCompilerNotCPP = false;
 #ifdef Q7BASICCOMPILER
    emit StandardErrorOfCompiler(sMyError);
  #endif  
    myclose();
    return;
  }
    

   //QMessageBox::information(0, "Q7BCompiler::readyReadStandardOutput", s );

  if (s.isEmpty()) return;

  sStdOut = s;

   if (bGo){
#ifdef Q7BASICCOMPILER
    emit StandardOutput(sStdOut);  // without sStdOut it crashes
#endif

    return;
  } else {
#ifdef Q7BASICCOMPILER
    static QString rr; 

    if (sStdOut.contains("OBJECTFILES:")){
      int n = sStdOut.indexOf("OBJECTFILES");
      int n2 = sStdOut.indexOf("\n", n);
      rr = sStdOut.left(n) + sStdOut.mid(n2);
      sStdOut = sStdOut.mid(n, n2 - n);
    } else {
      rr = sStdOut;
    }

    if (!rr.startsWith("OBJECTFILES:")){
      rr = rr.replace("Q7BFinished", "");      //.simplified().
      emit StandardOutputOfCompiler(rr);  // without sMyError it crashes
    }    
#endif
  }
  
  //QMessageBox::information(0, "Q7BCompiler::readyReadStandardOutput", s );

  if (s.startsWith("OBJECTFILES:")){
 //   QMessageBox::information(0, "started", " 1");
     //  QMessageBox::information(0, "started", s);
    int n = s.indexOf("\n");
    QString k = s.mid(13, n - 13);
    s = s.mid(n + 1);
    sOBJECTFILES = k.split("||", QString::SkipEmptyParts);

    this->nCountDone = 0;
#ifdef Q7BASICCOMPILER
    int kk = 0;
    if (sOBJECTFILES.count() > 0){
      kk = sOBJECTFILES.count(); //((((sOBJECTFILES.count() * 30) / 2 ) + 5) / 10);
    }
  emit Started(kk);  
#endif  
  }


 // QMessageBox::information(0, "", s.length() > 20 ? s.right(11) : "");
  if (s.startsWith("Q7BFinished") || s.endsWith("Q7BFinished")){
    //  QMessageBox::information(0, "00000000000000Finished", s);
#ifdef Q7BASICCOMPILER
  emit Finished(bDeployment ? -999999 : this->nCountDone);
#endif  
  //qApp->processEvents();
  bMayRun = true;

    s = s.mid(12);
    if (s.isEmpty()) return;
    
  }
  bool b = false;

#ifdef Q_OS_WIN32
  b = sMINGWDIR.isEmpty();
#endif
  QStringList l;
  if (b){
    l = s.split(".cpp\r\n", QString::SkipEmptyParts);
  } else {
    l = s.split("\ng++", QString::SkipEmptyParts);
  }


  for (int i = 0; i < l.count(); i++){
    QString k = l.at(i);

  //  QMessageBox::information(0, "k", k);
    /*

    war mingw
    int m = k.lastIndexOf(" ");
    if (m == -1) m = k.lastIndexOf("\n");
    if (m == -1) continue;
    QString sFilename = k.mid(m + 1).trimmed();
    */
    QString sFilename = k.trimmed();
  bool bb = false;

#ifdef Q_OS_WIN32
  bb = sMINGWDIR.isEmpty();
#endif

  if (bb){
    if (sFilename.contains(" ")) continue;
  } else {
    int m = k.lastIndexOf(" ");
    if (m == -1) m = k.lastIndexOf("\n");
    if (m == -1) continue;
    sFilename = k.mid(m + 1).trimmed();
    if (!sFilename.endsWith(".cpp")) continue;
    int k = sFilename.indexOf("debug\\");
    if (k >= 0){
      sFilename = sFilename.mid(k + 6); 
    } else {
      k = sFilename.indexOf("release\\");
      if (k >= 0) sFilename = sFilename.mid(k + 8);
    }
 }

//    QMessageBox::information(0, "k", "!!!!!" + sFilename);

 // QMessageBox::information(0, "readyReadStandardOutput", QString("'%1'").arg(sFilename));

    if (this->sOBJECTFILES.contains(sFilename)){
      this->nCountDone++;
      #ifdef Q7BASICCOMPILER
        emit Compiled(sFilename.left(sFilename.length() - 4), this->nCountDone);
      #endif  
      int n = sOBJECTFILES.indexOf(sFilename);
      sOBJECTFILES.removeAt(n);
    } else {
      this->nCountDone++;
      #ifdef Q7BASICCOMPILER
        emit Compiled(sFilename.left(sFilename.length() - 4), -1);
      #endif  
    }
  }

  // emit linking message
  if (s.contains(" -lQtGui") && s.contains(" -lQtCore") && s.contains(" -L\"")){
 #ifdef Q7BASICCOMPILER
    emit Compiled("", -2);
  #endif  
  }
}

void Q7BCompiler::myclose()
{
  if (bQ7BCompilerNotCPP){

    this->p.close(); // don't need to wait for sub process of Q7BCompiler, if only Q7BCompiler throwed the error message

  } else {

    if (this->p.state() == QProcess::Running && bGo == false){

      QFile f(qApp->applicationDirPath() + "/stop.txt");
      if (!f.open(QIODevice::WriteOnly )){
      } else {
        QTextStream t(&f);
        //QMessageBox::information(0, "jjjjjjjjjjj", QString("%1 %2").arg( p.pid()->dwProcessId).arg((qint64)p.pid()));

  #ifdef Q_OS_WIN32
    t << p.pid()->dwProcessId;
  #else
    t << p.pid();
  #endif

        f.close();   
      }


    }

//    QMessageBox::information(0, "1", "QDateTime::currentDateTime().addSecs(4)");

    QDateTime dt = QDateTime::currentDateTime().addSecs(4);


    //QMessageBox::information(0, "1", "!!!");
    // wait two seconds here
    while (this->p.state() == QProcess::Running && QDateTime::currentDateTime() < dt){
      qApp->processEvents();
    }

     //QMessageBox::information(0, "2", "!!!");

     //QMessageBox::information(0, "9", "QDateTime::currentDateTime().addSecs(4)");

    //QMessageBox::information(0, "2", QString("%1\n%2").arg(QDateTime::currentDateTime().toString("dd.MM.yyyy hh:mm:ss")).arg(dt.toString("dd.MM.yyyy hh:mm:ss")));

    this->p.close();
  }
}

void Q7BCompiler::Continue()
{
  if (bDebug && this->p.state() == QProcess::Running){

    QString sDebugFile;

  #ifdef Q_OS_WIN32
    sDebugFile = QDir::tempPath() + "/Q7Basic/" + "q7b_out" +  QString("%1").arg(p.pid()->dwProcessId) + ".txt";
  #else
    sDebugFile = QDir::tempPath() + "/Q7Basic/" + "q7b_out" +  QString("%1").arg(p.pid()) + ".txt";
  #endif

    SaveFile2(sDebugFile, "Continue");
  }
}

void Q7BCompiler::StepInto()
{
  if (bDebug && this->p.state() == QProcess::Running){

    QString sDebugFile;

  #ifdef Q_OS_WIN32
    sDebugFile = QDir::tempPath() + "/Q7Basic/" + "q7b_out" +  QString("%1").arg(p.pid()->dwProcessId) + ".txt";
  #else
    sDebugFile = QDir::tempPath() + "/Q7Basic/" + "q7b_out" +  QString("%1").arg(p.pid()) + ".txt";
  #endif

    SaveFile2(sDebugFile, "StepInto");
  }
}

void Q7BCompiler::StepOut()
{
  if (bDebug && this->p.state() == QProcess::Running){
    QString sDebugFile;

  #ifdef Q_OS_WIN32
    sDebugFile = QDir::tempPath() + "/Q7Basic/" + "q7b_out" +  QString("%1").arg(p.pid()->dwProcessId) + ".txt";
  #else
    sDebugFile = QDir::tempPath() + "/Q7Basic/" + "q7b_out" +  QString("%1").arg(p.pid()) + ".txt";
  #endif


    SaveFile2(sDebugFile, "StepOut");
  }
}

void Q7BCompiler::StepOver()
{
  if (bDebug && this->p.state() == QProcess::Running){
    QString sDebugFile;

  #ifdef Q_OS_WIN32
    sDebugFile = QDir::tempPath() + "/Q7Basic/" + "q7b_out" +  QString("%1").arg(p.pid()->dwProcessId) + ".txt";
  #else
    sDebugFile = QDir::tempPath() + "/Q7Basic/" + "q7b_out" +  QString("%1").arg(p.pid()) + ".txt";
  #endif


    SaveFile2(sDebugFile, "StepOver");
  }
}

void Q7BCompiler::RunToCursor(QString sFile, QString sLine)
{
  if (bDebug && this->p.state() == QProcess::Running){
    QString sDebugFile;

  #ifdef Q_OS_WIN32
    sDebugFile = QDir::tempPath() + "/Q7Basic/" + "q7b_out" +  QString("%1").arg(p.pid()->dwProcessId) + ".txt";
  #else
    sDebugFile = QDir::tempPath() + "/Q7Basic/" + "q7b_out" +  QString("%1").arg(p.pid()) + ".txt";
  #endif


    SaveFile2(sDebugFile, "RunToCursor\n" + QFileInfo(sFile).fileName() + "\n" + sLine);
  }
}

void Q7BCompiler::Breakpoint(QString sFile, QString sLine)
{
  if (bDebug && this->p.state() == QProcess::Running){
    QString sDebugFile;

  #ifdef Q_OS_WIN32
    sDebugFile = QDir::tempPath() + "/Q7Basic/" + "q7b_out" +  QString("%1").arg(p.pid()->dwProcessId) + ".txt";
  #else
    sDebugFile = QDir::tempPath() + "/Q7Basic/" + "q7b_out" +  QString("%1").arg(p.pid()) + ".txt";
  #endif


    SaveFile2(sDebugFile, "Breakpoint\n" + QFileInfo(sFile).fileName() + "\n" + sLine);
  }
}

void Q7BCompiler::SendStop()
{
  if (bDebug && this->p.state() == QProcess::Running){

    QString sDebugFile;

  #ifdef Q_OS_WIN32
    sDebugFile = QDir::tempPath() + "/Q7Basic/" + "stop" +  QString("%1").arg(p.pid()->dwProcessId) + ".txt";
  #else
    sDebugFile = QDir::tempPath() + "/Q7Basic/" + "stop" +  QString("%1").arg(p.pid()) + ".txt";
  #endif

    SaveFile2(sDebugFile, "");
  }
}

//#endif
//#endif
