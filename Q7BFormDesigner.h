
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
 /*
    Declarations of main window of Form Designer
*/

#ifndef Q7BFormDesigner_H
#define Q7BFormDesigner_H

#include <QMainWindow>
#include <QUndoStack>
#include <QAction>
#include <QMdiArea>
#include <QSpinBox>
#include <QFormLayout>
#include <QDialog>
#include <QPointer>

namespace Ui
{
    class Q7BFormDesigner ;
}

/*
    Some action are triggered directly by menu or by keyboard shortcuts and some are triggered
    by signals from the FormMaket.
*/
class PropertyEditor ;
class ObjectTreeWindow ;
class WidgetsPalette ;
class FormDesignerSession ;


class Q7BFormDesigner : public QMainWindow
{
    Q_OBJECT
public :
    explicit Q7BFormDesigner ( QWidget * parent = 0 ) ;
    ~Q7BFormDesigner () ;
public:
    
    void loadForm(QString fileName);
    void saveForm(QString fileName);

    void emitSignalToIDE_AddSignal(QString s);

private:
    QString sFileName;
signals:
    void addSignal(QString fileName, QString s);
    

private :
    Ui::Q7BFormDesigner * ui ;

    PropertyEditor * PE ;
    ObjectTreeWindow * OW ;

    WidgetsPalette * wp ;
    QTabWidget * palettes ;
    QAction * deleteAction ;
    QAction * copyAction ;
    QAction * pasteAction ;
    QAction * cutAction ;
    QAction * undoAction ;
    QAction * redoAction ;
    QAction * gridSwitchAction ;
    QAction * showCursorPosSwitchAction ;

    QAction * switchHeaderAction ;
    QAction * switchFooterAction ;

    QAction * selectAllAction ;

    QAction * saveMaketAction ;
    QAction * loadMaketAction ;

    QAction * alignLeftAction ;
    QAction * alignTopAction ;
    QAction * alignRightAction ;
    QAction * alignBottomAction ;

    QAction * moveLeftAction ;
    QAction * moveTopAction ;
    QAction * moveRightAction ;
    QAction * moveBottomAction ;

    QAction * moveToBackAction ;
    QAction * moveToFrontAction ;

    QAction * setFormSizeAction ;
    QAction * autoSectionsSizeAction ;
    QAction * newSessionAction ;

    QAction * copyPropertiesAction ;
    QAction * assignPropertiesAction ;
    QAction * editTabOrderAction ;
    QAction * makeRelGeomAction ;

    QAction * switchShowWidgetNameAction ;

    QAction * setSameHeightAction ;
    QAction * setSameWidthAction ;
    QAction * setSameSizeAction ;

    QAction * togglePaletteAction ;
    QAction * togglePropEditorAction ;
    QAction * toggleTreeAction ;

    QAction * showPreviewAction ;

    QAction * makeUnRelGeomAction ;

    QAction * setNoLayoutAction ;
    QAction * setVertLayoutAction ;
    QAction * setHorLayoutAction ;

    QList < QPointer < QAction > > morphActions ;
    QList < QPointer < QAction > > signalsActions ;

    QMenu * editMenu ;
    QMenu * viewMenu ;

    QMenu * fileMenu ;
    QMenu * alignMenu ;
    QMenu * moveMenu ;
    QMenu * insertMenu ;

    QMdiArea * mdiArea ;
    
    QList < FormDesignerSession * > sessions ;
    QPointer<FormDesignerSession > activeSession ;

    void saveAppSettings () ;
    void loadAppSettings () ;

    bool mouseInsertMode ;


private slots :



    
    void widgetContextMenu ( QWidget * ) ;
    
    void createSession () ;
    // Called when a session becomes active
    void sessionActivated ( FormDesignerSession *  ) ;
    
    void setFormSizeSlot () ;
    // Called when widgets must be morphed
    void morphSlot () ;
    
    void signalSelected () ;

    // Switch visibility of interface elements
    void togglePalette ( ) ;
    void togglePropEditor ( ) ;
    void toggleTree ( ) ;
    void maketLeftClicked () ;
    void insertWidgetActionSlot () ;
signals :
    void mouseInsert () ;
private:
    FormDesignerSession *session;
} ;

class SizeDialog : public QDialog
{
    QSpinBox * he ;
    QSpinBox * wi ;
    QFormLayout * layout ;
    void keyPressEvent (QKeyEvent *) ;
public :
    SizeDialog (  ) ;
    void setSize ( QSize s ) ;
    QSize getSize () ;
} ;

#endif 
