
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
 
#include <QtGui>

#include "Q7BProjectWindow.h"


void Q7BProjectWindow::PerformOpenProject(QString sFilePath) 
{
  tw->clear();

   QStringList slForms; slForms << "Forms";// << "c:\\Form1.Form" << "c:\\Form2.Form" << "c:\\Form2.Form" << "c:\\Form2.Form" << "c:\\Form2.Form" << "c:\\Form2.Form" << "c:\\Form2.Form" << "c:\\Form2.Form" << "c:\\Form2.Form" << "c:\\Form2.Form" << "c:\\Form2.Form" << "c:\\Form2.Form" << "c:\\Form2.Form" << "c:\\Form2.Form" << "c:\\Form2.Form";
  QStringList slClasses; slClasses << "Classes";// << "c:\\Class1.QWidget.Class" << "c:\\Class2.Class";
  QStringList slModules; slModules << "Modules";// << "c:\\Module1.Module" << "c:\\Module2.Module";
  QStringList ui; ui << "*.ui.dummy";// << "c:\\test3.ui" << "c:\\test4.ui";
  //QStringList cpp; cpp << "cpp";// << "c:\\test3.cpp" << "c:\\test4.cpp";
  //QStringList Copy; Copy << "Copy" << "c:\\test3" << "c:\\test4";
  //QStringList Resources; Resources << "Resources" << "c:\\test3" << "c:\\test4";  

   QDir thisDir( sFilePath );
   QFileInfoList files = thisDir.entryInfoList();

     if ( files.size() ) {

       QFileInfo fi;
       for (int i = 0; i < files.size(); ++i) {
         fi = files.at(i);

         QString s = fi.absoluteFilePath();

         if (fi.fileName() == "." || fi.fileName() == "..") continue;
         if (fi.isFile()){
           if (fi.fileName().endsWith("Module.q7b")){
             slModules << fi.absoluteFilePath();
           } else if (fi.fileName().endsWith("Form.q7b")){
             slForms << fi.absoluteFilePath();
           } else if (fi.fileName().endsWith(".ui")){
             ui << fi.absoluteFilePath();
           } else if (fi.fileName().endsWith(".q7b")){
             slClasses << fi.absoluteFilePath();
           }
         }
       }
     }


  QStringList slAll; slAll << slForms; slAll << slClasses; slAll << slModules; slAll << ui;

  tw->setRowCount(slAll.size());
  
int nCount = 0;
    for (int i = 0; i < tw->rowCount(); i++){
    
   
    
    if (i == 0 || i == slForms.size() || i == slForms.size() + slClasses.size() || i == slForms.size() + slClasses.size() + slModules.size() || i == slForms.size() + slClasses.size() + slModules.size() + ui.size()){

      if (i == slForms.size() - 1 && slForms.size() < 2) continue;
      if (i == slForms.size() + slClasses.size() - 1 && slClasses.size() < 2) continue;
      if (i == slForms.size() + slClasses.size() + slModules.size() - 1 && slModules.size() < 2) continue;
      if (i == slForms.size() + slClasses.size() + slModules.size() + ui.size() - 1 && ui.size() < 2) continue;

      QTableWidgetItem *item = new QTableWidgetItem();
      item->setText(QFileInfo(slAll.at(i)).completeBaseName());    

      QFont f = item->font();
      f.setBold(true);
      item->setFont(f);
      item->setFlags(0);
      item->setForeground(QBrush(Qt::white));
      item->setBackgroundColor(Qt::gray);
      tw->setItem(nCount, 0, item);
      nCount++;
      
      
    } else {


     
      QTableWidgetItem *item = new QTableWidgetItem();



      bool b = false;

      if (i > slForms.size() + slClasses.size() + slModules.size()){
        item->setIcon(QIcon(":/Resources/ti_qtdesigner.png"));

      } else if (i > slForms.size() + slClasses.size()){
        item->setIcon(QIcon(":/Resources/module.png"));
        
      } else if (i > slForms.size()){
        b = true;

        if (QFileInfo(slAll.at(i)).completeBaseName().endsWith("Global.QObject")){
          item->setIcon(QIcon(":/Resources/ti_global.png"));  
        } else if (QFileInfo(slAll.at(i)).completeBaseName().endsWith(".QMainWindow")){
          item->setIcon(QIcon(":/Resources/QMainWindow.png"));  
        } else if (QFileInfo(slAll.at(i)).completeBaseName().endsWith(".QApplication")){
          item->setIcon(QIcon(":/Resources/QApplication.png"));  
        } else if (QFileInfo(slAll.at(i)).completeBaseName().endsWith(".QSystemTrayIcon")){
          item->setIcon(QIcon(":/Resources/QSystemTrayIcon.png"));  
        } else if (QFileInfo(slAll.at(i)).completeBaseName().endsWith(".QObject")){
          item->setIcon(QIcon(":/Resources/ti_code.png"));  
        } else if (QFileInfo(slAll.at(i)).completeBaseName().endsWith(".Class")){
          item->setIcon(QIcon(":/Resources/ti_code.png"));  
          b = false;
        } else {
          item->setIcon(QIcon(":/Resources/widget.png"));  
        }
        

      } else {
        item->setIcon(QIcon(":/Resources/ti_form.png"));
      }

      if (b){
        item->setText(QFileInfo(slAll.at(i)).completeBaseName());    
      } else {
        item->setText(QFileInfo(slAll.at(i)).baseName());    
      }
      

      item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
      item->setData(Qt::UserRole, slAll.at(i));
      tw->setItem(nCount, 0, item);
      nCount++;
    }
    

  }

    tw->setRowCount(nCount);

    currentprojectname->setText(QFileInfo(sFilePath).completeBaseName());

    tree->setRootIndex(model->index(sFilePath));

}

Q7BProjectWindow::Q7BProjectWindow(QWidget *parent) : QWidget (parent)
{
  
  tw = new QTableWidget();
  tw->setColumnCount(2);
  tw->setContextMenuPolicy(Qt::CustomContextMenu);
  tw->setSelectionMode(QAbstractItemView::SingleSelection);

  
  //tw->horizontalHeader()->resizeSection(1, 450);
 
  tw->horizontalHeader()->hideSection(1);
 // tw->setColumnHidden(1, true);
  tw->horizontalHeader()->setStretchLastSection(true);
  tw->verticalHeader()->hide();
  tw->horizontalHeader()->hide();

 
 
  
  //tw->setColumnWidth(1, 400);
  


  

  

 // tw->setRowHeight(0, 20);
  

 
  tw->setShowGrid(false);
  tw->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

  tw->setStyleSheet(""
   // "QTableWidget {selection-background-color: qlineargradient(x1: 0, y1: 0, x2: 0.5, y2: 0.5, stop: 0 #FF92BB, stop: 1 white);}"
    "QTableWidget::item:hover { background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #FAFBFE, stop: 1 #DCDEF1);}"
 "QTableWidget::item:selected {border: 1px solid #6a6ea9;}"
 "QTableWidget::item:selected:!active {background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #ABAFE5, stop: 1 #8588B2);}"
 "QTableWidget::item:selected:active { background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #6a6ea9, stop: 1 #888dd9);}"


    // "QTableWidget { selection-color: qlineargradient(x1: 0, y1: 0, x2: 0.5, y2: 0.5, stop: 0 #0092BB, stop: 1 white);}"    
   ""
    );


  QVBoxLayout *j = new QVBoxLayout();
  j->setMargin(0);
  j->setSpacing(0);
  this->setLayout(j);

  currentprojectname = new QLabel("");
  currentprojectname->setFixedHeight(32);
  currentprojectname->setIndent(5);
  QFont f = currentprojectname->font();
  f.setBold(true);
  currentprojectname->setFont(f);
#ifdef MAC
  f = currentprojectname->font(); f.setPixelSize(10); currentprojectname->setFont(f); 
#endif

  j->addWidget(currentprojectname);
  
  
 

     model = new QFileSystemModel;
     model->setReadOnly(true);
     model->setRootPath(QDir::currentPath());
     


     tree = new QTreeView();
     tree->setModel(model);

    
     

    tree->setColumnHidden( 1, true );
    tree->setColumnHidden( 2, true );
    tree->setColumnHidden( 3, true );

   // tree->setWindowTitle(QObject::tr("Dir View:")+QDir::homePath());
    
    //tree->show();

    connect(tree, SIGNAL( doubleClicked(const QModelIndex&) ),
            this, SLOT( tree_doubleClicked(const QModelIndex&) ) );
    

  
   // j->addWidget(tree);

  //j->addWidget(new QPushButton(tr("Resources")));

  //connect(tw, SIGNAL(itemDoubleClicked(QTableWidgetItem*)), this, SLOT(tw_itemDoubleClicked(QTableWidgetItem*)));
  
  connect(tw, SIGNAL(currentItemChanged(QTableWidgetItem*,QTableWidgetItem*)), this, SLOT(tw_currentItemChanged(QTableWidgetItem*,QTableWidgetItem*)));
 

  

  QTabWidget *tb = new QTabWidget();

  tb->addTab(tw, "Source Codes && GUI");
  tb->addTab(tree, "File Browser");

  j->addWidget(tb);


  
// startTimer(500);

  //PerformOpenProject("C:\\Users\\Bernd\\Desktop\\objb_q7basic\\Q7Basic");
}


void Q7BProjectWindow::PerformSelect(QString sFilePath)
{

  QString s = QFileInfo(sFilePath).fileName();
  if (s.endsWith(".q7b")){
    s = s.left(s.indexOf(".q7b"));
  //  QMessageBox::information(0, "PerformSelect", s);
    QList<QTableWidgetItem *> l = tw->findItems(s, Qt::MatchExactly);

    if (l.size() > 0){
      tw->setCurrentItem(l.at(0));
    }
  }

}

void Q7BProjectWindow::tree_doubleClicked(const QModelIndex &index)
{

    
    {
        //Verzeichnisse
    
        if(model->fileInfo(index).isFile())
        {

            
            QString fileName =  model->filePath(index);
            //QMessageBox::information(0, "tw_itemDoubleClicked", fileName);

            if (fileName.endsWith(".q7b")){
              emit Open(fileName);
            } else {
              QDesktopServices::openUrl( QUrl("file:///" + fileName) );
            }
          
        }
      }
}



//void tw_currentItemChanged ( QTreeWidgetItem * current, QTreeWidgetItem * previous );

void Q7BProjectWindow::tw_currentItemChanged ( QTableWidgetItem * current, QTableWidgetItem * previous )
{
  if (current == 0) return;

  

  //if (bLock == false)
  {
  QString fileName = current->data(Qt::UserRole).toString();
     // QMessageBox::information(0, "tw_itemActivated", fileName);

      if (fileName.endsWith(".q7b")){
        emit Open(fileName);
      } else {
       
        QDesktopServices::openUrl( QUrl("file:///" + fileName) );
      }
  }

}
