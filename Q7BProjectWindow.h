
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
 

#ifndef q7bprojectwindow_h
#define q7bprojectwindow_h

#include <QtGui>


class Q7BProjectWindow : public QWidget
{
  Q_OBJECT
public:


Q7BProjectWindow(QWidget *parent = 0);




void PerformOpenProject(QString sFilePath);

void PerformSelect(QString sFilePath);

signals:
void Open(QString sFilePath);

public slots:


//void tw_itemActivated(QTableWidgetItem *item);
//void tw_customContextMenuRequested ( const QPoint & pos );
void tw_currentItemChanged ( QTableWidgetItem * current, QTableWidgetItem * previous );

void tree_doubleClicked(const QModelIndex &index);



private:


QTreeView *tree;
  QTableWidget *tw;
  QLabel *currentprojectname;
  QFileSystemModel *model;
};


#endif