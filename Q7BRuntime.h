
#ifndef Q7BRuntime_h
#define Q7BRuntime_h





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



#include <QtGui>
#include <QtNetwork>

#include <QWebView>
#include <QSvgWidget>
#include <QtSql>
#include <QSvgRenderer>
#include <QUdpSocket>
#include <QHttp>
#include <QtDeclarative>



#ifdef Q_WS_X11
  #include <phonon/MediaObject>
  #include <phonon/SeekSlider>
  #include <phonon/VolumeSlider>
  #include <phonon/VideoPlayer>
  #include <phonon/AudioOutput>
  #include <phonon/VideoWidget>

  //#include <phonon>
#else
  #include <Phonon>
#endif

#include <typeinfo> // rtti gcc

#define Q7B QSharedPointer<Q7B_id>
class Q7B_id;

#define Q7B_IDQString(V) (*((QString*)V->ref))
#define Q7B_IDQRgb Q7B_IDqint64
#define Q7B_IDInteger Q7B_IDqint64
#define Q7B_IDqint64(V) (*((qint64*)V->ref))
#define Q7B_IDqreal(V) (*((qreal*)V->ref))
#define Q7B_IDbool(V) (*((bool*)V->ref))
#define Q7B_IDQDateTime(V) (*((QDateTime*)V->ref))

//#define Q7B_IDQSize(V) *((QSize*)V->ref)
//#define Q7B_IDQRect(V) *((QRect*)V->ref)

#define Q7B_IDQ7B_Dictionary(V) ((Q7B_Dictionary*)V->ref)
#define Q7B_IDQ7B_List2QStringList(V) ((Q7B_List*)V->ref)->toStringList()
#define Q7B_IDQ7B_List(V) ((Q7B_List*)V->ref)

// Begin Generator h#5
#define Q7B_IDQAbstractButton(V) ((QAbstractButton*)V->ref)
#define Q7B_IDQAbstractItemModel(V) ((QAbstractItemModel*)V->ref)
#define Q7B_IDQAbstractItemView(V) ((QAbstractItemView*)V->ref)
#define Q7B_IDQAbstractPrintDialog(V) ((QAbstractPrintDialog*)V->ref)
#define Q7B_IDQAbstractScrollArea(V) ((QAbstractScrollArea*)V->ref)
#define Q7B_IDQAbstractSlider(V) ((QAbstractSlider*)V->ref)
#define Q7B_IDQAbstractSpinBox(V) ((QAbstractSpinBox*)V->ref)
#define Q7B_IDQAbstractTextDocumentLayout(V) ((QAbstractTextDocumentLayout*)V->ref)
#define Q7B_IDQAccessibleEvent(V) (*((QAccessibleEvent*)V->ref))
#define Q7B_IDQAction(V) ((QAction*)V->ref)
#define Q7B_IDQActionEvent(V) (*((QActionEvent*)V->ref))
#define Q7B_IDQActionGroup(V) ((QActionGroup*)V->ref)
#define Q7B_IDQApplication(V) ((QApplication*)V->ref)
#define Q7B_IDQBitmap(V) (*((QBitmap*)V->ref))
#define Q7B_IDQBoxLayout(V) (*((QBoxLayout*)V->ref))
#define Q7B_IDQBrush(V) (*((QBrush*)V->ref))
#define Q7B_IDQButtonGroup(V) ((QButtonGroup*)V->ref)
#define Q7B_IDQByteArray(V) (*((QByteArray*)V->ref))
#define Q7B_IDQCalendarWidget(V) ((QCalendarWidget*)V->ref)
#define Q7B_IDQChar(V) (*((QChar*)V->ref))
#define Q7B_IDQCheckBox(V) ((QCheckBox*)V->ref)
#define Q7B_IDQChildEvent(V) (*((QChildEvent*)V->ref))
#define Q7B_IDQClipboard(V) ((QClipboard*)V->ref)
#define Q7B_IDQCloseEvent(V) (*((QCloseEvent*)V->ref))
#define Q7B_IDQColor(V) (*((QColor*)V->ref))
#define Q7B_IDQColumnView(V) ((QColumnView*)V->ref)
#define Q7B_IDQComboBox(V) ((QComboBox*)V->ref)
#define Q7B_IDQCommandLinkButton(V) ((QCommandLinkButton*)V->ref)
#define Q7B_IDQCompleter(V) ((QCompleter*)V->ref)
#define Q7B_IDQContextMenuEvent(V) (*((QContextMenuEvent*)V->ref))
#define Q7B_IDQCoreApplication(V) ((QCoreApplication*)V->ref)
#define Q7B_IDQCursor(V) (*((QCursor*)V->ref))
#define Q7B_IDQDate(V) (*((QDate*)V->ref))
#define Q7B_IDQDateEdit(V) ((QDateEdit*)V->ref)
#define Q7B_IDQDateTime(V) (*((QDateTime*)V->ref))
#define Q7B_IDQDateTimeEdit(V) ((QDateTimeEdit*)V->ref)
#define Q7B_IDQDeclarativeContext(V) (*((QDeclarativeContext*)V->ref))
#define Q7B_IDQDeclarativeView(V) ((QDeclarativeView*)V->ref)
#define Q7B_IDQDial(V) ((QDial*)V->ref)
#define Q7B_IDQDialog(V) ((QDialog*)V->ref)
#define Q7B_IDQDialogButtonBox(V) ((QDialogButtonBox*)V->ref)
#define Q7B_IDQDir(V) (*((QDir*)V->ref))
#define Q7B_IDQDockWidget(V) ((QDockWidget*)V->ref)
#define Q7B_IDQDoubleSpinBox(V) ((QDoubleSpinBox*)V->ref)
#define Q7B_IDQDrag(V) ((QDrag*)V->ref)
#define Q7B_IDQDragLeaveEvent(V) (*((QDragLeaveEvent*)V->ref))
#define Q7B_IDQDropEvent(V) (*((QDropEvent*)V->ref))
#define Q7B_IDQDynamicPropertyChangeEvent(V) (*((QDynamicPropertyChangeEvent*)V->ref))
#define Q7B_IDQElapsedTimer(V) (*((QElapsedTimer*)V->ref))
#define Q7B_IDQEvent(V) (*((QEvent*)V->ref))
#define Q7B_IDQFileInfo(V) (*((QFileInfo*)V->ref))
#define Q7B_IDQFileInfoList(V) (*((QFileInfoList*)V->ref))
#define Q7B_IDQFileOpenEvent(V) (*((QFileOpenEvent*)V->ref))
#define Q7B_IDQFileSystemWatcher(V) ((QFileSystemWatcher*)V->ref)
#define Q7B_IDQFocusEvent(V) (*((QFocusEvent*)V->ref))
#define Q7B_IDQFont(V) (*((QFont*)V->ref))
#define Q7B_IDQFontComboBox(V) ((QFontComboBox*)V->ref)
#define Q7B_IDQFontDatabase(V) (*((QFontDatabase*)V->ref))
#define Q7B_IDQFontInfo(V) (*((QFontInfo*)V->ref))
#define Q7B_IDQFontMetrics(V) (*((QFontMetrics*)V->ref))
#define Q7B_IDQFormLayout(V) (*((QFormLayout*)V->ref))
#define Q7B_IDQFrame(V) ((QFrame*)V->ref)
#define Q7B_IDQFtp(V) ((QFtp*)V->ref)
#define Q7B_IDQGraphicsSceneEvent(V) (*((QGraphicsSceneEvent*)V->ref))
#define Q7B_IDQGraphicsView(V) ((QGraphicsView*)V->ref)
#define Q7B_IDQGridLayout(V) (*((QGridLayout*)V->ref))
#define Q7B_IDQGroupBox(V) ((QGroupBox*)V->ref)
#define Q7B_IDQHBoxLayout(V) (*((QHBoxLayout*)V->ref))
#define Q7B_IDQHeaderView(V) ((QHeaderView*)V->ref)
#define Q7B_IDQHelpEvent(V) (*((QHelpEvent*)V->ref))
#define Q7B_IDQHideEvent(V) (*((QHideEvent*)V->ref))
#define Q7B_IDQHostAddress(V) (*((QHostAddress*)V->ref))
#define Q7B_IDQHostInfo(V) (*((QHostInfo*)V->ref))
#define Q7B_IDQHoverEvent(V) (*((QHoverEvent*)V->ref))
#define Q7B_IDQIcon(V) (*((QIcon*)V->ref))
#define Q7B_IDQIconDragEvent(V) (*((QIconDragEvent*)V->ref))
#define Q7B_IDQImage(V) (*((QImage*)V->ref))
#define Q7B_IDQInputDialog(V) ((QInputDialog*)V->ref)
#define Q7B_IDQInputEvent(V) (*((QInputEvent*)V->ref))
#define Q7B_IDQInputMethodEvent(V) (*((QInputMethodEvent*)V->ref))
#define Q7B_IDQIntValidator(V) ((QIntValidator*)V->ref)
#define Q7B_IDQItemSelectionModel(V) ((QItemSelectionModel*)V->ref)
#define Q7B_IDQKeySequence(V) (*((QKeySequence*)V->ref))
#define Q7B_IDQLCDNumber(V) ((QLCDNumber*)V->ref)
#define Q7B_IDQLabel(V) ((QLabel*)V->ref)
#define Q7B_IDQLayout(V) (*((QLayout*)V->ref))
#define Q7B_IDQLayoutItem(V) (*((QLayoutItem*)V->ref))
#define Q7B_IDQLine(V) (*((QLine*)V->ref))
#define Q7B_IDQLineEdit(V) ((QLineEdit*)V->ref)
#define Q7B_IDQListQStringList(V) (*((QList<QStringList>*)V->ref))
#define Q7B_IDQListView(V) ((QListView*)V->ref)
#define Q7B_IDQListWidget(V) ((QListWidget*)V->ref)
#define Q7B_IDQListWidgetItem(V) (*((QListWidgetItem*)V->ref))
#define Q7B_IDQLocalServer(V) ((QLocalServer*)V->ref)
#define Q7B_IDQLocalSocket(V) (*((QLocalSocket*)V->ref))
#define Q7B_IDQLocale(V) (*((QLocale*)V->ref))
#define Q7B_IDQMainWindow(V) ((QMainWindow*)V->ref)
#define Q7B_IDQMargins(V) (*((QMargins*)V->ref))
#define Q7B_IDQMatrix(V) (*((QMatrix*)V->ref))
#define Q7B_IDQMdiArea(V) ((QMdiArea*)V->ref)
#define Q7B_IDQMdiSubWindow(V) ((QMdiSubWindow*)V->ref)
#define Q7B_IDQMenu(V) ((QMenu*)V->ref)
#define Q7B_IDQMenuBar(V) ((QMenuBar*)V->ref)
#define Q7B_IDQMimeData(V) ((QMimeData*)V->ref)
#define Q7B_IDQModelIndex(V) (*((QModelIndex*)V->ref))
#define Q7B_IDQMoveEvent(V) (*((QMoveEvent*)V->ref))
#define Q7B_IDQMovie(V) ((QMovie*)V->ref)
#define Q7B_IDQNetworkRequest(V) (*((QNetworkRequest*)V->ref))
#define Q7B_IDQNetworkSession(V) ((QNetworkSession*)V->ref)
#define Q7B_IDQObject(V) ((QObject*)V->ref)
#define Q7B_IDQPaintEvent(V) (*((QPaintEvent*)V->ref))
#define Q7B_IDQPainter(V) (*((QPainter*)V->ref))
#define Q7B_IDQPalette(V) (*((QPalette*)V->ref))
#define Q7B_IDQPen(V) (*((QPen*)V->ref))
#define Q7B_IDQPicture(V) (*((QPicture*)V->ref))
#define Q7B_IDQPixmap(V) (*((QPixmap*)V->ref))
#define Q7B_IDQPlainTextEdit(V) ((QPlainTextEdit*)V->ref)
#define Q7B_IDQPoint(V) (*((QPoint*)V->ref))
#define Q7B_IDQPolygon(V) (*((QPolygon*)V->ref))
#define Q7B_IDQPrintDialog(V) ((QPrintDialog*)V->ref)
#define Q7B_IDQPrintPreviewDialog(V) ((QPrintPreviewDialog*)V->ref)
#define Q7B_IDQPrintPreviewWidget(V) ((QPrintPreviewWidget*)V->ref)
#define Q7B_IDQPrinter(V) (*((QPrinter*)V->ref))
#define Q7B_IDQPrinterInfo(V) (*((QPrinterInfo*)V->ref))
#define Q7B_IDQProcess(V) (*((QProcess*)V->ref))
#define Q7B_IDQProcessEnvironment(V) (*((QProcessEnvironment*)V->ref))
#define Q7B_IDQProgressBar(V) ((QProgressBar*)V->ref)
#define Q7B_IDQProgressDialog(V) ((QProgressDialog*)V->ref)
#define Q7B_IDQPushButton(V) ((QPushButton*)V->ref)
#define Q7B_IDQRadioButton(V) ((QRadioButton*)V->ref)
#define Q7B_IDQRect(V) (*((QRect*)V->ref))
#define Q7B_IDQRegExp(V) (*((QRegExp*)V->ref))
#define Q7B_IDQRegExpValidator(V) ((QRegExpValidator*)V->ref)
#define Q7B_IDQRegion(V) (*((QRegion*)V->ref))
#define Q7B_IDQResizeEvent(V) (*((QResizeEvent*)V->ref))
#define Q7B_IDQResource(V) (*((QResource*)V->ref))
#define Q7B_IDQRgb(V) (*((QRgb*)V->ref))
#define Q7B_IDQRubberBand(V) ((QRubberBand*)V->ref)
#define Q7B_IDQScrollArea(V) ((QScrollArea*)V->ref)
#define Q7B_IDQScrollBar(V) ((QScrollBar*)V->ref)
#define Q7B_IDQSessionManager(V) ((QSessionManager*)V->ref)
#define Q7B_IDQShortcutEvent(V) (*((QShortcutEvent*)V->ref))
#define Q7B_IDQShowEvent(V) (*((QShowEvent*)V->ref))
#define Q7B_IDQSignalMapper(V) ((QSignalMapper*)V->ref)
#define Q7B_IDQSize(V) (*((QSize*)V->ref))
#define Q7B_IDQSizeF(V) (*((QSizeF*)V->ref))
#define Q7B_IDQSizeGrip(V) ((QSizeGrip*)V->ref)
#define Q7B_IDQSizePolicy(V) (*((QSizePolicy*)V->ref))
#define Q7B_IDQSlider(V) ((QSlider*)V->ref)
#define Q7B_IDQSound(V) ((QSound*)V->ref)
#define Q7B_IDQSpinBox(V) ((QSpinBox*)V->ref)
#define Q7B_IDQSplashScreen(V) ((QSplashScreen*)V->ref)
#define Q7B_IDQSplitter(V) ((QSplitter*)V->ref)
#define Q7B_IDQSplitterHandle(V) ((QSplitterHandle*)V->ref)
#define Q7B_IDQStackedLayout(V) (*((QStackedLayout*)V->ref))
#define Q7B_IDQStackedWidget(V) ((QStackedWidget*)V->ref)
#define Q7B_IDQStatusBar(V) ((QStatusBar*)V->ref)
#define Q7B_IDQStatusTipEvent(V) (*((QStatusTipEvent*)V->ref))
#define Q7B_IDQString(V) (*((QString*)V->ref))
#define Q7B_IDQStringList(V) (*((QStringList*)V->ref))
#define Q7B_IDQSvgWidget(V) ((QSvgWidget*)V->ref)
#define Q7B_IDQSyntaxHighlighter(V) ((QSyntaxHighlighter*)V->ref)
#define Q7B_IDQSystemLocale(V) (*((QSystemLocale*)V->ref))
#define Q7B_IDQSystemTrayIcon(V) (*((QSystemTrayIcon*)V->ref))
#define Q7B_IDQTabBar(V) ((QTabBar*)V->ref)
#define Q7B_IDQTabWidget(V) ((QTabWidget*)V->ref)
#define Q7B_IDQTableView(V) ((QTableView*)V->ref)
#define Q7B_IDQTableWidget(V) ((QTableWidget*)V->ref)
#define Q7B_IDQTableWidgetItem(V) (*((QTableWidgetItem*)V->ref))
#define Q7B_IDQTextBlock(V) (*((QTextBlock*)V->ref))
#define Q7B_IDQTextBlockFormat(V) (*((QTextBlockFormat*)V->ref))
#define Q7B_IDQTextBrowser(V) ((QTextBrowser*)V->ref)
#define Q7B_IDQTextCharFormat(V) (*((QTextCharFormat*)V->ref))
#define Q7B_IDQTextCursor(V) (*((QTextCursor*)V->ref))
#define Q7B_IDQTextDocument(V) ((QTextDocument*)V->ref)
#define Q7B_IDQTextDocumentFragment(V) (*((QTextDocumentFragment*)V->ref))
#define Q7B_IDQTextEdit(V) ((QTextEdit*)V->ref)
#define Q7B_IDQTextFormat(V) (*((QTextFormat*)V->ref))
#define Q7B_IDQTextFrameFormat(V) (*((QTextFrameFormat*)V->ref))
#define Q7B_IDQTextOption(V) (*((QTextOption*)V->ref))
#define Q7B_IDQThread(V) ((QThread*)V->ref)
#define Q7B_IDQTime(V) (*((QTime*)V->ref))
#define Q7B_IDQTimeEdit(V) ((QTimeEdit*)V->ref)
#define Q7B_IDQTimeLine(V) ((QTimeLine*)V->ref)
#define Q7B_IDQTimer(V) ((QTimer*)V->ref)
#define Q7B_IDQTimerEvent(V) (*((QTimerEvent*)V->ref))
#define Q7B_IDQToolBar(V) ((QToolBar*)V->ref)
#define Q7B_IDQToolBox(V) ((QToolBox*)V->ref)
#define Q7B_IDQToolButton(V) ((QToolButton*)V->ref)
#define Q7B_IDQTransform(V) (*((QTransform*)V->ref))
#define Q7B_IDQTreeView(V) ((QTreeView*)V->ref)
#define Q7B_IDQTreeWidget(V) ((QTreeWidget*)V->ref)
#define Q7B_IDQTreeWidgetItem(V) (*((QTreeWidgetItem*)V->ref))
#define Q7B_IDQUrl(V) (*((QUrl*)V->ref))
#define Q7B_IDQUrlInfo(V) (*((QUrlInfo*)V->ref))
#define Q7B_IDQVBoxLayout(V) (*((QVBoxLayout*)V->ref))
#define Q7B_IDQValidator(V) ((QValidator*)V->ref)
#define Q7B_IDQVariant(V) (*((QVariant*)V->ref))
#define Q7B_IDQWebPage(V) ((QWebPage*)V->ref)
#define Q7B_IDQWebSettings(V) (*((QWebSettings*)V->ref))
#define Q7B_IDQWebView(V) ((QWebView*)V->ref)
#define Q7B_IDQWhatsThisClickedEvent(V) (*((QWhatsThisClickedEvent*)V->ref))
#define Q7B_IDQWidget(V) ((QWidget*)V->ref)
#define Q7B_IDQWindowStateChangeEvent(V) (*((QWindowStateChangeEvent*)V->ref))
// End Generator h#5



class Q7B_Decimal;
class Q7B_List;
class Q7B_Dictionary;

Q7B Q7B_IDNIL();
Q7B Q7B_IDNULL();

extern Q7B Q7B_idMAINWINDOW;
extern QList<Q7B> Q7B_binds;

void Q7B_fromXMLList(QXmlStreamReader * xmlReader, Q7B_List *a, Q7B theArray2, Q7B theType2);


struct Q7B_t_sound{
public:
  QByteArray *bytearray;
  QBuffer *buffer;
};

class Q7B_id
{
public:
  Q7B_id()
  {
    type = 0;
    ref = 0;
    q7b_array = 0;
    q7b_type = 0;
    q7b_properties = 0;
    q7b_array_count = 0;
    gc_enabled = true;
    VM_self_Q7B = 0;
    VM_Q7B_me_vars = 0;
  }

  Q7B_id(const char *t, void * r)
  {
    type = t;
    ref = r;
    q7b_array = 0;
    q7b_type = 0;
    q7b_properties = 0;
    q7b_array_count = 0;
    gc_enabled = true;
    VM_self_Q7B = 0;
    VM_Q7B_me_vars = 0;
  }

  Q7B_id(const char *t, void * r, bool _gc_enabled)
  {
    type = t;
    ref = r;
    q7b_array = 0;
    q7b_type = 0;
    q7b_properties = 0;
    q7b_array_count = 0;
    gc_enabled = _gc_enabled;
    VM_self_Q7B = 0;
    VM_Q7B_me_vars = 0;
  }

 // void ByRefAssignment(Q7B c);

/*
  Q7B_id(const Q7B_id &toCopy)
  {
    type = toCopy.type;
    ref = toCopy.ref;
    q7b_array = toCopy.q7b_array;
    q7b_array_count = toCopy.q7b_array_count;
    gc_enabled = toCopy.gc_enabled;

    if (q7b_array){
      QMessageBox::information(0, "nst Q7B_id &toCopy", "");
    }
  }*/

  ~Q7B_id();

  void setProperty(QString Name, QVariant Value)
  {
    if (q7b_properties == 0){
      q7b_properties = new QMap<QString, QVariant>;
    }

    q7b_properties->insert(Name, Value);
  }

  QVariant property(QString Name)
  {
    if (q7b_properties == 0){
      return QVariant();
    }

    return q7b_properties->value(Name);
  }

  bool isQObjectBased();

public:
  const char *type;
  void *ref;     

  Q7B *VM_self_Q7B;  // used for VM mode

   // TODO2 uu["bernd", "alter"] = 999  MsgBox(uu["bernd", "alter"]) 

  //q7b_array_set, q7b_array_get, q7b_type_set, q7b_type_get... verwenden kein ref!

  qint32 array_indexes[4]; // 200, 100, 500
  qint32 q7b_array_count;

  QVector<Q7B> *q7b_array; 

  QVector<Q7B> *q7b_type;

  QMap<QString, QVariant> *q7b_properties;

  QMap<QString, Q7B> *VM_Q7B_me_vars;

  /*

  
  QMap<filename/typename>=typetype          typdefinition in der runtime bekannt

  QStringList q7b_type_names;
  QList<QStringList> q7b_type_arrayexpressions;
  QStringList q7b_type_types;
  QList<int> q7b_type_sizes;
  QStringList q7b_type_encodings;





(((((
  QByteArray *q7b_type

  q7b_type_set(id, type_offset, value) as id     type_offset wird vom compiler ermittelt, wenn type_offset outofbounds->runtime exception
  q7b_type_get(id, type_offset) as value
  type: destructor muss q7b_type l?schen



  q7b_type_set(u, Q7B__QOBJECT(Q7B_INTEGER(Q7B_ID(10))), 29999)
statt 
  u = Q7B__QOBJECT(Q7B_INTEGER(Q7B_ID(10)));

  Q7B__MSGBOX(Q7B_ID(Q7B_ADD(Q7B_ID(q7b_type_get(u, 29999)), Q7B_ID(q7b_type_get(u, 29999)))));
statt 
  Q7B__MSGBOX(Q7B_ID(Q7B_ADD(Q7B_ID(u), Q7B_ID(u))));


  nur zahlen und string darf in type verwendet werden, keine objekte (geht mit gc nicht, daf?r m?sste dieser die struktur kennen und alles abarbeiten)
  bei zugriff wird aus qbytearray tempor?r ein neues object erzeugt   read/write   mit get(id/set(id

  assignment nur einzelnes element t[2,2] = t[2,2] oder ganze variable t = t

  )))))))))))
  */
  bool gc_enabled;
};

//extern void Q7B_GLOBAL_DELETELATER(Q7B_id *p);



// Begin Generator h#1
Q7B Q7B_CLASS(Q7B Q7B_Object);
Q7B Q7B__CLASS(Q7B Q7B_Object);
Q7B Q7B_FORMCLASS(Q7B Q7B_Object);
Q7B Q7B__FORMCLASS(Q7B Q7B_Object);
Q7B Q7B_MODULE(Q7B Q7B_Object);
Q7B Q7B__MODULE(Q7B Q7B_Object);
Q7B Q7B_PHONONSEEKSLIDER(Q7B Q7B_Object);
Q7B Q7B__PHONONSEEKSLIDER(Q7B Q7B_Object);
Q7B Q7B_ID(Phonon::SeekSlider* o);
Q7B Q7B_PHONONVIDEOPLAYER(Q7B Q7B_Object);
Q7B Q7B__PHONONVIDEOPLAYER(Q7B Q7B_Object);
Q7B Q7B_ID(Phonon::VideoPlayer* o);
Q7B Q7B_PHONONVOLUMESLIDER(Q7B Q7B_Object);
Q7B Q7B__PHONONVOLUMESLIDER(Q7B Q7B_Object);
Q7B Q7B_ID(Phonon::VolumeSlider* o);
Q7B Q7B_QABSTRACTBUTTON(Q7B Q7B_Object);
Q7B Q7B__QABSTRACTBUTTON(Q7B Q7B_Object);
Q7B Q7B_ID(QAbstractButton* o);
Q7B Q7B_QABSTRACTITEMMODEL(Q7B Q7B_Object);
Q7B Q7B__QABSTRACTITEMMODEL(Q7B Q7B_Object);
Q7B Q7B_ID(QAbstractItemModel* o);
Q7B Q7B_QABSTRACTITEMVIEW(Q7B Q7B_Object);
Q7B Q7B__QABSTRACTITEMVIEW(Q7B Q7B_Object);
Q7B Q7B_ID(QAbstractItemView* o);
Q7B Q7B_QABSTRACTPRINTDIALOG(Q7B Q7B_Object);
Q7B Q7B__QABSTRACTPRINTDIALOG(Q7B Q7B_Object);
Q7B Q7B_ID(QAbstractPrintDialog* o);
Q7B Q7B_QABSTRACTSCROLLAREA(Q7B Q7B_Object);
Q7B Q7B__QABSTRACTSCROLLAREA(Q7B Q7B_Object);
Q7B Q7B_ID(QAbstractScrollArea* o);
Q7B Q7B_QABSTRACTSLIDER(Q7B Q7B_Object);
Q7B Q7B__QABSTRACTSLIDER(Q7B Q7B_Object);
Q7B Q7B_ID(QAbstractSlider* o);
Q7B Q7B_QABSTRACTSPINBOX(Q7B Q7B_Object);
Q7B Q7B__QABSTRACTSPINBOX(Q7B Q7B_Object);
Q7B Q7B_ID(QAbstractSpinBox* o);
Q7B Q7B_QABSTRACTTEXTDOCUMENTLAYOUT(Q7B Q7B_Object);
Q7B Q7B__QABSTRACTTEXTDOCUMENTLAYOUT(Q7B Q7B_Object);
Q7B Q7B_ID(QAbstractTextDocumentLayout* o);
Q7B Q7B_QACCESSIBLEEVENT(Q7B Q7B_Object);
Q7B Q7B__QACCESSIBLEEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QAccessibleEvent* o);
Q7B Q7B_ID(QAccessibleEvent o);
Q7B Q7B_QACTION(Q7B Q7B_Object);
Q7B Q7B__QACTION(Q7B Q7B_Object);
Q7B Q7B_ID(QAction* o);
Q7B Q7B_QACTIONEVENT(Q7B Q7B_Object);
Q7B Q7B__QACTIONEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QActionEvent* o);
Q7B Q7B_ID(QActionEvent o);
Q7B Q7B_QACTIONGROUP(Q7B Q7B_Object);
Q7B Q7B__QACTIONGROUP(Q7B Q7B_Object);
Q7B Q7B_ID(QActionGroup* o);
Q7B Q7B_QAPPLICATION(Q7B Q7B_Object);
Q7B Q7B__QAPPLICATION(Q7B Q7B_Object);
Q7B Q7B_ID(QApplication* o);
Q7B Q7B_QBITMAP(Q7B Q7B_Object);
Q7B Q7B__QBITMAP(Q7B Q7B_Object);
Q7B Q7B_ID(QBitmap* o);
Q7B Q7B_ID(QBitmap o);
Q7B Q7B_QBOXLAYOUT(Q7B Q7B_Object);
Q7B Q7B__QBOXLAYOUT(Q7B Q7B_Object);
Q7B Q7B_ID(QBoxLayout* o);
Q7B Q7B_QBRUSH(Q7B Q7B_Object);
Q7B Q7B__QBRUSH(Q7B Q7B_Object);
Q7B Q7B_ID(QBrush* o);
Q7B Q7B_ID(QBrush o);
Q7B Q7B_QBUTTONGROUP(Q7B Q7B_Object);
Q7B Q7B__QBUTTONGROUP(Q7B Q7B_Object);
Q7B Q7B_ID(QButtonGroup* o);
Q7B Q7B_QBYTEARRAY(Q7B Q7B_Object);
Q7B Q7B__QBYTEARRAY(Q7B Q7B_Object);
Q7B Q7B_ID(QByteArray* o);
Q7B Q7B_ID(QByteArray o);
Q7B Q7B_QCALENDARWIDGET(Q7B Q7B_Object);
Q7B Q7B__QCALENDARWIDGET(Q7B Q7B_Object);
Q7B Q7B_ID(QCalendarWidget* o);
Q7B Q7B_QCHAR(Q7B Q7B_Object);
Q7B Q7B__QCHAR(Q7B Q7B_Object);
Q7B Q7B_ID(QChar* o);
Q7B Q7B_ID(QChar o);
Q7B Q7B_QCHECKBOX(Q7B Q7B_Object);
Q7B Q7B__QCHECKBOX(Q7B Q7B_Object);
Q7B Q7B_ID(QCheckBox* o);
Q7B Q7B_QCHILDEVENT(Q7B Q7B_Object);
Q7B Q7B__QCHILDEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QChildEvent* o);
Q7B Q7B_ID(QChildEvent o);
Q7B Q7B_QCLIPBOARD(Q7B Q7B_Object);
Q7B Q7B__QCLIPBOARD(Q7B Q7B_Object);
Q7B Q7B_ID(QClipboard* o);
Q7B Q7B_QCLOSEEVENT(Q7B Q7B_Object);
Q7B Q7B__QCLOSEEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QCloseEvent* o);
Q7B Q7B_ID(QCloseEvent o);
Q7B Q7B_QCOLOR(Q7B Q7B_Object);
Q7B Q7B__QCOLOR(Q7B Q7B_Object);
Q7B Q7B_ID(QColor* o);
Q7B Q7B_ID(QColor o);
Q7B Q7B_QCOLUMNVIEW(Q7B Q7B_Object);
Q7B Q7B__QCOLUMNVIEW(Q7B Q7B_Object);
Q7B Q7B_ID(QColumnView* o);
Q7B Q7B_QCOMBOBOX(Q7B Q7B_Object);
Q7B Q7B__QCOMBOBOX(Q7B Q7B_Object);
Q7B Q7B_ID(QComboBox* o);
Q7B Q7B_QCOMMANDLINKBUTTON(Q7B Q7B_Object);
Q7B Q7B__QCOMMANDLINKBUTTON(Q7B Q7B_Object);
Q7B Q7B_ID(QCommandLinkButton* o);
Q7B Q7B_QCOMPLETER(Q7B Q7B_Object);
Q7B Q7B__QCOMPLETER(Q7B Q7B_Object);
Q7B Q7B_ID(QCompleter* o);
Q7B Q7B_QCONTEXTMENUEVENT(Q7B Q7B_Object);
Q7B Q7B__QCONTEXTMENUEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QContextMenuEvent* o);
Q7B Q7B_ID(QContextMenuEvent o);
Q7B Q7B_QCOREAPPLICATION(Q7B Q7B_Object);
Q7B Q7B__QCOREAPPLICATION(Q7B Q7B_Object);
Q7B Q7B_ID(QCoreApplication* o);
Q7B Q7B_QCURSOR(Q7B Q7B_Object);
Q7B Q7B__QCURSOR(Q7B Q7B_Object);
Q7B Q7B_ID(QCursor* o);
Q7B Q7B_ID(QCursor o);
Q7B Q7B_QDATE(Q7B Q7B_Object);
Q7B Q7B__QDATE(Q7B Q7B_Object);
Q7B Q7B_ID(QDate* o);
Q7B Q7B_ID(QDate o);
Q7B Q7B_QDATEEDIT(Q7B Q7B_Object);
Q7B Q7B__QDATEEDIT(Q7B Q7B_Object);
Q7B Q7B_ID(QDateEdit* o);
Q7B Q7B_QDATETIME(Q7B Q7B_Object);
Q7B Q7B__QDATETIME(Q7B Q7B_Object);
Q7B Q7B_ID(QDateTime* o);
Q7B Q7B_ID(QDateTime o);
Q7B Q7B_QDATETIMEEDIT(Q7B Q7B_Object);
Q7B Q7B__QDATETIMEEDIT(Q7B Q7B_Object);
Q7B Q7B_ID(QDateTimeEdit* o);
Q7B Q7B_QDECLARATIVECONTEXT(Q7B Q7B_Object);
Q7B Q7B__QDECLARATIVECONTEXT(Q7B Q7B_Object);
Q7B Q7B_ID(QDeclarativeContext* o);
Q7B Q7B_QDECLARATIVEVIEW(Q7B Q7B_Object);
Q7B Q7B__QDECLARATIVEVIEW(Q7B Q7B_Object);
Q7B Q7B_ID(QDeclarativeView* o);
Q7B Q7B_QDIAL(Q7B Q7B_Object);
Q7B Q7B__QDIAL(Q7B Q7B_Object);
Q7B Q7B_ID(QDial* o);
Q7B Q7B_QDIALOG(Q7B Q7B_Object);
Q7B Q7B__QDIALOG(Q7B Q7B_Object);
Q7B Q7B_ID(QDialog* o);
Q7B Q7B_QDIALOGBUTTONBOX(Q7B Q7B_Object);
Q7B Q7B__QDIALOGBUTTONBOX(Q7B Q7B_Object);
Q7B Q7B_ID(QDialogButtonBox* o);
Q7B Q7B_QDIR(Q7B Q7B_Object);
Q7B Q7B__QDIR(Q7B Q7B_Object);
Q7B Q7B_ID(QDir* o);
Q7B Q7B_ID(QDir o);
Q7B Q7B_QDOCKWIDGET(Q7B Q7B_Object);
Q7B Q7B__QDOCKWIDGET(Q7B Q7B_Object);
Q7B Q7B_ID(QDockWidget* o);
Q7B Q7B_QDOUBLESPINBOX(Q7B Q7B_Object);
Q7B Q7B__QDOUBLESPINBOX(Q7B Q7B_Object);
Q7B Q7B_ID(QDoubleSpinBox* o);
Q7B Q7B_QDRAG(Q7B Q7B_Object);
Q7B Q7B__QDRAG(Q7B Q7B_Object);
Q7B Q7B_ID(QDrag* o);
Q7B Q7B_QDRAGLEAVEEVENT(Q7B Q7B_Object);
Q7B Q7B__QDRAGLEAVEEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QDragLeaveEvent* o);
Q7B Q7B_ID(QDragLeaveEvent o);
Q7B Q7B_QDROPEVENT(Q7B Q7B_Object);
Q7B Q7B__QDROPEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QDropEvent* o);
Q7B Q7B_ID(QDropEvent o);
Q7B Q7B_QDYNAMICPROPERTYCHANGEEVENT(Q7B Q7B_Object);
Q7B Q7B__QDYNAMICPROPERTYCHANGEEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QDynamicPropertyChangeEvent* o);
Q7B Q7B_ID(QDynamicPropertyChangeEvent o);
Q7B Q7B_QELAPSEDTIMER(Q7B Q7B_Object);
Q7B Q7B__QELAPSEDTIMER(Q7B Q7B_Object);
Q7B Q7B_ID(QElapsedTimer* o);
Q7B Q7B_ID(QElapsedTimer o);
Q7B Q7B_QEVENT(Q7B Q7B_Object);
Q7B Q7B__QEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QEvent* o);
Q7B Q7B_ID(QEvent o);
Q7B Q7B_QFILEINFO(Q7B Q7B_Object);
Q7B Q7B__QFILEINFO(Q7B Q7B_Object);
Q7B Q7B_ID(QFileInfo* o);
Q7B Q7B_ID(QFileInfo o);
Q7B Q7B_QFILEINFOLIST(Q7B Q7B_Object);
Q7B Q7B__QFILEINFOLIST(Q7B Q7B_Object);
Q7B Q7B_ID(QFileInfoList* o);
Q7B Q7B_ID(QFileInfoList o);
Q7B Q7B_QFILEOPENEVENT(Q7B Q7B_Object);
Q7B Q7B__QFILEOPENEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QFileOpenEvent* o);
Q7B Q7B_ID(QFileOpenEvent o);
Q7B Q7B_QFILESYSTEMWATCHER(Q7B Q7B_Object);
Q7B Q7B__QFILESYSTEMWATCHER(Q7B Q7B_Object);
Q7B Q7B_ID(QFileSystemWatcher* o);
Q7B Q7B_QFOCUSEVENT(Q7B Q7B_Object);
Q7B Q7B__QFOCUSEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QFocusEvent* o);
Q7B Q7B_ID(QFocusEvent o);
Q7B Q7B_QFONT(Q7B Q7B_Object);
Q7B Q7B__QFONT(Q7B Q7B_Object);
Q7B Q7B_ID(QFont* o);
Q7B Q7B_ID(QFont o);
Q7B Q7B_QFONTCOMBOBOX(Q7B Q7B_Object);
Q7B Q7B__QFONTCOMBOBOX(Q7B Q7B_Object);
Q7B Q7B_ID(QFontComboBox* o);
Q7B Q7B_QFONTDATABASE(Q7B Q7B_Object);
Q7B Q7B__QFONTDATABASE(Q7B Q7B_Object);
Q7B Q7B_ID(QFontDatabase* o);
Q7B Q7B_ID(QFontDatabase o);
Q7B Q7B_QFONTINFO(Q7B Q7B_Object);
Q7B Q7B__QFONTINFO(Q7B Q7B_Object);
Q7B Q7B_ID(QFontInfo* o);
Q7B Q7B_ID(QFontInfo o);
Q7B Q7B_QFONTMETRICS(Q7B Q7B_Object);
Q7B Q7B__QFONTMETRICS(Q7B Q7B_Object);
Q7B Q7B_ID(QFontMetrics* o);
Q7B Q7B_ID(QFontMetrics o);
Q7B Q7B_QFORMLAYOUT(Q7B Q7B_Object);
Q7B Q7B__QFORMLAYOUT(Q7B Q7B_Object);
Q7B Q7B_ID(QFormLayout* o);
Q7B Q7B_QFRAME(Q7B Q7B_Object);
Q7B Q7B__QFRAME(Q7B Q7B_Object);
Q7B Q7B_ID(QFrame* o);
Q7B Q7B_QFTP(Q7B Q7B_Object);
Q7B Q7B__QFTP(Q7B Q7B_Object);
Q7B Q7B_ID(QFtp* o);
Q7B Q7B_QGRAPHICSSCENEEVENT(Q7B Q7B_Object);
Q7B Q7B__QGRAPHICSSCENEEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QGraphicsSceneEvent* o);
Q7B Q7B_QGRAPHICSVIEW(Q7B Q7B_Object);
Q7B Q7B__QGRAPHICSVIEW(Q7B Q7B_Object);
Q7B Q7B_ID(QGraphicsView* o);
Q7B Q7B_QGRIDLAYOUT(Q7B Q7B_Object);
Q7B Q7B__QGRIDLAYOUT(Q7B Q7B_Object);
Q7B Q7B_ID(QGridLayout* o);
Q7B Q7B_QGROUPBOX(Q7B Q7B_Object);
Q7B Q7B__QGROUPBOX(Q7B Q7B_Object);
Q7B Q7B_ID(QGroupBox* o);
Q7B Q7B_QHBOXLAYOUT(Q7B Q7B_Object);
Q7B Q7B__QHBOXLAYOUT(Q7B Q7B_Object);
Q7B Q7B_ID(QHBoxLayout* o);
Q7B Q7B_QHEADERVIEW(Q7B Q7B_Object);
Q7B Q7B__QHEADERVIEW(Q7B Q7B_Object);
Q7B Q7B_ID(QHeaderView* o);
Q7B Q7B_QHELPEVENT(Q7B Q7B_Object);
Q7B Q7B__QHELPEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QHelpEvent* o);
Q7B Q7B_ID(QHelpEvent o);
Q7B Q7B_QHIDEEVENT(Q7B Q7B_Object);
Q7B Q7B__QHIDEEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QHideEvent* o);
Q7B Q7B_ID(QHideEvent o);
Q7B Q7B_QHOSTADDRESS(Q7B Q7B_Object);
Q7B Q7B__QHOSTADDRESS(Q7B Q7B_Object);
Q7B Q7B_ID(QHostAddress* o);
Q7B Q7B_ID(QHostAddress o);
Q7B Q7B_QHOSTINFO(Q7B Q7B_Object);
Q7B Q7B__QHOSTINFO(Q7B Q7B_Object);
Q7B Q7B_ID(QHostInfo* o);
Q7B Q7B_ID(QHostInfo o);
Q7B Q7B_QHOVEREVENT(Q7B Q7B_Object);
Q7B Q7B__QHOVEREVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QHoverEvent* o);
Q7B Q7B_ID(QHoverEvent o);
Q7B Q7B_QICON(Q7B Q7B_Object);
Q7B Q7B__QICON(Q7B Q7B_Object);
Q7B Q7B_ID(QIcon* o);
Q7B Q7B_ID(QIcon o);
Q7B Q7B_QICONDRAGEVENT(Q7B Q7B_Object);
Q7B Q7B__QICONDRAGEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QIconDragEvent* o);
Q7B Q7B_ID(QIconDragEvent o);
Q7B Q7B_QIMAGE(Q7B Q7B_Object);
Q7B Q7B__QIMAGE(Q7B Q7B_Object);
Q7B Q7B_ID(QImage* o);
Q7B Q7B_ID(QImage o);
Q7B Q7B_QINPUTDIALOG(Q7B Q7B_Object);
Q7B Q7B__QINPUTDIALOG(Q7B Q7B_Object);
Q7B Q7B_ID(QInputDialog* o);
Q7B Q7B_QINPUTEVENT(Q7B Q7B_Object);
Q7B Q7B__QINPUTEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QInputEvent* o);
Q7B Q7B_ID(QInputEvent o);
Q7B Q7B_QINPUTMETHODEVENT(Q7B Q7B_Object);
Q7B Q7B__QINPUTMETHODEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QInputMethodEvent* o);
Q7B Q7B_ID(QInputMethodEvent o);
Q7B Q7B_QINTVALIDATOR(Q7B Q7B_Object);
Q7B Q7B__QINTVALIDATOR(Q7B Q7B_Object);
Q7B Q7B_ID(QIntValidator* o);
Q7B Q7B_QITEMSELECTIONMODEL(Q7B Q7B_Object);
Q7B Q7B__QITEMSELECTIONMODEL(Q7B Q7B_Object);
Q7B Q7B_ID(QItemSelectionModel* o);
Q7B Q7B_QKEYSEQUENCE(Q7B Q7B_Object);
Q7B Q7B__QKEYSEQUENCE(Q7B Q7B_Object);
Q7B Q7B_ID(QKeySequence* o);
Q7B Q7B_ID(QKeySequence o);
Q7B Q7B_QLCDNUMBER(Q7B Q7B_Object);
Q7B Q7B__QLCDNUMBER(Q7B Q7B_Object);
Q7B Q7B_ID(QLCDNumber* o);
Q7B Q7B_QLABEL(Q7B Q7B_Object);
Q7B Q7B__QLABEL(Q7B Q7B_Object);
Q7B Q7B_ID(QLabel* o);
Q7B Q7B_QLAYOUT(Q7B Q7B_Object);
Q7B Q7B__QLAYOUT(Q7B Q7B_Object);
Q7B Q7B_ID(QLayout* o);
Q7B Q7B_QLAYOUTITEM(Q7B Q7B_Object);
Q7B Q7B__QLAYOUTITEM(Q7B Q7B_Object);
Q7B Q7B_ID(QLayoutItem* o);
Q7B Q7B_QLINE(Q7B Q7B_Object);
Q7B Q7B__QLINE(Q7B Q7B_Object);
Q7B Q7B_ID(QLine* o);
Q7B Q7B_ID(QLine o);
Q7B Q7B_QLINEEDIT(Q7B Q7B_Object);
Q7B Q7B__QLINEEDIT(Q7B Q7B_Object);
Q7B Q7B_ID(QLineEdit* o);
Q7B Q7B_QLISTQSTRINGLIST(Q7B Q7B_Object);
Q7B Q7B__QLISTQSTRINGLIST(Q7B Q7B_Object);
Q7B Q7B_ID(QList<QStringList>* o);
Q7B Q7B_ID(QList<QStringList> o);
Q7B Q7B_QLISTVIEW(Q7B Q7B_Object);
Q7B Q7B__QLISTVIEW(Q7B Q7B_Object);
Q7B Q7B_ID(QListView* o);
Q7B Q7B_QLISTWIDGET(Q7B Q7B_Object);
Q7B Q7B__QLISTWIDGET(Q7B Q7B_Object);
Q7B Q7B_ID(QListWidget* o);
Q7B Q7B_QLISTWIDGETITEM(Q7B Q7B_Object);
Q7B Q7B__QLISTWIDGETITEM(Q7B Q7B_Object);
Q7B Q7B_ID(QListWidgetItem* o);
Q7B Q7B_ID(QListWidgetItem o);
Q7B Q7B_QLOCALSERVER(Q7B Q7B_Object);
Q7B Q7B__QLOCALSERVER(Q7B Q7B_Object);
Q7B Q7B_ID(QLocalServer* o);
Q7B Q7B_QLOCALSOCKET(Q7B Q7B_Object);
Q7B Q7B__QLOCALSOCKET(Q7B Q7B_Object);
Q7B Q7B_ID(QLocalSocket* o);
Q7B Q7B_QLOCALE(Q7B Q7B_Object);
Q7B Q7B__QLOCALE(Q7B Q7B_Object);
Q7B Q7B_ID(QLocale* o);
Q7B Q7B_ID(QLocale o);
Q7B Q7B_QMAINWINDOW(Q7B Q7B_Object);
Q7B Q7B__QMAINWINDOW(Q7B Q7B_Object);
Q7B Q7B_ID(QMainWindow* o);
Q7B Q7B_QMARGINS(Q7B Q7B_Object);
Q7B Q7B__QMARGINS(Q7B Q7B_Object);
Q7B Q7B_ID(QMargins* o);
Q7B Q7B_ID(QMargins o);
Q7B Q7B_QMATRIX(Q7B Q7B_Object);
Q7B Q7B__QMATRIX(Q7B Q7B_Object);
Q7B Q7B_ID(QMatrix* o);
Q7B Q7B_ID(QMatrix o);
Q7B Q7B_QMDIAREA(Q7B Q7B_Object);
Q7B Q7B__QMDIAREA(Q7B Q7B_Object);
Q7B Q7B_ID(QMdiArea* o);
Q7B Q7B_QMDISUBWINDOW(Q7B Q7B_Object);
Q7B Q7B__QMDISUBWINDOW(Q7B Q7B_Object);
Q7B Q7B_ID(QMdiSubWindow* o);
Q7B Q7B_QMENU(Q7B Q7B_Object);
Q7B Q7B__QMENU(Q7B Q7B_Object);
Q7B Q7B_ID(QMenu* o);
Q7B Q7B_QMENUBAR(Q7B Q7B_Object);
Q7B Q7B__QMENUBAR(Q7B Q7B_Object);
Q7B Q7B_ID(QMenuBar* o);
Q7B Q7B_QMIMEDATA(Q7B Q7B_Object);
Q7B Q7B__QMIMEDATA(Q7B Q7B_Object);
Q7B Q7B_ID(QMimeData* o);
Q7B Q7B_QMODELINDEX(Q7B Q7B_Object);
Q7B Q7B__QMODELINDEX(Q7B Q7B_Object);
Q7B Q7B_ID(QModelIndex* o);
Q7B Q7B_ID(QModelIndex o);
Q7B Q7B_QMOVEEVENT(Q7B Q7B_Object);
Q7B Q7B__QMOVEEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QMoveEvent* o);
Q7B Q7B_ID(QMoveEvent o);
Q7B Q7B_QMOVIE(Q7B Q7B_Object);
Q7B Q7B__QMOVIE(Q7B Q7B_Object);
Q7B Q7B_ID(QMovie* o);
Q7B Q7B_QNETWORKREQUEST(Q7B Q7B_Object);
Q7B Q7B__QNETWORKREQUEST(Q7B Q7B_Object);
Q7B Q7B_ID(QNetworkRequest* o);
Q7B Q7B_ID(QNetworkRequest o);
Q7B Q7B_QNETWORKSESSION(Q7B Q7B_Object);
Q7B Q7B__QNETWORKSESSION(Q7B Q7B_Object);
Q7B Q7B_ID(QNetworkSession* o);
Q7B Q7B_QOBJECT(Q7B Q7B_Object);
Q7B Q7B__QOBJECT(Q7B Q7B_Object);
Q7B Q7B_ID(QObject* o);
Q7B Q7B_QPAINTEVENT(Q7B Q7B_Object);
Q7B Q7B__QPAINTEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QPaintEvent* o);
Q7B Q7B_ID(QPaintEvent o);
Q7B Q7B_QPAINTER(Q7B Q7B_Object);
Q7B Q7B__QPAINTER(Q7B Q7B_Object);
Q7B Q7B_ID(QPainter* o);
Q7B Q7B_QPALETTE(Q7B Q7B_Object);
Q7B Q7B__QPALETTE(Q7B Q7B_Object);
Q7B Q7B_ID(QPalette* o);
Q7B Q7B_ID(QPalette o);
Q7B Q7B_QPEN(Q7B Q7B_Object);
Q7B Q7B__QPEN(Q7B Q7B_Object);
Q7B Q7B_ID(QPen* o);
Q7B Q7B_ID(QPen o);
Q7B Q7B_QPICTURE(Q7B Q7B_Object);
Q7B Q7B__QPICTURE(Q7B Q7B_Object);
Q7B Q7B_ID(QPicture* o);
Q7B Q7B_ID(QPicture o);
Q7B Q7B_QPIXMAP(Q7B Q7B_Object);
Q7B Q7B__QPIXMAP(Q7B Q7B_Object);
Q7B Q7B_ID(QPixmap* o);
Q7B Q7B_ID(QPixmap o);
Q7B Q7B_QPLAINTEXTEDIT(Q7B Q7B_Object);
Q7B Q7B__QPLAINTEXTEDIT(Q7B Q7B_Object);
Q7B Q7B_ID(QPlainTextEdit* o);
Q7B Q7B_QPOINT(Q7B Q7B_Object);
Q7B Q7B__QPOINT(Q7B Q7B_Object);
Q7B Q7B_ID(QPoint* o);
Q7B Q7B_ID(QPoint o);
Q7B Q7B_QPOLYGON(Q7B Q7B_Object);
Q7B Q7B__QPOLYGON(Q7B Q7B_Object);
Q7B Q7B_ID(QPolygon* o);
Q7B Q7B_ID(QPolygon o);
Q7B Q7B_QPRINTDIALOG(Q7B Q7B_Object);
Q7B Q7B__QPRINTDIALOG(Q7B Q7B_Object);
Q7B Q7B_ID(QPrintDialog* o);
Q7B Q7B_QPRINTPREVIEWDIALOG(Q7B Q7B_Object);
Q7B Q7B__QPRINTPREVIEWDIALOG(Q7B Q7B_Object);
Q7B Q7B_ID(QPrintPreviewDialog* o);
Q7B Q7B_QPRINTPREVIEWWIDGET(Q7B Q7B_Object);
Q7B Q7B__QPRINTPREVIEWWIDGET(Q7B Q7B_Object);
Q7B Q7B_ID(QPrintPreviewWidget* o);
Q7B Q7B_QPRINTER(Q7B Q7B_Object);
Q7B Q7B__QPRINTER(Q7B Q7B_Object);
Q7B Q7B_ID(QPrinter* o);
Q7B Q7B_QPRINTERINFO(Q7B Q7B_Object);
Q7B Q7B__QPRINTERINFO(Q7B Q7B_Object);
Q7B Q7B_ID(QPrinterInfo* o);
Q7B Q7B_ID(QPrinterInfo o);
Q7B Q7B_QPROCESS(Q7B Q7B_Object);
Q7B Q7B__QPROCESS(Q7B Q7B_Object);
Q7B Q7B_ID(QProcess* o);
Q7B Q7B_QPROCESSENVIRONMENT(Q7B Q7B_Object);
Q7B Q7B__QPROCESSENVIRONMENT(Q7B Q7B_Object);
Q7B Q7B_ID(QProcessEnvironment* o);
Q7B Q7B_ID(QProcessEnvironment o);
Q7B Q7B_QPROGRESSBAR(Q7B Q7B_Object);
Q7B Q7B__QPROGRESSBAR(Q7B Q7B_Object);
Q7B Q7B_ID(QProgressBar* o);
Q7B Q7B_QPROGRESSDIALOG(Q7B Q7B_Object);
Q7B Q7B__QPROGRESSDIALOG(Q7B Q7B_Object);
Q7B Q7B_ID(QProgressDialog* o);
Q7B Q7B_QPUSHBUTTON(Q7B Q7B_Object);
Q7B Q7B__QPUSHBUTTON(Q7B Q7B_Object);
Q7B Q7B_ID(QPushButton* o);
Q7B Q7B_QRADIOBUTTON(Q7B Q7B_Object);
Q7B Q7B__QRADIOBUTTON(Q7B Q7B_Object);
Q7B Q7B_ID(QRadioButton* o);
Q7B Q7B_QRECT(Q7B Q7B_Object);
Q7B Q7B__QRECT(Q7B Q7B_Object);
Q7B Q7B_ID(QRect* o);
Q7B Q7B_ID(QRect o);
Q7B Q7B_QREGEXP(Q7B Q7B_Object);
Q7B Q7B__QREGEXP(Q7B Q7B_Object);
Q7B Q7B_ID(QRegExp* o);
Q7B Q7B_ID(QRegExp o);
Q7B Q7B_QREGEXPVALIDATOR(Q7B Q7B_Object);
Q7B Q7B__QREGEXPVALIDATOR(Q7B Q7B_Object);
Q7B Q7B_ID(QRegExpValidator* o);
Q7B Q7B_QREGION(Q7B Q7B_Object);
Q7B Q7B__QREGION(Q7B Q7B_Object);
Q7B Q7B_ID(QRegion* o);
Q7B Q7B_ID(QRegion o);
Q7B Q7B_QRESIZEEVENT(Q7B Q7B_Object);
Q7B Q7B__QRESIZEEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QResizeEvent* o);
Q7B Q7B_ID(QResizeEvent o);
Q7B Q7B_QRESOURCE(Q7B Q7B_Object);
Q7B Q7B__QRESOURCE(Q7B Q7B_Object);
Q7B Q7B_ID(QResource* o);
Q7B Q7B_QRGB(Q7B Q7B_Object);
Q7B Q7B__QRGB(Q7B Q7B_Object);
Q7B Q7B_ID(QRgb* o);
Q7B Q7B_QRUBBERBAND(Q7B Q7B_Object);
Q7B Q7B__QRUBBERBAND(Q7B Q7B_Object);
Q7B Q7B_ID(QRubberBand* o);
Q7B Q7B_QSCROLLAREA(Q7B Q7B_Object);
Q7B Q7B__QSCROLLAREA(Q7B Q7B_Object);
Q7B Q7B_ID(QScrollArea* o);
Q7B Q7B_QSCROLLBAR(Q7B Q7B_Object);
Q7B Q7B__QSCROLLBAR(Q7B Q7B_Object);
Q7B Q7B_ID(QScrollBar* o);
Q7B Q7B_QSESSIONMANAGER(Q7B Q7B_Object);
Q7B Q7B__QSESSIONMANAGER(Q7B Q7B_Object);
Q7B Q7B_ID(QSessionManager* o);
Q7B Q7B_QSHORTCUTEVENT(Q7B Q7B_Object);
Q7B Q7B__QSHORTCUTEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QShortcutEvent* o);
Q7B Q7B_ID(QShortcutEvent o);
Q7B Q7B_QSHOWEVENT(Q7B Q7B_Object);
Q7B Q7B__QSHOWEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QShowEvent* o);
Q7B Q7B_ID(QShowEvent o);
Q7B Q7B_QSIGNALMAPPER(Q7B Q7B_Object);
Q7B Q7B__QSIGNALMAPPER(Q7B Q7B_Object);
Q7B Q7B_ID(QSignalMapper* o);
Q7B Q7B_QSIZE(Q7B Q7B_Object);
Q7B Q7B__QSIZE(Q7B Q7B_Object);
Q7B Q7B_ID(QSize* o);
Q7B Q7B_ID(QSize o);
Q7B Q7B_QSIZEF(Q7B Q7B_Object);
Q7B Q7B__QSIZEF(Q7B Q7B_Object);
Q7B Q7B_ID(QSizeF* o);
Q7B Q7B_ID(QSizeF o);
Q7B Q7B_QSIZEGRIP(Q7B Q7B_Object);
Q7B Q7B__QSIZEGRIP(Q7B Q7B_Object);
Q7B Q7B_ID(QSizeGrip* o);
Q7B Q7B_QSIZEPOLICY(Q7B Q7B_Object);
Q7B Q7B__QSIZEPOLICY(Q7B Q7B_Object);
Q7B Q7B_ID(QSizePolicy* o);
Q7B Q7B_ID(QSizePolicy o);
Q7B Q7B_QSLIDER(Q7B Q7B_Object);
Q7B Q7B__QSLIDER(Q7B Q7B_Object);
Q7B Q7B_ID(QSlider* o);
Q7B Q7B_QSOUND(Q7B Q7B_Object);
Q7B Q7B__QSOUND(Q7B Q7B_Object);
Q7B Q7B_ID(QSound* o);
Q7B Q7B_QSPINBOX(Q7B Q7B_Object);
Q7B Q7B__QSPINBOX(Q7B Q7B_Object);
Q7B Q7B_ID(QSpinBox* o);
Q7B Q7B_QSPLASHSCREEN(Q7B Q7B_Object);
Q7B Q7B__QSPLASHSCREEN(Q7B Q7B_Object);
Q7B Q7B_ID(QSplashScreen* o);
Q7B Q7B_QSPLITTER(Q7B Q7B_Object);
Q7B Q7B__QSPLITTER(Q7B Q7B_Object);
Q7B Q7B_ID(QSplitter* o);
Q7B Q7B_QSPLITTERHANDLE(Q7B Q7B_Object);
Q7B Q7B__QSPLITTERHANDLE(Q7B Q7B_Object);
Q7B Q7B_ID(QSplitterHandle* o);
Q7B Q7B_QSTACKEDLAYOUT(Q7B Q7B_Object);
Q7B Q7B__QSTACKEDLAYOUT(Q7B Q7B_Object);
Q7B Q7B_ID(QStackedLayout* o);
Q7B Q7B_QSTACKEDWIDGET(Q7B Q7B_Object);
Q7B Q7B__QSTACKEDWIDGET(Q7B Q7B_Object);
Q7B Q7B_ID(QStackedWidget* o);
Q7B Q7B_QSTATUSBAR(Q7B Q7B_Object);
Q7B Q7B__QSTATUSBAR(Q7B Q7B_Object);
Q7B Q7B_ID(QStatusBar* o);
Q7B Q7B_QSTATUSTIPEVENT(Q7B Q7B_Object);
Q7B Q7B__QSTATUSTIPEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QStatusTipEvent* o);
Q7B Q7B_ID(QStatusTipEvent o);
Q7B Q7B_QSVGWIDGET(Q7B Q7B_Object);
Q7B Q7B__QSVGWIDGET(Q7B Q7B_Object);
Q7B Q7B_ID(QSvgWidget* o);
Q7B Q7B_QSYNTAXHIGHLIGHTER(Q7B Q7B_Object);
Q7B Q7B__QSYNTAXHIGHLIGHTER(Q7B Q7B_Object);
Q7B Q7B_ID(QSyntaxHighlighter* o);
Q7B Q7B_QSYSTEMLOCALE(Q7B Q7B_Object);
Q7B Q7B__QSYSTEMLOCALE(Q7B Q7B_Object);
Q7B Q7B_ID(QSystemLocale* o);
Q7B Q7B_ID(QSystemLocale o);
Q7B Q7B_QSYSTEMTRAYICON(Q7B Q7B_Object);
Q7B Q7B__QSYSTEMTRAYICON(Q7B Q7B_Object);
Q7B Q7B_ID(QSystemTrayIcon* o);
Q7B Q7B_QTABBAR(Q7B Q7B_Object);
Q7B Q7B__QTABBAR(Q7B Q7B_Object);
Q7B Q7B_ID(QTabBar* o);
Q7B Q7B_QTABWIDGET(Q7B Q7B_Object);
Q7B Q7B__QTABWIDGET(Q7B Q7B_Object);
Q7B Q7B_ID(QTabWidget* o);
Q7B Q7B_QTABLEVIEW(Q7B Q7B_Object);
Q7B Q7B__QTABLEVIEW(Q7B Q7B_Object);
Q7B Q7B_ID(QTableView* o);
Q7B Q7B_QTABLEWIDGET(Q7B Q7B_Object);
Q7B Q7B__QTABLEWIDGET(Q7B Q7B_Object);
Q7B Q7B_ID(QTableWidget* o);
Q7B Q7B_QTABLEWIDGETITEM(Q7B Q7B_Object);
Q7B Q7B__QTABLEWIDGETITEM(Q7B Q7B_Object);
Q7B Q7B_ID(QTableWidgetItem* o);
Q7B Q7B_ID(QTableWidgetItem o);
Q7B Q7B_QTEXTBLOCK(Q7B Q7B_Object);
Q7B Q7B__QTEXTBLOCK(Q7B Q7B_Object);
Q7B Q7B_ID(QTextBlock* o);
Q7B Q7B_ID(QTextBlock o);
Q7B Q7B_QTEXTBLOCKFORMAT(Q7B Q7B_Object);
Q7B Q7B__QTEXTBLOCKFORMAT(Q7B Q7B_Object);
Q7B Q7B_ID(QTextBlockFormat* o);
Q7B Q7B_ID(QTextBlockFormat o);
Q7B Q7B_QTEXTBROWSER(Q7B Q7B_Object);
Q7B Q7B__QTEXTBROWSER(Q7B Q7B_Object);
Q7B Q7B_ID(QTextBrowser* o);
Q7B Q7B_QTEXTCHARFORMAT(Q7B Q7B_Object);
Q7B Q7B__QTEXTCHARFORMAT(Q7B Q7B_Object);
Q7B Q7B_ID(QTextCharFormat* o);
Q7B Q7B_ID(QTextCharFormat o);
Q7B Q7B_QTEXTCURSOR(Q7B Q7B_Object);
Q7B Q7B__QTEXTCURSOR(Q7B Q7B_Object);
Q7B Q7B_ID(QTextCursor* o);
Q7B Q7B_ID(QTextCursor o);
Q7B Q7B_QTEXTDOCUMENT(Q7B Q7B_Object);
Q7B Q7B__QTEXTDOCUMENT(Q7B Q7B_Object);
Q7B Q7B_ID(QTextDocument* o);
Q7B Q7B_QTEXTDOCUMENTFRAGMENT(Q7B Q7B_Object);
Q7B Q7B__QTEXTDOCUMENTFRAGMENT(Q7B Q7B_Object);
Q7B Q7B_ID(QTextDocumentFragment* o);
Q7B Q7B_ID(QTextDocumentFragment o);
Q7B Q7B_QTEXTEDIT(Q7B Q7B_Object);
Q7B Q7B__QTEXTEDIT(Q7B Q7B_Object);
Q7B Q7B_ID(QTextEdit* o);
Q7B Q7B_QTEXTFORMAT(Q7B Q7B_Object);
Q7B Q7B__QTEXTFORMAT(Q7B Q7B_Object);
Q7B Q7B_ID(QTextFormat* o);
Q7B Q7B_ID(QTextFormat o);
Q7B Q7B_QTEXTFRAMEFORMAT(Q7B Q7B_Object);
Q7B Q7B__QTEXTFRAMEFORMAT(Q7B Q7B_Object);
Q7B Q7B_ID(QTextFrameFormat* o);
Q7B Q7B_ID(QTextFrameFormat o);
Q7B Q7B_QTEXTOPTION(Q7B Q7B_Object);
Q7B Q7B__QTEXTOPTION(Q7B Q7B_Object);
Q7B Q7B_ID(QTextOption* o);
Q7B Q7B_ID(QTextOption o);
Q7B Q7B_QTHREAD(Q7B Q7B_Object);
Q7B Q7B__QTHREAD(Q7B Q7B_Object);
Q7B Q7B_ID(QThread* o);
Q7B Q7B_QTIME(Q7B Q7B_Object);
Q7B Q7B__QTIME(Q7B Q7B_Object);
Q7B Q7B_ID(QTime* o);
Q7B Q7B_ID(QTime o);
Q7B Q7B_QTIMEEDIT(Q7B Q7B_Object);
Q7B Q7B__QTIMEEDIT(Q7B Q7B_Object);
Q7B Q7B_ID(QTimeEdit* o);
Q7B Q7B_QTIMELINE(Q7B Q7B_Object);
Q7B Q7B__QTIMELINE(Q7B Q7B_Object);
Q7B Q7B_ID(QTimeLine* o);
Q7B Q7B_QTIMER(Q7B Q7B_Object);
Q7B Q7B__QTIMER(Q7B Q7B_Object);
Q7B Q7B_ID(QTimer* o);
Q7B Q7B_QTIMEREVENT(Q7B Q7B_Object);
Q7B Q7B__QTIMEREVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QTimerEvent* o);
Q7B Q7B_ID(QTimerEvent o);
Q7B Q7B_QTOOLBAR(Q7B Q7B_Object);
Q7B Q7B__QTOOLBAR(Q7B Q7B_Object);
Q7B Q7B_ID(QToolBar* o);
Q7B Q7B_QTOOLBOX(Q7B Q7B_Object);
Q7B Q7B__QTOOLBOX(Q7B Q7B_Object);
Q7B Q7B_ID(QToolBox* o);
Q7B Q7B_QTOOLBUTTON(Q7B Q7B_Object);
Q7B Q7B__QTOOLBUTTON(Q7B Q7B_Object);
Q7B Q7B_ID(QToolButton* o);
Q7B Q7B_QTRANSFORM(Q7B Q7B_Object);
Q7B Q7B__QTRANSFORM(Q7B Q7B_Object);
Q7B Q7B_ID(QTransform* o);
Q7B Q7B_ID(QTransform o);
Q7B Q7B_QTREEVIEW(Q7B Q7B_Object);
Q7B Q7B__QTREEVIEW(Q7B Q7B_Object);
Q7B Q7B_ID(QTreeView* o);
Q7B Q7B_QTREEWIDGET(Q7B Q7B_Object);
Q7B Q7B__QTREEWIDGET(Q7B Q7B_Object);
Q7B Q7B_ID(QTreeWidget* o);
Q7B Q7B_QTREEWIDGETITEM(Q7B Q7B_Object);
Q7B Q7B__QTREEWIDGETITEM(Q7B Q7B_Object);
Q7B Q7B_ID(QTreeWidgetItem* o);
Q7B Q7B_ID(QTreeWidgetItem o);
Q7B Q7B_QURL(Q7B Q7B_Object);
Q7B Q7B__QURL(Q7B Q7B_Object);
Q7B Q7B_ID(QUrl* o);
Q7B Q7B_ID(QUrl o);
Q7B Q7B_QURLINFO(Q7B Q7B_Object);
Q7B Q7B__QURLINFO(Q7B Q7B_Object);
Q7B Q7B_ID(QUrlInfo* o);
Q7B Q7B_ID(QUrlInfo o);
Q7B Q7B_QVBOXLAYOUT(Q7B Q7B_Object);
Q7B Q7B__QVBOXLAYOUT(Q7B Q7B_Object);
Q7B Q7B_ID(QVBoxLayout* o);
Q7B Q7B_QVALIDATOR(Q7B Q7B_Object);
Q7B Q7B__QVALIDATOR(Q7B Q7B_Object);
Q7B Q7B_ID(QValidator* o);
Q7B Q7B_QVARIANT(Q7B Q7B_Object);
Q7B Q7B__QVARIANT(Q7B Q7B_Object);
Q7B Q7B_ID(QVariant* o);
Q7B Q7B_ID(QVariant o);
Q7B Q7B_QWEBPAGE(Q7B Q7B_Object);
Q7B Q7B__QWEBPAGE(Q7B Q7B_Object);
Q7B Q7B_ID(QWebPage* o);
Q7B Q7B_QWEBSETTINGS(Q7B Q7B_Object);
Q7B Q7B__QWEBSETTINGS(Q7B Q7B_Object);
Q7B Q7B_QWEBVIEW(Q7B Q7B_Object);
Q7B Q7B__QWEBVIEW(Q7B Q7B_Object);
Q7B Q7B_ID(QWebView* o);
Q7B Q7B_QWHATSTHISCLICKEDEVENT(Q7B Q7B_Object);
Q7B Q7B__QWHATSTHISCLICKEDEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QWhatsThisClickedEvent* o);
Q7B Q7B_ID(QWhatsThisClickedEvent o);
Q7B Q7B_QWIDGET(Q7B Q7B_Object);
Q7B Q7B__QWIDGET(Q7B Q7B_Object);
Q7B Q7B_ID(QWidget* o);
Q7B Q7B_QWINDOWSTATECHANGEEVENT(Q7B Q7B_Object);
Q7B Q7B__QWINDOWSTATECHANGEEVENT(Q7B Q7B_Object);
Q7B Q7B_ID(QWindowStateChangeEvent* o);
Q7B Q7B_ID(QWindowStateChangeEvent o);
Q7B Q7B_UICLASS(Q7B Q7B_Object);
Q7B Q7B__UICLASS(Q7B Q7B_Object);
class Q7B_CheckBox;
Q7B Q7B_CHECKBOX(Q7B Q7B_Object);
Q7B Q7B__CHECKBOX(Q7B Q7B_Object);
Q7B Q7B_ID(Q7B_CheckBox* o);
class Q7B_CommandButton;
Q7B Q7B_COMMANDBUTTON(Q7B Q7B_Object);
Q7B Q7B__COMMANDBUTTON(Q7B Q7B_Object);
Q7B Q7B_ID(Q7B_CommandButton* o);
class Q7B_CommandLinkButton;
Q7B Q7B_COMMANDLINKBUTTON(Q7B Q7B_Object);
Q7B Q7B__COMMANDLINKBUTTON(Q7B Q7B_Object);
Q7B Q7B_ID(Q7B_CommandLinkButton* o);
class Q7B_Control;
Q7B Q7B_CONTROL(Q7B Q7B_Object);
Q7B Q7B__CONTROL(Q7B Q7B_Object);
Q7B Q7B_ID(Q7B_Control* o);
class Q7B_Frame;
Q7B Q7B_FRAME(Q7B Q7B_Object);
Q7B Q7B__FRAME(Q7B Q7B_Object);
Q7B Q7B_ID(Q7B_Frame* o);
class Q7B_ImageBox;
Q7B Q7B_IMAGEBOX(Q7B Q7B_Object);
Q7B Q7B__IMAGEBOX(Q7B Q7B_Object);
Q7B Q7B_ID(Q7B_ImageBox* o);
class Q7B_ImageButton;
Q7B Q7B_IMAGEBUTTON(Q7B Q7B_Object);
Q7B Q7B__IMAGEBUTTON(Q7B Q7B_Object);
Q7B Q7B_ID(Q7B_ImageButton* o);
class Q7B_Label;
Q7B Q7B_LABEL(Q7B Q7B_Object);
Q7B Q7B__LABEL(Q7B Q7B_Object);
Q7B Q7B_ID(Q7B_Label* o);
class Q7B_RadioButton;
Q7B Q7B_RADIOBUTTON(Q7B Q7B_Object);
Q7B Q7B__RADIOBUTTON(Q7B Q7B_Object);
Q7B Q7B_ID(Q7B_RadioButton* o);
class Q7B_TextBox;
Q7B Q7B_TEXTBOX(Q7B Q7B_Object);
Q7B Q7B__TEXTBOX(Q7B Q7B_Object);
Q7B Q7B_ID(Q7B_TextBox* o);
class Q7B_Timer;
Q7B Q7B_TIMER(Q7B Q7B_Object);
Q7B Q7B__TIMER(Q7B Q7B_Object);
Q7B Q7B_ID(Q7B_Timer* o);
class Q7B_ToolButton;
Q7B Q7B_TOOLBUTTON(Q7B Q7B_Object);
Q7B Q7B__TOOLBUTTON(Q7B Q7B_Object);
Q7B Q7B_ID(Q7B_ToolButton* o);
class Q7B_UdpSocket;
Q7B Q7B_UDPSOCKET(Q7B Q7B_Object);
Q7B Q7B__UDPSOCKET(Q7B Q7B_Object);
Q7B Q7B_ID(Q7B_UdpSocket* o);
// End Generator h#1


// *** 





Q7B Q7B_ID();
Q7B Q7B_ID(Q7B o);
Q7B Q7B_ID(bool o);
Q7B Q7B_ID(char * o);
Q7B Q7B_ID(const char * o);
Q7B Q7B_ID(QString o);
Q7B Q7B_ID(qint8 o);
Q7B Q7B_ID(qint16 o);
Q7B Q7B_ID(qint32 o);
Q7B Q7B_ID(qint64 o);
Q7B Q7B_ID(quint8 o);
Q7B Q7B_ID(quint16 o);
Q7B Q7B_ID(quint32 o);
Q7B Q7B_ID(quint64 o);
Q7B Q7B_ID(float o);
Q7B Q7B_ID(double o);
//Q7B Q7B_ID(QStringList o);
Q7B Q7B_ID_DECIMAL(qint64 bc, qint64 ad);
//Q7B Q7B_QOBJECTNULL(qint64 *dummy);
//Q7B Q7B_ID(QDateTime o);
Q7B Q7B_ID(QStringList o);
Q7B Q7B_ID(Q7B_Decimal o);
//Q7B Q7B_ID(QByteArray o);
//Q7B Q7B_ID(QIcon o);
//Q7B Q7B_ID(QSize o);
//Q7B Q7B_ID(QRect o);
Q7B Q7B_ID(const char *name, QObject *o);
Q7B Q7B_ID(const char *name, void *o);
//Q7B Q7B_ID(QList<> o);






extern Q7B Q7B_idnil;


// *** meta ****

QString Q7B_QtBL();
QString Q7B_QtBF();
QString Q7B_QtBS();

extern bool Q7B_bException;

void Q7B_EXCEPTION(QString a = "");
void Q7B_NULLPOINTEREXCEPTION(QString a = "");
void Q7B_CASTEXCEPTION(QString a = "");
void Q7B_INVALIDARGUMENTEXCEPTION(QString a = "");


// *** 


// *** Array

void q7b_array_dimhelper(Q7B o, qint32 a0, qint32 a1, qint32 a2, qint32 a3);
qint64 q7b_array_offset(Q7B o, qint32 a0, qint32 a1, qint32 a2, qint32 a3, bool bCheck);
void q7b_array_dim(Q7B o, Q7B a0, Q7B a1, Q7B a2, Q7B a3);
void q7b_array_redim(Q7B o, Q7B Preserve, Q7B aa0, Q7B aa1, Q7B aa2, Q7B aa3);
Q7B *q7b_array_get(Q7B o, Q7B a0, Q7B a1, Q7B a2, Q7B a3);
Q7B *q7b_array_at(Q7B o, Q7B a0, Q7B a1, Q7B a2, Q7B a3); // needed for types, same like q7b_array_get, but without null checking overriding with Q7B_idnil
#define Q7B_UBOUND q7b_array_ubound
#define Q7B_LBOUND q7b_array_lbound
Q7B q7b_array_ubound(Q7B o, Q7B i);
Q7B q7b_array_lbound(Q7B o, Q7B i);

// ***

// *** Type

Q7B *q7b_type_get(Q7B o, Q7B index, Q7B a0, Q7B a1, Q7B a2, Q7B a3);

// ***






const QPixmap &Q7B_loadPixmap(QString fn);
const QPixmap &Q7B_createPixmap(QString n);


// *** QByteArray conversions

QIcon Q7B_QByteArray2QIcon(QByteArray ba);

QByteArray Q7B_QIcon2QByteArray(QIcon icon);


QString Q7B_toString2(Q7B Q7B_Object);
void Q7B_toXML2(QXmlStreamWriter & xmlWriter, Q7B Q7B_Object);







class Q7B_List : public QObject
{
public:

  static Q7B init()
  {
    Q7B q (new Q7B_id(typeid(Q7B_List).name(), new Q7B_List( ))); 
    return q;
  }

  static Q7B init(Q7B o1, Q7B o2 = Q7B_IDNIL(), Q7B o3 = Q7B_IDNIL(), Q7B o4 = Q7B_IDNIL(), Q7B o5 = Q7B_IDNIL(), Q7B o6 = Q7B_IDNIL(), Q7B o7 = Q7B_IDNIL(), Q7B o8 = Q7B_IDNIL(), Q7B o9 = Q7B_IDNIL(), Q7B o10 = Q7B_IDNIL(), Q7B o11 = Q7B_IDNIL(), Q7B o12 = Q7B_IDNIL(), Q7B o13 = Q7B_IDNIL(), Q7B o14 = Q7B_IDNIL(), Q7B o15 = Q7B_IDNIL(), Q7B o16 = Q7B_IDNIL(), Q7B o17 = Q7B_IDNIL(), Q7B o18 = Q7B_IDNIL(), Q7B o19 = Q7B_IDNIL(), Q7B o20 = Q7B_IDNIL())
  {
    Q7B_List *a = new Q7B_List();
    Q7B q (new Q7B_id(typeid(Q7B_List).name(), a)); 

    a->me << o1;        
    if (o2->ref == 0 && o2->q7b_array == 0) return q; a->me << o2;       
    if (o3->ref == 0 && o3->q7b_array == 0) return q; a->me << o3;       
    if (o4->ref == 0 && o4->q7b_array == 0) return q; a->me << o4;       
    if (o5->ref == 0 && o5->q7b_array == 0) return q; a->me << o5;       
    if (o6->ref == 0 && o6->q7b_array == 0) return q; a->me << o6;       
    if (o7->ref == 0 && o7->q7b_array == 0) return q; a->me << o7;       
    if (o8->ref == 0 && o8->q7b_array == 0) return q; a->me << o8;       
    if (o9->ref == 0 && o9->q7b_array == 0) return q; a->me << o9;       
    if (o10->ref == 0 && o10->q7b_array == 0) return q; a->me << o10;       
    if (o11->ref == 0 && o11->q7b_array == 0) return q; a->me << o11;       
    if (o12->ref == 0 && o12->q7b_array == 0) return q; a->me << o12;       
    if (o13->ref == 0 && o13->q7b_array == 0) return q; a->me << o13;       
    if (o14->ref == 0 && o14->q7b_array == 0) return q; a->me << o14;       
    if (o15->ref == 0 && o15->q7b_array == 0) return q; a->me << o15;       
    if (o16->ref == 0 && o16->q7b_array == 0) return q; a->me << o16;       
    if (o17->ref == 0 && o17->q7b_array == 0) return q; a->me << o17;       
    if (o18->ref == 0 && o18->q7b_array == 0) return q; a->me << o18;       
    if (o19->ref == 0 && o19->q7b_array == 0) return q; a->me << o19;       
    if (o20->ref == 0 && o20->q7b_array == 0) return q; a->me << o20;       

    return q;
  }

/*
  static Q7B init(Q7B Count, ...)
  {
    Q7B_List *a = new Q7B_List();
    Q7B q (new Q7B_id(typeid(Q7B_List).name(), a); 

    va_list args;
    va_start(args, Count);

  //  for (qint64 i; i < Count; i++){
       Q7B Q7B_Object = va_arg(args, id);
       a->me << Q7B_Object;       
//    }

    va_end(args);

    return q;
     / *
     for (int i = 0; i < l.size(); i++){
       Q7B q (new Q7B_id(typeid(QString).name(), new QString( l.at(i) ));        
     }* /
  }*/

  Q7B_List()
  {
  }

  Q7B_List(QStringList l) // needed for QString::split
  {
    for (int i = 0; i < l.size(); i++)
    {
      Q7B q (new Q7B_id(typeid(QString).name(), new QString( l.at(i) ))); 
      me << q;//QOBJECT( l.at(i) );
    }
  }
/*
  void add(Q7B Q7B_Object)
  {
    me << Q7B_Object;       
  }*/

  QString join(QString sSeparator)
  {
    QString s;
    
    for (int i = 0; i < me.size(); i++){
      Q7B q = me.at(i);
      s += Q7B_toString2( q );
      s += sSeparator;
    }

    return s;
  }

  QStringList toStringList()
  {
    QStringList l;
    
    for (int i = 0; i < me.size(); i++){
      Q7B q = me.at(i);
      l << Q7B_toString2( q );
    }    

    return l;
  }

  QString toString()
  {
    QString s = "List {";
    
    for (int i = 0; i < me.size(); i++){
      if (i == 0) s += "\n";
      Q7B q = me.at(i);
      s += Q7B_toString2( q );
      s += (i + 1 < me.size() ? ",\n" : "\n");
    }

    s += "}";

    return s;
  }

  void toXML(QXmlStreamWriter & xmlWriter)
  {   
    xmlWriter.writeStartElement("list");

    for (int i = 0; i < me.size(); i++){
      Q7B q = me.at(i);
      Q7B_toXML2( xmlWriter, q );
    }

    xmlWriter.writeEndElement();
  }

  void append(Q7B Q7B_Object)
  {
    /*
bool b = false;
    if (Q7B_Object->type == typeid(qreal).name()){
      if ((*((qreal *) Q7B_Object->ref)) == 1979){
        b = true;
       // lookfor = Q7B_Object;
      //  QMessageBox::information(0, "append", Q7B_QtBL());

        lookfor = this;
      }
    }
*/
    me << Q7B_Object;  
/*
    if (b){
      lookfor2 = (void* ) me.at(2)->ref;
    }*/
  }

  void removeAll()
  {
    me.clear(); 
  }

  void insert(Q7B Q7B_Object, qint64 Index)
  {
    if (Index < 0 || Index > me.count()) return; // TODO2 exception

    me.insert(Index, Q7B_Object);
  }

  void replace(Q7B Q7B_Object, qint64 Index)
  {
    if (Index < 0 || Index >= me.count()) return; // TODO2 exception

    me.replace(Index, Q7B_Object); 
  }

  Q7B getObject(qint64 Index)
  {
    if (Index < 0 || Index >= me.count()) return Q7B_IDNIL(); // TODO2 exception

    return me.at(Index);
  }

  void remove(qint64 Index)
  {
    if (Index < 0 || Index >= me.count()) return; // TODO2 exception

    me.removeAt(Index); 
  }

  qint64 count()
  {
    return me.count();
  }

  QList<Q7B> & values()
  {
    return me;
  }

public:
  QList<Q7B>me;
};

class Q7B_Dictionary : public QObject
{
public:

  static Q7B init()
  {
    Q7B q (new Q7B_id(typeid(Q7B_Dictionary).name(), new Q7B_Dictionary( ))); 
    return q;
  }
/*
  static Q7B init(Q7B o1, Q7B o2, Q7B o3 = Q7B_IDNIL(), Q7B o4 = Q7B_IDNIL(), Q7B o5 = Q7B_IDNIL(), Q7B o6 = Q7B_IDNIL(), Q7B o7 = Q7B_IDNIL(), Q7B o8 = Q7B_IDNIL(), Q7B o9 = Q7B_IDNIL(), Q7B o10 = Q7B_IDNIL(), Q7B o11 = Q7B_IDNIL(), Q7B o12 = Q7B_IDNIL(), Q7B o13 = Q7B_IDNIL(), Q7B o14 = Q7B_IDNIL(), Q7B o15 = Q7B_IDNIL(), Q7B o16 = Q7B_IDNIL(), Q7B o17 = Q7B_IDNIL(), Q7B o18 = Q7B_IDNIL(), Q7B o19 = Q7B_IDNIL(), Q7B o20 = Q7B_IDNIL())
  {
    Q7B_Dictionary *a = new Q7B_Dictionary();
    Q7B q (new Q7B_id(typeid(Q7B_Dictionary).name(), a));   

    a->me[toString2(o1)] = o2;        // 
    if (o3->ref == 0) return q; a->me[toString2(o3)] = o4;

    return q;
  }
*/

  static Q7B init(Q7B values, Q7B keys);

  Q7B_Dictionary()
  {
  }

  QString toString()
  {
    QString s = "Dictionary {";
    
    bool bFirst = true;
    QMapIterator<QString, Q7B> i(me);
    while (i.hasNext()){
      i.next();
      if (bFirst){
        bFirst = false;
        s += "\n";
      }
      s += i.key() + " = ";
      Q7B q = i.value();
      s += Q7B_toString2( q );
      s += (i.hasNext() ? ",\n" : "\n");
    }

    s += "}";

    return s;
  }

  void toXML(QXmlStreamWriter & xmlWriter)
  {   
    xmlWriter.writeStartElement("dictionary");

    QMapIterator<QString, Q7B> i(me);
    while (i.hasNext()) {
       i.next();
       
       xmlWriter.writeTextElement("key", i.key());
       Q7B_toXML2(xmlWriter, i.value());
    }

    xmlWriter.writeEndElement();
  }

  QMap<QString, Q7B> & keysvalues()
  {
    return me;
  }

  qint64 count()
  {
    return me.count();
  }

  void removeAll()
  {
    me.clear(); 
  }

  Q7B keys()
  {
    QList<QString>k = me.keys();

    Q7B_List *a = new Q7B_List();
    Q7B q (new Q7B_id(typeid(Q7B_List).name(), a)); 

    for (int i = 0; i < k.size(); i++){
      Q7B m (new Q7B_id(typeid(QString).name(), new QString( k.at(i) ))); // gc << m; 
      a->append(m);
    }

    return q;
  }

  Q7B values()
  {
    QList<Q7B>v = me.values();

    Q7B_List *a = new Q7B_List();
    Q7B q (new Q7B_id(typeid(Q7B_List).name(), a)); 

    for (int i = 0; i < v.size(); i++){
      a->append( v.at(i) );
    }

    return q;
  }

  void remove(QString Key)
  {
    if (!me.contains(Key)) return; // TODO2 exception

    me.remove(Key); 
  }

  bool contains(QString Key)
  {
    return me.contains(Key); 
  }

  Q7B getObject(QString Key)
  {
    if (!me.contains(Key)) return Q7B_IDNIL(); // TODO2 exception

    return me.value(Key);
  }

  void setObject(QString Key, Q7B Q7B_Object)
  {
    me[Key] = Q7B_Object; 
  }

  QMap<QString, QString> toMap()
  {
    QMap<QString, QString>m;
    QList<QString>k = me.keys();
    
    for (int i = 0; i < k.size(); i++){
      m[k.at(i)] = Q7B_toString2( me[k.at(i)] );
    }    

    return m;
  }

public:
  QMap<QString, Q7B>me;
  
};


class Q7B_Data
{
public:
  Q7B_Data(){}

  // toString als hex darstellung string?
  QString toString()
  {
    return "";
  }
};


class Q7B_Decimal
{
public:

  Q7B_Decimal()
  {
    v = 0;
  }

  Q7B_Decimal(qint64 bc, qint64 ad)
  {
    v = bc * 10000;
    if (bc < 0) v -= ad; else v += ad;
  }

  Q7B_Decimal(qint64 l)
  {
    v = l * 10000;
  }

  Q7B_Decimal(QVariant q)
  {
    v = q.toLongLong();
  }

  Q7B_Decimal(qreal d)
  {
    qint64 bc = (qint64) d;
    qreal e;
   
    if (bc < 0){
      e = (d - bc);
    } else {
      e = (d + bc);
    }
    qint64 ad = e * 10000;

    v = bc * 10000 + ad;
  }

  Q7B_Decimal(QString s)
  {
    v = 0;

    qint64 bc = 0;
    qint64 ad = 0;

    int i = 0;
    int nLen = 0;
    int nLen2 = 0;
    int nDotPos = -1;
  
	  bool t;
    bool p;
  	
    t = false;
	  if (s[i] == '+' || s[i] == '-'){
		  i++;
		  nLen++;
    }
    while (s[i] >= '0' && s[i] <= '9'){
      i++;
		  nLen++;
      t = true;
    }
    if ((p = (s[i] == '.'))){
      nDotPos = i;
      i++;
		  nLen++;
      while (s[i] >= '0' && s[i] <= '9'){
        i++;
			  nLen++;
  		  nLen2++;
        t = true;
      }
    }
    if (!t) return;

	  if (p == true) goto ok;
	  else return;

    t = false;
    while (s[i] >= '0' && s[i] <= '9'){
      i++;
		  nLen++;
      t = true;
    }
    if (!t) return;

  ok:

    if (nLen2 > 4) {return; }

    if (nDotPos >= 0){
      bc = s.left(nDotPos).toLongLong();
      ad = s.mid(nDotPos + 1).toLongLong();
    } else bc = s.toLongLong();

    v = bc * 10000;
    if (bc < 0) v -= ad; else v += ad;
  }  

  qint64 ad()
  {
    qint64 m = v % 10000;
    if (m < 0) m = -m;
    return m;
  }

  qint64 bc()
  {
    return v / 10000;
  }

  void setValue(qint64 q)
  {
    v = q;
 }

  qint64 value()
  {
    return v;
  }

  QVariant toQVariant()
  {
    return QVariant(v);
  }

  Q7B_Decimal minus()
  {
    Q7B_Decimal d;

    d.v = -v;
    return d;
  }

  qint64 toInteger()
  {
    return v / 10000;
  }

  QString toString()
  {
    QString s;
    
    qint64 r = v;

    s = QString("%1").arg((qint64) r / 10000);
    if (r < 0) r = -r;
    s = s + QString(".%1").arg((qint64) r % 10000, -4, 10, QChar('0')); // have to be done with these two lines, else v % 10000 does not work

    return s;
  }

  qreal toFloat()
  {
    qint64 ad = v % 10000;
    if (ad < 0) ad = -ad;

    qint64 bc = v / 10000;

    qreal f = ad;
    f /= 10000;
    f += bc;
    return f;
  }

private:
  qint64 v;
};

// GRENZE: nachfolgende Klassen werden im runtime header weiter unten eingef?gt

/*
struct Q7B_t_sound
{
public:
  QByteArray *bytearray;
  QBuffer *buffer;
  
};*/

class Q7B_Sounds : public QObject
{
  Q_OBJECT
public:
  Q7B_Sounds()
  {
    nTimer = 0;
  }

  ~Q7B_Sounds()
  {
    //if (mediaObject) delete mediaObject;
    //if (audioOutput) delete audioOutput;
     
    QMapIterator<Phonon::MediaObject*, Phonon::AudioOutput*> i(sounds_playing);
    while (i.hasNext()) {
        i.next();
        delete i.key();
        delete i.value();
     }

    foreach(Q7B_t_sound ts, sounds_map){
      delete ts.buffer;
      delete ts.bytearray;
    }
  }

  bool Load(const QString & SoundId, const QString & FileName)
  {    
    QString ff;
    if (!FileName.contains("/") && !FileName.contains("\\")){
      QString s;
      s = qApp->applicationDirPath();
      s += "/";
      s += FileName;
      ff = s;
    } else ff = FileName;

    QFile f(ff);
    if (f.open(QFile::ReadOnly)){
      Q7B_t_sound ts;
      ts.bytearray = new QByteArray(f.readAll());
      ts.buffer = new QBuffer(); ts.buffer->setData(*ts.bytearray);
      sounds_map[SoundId] = ts;
      f.close();
      return true;
    }    

    return false;
  }

  bool Play(const QString & SoundId)
  {
    if (sounds_map.contains(SoundId)){
      Q7B_t_sound ts = sounds_map[SoundId];
      Phonon::MediaObject *mediaObject = new Phonon::MediaObject();
      Phonon::AudioOutput *audioOutput = new Phonon::AudioOutput();

      sounds_playing[mediaObject] = audioOutput;
      sounds_playing2[mediaObject] = new Phonon::MediaSource(ts.buffer);
      mediaObject->setCurrentSource(*sounds_playing2[mediaObject]);
      sounds_playing3[mediaObject] = Phonon::createPath(mediaObject, audioOutput);
      
      QObject::connect(mediaObject, SIGNAL(finished()), this, SLOT(finished()));
      mediaObject->play();
      
      return true;
    }    

    return false;
  }

  void timerEvent(QTimerEvent *e)
  {
    killTimer(nTimer);

    int n = sounds_to_be_deleted.count();

    Phonon::MediaObject *mediaObject = sounds_to_be_deleted.takeFirst();

    //bool b =
    sounds_playing3[mediaObject].disconnect();
    sounds_playing3.remove(mediaObject);

    delete mediaObject;
    delete sounds_playing[mediaObject];
  //  sounds_playing[mediaObject]->deleteLater();
    //mediaObject->deleteLater();;
    sounds_playing.remove(mediaObject);

    delete sounds_playing2[mediaObject];
    sounds_playing2.remove(mediaObject);
    
    if (n > 1) nTimer = startTimer(10000);
  }

public slots:
  void finished()
  {
    Phonon::MediaObject *mediaObject = qobject_cast<Phonon::MediaObject *>(sender());
    if (mediaObject){
      sounds_to_be_deleted.append(mediaObject);
      if (nTimer == 0) nTimer = startTimer(10000);        
    }
  }

private:
  int nTimer;

  //Phonon::AudioOutput *audioOutput;
  //Phonon::MediaObject *mediaObject;

  QMap<QString, Q7B_t_sound>sounds_map;
  QMap<Phonon::MediaObject*, Phonon::AudioOutput*>sounds_playing;
  QList<Phonon::MediaObject*>sounds_to_be_deleted;
  QMap<Phonon::MediaObject*, Phonon::MediaSource*>sounds_playing2;
  QMap<Phonon::MediaObject*, Phonon::Path>sounds_playing3;
};

class Q7B_Pixmaps : public QObject
{
  Q_OBJECT
public:
  Q7B_Pixmaps()
  {
  }

  ~Q7B_Pixmaps()
  {
  }

  bool Load(const QString & PixmapId, const QString & FileName)
  {    
    QPixmap p = Q7B_loadPixmap(FileName.contains(".") ? FileName : FileName + ".png");
    if (p.isNull()) return false;
    pixmaps_map[PixmapId] = p.copy();
    return true;
  }

private:
  QMap<QString, QPixmap>pixmaps_map;
};

class Q7B_Colors : public QObject
{
  Q_OBJECT
public:
  Q7B_Colors()
  {
  }

  /*

  
  Color.White, Color.Black, Color.Red, Color.DarkRed, Color.Green, Color.DarkGreen, Color.Blue, Color.DarkBlue, Color.Cyan, Color.DarkCyan, Color.Magenta, Color.DarkMagenta, 
    Color.Yellow, Color.DarkYellow, Color.Gray, Color.DarkGray, Color.LightGray, Color.Color0, Color.Color1, and Color.Transparent. 
Qt::white	3	White (#ffffff)
Qt::black	2	Black (#000000)
Qt::red	7	Red (#ff0000)
Qt::darkRed	13	Dark red (#800000)
Qt::green	8	Green (#00ff00)
Qt::darkGreen	14	Dark green (#008000)
Qt::blue	9	Blue (#0000ff)
Qt::darkBlue	15	Dark blue (#000080)
Qt::cyan	10	Cyan (#00ffff)
Qt::darkCyan	16	Dark cyan (#008080)
Qt::magenta	11	Magenta (#ff00ff)
Qt::darkMagenta	17	Dark magenta (#800080)
Qt::yellow	12	Yellow (#ffff00)
Qt::darkYellow	18	Dark yellow (#808000)
Qt::gray	5	Gray (#a0a0a4)
Qt::darkGray	4	Dark gray (#808080)
Qt::lightGray	6	Light gray (#c0c0c0)
Qt::transparent	19	a transparent black value (i.e., QColor(0, 0, 0, 0))

  */


  ~Q7B_Colors()
  {
  }

  bool Set(const QString & ColorId, qint64 R, qint64 G, qint64 B, qint64 A)
  {    
    colors_map[ColorId] = QColor(R, G, B, A);  
    return true;
  }

private:
  QMap<QString, QColor>colors_map;
};

class Q7B_ColorDialog : public QObject
{
  Q_OBJECT
public:
  Q7B_ColorDialog()
  {
  }

  ~Q7B_ColorDialog()
  {
  }

  bool GetColor()
  {    
    qcolor = QColorDialog::getColor(Qt::white, qApp->focusWidget());
    return qcolor.isValid();
  }

  bool GetColorLike(qint64 Red, qint64 Green, qint64 Blue, qint64 Alpha)
  {    
    qcolor = QColorDialog::getColor(QColor(Red, Green, Blue, Alpha), qApp->focusWidget());
    return qcolor.isValid();
  }

  qint64 Red()
  {    
    return qcolor.red();
  }

  qint64 Green()
  {    
    return qcolor.green();
  }
  
  qint64 Blue()
  {    
    return qcolor.blue();
  }
  
  qint64 Alpha()
  {    
    return qcolor.alpha();
  }

private:

  QColor qcolor;
};

class Q7B_FontDialog : public QObject
{
  Q_OBJECT
public:
  Q7B_FontDialog()
  {
  }

  ~Q7B_FontDialog()
  {
  }

  bool GetFont()
  {    
    bool ok;
    qfont = QFontDialog::getFont(&ok, qApp->focusWidget());
    return ok;  
  }

  bool GetFontLike(QString Name, qint64 Size, bool Italic, bool Bold, bool Underline)
  {    
    QFont f(Name);
    f.setPointSize(Size);
    f.setItalic(Italic);
    f.setBold(Bold);
    f.setUnderline(Underline);
    
    bool ok;
    qfont = QFontDialog::getFont(&ok, f, qApp->focusWidget());
    return ok;    
  }

  QString Name()
  {    
    return qfont.family();
  }

  qint64 Size()
  {    
    return qfont.pointSize();
  }

  bool Italic()
  {    
    return qfont.italic();
  }
  
  bool Bold()
  {    
    return qfont.bold();
  }
  
  bool Underline()
  {    
    return qfont.underline();
  }

private:

  QFont qfont;
};

class Q7B_ProgressDialog : public QObject
{
  Q_OBJECT
public:

  Q7B_ProgressDialog()
  {
    qprogressdialog = 0;
  }

  ~Q7B_ProgressDialog()
  {
  }

  void Show()
  {    
    if (qprogressdialog) delete qprogressdialog;
    qprogressdialog = new QProgressDialog(qApp->focusWidget());
    qprogressdialog->setAutoClose(false);
    qprogressdialog->setAutoReset(false);

    if (!WindowTitle.isEmpty()) qprogressdialog->setLabelText(WindowTitle); 
    if (!CancelText.isEmpty()) qprogressdialog->setCancelButtonText(CancelText); 
    qprogressdialog->setValue(Value); 
    qprogressdialog->setMinimum(Minimum); 
    qprogressdialog->setMaximum(Maximum); 
    qprogressdialog->setMinimumDuration(Wait); 

    qprogressdialog->show();
  }

  void ShowWith(QString _WindowTitle, QString _CancelText)
  {
    if (qprogressdialog) delete qprogressdialog;
    qprogressdialog = new QProgressDialog(qApp->focusWidget());
    qprogressdialog->setAutoClose(false);
    qprogressdialog->setAutoReset(false);

    if (!WindowTitle.isEmpty()) qprogressdialog->setLabelText(_WindowTitle); 
    if (!CancelText.isEmpty()) qprogressdialog->setCancelButtonText(_CancelText); 

    qprogressdialog->setValue(Value); 
    qprogressdialog->setMinimum(Minimum); 
    qprogressdialog->setMaximum(Maximum); 
    qprogressdialog->setMinimumDuration(Wait); 

    qprogressdialog->show();
  } 

  void Hide()
  {
    qprogressdialog->hide();

    delete qprogressdialog;
    qprogressdialog = 0;

    WindowTitle = ""; 
    CancelText = "";
    Value = 0;
    Minimum = 0;
    Maximum = 100;
    Wait = 4000;
  } 

  bool Canceled()
  {
    if (qprogressdialog == 0) return false;

    return qprogressdialog->wasCanceled();
  } 

public:
  QString WindowTitle;
  QString CancelText;
  qint64 Value;
  qint64 Minimum;
  qint64 Maximum;
  qint64 Wait;

private:
  QProgressDialog *qprogressdialog;
};

class Q7B_InputDialog : public QObject
{
  Q_OBJECT
public:

  Q7B_InputDialog()
  {
  }

  ~Q7B_InputDialog()
  {
  }

  qreal GetFloat(QString WindowTitle, QString Text, qreal Value, qreal Minimum, qreal Maximum, qint64 Decimals)
  {
    return QInputDialog::getDouble(qApp->focusWidget(), WindowTitle, Text, Value, Minimum, Maximum, Decimals, &_inputdialog_ok);
  } 

  qint64 GetInteger(QString WindowTitle, QString Text, qint64 Value, qint64 Minimum, qint64 Maximum, qint64 Step)
  {
    return QInputDialog::getInteger(qApp->focusWidget(), WindowTitle, Text, Value, Minimum, Maximum, Step, &_inputdialog_ok);
  } 

  QString GetString(QString WindowTitle, QString Text, QString Value, qint64 EchoMode)
  {
    return QInputDialog::getText(qApp->focusWidget(), WindowTitle, Text, (QLineEdit::EchoMode) EchoMode, Value, &_inputdialog_ok);
  } 

  bool Ok()
  {
    return _inputdialog_ok;
  } 

public:
  bool _inputdialog_ok;
};

class Q7B_MessageBox : public QObject
{
  Q_OBJECT
public:

  Q7B_MessageBox()
  {
  }

  ~Q7B_MessageBox()
  {
  }

  qint64 Critical(QString WindowTitle, QString Text, qint64 Buttons, qint64 DefaultButton)
  {
    QMessageBox::StandardButton b = QMessageBox::critical(qApp->focusWidget(), WindowTitle, Text, (QMessageBox::StandardButtons) Buttons, (QMessageBox::StandardButton) DefaultButton);
    return (qint64) b;
  } 

  qint64 Information(QString WindowTitle, QString Text, qint64 Buttons, qint64 DefaultButton)
  {
    QMessageBox::StandardButton b = QMessageBox::information(qApp->focusWidget(), WindowTitle, Text, (QMessageBox::StandardButtons) Buttons, (QMessageBox::StandardButton) DefaultButton);
    return (qint64) b;
  } 

  qint64 Question(QString WindowTitle, QString Text, qint64 Buttons, qint64 DefaultButton)
  {
    QMessageBox::StandardButton b = QMessageBox::question(qApp->focusWidget(), WindowTitle, Text, (QMessageBox::StandardButtons) Buttons, (QMessageBox::StandardButton) DefaultButton);
    return (qint64) b;
  } 

  qint64 Warning(QString WindowTitle, QString Text, qint64 Buttons, qint64 DefaultButton)
  {
    QMessageBox::StandardButton b = QMessageBox::warning(qApp->focusWidget(), WindowTitle, Text, (QMessageBox::StandardButtons) Buttons, (QMessageBox::StandardButton) DefaultButton);
    return (qint64) b;
  } 

private:
};

class Q7B_Database : public QObject
{
  Q_OBJECT
public:

  Q7B_Database()
  {
  }

  ~Q7B_Database()
  {
  }
  
  QString MySQL()
  {
    return "QMYSQL";
  }
  
  QString PostgreSQL()
  {
    return "QPSQL";
  }
  
  QString SQLite()
  {
    return "QSQLITE";
  }

  QString LocalHost()
  {
    return "localhost";
  }
  
  QString DefaultPort()
  {
    return "";
  }
  
  QString DefaultOptions()
  {
    return "";
  }
    
  bool Exists(QString Driver, QString Name, QString User, QString Password, QString Host, QString Options, QString Port)
  {
    if (!Driver.isEmpty()){
      QSqlDatabase db;
      db = QSqlDatabase::addDatabase(Driver, Name + User);
      db.setHostName(Host);
      db.setDatabaseName(Name);
      db.setUserName(User);
      db.setPassword(Password);
      if (!Port.isEmpty()) db.setPort(Port.toInt());
      db.setConnectOptions(Options);
      if (db.open()){    
                
        // ODBC  GetDataSources oder geht nicht
        /*
    SQLite 	geht nicht, weil db automatisch angelegt wird   PRAGMA database_list; 
          */

        QString sSQL = "";
        if (Driver.contains("MYSQL", Qt::CaseInsensitive)){
          sSQL = "SHOW DATABASES;";
        } else if (Driver.contains("PSQL", Qt::CaseInsensitive)){
          sSQL = "SELECT * FROM pg_database;";
        } else if (Driver.contains("SQLITE", Qt::CaseInsensitive)){
          db.close();
          goto _false;
        } else {
          db.close();
          goto _false;
        }

        QSqlQuery rr(db);
        if (rr.exec(sSQL)){ sLastSQLError = ""; sLastSQLCommands[Name] += sSQL + "\n";
          if (rr.first()){
            do {
              QSqlRecord r = rr.record();
              QString k = rr.value(0).toString();
              if (Name.compare(k, Qt::CaseInsensitive) == 0){
                db.close();              
                goto _true;
              }
            } while (rr.next());
          }
        } else {
          sLastSQLError = rr.lastError().text();
          if (sLastSQLError.isEmpty()) sLastSQLError = "unknown error";
          sLastSQLCommandFailed[Name] = sSQL;
        }
        db.close();
        goto _false;
      }
      goto _false;
    }

    return false;
_false:
    QSqlDatabase::removeDatabase(Name + User); 
    return false;
_true:
    QSqlDatabase::removeDatabase(Name + User); 
    return true;
  }
  
  bool SetCurrentDatabase(QString Name)
  {
    if (Q7B_Database::databases.contains(Name)){
      _CurrentDatabase = Q7B_Database::databases[Name];
      return true;
    }
    return false;
  }

  QString CurrentDatabase()
  {
    return _CurrentDatabase.databaseName();
  }

  bool OpenSQLite(QString Name)
  {
    if (!Q7B_Database::databases.contains(Name)){
      QSqlDatabase db;
      db = QSqlDatabase::addDatabase("QSQLITE", Name);
      db.setDatabaseName(Name);
      if (db.open()){    
        Q7B_Database::databases[Name] = db;
        _CurrentDatabase = db;
        return true;
      } else {
        goto _false;
      }
    }

    return false;
_false:
    QSqlDatabase::removeDatabase(Name); 
    return false;
  }

  bool Open(QString Driver, QString Name, QString User, QString Password)
  {
    if (!Driver.isEmpty() && !Q7B_Database::databases.contains(Name)){
      QSqlDatabase db;
      db = QSqlDatabase::addDatabase(Driver, Name);
      db.setHostName("localhost");
      db.setDatabaseName(Name);
      db.setUserName(User);
      db.setPassword(Password);
      if (db.open()){    
        Q7B_Database::databases[Name] = db;
        _CurrentDatabase = db;
        return true;
      } else {
        goto _false;
      }
    }

    return false;
_false:
    QSqlDatabase::removeDatabase(Name); 
    return false;
  }

  bool Open(QString Driver, QString Name, QString User, QString Password, QString Host, QString Options, QString Port)
  {
    if (!Driver.isEmpty() && !Q7B_Database::databases.contains(Name)){
      QSqlDatabase db;
      db = QSqlDatabase::addDatabase(Driver, Name);
      db.setHostName(Host);
      db.setDatabaseName(Name);
      db.setUserName(User);
      db.setPassword(Password);
      if (!Port.isEmpty()) db.setPort(Port.toInt());
      if (!Options.isEmpty()) db.setConnectOptions(Options);
      if (db.open()){    
        Q7B_Database::databases[Name] = db;
        _CurrentDatabase = db;
        return true;
      } else {       
        QSqlDatabase::removeDatabase(Name);
      }
    }

    return false;
//_false:
    QSqlDatabase::removeDatabase(Name); 
    return false;
  }

  bool Close(QString Name)
  {
    QString sRemove;
    if (Name.isEmpty()){
      _CurrentDatabase.close();  
      sRemove = _CurrentDatabase.databaseName();      
      sLastSQLCommands[Name] = "";
      sLastSQLCommandFailed[Name] = "";
      goto _true;
    }
    if (Q7B_Database::databases.contains(Name)){
      //if (_CurrentDatabase.databaseName() == Q7B_Database::databases[Name].databaseName()){
      //}
      Q7B_Database::databases[Name].close();   
      sRemove = Name;            
      Q7B_Database::databases.remove(Name);
      sLastSQLCommands[Name] = "";
      sLastSQLCommandFailed[Name] = "";
      goto _true;
    }

    return false;
_true:
    QSqlDatabase::removeDatabase(sRemove);
    return true;
  }

  bool IsOpen(QString Name)
  {
    if (Name.isEmpty()){
      return _CurrentDatabase.isOpen();
    }
    if (Q7B_Database::databases.contains(Name)){    
      return Q7B_Database::databases[Name].isOpen();
    }
    return false;
  }

  bool Create(QString Driver, QString Name, QString User, QString Password, QString Host, QString Options, QString Port)
  {
    /*
    odbc: geht nicht
    sqlite: geht nicht (automatisch erstellt)
    */
    if (!Driver.isEmpty()){
      QSqlDatabase db;
      db = QSqlDatabase::addDatabase(Driver, Name + User);
      db.setHostName(Host);

      db.setUserName(User);
      db.setPassword(Password);
      if (!Port.isEmpty()) db.setPort(Port.toInt());
      db.setConnectOptions(Options);
/*
      QMessageBox::information(0,"Driver", Driver); 
      QMessageBox::information(0,"Name", Name); 
      QMessageBox::information(0,"User", User); 
      QMessageBox::information(0,"Password", Password); 
      QMessageBox::information(0,"Host", Host); 
      QMessageBox::information(0,"Options", Options); 
      QMessageBox::information(0,"Port", Port); 
*/
      if (db.open()){

       // QMessageBox::information(0,"", "1"); 

        QString sSQL = "";
        if (Driver.contains("MYSQL", Qt::CaseInsensitive)){
          sSQL = "CREATE DATABASE " + Name + ";";
        } else if (Driver.contains("PSQL", Qt::CaseInsensitive)){
        //  QMessageBox::information(0,"", "2"); 
          sSQL = "CREATE DATABASE " + Name + " ENCODING='utf-8';";
        } else {
         // QMessageBox::information(0,"", Driver); 
          db.close();
          goto _false;
        }
        QSqlQuery rr(db);
        if (rr.exec(sSQL)){ sLastSQLError = ""; sLastSQLCommands[Name] += sSQL + "\n";
          db.close();
          goto _true;
        } else {
                  //QMessageBox::information(0,"", "2"); 

          sLastSQLError = rr.lastError().text();
          if (sLastSQLError.isEmpty()) sLastSQLError = "unknown error";
          sLastSQLCommandFailed[Name] = sSQL;
        }
        db.close();
      } else {
        //QMessageBox::information(0,"", "3"); 
      }
      goto _false;
    }

    return false;
_false:
    QSqlDatabase::removeDatabase(Name + User); 
    return false;
_true:
    QSqlDatabase::removeDatabase(Name + User); 
    return true;
  }

  QString TestConnection(QString Driver, QString User, QString Password, QString Host, QString Options, QString Port)
  {

 /*
    QStringList ll;
        
    QStringList drivers = QSqlDatabase::drivers();
    for (int i = 0; i < drivers.size(); i++){
      QString k = drivers.at(i);
      if (!k.right(1).at(0).isDigit()){ // filter out old-versions marked with digits at the end
        ll << k;    
        QMessageBox::information(0,"drivers", k); 
      }
    }*/
/*
    {
      QSqlDatabase *Q7B_mysqldb = 0;
      if (!QSqlDatabase::contains("default.mysql") && Q7B_mysqldb == 0){
        //QMessageBox::information(0, "Q7B_MYSQLCONNECT", "1");
        Q7B_mysqldb = new QSqlDatabase(QSqlDatabase::addDatabase("QMYSQL", "default.mysql"));
      }
      if (Q7B_mysqldb->isOpen()) Q7B_mysqldb->close();

     // QMessageBox::information(0, "Q7B_MYSQLCONNECT", "2");

      //Q7B_mysqldb->setDatabaseName( Q7B_IDQString(Name) );
      Q7B_mysqldb->setUserName( (User) );
      Q7B_mysqldb->setPassword( (Password) );

      //QMessageBox::information(0, "Q7B_MYSQLCONNECT", "3");

      QString sHost = (Host);
      if (!sHost.isEmpty()) Q7B_mysqldb->setHostName( sHost );

     // QMessageBox::information(0, "Q7B_MYSQLCONNECT", "4");

      //QString sConnectOptions = (ConnectOptions);
      //if (!sConnectOptions.isEmpty()) Q7B_mysqldb->setConnectOptions( sConnectOptions ); 

      //qint64 nPort = (Port);
      //if (nPort > -1) Q7B_mysqldb->setPort( nPort );    

      //QMessageBox::information(0, "Q7B_MYSQLCONNECT", "5");

      if (!Q7B_mysqldb->open()){
        QMessageBox::information(0,"TestC!!!", "aaa1111"); 
        QMessageBox::information(0,"TestC!!!", Q7B_mysqldb->lastError().text()); 
        return false;
      }
      QMessageBox::information(0,"geht!!!", "bbbb1111"); 


    }*/
    /*
    {
      if (!Driver.isEmpty()){
        QSqlDatabase *db;
        db = new QSqlDatabase(QSqlDatabase::addDatabase("QMYSQL", "kbasic_internal"));
        //db.setHostName("Local8Bithost");
        db->setUserName("root");
        db->setPassword("test");
        //if (!Port.isEmpty()) db.setPort(Port.toInt());
        //db.setConnectOptions(Options);
        if (!db->open()){ 
          QMessageBox::information(0,"TestConnection", "111"); 
          QMessageBox::information(0,"TestConnection", db->lastError().text()); 
          //QSqlDatabase::removeDatabase("kbasic_internal");  // crashes the program!
          return db->lastError().text();
        }
        db->close();
        //QSqlDatabase::removeDatabase("kbasic_internal");  // crashes the program!
        QMessageBox::information(0,"TestConnection", "222"); 
        return "";
      }
      QMessageBox::information(0,"TestConnection", "333"); 
      return "Driver not selected";
    }*/

    QString s; 
    if (!Driver.isEmpty()){
      QSqlDatabase db;
      db = QSqlDatabase::addDatabase(Driver, User);
      db.setHostName(Host);
      db.setUserName(User);
      db.setPassword(Password);
      if (!Port.isEmpty()){
        //QMessageBox::information(0,"TestConnection", QString("%1").arg(Port.toInt())); 
        db.setPort(Port.toInt());
      }
      db.setConnectOptions(Options);
      if (!db.open()){ 
       // QMessageBox::information(0,"TestConnection", "1"); 
        goto _exit; 
        s = db.lastError().text();
        if (s.isEmpty()) s = "unknown error";
      }
      db.close();      
      s = "";
      goto _exit; 
      //QMessageBox::information(0,"TestConnection", "2"); 
    }
    s = "Driver not selected";

   // QMessageBox::information(0,"TestConnection", "3"); 

    return s;
_exit:
    QSqlDatabase::removeDatabase(User); 
    return s;
  }

  bool Empty(QString Driver, QString Name, QString User, QString Password, QString Host, QString Options, QString Port)
  {
    if (!Driver.isEmpty()){
      QSqlDatabase db;
      db = QSqlDatabase::addDatabase(Driver, Name + User);
      db.setHostName(Host);
      db.setDatabaseName(Name);
      db.setUserName(User);
      db.setPassword(Password);
      if (!Port.isEmpty()) db.setPort(Port.toInt());
      db.setConnectOptions(Options);
      if (db.open()){  
        foreach(QString s, db.tables(QSql::Tables)){
          QString sSQL = "DROP TABLE " + s + ";";
          QSqlQuery rr(db);
          sLastSQLError = "";
          if (!rr.exec(sSQL)){
            sLastSQLError = rr.lastError().text();
            if (sLastSQLError.isEmpty()) sLastSQLError = "unknown error";
            sLastSQLCommandFailed[Name] = sSQL;
            db.close();
            goto _false;
          } else {
            sLastSQLCommands[Name] += sSQL + "\n";
          }
        }
        db.close();
        goto _true;
      }
      goto _false;
    }

    return false;
_false:
    QSqlDatabase::removeDatabase(Name + User); 
    return false;
_true:
    QSqlDatabase::removeDatabase(Name + User); 
    return true;
  }

  bool Drop(QString Driver, QString Name, QString User, QString Password, QString Host, QString Options, QString Port)
  {
    /*
    odbc: geht nicht
    sqlite: geht nicht
    */

    if (!Driver.isEmpty()){
      QSqlDatabase db;
      db = QSqlDatabase::addDatabase(Driver, Name + User);
      db.setHostName(Host);
      db.setDatabaseName(Name);
      db.setUserName(User);
      db.setPassword(Password);
      if (!Port.isEmpty()) db.setPort(Port.toInt());
      db.setConnectOptions(Options);
      if (db.open()){  

        QString sSQL = "";
        if (Driver.contains("MYSQL", Qt::CaseInsensitive)){
          sSQL = "DROP DATABASE " + Name + ";";
        } else if (Driver.contains("PGconn", Qt::CaseInsensitive)){ // PSQL
          sSQL = "DROP DATABASE " + Name + ";";
        } else {
          db.close();
          goto _false;
        }

        QSqlQuery rr(db);
        if (rr.exec(sSQL)){ sLastSQLError = ""; sLastSQLCommands[Name] += sSQL + "\n";
          db.close();
          goto _true;
        } else {
          sLastSQLError = rr.lastError().text();
          if (sLastSQLError.isEmpty()) sLastSQLError = "unknown error";
          sLastSQLCommandFailed[Name] = sSQL;
        }
        db.close();
      }
      goto _false;
    }

    return false;
_false:
    QSqlDatabase::removeDatabase(Name + User); 
    return false;
_true:
    QSqlDatabase::removeDatabase(Name + User); 
    return true;
  }

  bool Copy(QString Source, QString Destination)
  {
    // wird nicht unterst?tzt
    return false;
  }

  QString LastSQLError(QString Name)
  {
    if (Name.isEmpty()){
      QString k = _CurrentDatabase.lastError().text().trimmed();    
      if (!k.isEmpty()) return k;
      k = sLastSQLError;
      return k;
    }
    if (Q7B_Database::databases.contains(Name)){  
      QString k = Q7B_Database::databases[Name].lastError().text().trimmed();    
      if (!k.isEmpty()) return k;
      k = sLastSQLError;
      return k;
    }
    return "";
  }

  QString LastSQLCommands(QString Name)
  {
    if (Name.isEmpty()){
      QString k = sLastSQLCommands[_CurrentDatabase.databaseName()];
      sLastSQLCommands[_CurrentDatabase.databaseName()] = "";
      return k;
    }
    if (Q7B_Database::databases.contains(Name)){  
      QString k = sLastSQLCommands[Name];
      sLastSQLCommands[Name] = "";
      return k;
    }
    return "";
  }

  QString LastSQLCommandFailed(QString Name)
  {
    if (Name.isEmpty()){
      QString k = sLastSQLCommandFailed[_CurrentDatabase.databaseName()];
      sLastSQLCommandFailed[_CurrentDatabase.databaseName()] = "";
      return k;
    }
    if (Q7B_Database::databases.contains(Name)){  
      QString k = sLastSQLCommandFailed[Name];
      sLastSQLCommandFailed[Name] = "";
      return k;
    }
    return "";
  }

  bool IsTransactionSupported(QString Name)
  {
    if (Name.isEmpty()){
      return _CurrentDatabase.driver()->hasFeature(QSqlDriver::Transactions);
    }
    if (Q7B_Database::databases.contains(Name)){    
      return Q7B_Database::databases[Name].driver()->hasFeature(QSqlDriver::Transactions);
    }
    return false;
  }

  bool Transaction(QString Name)
  {
    if (Name.isEmpty()){
      return _CurrentDatabase.transaction();
    }
    if (Q7B_Database::databases.contains(Name)){    
      return Q7B_Database::databases[Name].transaction();
    }
    return false;
  }

  bool Commit(QString Name)
  {
    if (Name.isEmpty()){
      return _CurrentDatabase.commit();
    }
    if (Q7B_Database::databases.contains(Name)){    
      return Q7B_Database::databases[Name].commit();
    }
    return false;
  }

  bool Rollback(QString Name)
  {
    if (Name.isEmpty()){
      return _CurrentDatabase.rollback();
    }
    if (Q7B_Database::databases.contains(Name)){    
      return Q7B_Database::databases[Name].rollback();
    }
    return false;
  }

  QStringList Tables(QString Name)
  {
    QStringList ll;

    if (Q7B_Database::databases.contains(Name)){    
      foreach(QString s, Name.isEmpty() ? _CurrentDatabase.tables(QSql::Tables) : Q7B_Database::databases[Name].tables(QSql::Tables))
      {
        ll << s;
      } 
    }

    return ll;
  }

  QStringList Drivers()
  {
    QStringList ll;
        
    QStringList drivers = QSqlDatabase::drivers();
    for (int i = 0; i < drivers.size(); i++){
      QString k = drivers.at(i);
      if (!k.right(1).at(0).isDigit()){ // filter out old-versions marked with digits at the end
        ll << k;      
      }
    }
    
    return ll;
  }
  
  static QString getPrimary(QSqlDatabase &db, QString sTable)
  {
    QString sPrimary = "";

    QSqlIndex i = db.driver()->primaryIndex(sTable);
    if (i.count() == 1){
      sPrimary = i.fieldName(0);
    } else {
      for (int n = 0; n < i.count(); n++){
        if (n > 0) sPrimary += " ";
        sPrimary += i.fieldName(n);
      }
    }
    return sPrimary;
  }

  static QString formatValue(QString Database, Q7B o)
  {
    QSqlDriver *driver = Q7B_Database::databases[Database].driver();

    //QMessageBox::information(0,"formatValue", "11"); 
    QSqlField f;
    if (o->type == typeid(qint64).name()){
     // QMessageBox::information(0,"91", "11"); 
      f.setValue(QVariant(*((qint64*)o->ref)));
    } else if (o->type == typeid(qreal).name()){
     // QMessageBox::information(0,"92", "11"); 
      f.setValue(QVariant(*((qreal*)o->ref)));
    } else if (o->type == typeid(QDateTime).name()){
     // QMessageBox::information(0,"93", "11"); 
      f.setValue(QVariant(*((QDateTime*)o->ref)));
    } else {
     // QMessageBox::information(0,"94", Q7B_toString2(o)); 
      f.setValue(QVariant(Q7B_toString2(o)));
      return "\"" + driver->formatValue(f) + "\"";
    }
    //QMessageBox::information(0,"formatValue", "22"); 
    return driver->formatValue(f);
  }
        
  static QString getOrderBy(QString Database, Q7B_Dictionary *OrderBy)
  {
    QString sOrderBy;

   if (OrderBy && Q7B_Database::databases.contains(Database)){

      QMapIterator<QString, Q7B> i(OrderBy->me);
      while (i.hasNext()){
        i.next();

        QString sName = i.key();

        if (!sOrderBy.isEmpty()) sOrderBy += ", ";
        sOrderBy += sName;
      }      
   }
   return sOrderBy;
  }

  static QString getInsertFields(QString Database, Q7B_Dictionary *Insert)
  {
    QString sInsert;

   if (Insert && Q7B_Database::databases.contains(Database)){
      
      QMapIterator<QString, Q7B> i(Insert->me);
      while (i.hasNext()){
        i.next();

        QString sName = i.key();

        if (!sInsert.isEmpty()) sInsert += ", ";
        sInsert += sName;
      }      
   }
   return sInsert;
  }   

  static QString getInsertValues(QString Database, Q7B_Dictionary *Insert)
  {
    QString sInsert;

   if (Insert && Q7B_Database::databases.contains(Database)){

      QMapIterator<QString, Q7B> i(Insert->me);
      while (i.hasNext()){
        i.next();

        QString sValue = formatValue(Database, i.value());

        if (!sInsert.isEmpty()) sInsert += ", ";
        sInsert += sValue;
      }      
   }
   return sInsert;
  }

  static QString getUpdate(QString Database, Q7B_Dictionary *Update)
  {
    QString sUpdate;

   if (Update && Q7B_Database::databases.contains(Database)){
      
      QMapIterator<QString, Q7B> i(Update->me);

      while (i.hasNext()){
        i.next();

        QString sName = i.key();

        QString sValue = formatValue(Database, i.value());

        if (!sUpdate.isEmpty()) sUpdate += ", ";
        sUpdate += sName + " = " + sValue;
      }      
   }
   return sUpdate;
  }

  static QString getWhere(QString Database, Q7B_Dictionary *Where)
  {
    QString sWhere;

   if (Where && Q7B_Database::databases.contains(Database)){
      

    // QMessageBox::information(0,"", "a"); 
      QMapIterator<QString, Q7B> i(Where->me);

      //QMessageBox::information(0,"", "b"); 

      while (i.hasNext()){
        i.next();


       // QMessageBox::information(0,"", "c"); 

        
        QString sDefinition = i.key();


//        QMessageBox::information(0,"", sDefinition); 
        /*
        possible values:

        a:=v   =
        a>:=10 >
        a<:=10 <
        a=:=10 0
        a<>:=10 <>
        
        */

        sDefinition = sDefinition.replace("=", " = ");
        sDefinition = sDefinition.replace("<", " < ");
        sDefinition = sDefinition.replace(">", " > ");
        sDefinition = sDefinition.replace("<>", " <> ");

        QStringList ll = sDefinition.split(" ", QString::SkipEmptyParts);
        QString sName = ll.at(0);
        QString sOperator;

        QString sValue = formatValue(Database, i.value());

        if (ll.size() > 1){
          for (int i = 1; i < ll.size(); i++){
            sOperator += ll.at(i);
          }
        } else {          
          sOperator = "=";
        }

        if (!sWhere.isEmpty()) sWhere += ", ";
        sWhere += sName + " " + sOperator + " " + sValue;
      }      
   }
   return sWhere;
  }

public:
  static QMap<QString, QSqlDatabase> databases; // TODO2 mit pointer machen
  static QMap<QString, QSqlQuery *> records;
  static QMap<QString, QString> records_database;
  static QMap<QString, QString> records_table;

  static QSqlDatabase _CurrentDatabase;

  static QString sLastSQLError;

  static QMap<QString, QString> sLastSQLCommands;
  static QMap<QString, QString> sLastSQLCommandFailed;
};

class Q7B_Table : public QObject
{
  Q_OBJECT
public:

  Q7B_Table()
  {
  }

  ~Q7B_Table()
  {
  }

  bool Exists(QString Table)
  {
    return Exists(Q7B_Database::_CurrentDatabase.databaseName(), Table);
  }

  bool Exists(QString Database, QString Table)
  {
    if (Q7B_Database::databases.contains(Database)){
      foreach(QString s, Q7B_Database::databases[Database].tables(QSql::Tables))
      {
        if (s.compare(Table, Qt::CaseInsensitive) == 0) return true;
      } 
    }

    return false;
  }
/*
  bool Create(QString Table)
  {
    return Create2(CurrentDatabase.databaseName(), Table);
  }

  bool Create2(QString Database, QString Table)
  {  
    Q7B_Dictionary *Fields = new Q7B_Dictionary();

    QString sFields = interpreter_loadFileAsString(Table.endsWith(".kbasic_table") ? Table : (Table + ".kbasic_table"));
    QStringList l = sFields.split(",");
    foreach(QString s, l)
    {
      QString sName = "";
      QString sType = "";
      int n = s.indexOf(" As ");
      sName = s.left(n);
      sType = s.mid(n + 4);

      Fields->METHOD_Set(sName, "", "", "", "", "", "", "", t_variant(&sType));
      t_variant v = Fields->qmap[sName];
      v = v;
    }

    if (Create2(Database, Table, Fields)){
      return true;
    }
    delete Fields;
    return false;
  }*/

  bool Create(QString Table, Q7B_Dictionary *Fields)
  {
    return Create(Q7B_Database::_CurrentDatabase.databaseName(), Table, Fields);
  }

  bool Create(QString Database, QString Table, Q7B_Dictionary *Fields)
  {
    //QMessageBox::information(0,"", "1"); 
    if (Q7B_Database::databases.contains(Database)){

      QMapIterator<QString, Q7B> i(Fields->me);

     // QVector<QVariant> Q7B_NULL; Q7B_NULL.resize(Fields->me.size());
     // QVector<QVariant> NOTNULL; NOTNULL.resize(Fields->me.size());
     // QVector<QVariant> INDEX; INDEX.resize(Fields->me.size());
     // QVector<QVariant> PRIMARYKEY; PRIMARYKEY.resize(Fields->me.size());
    //  QVector<QVariant> AUTOINC; AUTOINC.resize(Fields->me.size());

      //QString sPrimaryKey;

      QString sSQL;
      QString sSQL2;
      
      QString sField;      

      QString driver = Q7B_Database::databases[Database].driver()->handle().typeName();

      bool bMYSQL = driver.contains("MYSQL", Qt::CaseInsensitive);
      bool bPSQL = driver.contains("PGconn", Qt::CaseInsensitive); // PSQL
      bool bSQLITE = driver.contains("SQLITE", Qt::CaseInsensitive);

      QString sPrimaryKey;
      QString sMYSQLUnique;

      //QMessageBox::information(0,"driver", driver); 
      while (i.hasNext()){
        if (i.hasPrevious()) sField = ", ";

        i.next();


        QString sName = i.key();
        QString sDefinition = Q7B_toString2(i.value());

        /*
        possible values:
        NULL, NOT NULL, PRIMARY KEY, AUTO INCREMENT, UNIQUE

        primary key beliebiger datentyp
        primary key ?ber mehrere spalten
        primary key auto increment
        spalte eindeutig
        spalte null nicht erlaubt
        */

        sDefinition = sDefinition.replace("NOT NULL", "NOTNULL");
        sDefinition = sDefinition.replace("PRIMARY KEY", "PRIMARYKEY");
        sDefinition = sDefinition.replace("AUTO INCREMENT", "AUTOINCREMENT");
        

        QStringList ll = sDefinition.split(" ", QString::SkipEmptyParts);
        QString sType = ll.at(0);
        
        sField += sName + " ";

        if (bMYSQL){      
          if (sType.contains("Boolean", Qt::CaseInsensitive)){ sType = "BOOLEAN";
          } else if (sType.contains("String", Qt::CaseInsensitive)){ sType = "LONGTEXT";
          } else if (sType.contains("Byte", Qt::CaseInsensitive) || sType.contains("Int8", Qt::CaseInsensitive)){ sType = "SMALLINT";
          } else if (sType.contains("Short", Qt::CaseInsensitive) || sType.contains("Int16", Qt::CaseInsensitive)){ sType = "SMALLINT";
          } else if (sType.contains("Integer", Qt::CaseInsensitive) || sType.contains("Int64", Qt::CaseInsensitive)){ sType = "BIGINT";
          } else if (sType.contains("Int32", Qt::CaseInsensitive)){ sType = "INT";
          } else if (sType.contains("Single", Qt::CaseInsensitive)){ sType = "FLOAT";
          } else if (sType.contains("Double", Qt::CaseInsensitive)){ sType = "DOUBLE";
          } else if (sType.contains("Float", Qt::CaseInsensitive)){ sType = "DOUBLE";
          } else if (sType.contains("Decimal", Qt::CaseInsensitive)){ sType = "DECIMAL(10,4)";
         // } else if (sType.contains("Currrency", Qt::CaseInsensitive)){ sType = "DECIMAL(10,4)";
         // } else if (sType.contains("Date", Qt::CaseInsensitive)){ sType = "DATETIME";
          } else if (sType.contains("DateTime", Qt::CaseInsensitive)){ sType = "DATETIME";
          } else if (sType.contains("Bytes", Qt::CaseInsensitive)){ sType = "LONGBLOB";
          } else sType = "BIGINT";
         // } else return false;

        } else if (bPSQL){
          if (sType.contains("Boolean", Qt::CaseInsensitive)){ sType = "BOOLEAN";
          } else if (sType.contains("String", Qt::CaseInsensitive)){ sType = "TEXT";
          } else if (sType.contains("Byte", Qt::CaseInsensitive) || sType.contains("Int8", Qt::CaseInsensitive)){ sType = "SMALLINT";
          } else if (sType.contains("Short", Qt::CaseInsensitive) || sType.contains("Int16", Qt::CaseInsensitive)){ sType = "SMALLINT";
          } else if (sType.contains("Integer", Qt::CaseInsensitive) || sType.contains("Int64", Qt::CaseInsensitive)){ sType = "BIGINT";
          } else if (sType.contains("Int32", Qt::CaseInsensitive)){ sType = "INT";
          } else if (sType.contains("Single", Qt::CaseInsensitive)){ sType = "REAL";
          } else if (sType.contains("Double", Qt::CaseInsensitive)){ sType = "DOUBLE PRECISION";
          } else if (sType.contains("Float", Qt::CaseInsensitive)){ sType = "DOUBLE PRECISION";
          } else if (sType.contains("Decimal", Qt::CaseInsensitive)){ sType = "DECIMAL";
        //  } else if (sType.contains("Currrency", Qt::CaseInsensitive)){ sType = "DECIMAL";
        //  } else if (sType.contains("Date", Qt::CaseInsensitive)){ sType = "TIMESTAMP";
          } else if (sType.contains("DateTime", Qt::CaseInsensitive)){ sType = "TIMESTAMP";
          } else if (sType.contains("Bytes", Qt::CaseInsensitive)){ sType = "BYTEA";
          } else sType = "BIGINT";
          //} else return false;

        } else if (bSQLITE){
          if (sType.contains("Boolean", Qt::CaseInsensitive)){ sType = "INTEGER";
          } else if (sType.contains("String", Qt::CaseInsensitive)){ sType = "TEXT";
          } else if (sType.contains("Single", Qt::CaseInsensitive)){ sType = "REAL";
          } else if (sType.contains("Double", Qt::CaseInsensitive)){ sType = "REAL";
          } else if (sType.contains("Float", Qt::CaseInsensitive)){ sType = "REAL";
          } else if (sType.contains("Decimal", Qt::CaseInsensitive)){ sType = "TEXT";
        //  } else if (sType.contains("Currrency", Qt::CaseInsensitive)){ sType = "TEXT";
        //  } else if (sType.contains("Date", Qt::CaseInsensitive)){ sType = "TEXT";
          } else if (sType.contains("DateTime", Qt::CaseInsensitive)){ sType = "TEXT";
          } else if (sType.contains("Bytes", Qt::CaseInsensitive)){ sType = "BLOB";
          } else sType = "INTEGER";
        }

        int nInsert = sField.length();

        if (ll.size() > 1){
          for (int i = 1; i < ll.size(); i++){


            //QMessageBox::information(0,"?", ll.at(i)); 

            if (ll.at(i).compare("NULL", Qt::CaseInsensitive) == 0){
              //Q7B_NULL[i] = QVariant(true);
              
              if (bMYSQL){  
                sField += ""; // no value necessary
              } else if (bPSQL){
                sField += ""; // no value necessary
              } else if (bSQLITE){
                sField += ""; // no value necessary
              }
            }
            else if (ll.at(i).compare("NOTNULL", Qt::CaseInsensitive) == 0){ // NOT NULL is used by the developer
              //NOTNULL[i] = QVariant(true);
              
              if (!sField.contains(" NOT NULL")){
                if (bMYSQL){  
                  sField += " NOT NULL";
                } else if (bPSQL){
                  sField += " NOT NULL";
                } else if (bSQLITE){
                  sField += " NOT NULL";
                }
              }
            }
            else if (ll.at(i).compare("UNIQUE", Qt::CaseInsensitive) == 0){
              //INDEX[i] = QVariant(true);

              if (bMYSQL){                  
                if (!sMYSQLUnique.isEmpty()) sMYSQLUnique += ", ";
                sMYSQLUnique += sName;
                sType = "VARCHAR(255)"; // TODO2 in doku notieren, wenn column unique dann anderer datentyp, da mysql es erfordert
              } else if (bPSQL){
                sField += " UNIQUE";
              } else if (bSQLITE){
                sField += " UNIQUE";
              }
            }
            else if (ll.at(i).compare("PRIMARYKEY", Qt::CaseInsensitive) == 0){
            //  PRIMARYKEY[i] = QVariant(true);

          //    QMessageBox::information(0,"PRIMARYKEY", "PRIMARYKEY"); 

              if (bMYSQL){  
                //sField += "UNSIGNED NOT NULL";
                if (!sPrimaryKey.isEmpty()) sPrimaryKey += ", ";
                sPrimaryKey += sName;

            //     QMessageBox::information(0,sName, sPrimaryKey); 
                
              } else if (bPSQL){
                //sField += " PRIMARY KEY";
                if (!sPrimaryKey.isEmpty()) sPrimaryKey += ", ";
                sPrimaryKey += sName;
              } else if (bSQLITE){
                if (!sPrimaryKey.isEmpty()) sPrimaryKey += ", ";
                sPrimaryKey += sName;
                sField += " PRIMARY KEY";
              }
              
            }
            else if (ll.at(i).compare("AUTOINCREMENT", Qt::CaseInsensitive) == 0){

              if (bMYSQL && sType == "BIGINT"){  
                if (!sField.contains(" NOT NULL")){
                  sField += " UNSIGNED NOT NULL";
                } else {
                  sField += " UNSIGNED";
                }
                sField += " AUTO_INCREMENT";
              } else if (bPSQL && sType == "BIGINT"){
                sType = " BIGSERIAL";                
              } else if (bSQLITE && sType == "INTEGER"){
                sField += " AUTOINCREMENT"; // no value necessary
              }

             // AUTOINC[i] = QVariant(true);
            } else {
              sField += " " + ll.at(i);
            }
          }
        }

        sField = sField.insert(nInsert, " " + sType + " ");
        
        sSQL += sField;
      }     

      if (bMYSQL){ 
        sSQL += ", PRIMARY KEY (" + sPrimaryKey + ")";
        if (!sMYSQLUnique.isEmpty()){
          sSQL += ", UNIQUE (" + sMYSQLUnique + ")";
        }
      } else if (bPSQL){
        sSQL += ", PRIMARY KEY (" + sPrimaryKey + ")";
        sSQL2 = " WITH OIDS";
      } else if (bPSQL){
        if (sPrimaryKey.count(",") > 0){
          sSQL = sSQL.replace(" PRIMARY KEY", "");
          sSQL += " CONSTRAINT q7b_primarykey PRIMARY KEY (" + sPrimaryKey + ")";
        }
      }           
                  

    //QMessageBox::information(0,"", "2"); 

     
      
      
      QSqlQuery rr(Q7B_Database::databases[Database]);
  //QMessageBox::information(0,"", "2b"); 
      Q7B_Database::databases[Database].transaction();

      //QMessageBox::information(0,"", "3"); 

      sSQL = sSQL.simplified().replace(" , ", ", ");
      sSQL = "CREATE TABLE " + Table + " (\n" + sSQL + "\n)" + sSQL2 + ";";

      Q7B_Database::sLastSQLError = "";
      
      //QMessageBox::information(0,"", "4"); 
      if (!rr.exec(sSQL)){ 
        Q7B_Database::sLastSQLError = rr.lastError().text();
        Q7B_Database::sLastSQLCommandFailed[Database] = sSQL;
        Q7B_Database::databases[Database].rollback();
        return false;
      } else {
        Q7B_Database::sLastSQLCommands[Database] += sSQL + "\n";
      }
     
      //QMessageBox::information(0,"", "9"); 
      Q7B_Database::databases[Database].commit();

      //QMessageBox::information(0,"", "10"); 

      return true;    

    }

    //QMessageBox::information(0,"", "return false"); 

    return false;
  }

  QStringList FieldNames(QString Table)
  {
    return FieldNames(Q7B_Database::_CurrentDatabase.databaseName(), Table);
  }

  QStringList FieldNames(QString Database, QString Table)
  {
    QStringList ll;

    if (Q7B_Database::databases.contains(Database)){

      QString sSQL = "";
      QSqlQuery rr(Q7B_Database::databases[Database]);

      sSQL = "SELECT * FROM " + Table + ";";

      Q7B_Database::sLastSQLError = "";    
      if (!rr.exec(sSQL)){
        Q7B_Database::sLastSQLError = rr.lastError().text();
        Q7B_Database::sLastSQLCommandFailed[Database] = sSQL;
        return ll;
      } else {
        Q7B_Database::sLastSQLCommands[Database] += sSQL + "\n";

        QSqlRecord ri = rr.record();
        for (int i = 0; i < ri.count(); i++){
          ll << ri.fieldName(i);
        }
      }
      
    }

    return ll;
  }

  QString PrimaryKeyName(QString Table)
  {
    return PrimaryKeyName(Q7B_Database::_CurrentDatabase.databaseName(), Table);
  }

  QString PrimaryKeyName(QString Database, QString Table)
  {
    if (Q7B_Database::databases.contains(Database)){
      return Q7B_Database::getPrimary(Q7B_Database::databases[Database], Table);
    }

    return "";
  }

  bool Empty(QString Table)
  {
    return Empty(Q7B_Database::_CurrentDatabase.databaseName(), Table);
  }

  bool Empty(QString Database, QString Table)
  {
    if (Q7B_Database::databases.contains(Database)){

      QString sSQL = "";
      QSqlQuery rr(Q7B_Database::databases[Database]);

      sSQL = "DELETE FROM " + Table + ";";

      Q7B_Database::sLastSQLError = "";    
      if (!rr.exec(sSQL)){
        Q7B_Database::sLastSQLError = rr.lastError().text();
        Q7B_Database::sLastSQLCommandFailed[Database] = sSQL;
        return false;
      } else {
        Q7B_Database::sLastSQLCommands[Database] += sSQL + "\n";
      }

      return true;
    }

    return false;
  }

  bool Drop(QString Table)
  {
    return Drop(Q7B_Database::_CurrentDatabase.databaseName(), Table);
  }

  bool Drop(QString Database, QString Table)
  {
    if (Q7B_Database::databases.contains(Database)){

      QString sSQL = "";
      QSqlQuery rr(Q7B_Database::databases[Database]);

      sSQL = "DROP TABLE " + Table + ";";

      Q7B_Database::sLastSQLError = "";    
      if (!rr.exec(sSQL)){
        Q7B_Database::sLastSQLError = rr.lastError().text();
        Q7B_Database::sLastSQLCommandFailed[Database] = sSQL;
        return false;
      } else {
        Q7B_Database::sLastSQLCommands[Database] += sSQL + "\n";
      }

      return true;
    }

    return false;
  }
/*
bool _table2::METHOD_Copy(QString Database, QString Source, QString Destination)
{
  // not implemented yet
  return false;
}*/

  bool Delete(QString Table, Q7B_Dictionary *Where)
  {
    return Delete(Q7B_Database::_CurrentDatabase.databaseName(), Table, Where);
  }

  bool Delete(QString Database, QString Table, Q7B_Dictionary *Where)
  {
//    QMessageBox::information(0, "bool Delet", "0");
   if (Q7B_Database::databases.contains(Database)){

//     QMessageBox::information(0, "!Delete", "1");
      QString sWhere = Q7B_Database::getWhere(Database, Where);
//      QMessageBox::information(0, "!del", sWhere);

      QString sSQL = "";
      QSqlQuery rr(Q7B_Database::databases[Database]);

      sSQL = "DELETE FROM " + Table + " WHERE " + sWhere + ";";

      Q7B_Database::sLastSQLError = "";    
      if (!rr.exec(sSQL)){
        Q7B_Database::sLastSQLError = rr.lastError().text();
        Q7B_Database::sLastSQLCommandFailed[Database] = sSQL;
        return false;
      } else {
        Q7B_Database::sLastSQLCommands[Database] += sSQL + "\n";
      }

      return true;
    }

    return false;
  }

  bool Update(QString Table, Q7B_Dictionary *_Update, Q7B_Dictionary *Where)
  {
    return Update(Q7B_Database::_CurrentDatabase.databaseName(), Table, _Update, Where);
  }

  bool Update(QString Database, QString Table, Q7B_Dictionary *Update, Q7B_Dictionary *Where)
  {
   if (Q7B_Database::databases.contains(Database)){

      QString sUpdate = Q7B_Database::getUpdate(Database, Update);
      QString sWhere = Q7B_Database::getWhere(Database, Where);

     // QSqlDriver *driver = Q7B_Database::databases[Database].driver();

      QString sSQL;
      QSqlQuery rr(Q7B_Database::databases[Database]);

      sSQL = "UPDATE " + Table + " SET " + sUpdate + (!sWhere.isEmpty() ? " WHERE " + sWhere : "") + ";";

      Q7B_Database::sLastSQLError = "";    
      if (!rr.exec(sSQL)){
        Q7B_Database::sLastSQLError = rr.lastError().text();
        Q7B_Database::sLastSQLCommandFailed[Database] = sSQL;
        return false;
      } else {
        Q7B_Database::sLastSQLCommands[Database] += sSQL + "\n";
      }

      return true;
    }

    return false;
  }

  bool Insert(QString Table, Q7B_Dictionary *_Insert)
  {
    return Insert(Q7B_Database::_CurrentDatabase.databaseName(), Table, _Insert);
  }

  bool Insert(QString Database, QString Table, Q7B_Dictionary *Insert)
  {

   if (Q7B_Database::databases.contains(Database)){

      QString sFields = Q7B_Database::getInsertFields(Database, Insert);
      QString sValues = Q7B_Database::getInsertValues(Database, Insert);

      QSqlQuery rr(Q7B_Database::databases[Database]);      
      
      QString sSQL = "INSERT INTO " + Table + " (" + sFields + ") VALUES (" + sValues + ");";

      Q7B_Database::sLastSQLError = "";    
      if (!rr.exec(sSQL)){
        Q7B_Database::sLastSQLError = rr.lastError().text();
        Q7B_Database::sLastSQLCommandFailed[Database] = sSQL;
        return false;
      } else {
        Q7B_Database::sLastSQLCommands[Database] += sSQL + "\n";
      }

      return true;
    }

    return false;
  }

};




class Q7B_Records : public QObject
{
  Q_OBJECT
public:

  Q7B_Records()
  {
  }

  ~Q7B_Records()
  {
  }

  QString Open(QString Database, QString TableOrSql)
  {
    return Open(Database, TableOrSql, 0, 0);
  } 

  QString Open(QString Database, QString TableOrSql, Q7B_Dictionary *Where, Q7B_Dictionary *OrderBy)
  {
    if (!Q7B_Database::databases.contains(Database)) return "";

    QString sOrderBy = Q7B_Database::getOrderBy(Database, OrderBy);

    QString sWhere = Q7B_Database::getWhere(Database, Where);

    QSqlQuery *rr = new QSqlQuery(Q7B_Database::databases[Database]);
    QString sSQL = TableOrSql;
    if (!TableOrSql.contains(" ")){
      QString sPrimaryKey = Q7B_Database::getPrimary(Q7B_Database::databases[Database], sSQL);

      QString sOrderBy2;
      if (sOrderBy.isEmpty()){
        sOrderBy2 = " ORDER BY " + sPrimaryKey + " ASC";
      } else {
        sOrderBy2 = " ORDER BY " + sOrderBy;
      }

      if (sWhere.isEmpty()){
        sSQL = "SELECT * FROM " + TableOrSql + sOrderBy2 + ";";
      } else {
        sSQL = "SELECT * FROM " + TableOrSql + " WHERE " + sWhere + sOrderBy2 + ";";
      }
    }

    static qint64 nQueryId = 0;

    nQueryId++;

    QString QueryId = QString("%1").arg(nQueryId);
    Q7B_Database::records[QueryId] = rr;
    Q7B_Database::records_database[QueryId] = Database;

    if (Q7B_Database::records[QueryId]->exec(sSQL)){
      Q7B_Database::sLastSQLCommands[Q7B_Database::records_database[QueryId]] += sSQL + "\n";    
    } else {
      Q7B_Database::sLastSQLError = Q7B_Database::records[QueryId]->lastError().text();
      Q7B_Database::sLastSQLCommandFailed[Q7B_Database::records_database[QueryId]] = sSQL;
      return "";
    }

   // int n = Q7B_Database::records[QueryId]->size();

    return QueryId;
  } 

  /*
  QString Open(QString Database, QStringList Tables, Q7B_Dictionary *Where)
  {
    // not implemented
    return false;
  } */

  QString Open(QString TableOrSql)
  {
    return Open(Q7B_Database::_CurrentDatabase.databaseName(), TableOrSql);
  } 

  QString Open(QString Table, Q7B_Dictionary *Where)
  {
    return Open(Q7B_Database::_CurrentDatabase.databaseName(), Table, Where, 0);
  } 

  QString Open(QString Table, Q7B_Dictionary *Where, Q7B_Dictionary *OrderBy)
  {
    return Open(Q7B_Database::_CurrentDatabase.databaseName(), Table, Where, OrderBy);
  } 

  QString Open(QString Database, QString Table, Q7B_Dictionary *Where)
  {
    return Open(Database, Table, Where, 0);
  } 
  /*
  QString Open5(QStringList Tables, Q7B_Dictionary *Where)
  {
    return Open(Q7B_Database::_CurrentDatabase.databaseName(), Tables, Where, 0);
  } */

  bool Close(QString QueryId)
  {
    if (!Q7B_Database::records.contains(QueryId)) return false;

    delete Q7B_Database::records[QueryId];
    Q7B_Database::records.remove(QueryId);

    Q7B_Database::records_database.remove(QueryId);
    Q7B_Database::records_table.remove(QueryId);


    return true;
  } 

  bool Requery(QString QueryId)
  {
    if (!Q7B_Database::records.contains(QueryId)) return false;

    QString sSQL = Q7B_Database::records[QueryId]->executedQuery();
    if (Q7B_Database::records[QueryId]->exec(sSQL)){
      Q7B_Database::sLastSQLCommands[Q7B_Database::records_database[QueryId]] += sSQL + "\n";
      return true;
    }
    Q7B_Database::sLastSQLError = Q7B_Database::records[QueryId]->lastError().text();
    Q7B_Database::sLastSQLCommandFailed[Q7B_Database::records_database[QueryId]] = sSQL;
    return false;
  } 

  bool First(QString QueryId)
  {
    if (!Q7B_Database::records.contains(QueryId)) return false;

    return Q7B_Database::records[QueryId]->first();
  } 

  bool Next(QString QueryId)
  {
    if (!Q7B_Database::records.contains(QueryId)) return false;

    return Q7B_Database::records[QueryId]->next();
  } 

  bool Previous(QString QueryId)
  {
    if (!Q7B_Database::records.contains(QueryId)) return false;

    return Q7B_Database::records[QueryId]->previous();
  } 

  bool Last(QString QueryId)
  {
    if (!Q7B_Database::records.contains(QueryId)) return false;

    return Q7B_Database::records[QueryId]->last();
  } 

  bool GoTo(QString QueryId, qint64 Position)
  {
    if (!Q7B_Database::records.contains(QueryId)) return false;

    return Q7B_Database::records[QueryId]->seek(Position + 1);
  } 

  qint64 Length(QString QueryId)
  {
    if (!Q7B_Database::records.contains(QueryId)) return false;

    return Q7B_Database::records[QueryId]->size();
  } 

  qint64 Position(QString QueryId)
  {
    if (!Q7B_Database::records.contains(QueryId)) return false;

    return Q7B_Database::records[QueryId]->at() + 1;
  } 
/*
  bool AddNew(QString QueryId)
  {  
    // not implemented 
    return false;
  } */

  /*
  bool Insert(QString QueryId)
  {
    if (!Q7B_Database::records.contains(QueryId)) return false;

    QString sFields = "";
    QString sValues = "";

    QSqlDriver *driver = Q7B_Database::databases[Q7B_Database::records_database[QueryId]].driver();

    QSqlRecord ri = Q7B_Database::records[QueryId]->record();
    int y = 0;
    for ( ; y < ri.count(); y++);{
      if (y > 0) sFields += ", ";
      if (y > 0) sValues += ", ";

      QString sName = ri.fieldName(y);
      QString sValue = "";

      QSqlField f;
      f.setValue(ri.value(y));
      sValue = driver->formatValue(f);

      sFields += sName;
      sValues += sValue;

    }

    qulonglong kbrecordid = 0;
    
    Q7B_Database::sLastSQLError = "";
    QString sKBRecordId = Q7B_Database::getPrimary(Q7B_Database::databases[Q7B_Database::records_database[QueryId]], Q7B_Database::records_table[QueryId]);

    QString sSQL = "SELECT " + sKBRecordId + " FROM " + Q7B_Database::records_table[QueryId] + " ORDER BY " + sKBRecordId + " DESC;";
    QSqlQuery rr(Q7B_Database::databases[Q7B_Database::records_database[QueryId]]);
    if (rr.exec(sSQL)){
      Q7B_Database::sLastSQLCommands[Q7B_Database::records_database[QueryId]] += sSQL + "\n";

      QSqlRecord ri = rr.record();
      if (rr.first()){
        int n = ri.indexOf(sKBRecordId);
        kbrecordid = rr.value(n).toLongLong();                 
      }
    } else {
      Q7B_Database::sLastSQLError = rr.lastError().text();
      Q7B_Database::sLastSQLCommandFailed[Q7B_Database::records_database[QueryId]] = sSQL;
      return false;
    }

    if (y > 0) sFields += ", ";
    if (y > 0) sValues += ", ";
    sFields += sKBRecordId;
    {
      QSqlField f;
      f.setValue(QVariant(kbrecordid + 1));
      sValues += driver->formatValue(f);
    }    

    sSQL = "INSERT INTO " + Q7B_Database::records_table[QueryId] + " (" + sFields + ") VALUES (" + sValues + ");";

    Q7B_Database::sLastSQLError = "";    
    if (!rr.exec(sSQL)){
      Q7B_Database::sLastSQLError = rr.lastError().text();
      Q7B_Database::sLastSQLCommandFailed[Q7B_Database::records_database[QueryId]] = sSQL;
      return false;
    } else {
      Q7B_Database::sLastSQLCommands[Q7B_Database::records_database[QueryId]] += sSQL + "\n";
    }

    return false;
  } 
  */
/*
  bool Update(QString QueryId)
  {
    return false;
  } 

  bool Delete(QString QueryId)
  {
    return false;
  } 

  bool Clear(QString QueryId)
  {
    return false;
  } 

  void Set(QString QueryId, QString Field, t_variant Value)
  {  
  } */

  Q7B Value(QString QueryId, QString Field)
  {
     
    if (!Q7B_Database::records.contains(QueryId)) return Q7B_IDNIL();

   
    QSqlRecord ri = Q7B_Database::records[QueryId]->record();
    int n = ri.indexOf(Field);
    if (Q7B_Database::records[QueryId]->isValid() && n >= 0){

      switch(ri.value(n).type()){
        case QVariant::Bool:
          return Q7B_ID((bool) ri.value(n).toBool());
          break;
        case QVariant::Date: 
        case QVariant::Time: 
        case QVariant::DateTime:  
          return Q7B_ID(ri.value(n).toDateTime());         
          break;
        case QVariant::Double:
          return Q7B_ID(ri.value(n).toDouble());
          break;
        case QVariant::Int:
          return Q7B_ID(ri.value(n).toInt());
          break;
        case QVariant::LongLong:
          return Q7B_ID(ri.value(n).toLongLong());
          break;
        case QVariant::UInt:
          return Q7B_ID(ri.value(n).toUInt());
          break;
        case QVariant::ULongLong:
          return Q7B_ID(ri.value(n).toULongLong());
          break;

        case QVariant::String: 
        default:
          return Q7B_ID(ri.value(n).toString());
          break;
      }
      
    }

    return Q7B_IDNIL();    
  } 

  QStringList FieldNames(QString QueryId)
  {
    QStringList ll;

    if (!Q7B_Database::records.contains(QueryId)) return ll;
    QSqlRecord ri = Q7B_Database::records[QueryId]->record();
    
    if (!Q7B_Database::records[QueryId]->isActive()) return ll;

    for (int i = 0; i < ri.count(); i++){
      ll << ri.fieldName(i);
    }
    
    return ll;
  }

  /*
  QString PrimaryKeyName(QString QueryId)
  {
    return "kbrecordid"; 
  }

  QString PrimaryKey(QString QueryId)
  {
    return ""; // Get(QueryId, "kbrecordid");
  }*/

};




class Q7B_Query : public QObject
{
  Q_OBJECT
public:

  Q7B_Query()
  {
  }

  ~Q7B_Query()
  {
  }

  Q7B Command(QString _Command)
  {
    return Command(Q7B_Database::_CurrentDatabase.databaseName(), _Command);
  }

  Q7B Command(QString Database, QString Command)
  {

    QString sSQL = "";
    sSQL = Command;  

    Q7B_Database::sLastSQLError = "";
    QSqlQuery rr(Q7B_Database::databases[Database]);
    if (rr.exec(sSQL)){
      Q7B_Database::sLastSQLCommands[Database] += sSQL + "\n";

      Q7B_Dictionary *dd = new Q7B_Dictionary();
      Q7B q (new Q7B_id(typeid(Q7B_Dictionary).name(), dd));   
      
      int nCount = 0;
      if (rr.first()){

        QSqlRecord r = rr.record();

        do {          
      
          for (int i = 0; i < r.count(); i++){
            //QString ss = r.fieldName(i);
            //if (ss.isEmpty()) 
            QString ss = QString("%1/%2").arg(nCount + 1).arg(i + 1);
            QString sss = rr.value(i).toString();
            dd->setObject(ss, Q7B_ID(sss));
          }

          nCount++;
        } while (rr.next());
      }      
        
      return q;
      
    } else {
      Q7B_Database::sLastSQLError = rr.lastError().text();
      Q7B_Database::sLastSQLCommandFailed[Database] = sSQL;    
    }

    return Q7B_IDNIL();  
  }

  bool Run(QString QueryNameOrSql)
  {
    return Run(Q7B_Database::_CurrentDatabase.databaseName(), QueryNameOrSql);
  }

  bool Run(QString Database, QString QueryNameOrSql)
  {
    QString sSQL = "";
   // if (!QueryNameOrSql.contains(" ")){ TODO2
   //   sSQL = interpreter_loadFileAsString(QueryNameOrSql.endsWith(".kbasic_query") ? QueryNameOrSql : (QueryNameOrSql + ".kbasic_query"));
   // } else {
      sSQL = QueryNameOrSql;
   // }

    Q7B_Database::sLastSQLError = "";
    QSqlQuery rr(Q7B_Database::databases[Database]);
    if (rr.exec(sSQL)){
      Q7B_Database::sLastSQLCommands[Database] += sSQL + "\n";
      return true;
    } else {
      Q7B_Database::sLastSQLError = rr.lastError().text();
      Q7B_Database::sLastSQLCommandFailed[Database] = sSQL;
      return false;
    }

    return false;
  }

};

class Q7B_QObject : public QObject
{
  Q_OBJECT
public:
Q7B_QObject(QObject *parent = 0) : QObject (parent)
{  
}

QObject *Sender(){
  return this->sender();
}

};










bool Q7B_nil(Q7B o);



qreal Q7B_toFloat2(Q7B Q7B_Object);
qint64 Q7B_toInteger2(Q7B Q7B_Object);
bool Q7B_toBoolean2(Q7B Q7B_Object);




// *** slots connections related

bool Q7B_connect(QObject *a, const char * _signal, QObject *b, QString _slot);
void Q7B_connectSlotsByName(QObject *Me, QObject *Parent);
QObject *Q7B_connectSlotsByNameForGivenObjectAndReturnIt(QObject *parent, QObject *o, const char *objectName);
void *Q7B_connectSlotsByNameWithNewAndReturnIt(void *_Me, QObject *Parent);

void Q7B_RECONNECTSIGNALS(Q7B Argument, QObject *Q7B_Parent);

// ***


// *** Assignment

/*
Q7B Q7B__QOBJECT(bool o);
Q7B Q7B__QOBJECT(char * o);
Q7B Q7B__QOBJECT(const char * o);
Q7B Q7B__QOBJECT(QString o);
Q7B Q7B__QOBJECT(qint8 o);
Q7B Q7B__QOBJECT(qint16 o);
Q7B Q7B__QOBJECT(qint32 o);
Q7B Q7B__QOBJECT(qint64 o);
Q7B Q7B__QOBJECT(float o);
Q7B Q7B__QOBJECT(double o);
Q7B Q7B__QOBJECT(QStringList o);
Q7B Q7B__QOBJECT(QDateTime o);
*/


Q7B Q7B__ID(Q7B o);
Q7B Q7B__BOOLEAN(Q7B o);
Q7B Q7B__QSTRINGLIST(Q7B o);
#define Q7B__QSTRING Q7B__STRING
Q7B Q7B__STRING(Q7B o);
Q7B Q7B__CSTRING(Q7B o);


Q7B Q7B__INTEGER(Q7B o);

Q7B Q7B__BYTE(Q7B o);
Q7B Q7B__SHORT(Q7B o);
Q7B Q7B__INT8(Q7B o);
Q7B Q7B__INT16(Q7B o);
Q7B Q7B__INT32(Q7B o);
Q7B Q7B__INT64(Q7B o);


Q7B Q7B__FLOAT(Q7B o);
Q7B Q7B__SINGLE(Q7B o);
Q7B Q7B__DOUBLE(Q7B o);

Q7B Q7B__DATETIME(Q7B o);
Q7B Q7B__DECIMAL(Q7B o);
Q7B Q7B__LIST(Q7B o);
Q7B Q7B__DICTIONARY(Q7B o);
Q7B Q7B__DATA(Q7B o);

// ***



#define Q7B_QINT64 Q7B_INTEGER
//#define Q7B_IDQRgb Q7B_INTEGER
#define Q7B_BOOL Q7B_BOOLEAN
#define Q7B_QREAL Q7B_FLOAT
//#define Q7B_QSTRINGLIST Q7B_LIST


Q7B Q7B_BOOLEAN(Q7B o);
Q7B Q7B_QSTRING(Q7B Q7B_Object);
Q7B Q7B_CSTRING(Q7B o);
Q7B Q7B_QSTRINGLIST(Q7B Q7B_Object);

Q7B Q7B_INTEGER(Q7B o);

Q7B Q7B_BYTE(Q7B o);
Q7B Q7B_SHORT(Q7B o);
Q7B Q7B_INT8(Q7B o);
Q7B Q7B_INT16(Q7B o);
Q7B Q7B_INT32(Q7B o);
Q7B Q7B_INT64(Q7B o);


Q7B Q7B_FLOAT(Q7B o);
Q7B Q7B_SINGLE(Q7B o);
Q7B Q7B_DOUBLE(Q7B o);

Q7B Q7B_DATETIME(Q7B o);
Q7B Q7B_DECIMAL(Q7B o);
Q7B Q7B_LIST(Q7B o);
Q7B Q7B_DICTIONARY(Q7B o);
Q7B Q7B_DATA(Q7B o);

Q7B Q7B_CONTROL(Q7B Q7B_Object);

//Q7B Q7B_QSIZE(Q7B o);
//Q7B Q7B_QRECT(Q7B o);





// *** Cast to C++

QObject *Q7B_CQOBJECT(Q7B l);
bool Q7B_CBOOL(Q7B l);
bool Q7B_CBOOL(bool l);
qint64 Q7B_CQINT64(Q7B l);
qreal Q7B_CQREAL(Q7B l);
QString Q7B_CQSTRING(Q7B l);
QStringList Q7B_CQSTRINGLIST(Q7B l);

// Begin Generator h#4
Phonon::SeekSlider *Q7B_CPHONONSEEKSLIDER(Q7B l);
Phonon::VideoPlayer *Q7B_CPHONONVIDEOPLAYER(Q7B l);
Phonon::VolumeSlider *Q7B_CPHONONVOLUMESLIDER(Q7B l);
QAbstractButton *Q7B_CQABSTRACTBUTTON(Q7B l);
QAbstractItemModel *Q7B_CQABSTRACTITEMMODEL(Q7B l);
QAbstractItemView *Q7B_CQABSTRACTITEMVIEW(Q7B l);
QAbstractPrintDialog *Q7B_CQABSTRACTPRINTDIALOG(Q7B l);
QAbstractScrollArea *Q7B_CQABSTRACTSCROLLAREA(Q7B l);
QAbstractSlider *Q7B_CQABSTRACTSLIDER(Q7B l);
QAbstractSpinBox *Q7B_CQABSTRACTSPINBOX(Q7B l);
QAbstractTextDocumentLayout *Q7B_CQABSTRACTTEXTDOCUMENTLAYOUT(Q7B l);
QAccessibleEvent *Q7B_CQACCESSIBLEEVENT(Q7B l);
QAction *Q7B_CQACTION(Q7B l);
QActionEvent *Q7B_CQACTIONEVENT(Q7B l);
QActionGroup *Q7B_CQACTIONGROUP(Q7B l);
QApplication *Q7B_CQAPPLICATION(Q7B l);
QBitmap *Q7B_CQBITMAP(Q7B l);
QBoxLayout *Q7B_CQBOXLAYOUT(Q7B l);
QBrush *Q7B_CQBRUSH(Q7B l);
QButtonGroup *Q7B_CQBUTTONGROUP(Q7B l);
QByteArray *Q7B_CQBYTEARRAY(Q7B l);
QCalendarWidget *Q7B_CQCALENDARWIDGET(Q7B l);
QChar *Q7B_CQCHAR(Q7B l);
QCheckBox *Q7B_CQCHECKBOX(Q7B l);
QChildEvent *Q7B_CQCHILDEVENT(Q7B l);
QClipboard *Q7B_CQCLIPBOARD(Q7B l);
QCloseEvent *Q7B_CQCLOSEEVENT(Q7B l);
QColor *Q7B_CQCOLOR(Q7B l);
QColumnView *Q7B_CQCOLUMNVIEW(Q7B l);
QComboBox *Q7B_CQCOMBOBOX(Q7B l);
QCommandLinkButton *Q7B_CQCOMMANDLINKBUTTON(Q7B l);
QCompleter *Q7B_CQCOMPLETER(Q7B l);
QContextMenuEvent *Q7B_CQCONTEXTMENUEVENT(Q7B l);
QCoreApplication *Q7B_CQCOREAPPLICATION(Q7B l);
QCursor *Q7B_CQCURSOR(Q7B l);
QDate *Q7B_CQDATE(Q7B l);
QDateEdit *Q7B_CQDATEEDIT(Q7B l);
QDateTime *Q7B_CQDATETIME(Q7B l);
QDateTimeEdit *Q7B_CQDATETIMEEDIT(Q7B l);
QDeclarativeContext *Q7B_CQDECLARATIVECONTEXT(Q7B l);
QDeclarativeView *Q7B_CQDECLARATIVEVIEW(Q7B l);
QDial *Q7B_CQDIAL(Q7B l);
QDialog *Q7B_CQDIALOG(Q7B l);
QDialogButtonBox *Q7B_CQDIALOGBUTTONBOX(Q7B l);
QDir *Q7B_CQDIR(Q7B l);
QDockWidget *Q7B_CQDOCKWIDGET(Q7B l);
QDoubleSpinBox *Q7B_CQDOUBLESPINBOX(Q7B l);
QDrag *Q7B_CQDRAG(Q7B l);
QDragLeaveEvent *Q7B_CQDRAGLEAVEEVENT(Q7B l);
QDropEvent *Q7B_CQDROPEVENT(Q7B l);
QDynamicPropertyChangeEvent *Q7B_CQDYNAMICPROPERTYCHANGEEVENT(Q7B l);
QElapsedTimer *Q7B_CQELAPSEDTIMER(Q7B l);
QEvent *Q7B_CQEVENT(Q7B l);
QFileInfo *Q7B_CQFILEINFO(Q7B l);
QFileInfoList *Q7B_CQFILEINFOLIST(Q7B l);
QFileOpenEvent *Q7B_CQFILEOPENEVENT(Q7B l);
QFileSystemWatcher *Q7B_CQFILESYSTEMWATCHER(Q7B l);
QFocusEvent *Q7B_CQFOCUSEVENT(Q7B l);
QFont *Q7B_CQFONT(Q7B l);
QFontComboBox *Q7B_CQFONTCOMBOBOX(Q7B l);
QFontDatabase *Q7B_CQFONTDATABASE(Q7B l);
QFontInfo *Q7B_CQFONTINFO(Q7B l);
QFontMetrics *Q7B_CQFONTMETRICS(Q7B l);
QFormLayout *Q7B_CQFORMLAYOUT(Q7B l);
QFrame *Q7B_CQFRAME(Q7B l);
QFtp *Q7B_CQFTP(Q7B l);
QGraphicsSceneEvent *Q7B_CQGRAPHICSSCENEEVENT(Q7B l);
QGraphicsView *Q7B_CQGRAPHICSVIEW(Q7B l);
QGridLayout *Q7B_CQGRIDLAYOUT(Q7B l);
QGroupBox *Q7B_CQGROUPBOX(Q7B l);
QHBoxLayout *Q7B_CQHBOXLAYOUT(Q7B l);
QHeaderView *Q7B_CQHEADERVIEW(Q7B l);
QHelpEvent *Q7B_CQHELPEVENT(Q7B l);
QHideEvent *Q7B_CQHIDEEVENT(Q7B l);
QHostAddress *Q7B_CQHOSTADDRESS(Q7B l);
QHostInfo *Q7B_CQHOSTINFO(Q7B l);
QHoverEvent *Q7B_CQHOVEREVENT(Q7B l);
QIcon *Q7B_CQICON(Q7B l);
QIconDragEvent *Q7B_CQICONDRAGEVENT(Q7B l);
QImage *Q7B_CQIMAGE(Q7B l);
QInputDialog *Q7B_CQINPUTDIALOG(Q7B l);
QInputEvent *Q7B_CQINPUTEVENT(Q7B l);
QInputMethodEvent *Q7B_CQINPUTMETHODEVENT(Q7B l);
QIntValidator *Q7B_CQINTVALIDATOR(Q7B l);
QItemSelectionModel *Q7B_CQITEMSELECTIONMODEL(Q7B l);
QKeySequence *Q7B_CQKEYSEQUENCE(Q7B l);
QLCDNumber *Q7B_CQLCDNUMBER(Q7B l);
QLabel *Q7B_CQLABEL(Q7B l);
QLayout *Q7B_CQLAYOUT(Q7B l);
QLayoutItem *Q7B_CQLAYOUTITEM(Q7B l);
QLine *Q7B_CQLINE(Q7B l);
QLineEdit *Q7B_CQLINEEDIT(Q7B l);
QList<QStringList> Q7B_CQLISTQSTRINGLIST(Q7B l);
QListView *Q7B_CQLISTVIEW(Q7B l);
QListWidget *Q7B_CQLISTWIDGET(Q7B l);
QListWidgetItem *Q7B_CQLISTWIDGETITEM(Q7B l);
QLocalServer *Q7B_CQLOCALSERVER(Q7B l);
QLocalSocket *Q7B_CQLOCALSOCKET(Q7B l);
QLocale *Q7B_CQLOCALE(Q7B l);
QMainWindow *Q7B_CQMAINWINDOW(Q7B l);
QMargins *Q7B_CQMARGINS(Q7B l);
QMatrix *Q7B_CQMATRIX(Q7B l);
QMdiArea *Q7B_CQMDIAREA(Q7B l);
QMdiSubWindow *Q7B_CQMDISUBWINDOW(Q7B l);
QMenu *Q7B_CQMENU(Q7B l);
QMenuBar *Q7B_CQMENUBAR(Q7B l);
QMimeData *Q7B_CQMIMEDATA(Q7B l);
QModelIndex *Q7B_CQMODELINDEX(Q7B l);
QMoveEvent *Q7B_CQMOVEEVENT(Q7B l);
QMovie *Q7B_CQMOVIE(Q7B l);
QNetworkRequest *Q7B_CQNETWORKREQUEST(Q7B l);
QNetworkSession *Q7B_CQNETWORKSESSION(Q7B l);
QObject *Q7B_CQOBJECT(Q7B l);
QPaintEvent *Q7B_CQPAINTEVENT(Q7B l);
QPainter *Q7B_CQPAINTER(Q7B l);
QPalette *Q7B_CQPALETTE(Q7B l);
QPen *Q7B_CQPEN(Q7B l);
QPicture *Q7B_CQPICTURE(Q7B l);
QPixmap *Q7B_CQPIXMAP(Q7B l);
QPlainTextEdit *Q7B_CQPLAINTEXTEDIT(Q7B l);
QPoint *Q7B_CQPOINT(Q7B l);
QPolygon *Q7B_CQPOLYGON(Q7B l);
QPrintDialog *Q7B_CQPRINTDIALOG(Q7B l);
QPrintPreviewDialog *Q7B_CQPRINTPREVIEWDIALOG(Q7B l);
QPrintPreviewWidget *Q7B_CQPRINTPREVIEWWIDGET(Q7B l);
QPrinter *Q7B_CQPRINTER(Q7B l);
QPrinterInfo *Q7B_CQPRINTERINFO(Q7B l);
QProcess *Q7B_CQPROCESS(Q7B l);
QProcessEnvironment *Q7B_CQPROCESSENVIRONMENT(Q7B l);
QProgressBar *Q7B_CQPROGRESSBAR(Q7B l);
QProgressDialog *Q7B_CQPROGRESSDIALOG(Q7B l);
QPushButton *Q7B_CQPUSHBUTTON(Q7B l);
QRadioButton *Q7B_CQRADIOBUTTON(Q7B l);
QRect *Q7B_CQRECT(Q7B l);
QRegExp *Q7B_CQREGEXP(Q7B l);
QRegExpValidator *Q7B_CQREGEXPVALIDATOR(Q7B l);
QRegion *Q7B_CQREGION(Q7B l);
QResizeEvent *Q7B_CQRESIZEEVENT(Q7B l);
QResource *Q7B_CQRESOURCE(Q7B l);
QRgb *Q7B_CQRGB(Q7B l);
QRubberBand *Q7B_CQRUBBERBAND(Q7B l);
QScrollArea *Q7B_CQSCROLLAREA(Q7B l);
QScrollBar *Q7B_CQSCROLLBAR(Q7B l);
QSessionManager *Q7B_CQSESSIONMANAGER(Q7B l);
QShortcutEvent *Q7B_CQSHORTCUTEVENT(Q7B l);
QShowEvent *Q7B_CQSHOWEVENT(Q7B l);
QSignalMapper *Q7B_CQSIGNALMAPPER(Q7B l);
QSize *Q7B_CQSIZE(Q7B l);
QSizeF *Q7B_CQSIZEF(Q7B l);
QSizeGrip *Q7B_CQSIZEGRIP(Q7B l);
QSizePolicy *Q7B_CQSIZEPOLICY(Q7B l);
QSlider *Q7B_CQSLIDER(Q7B l);
QSound *Q7B_CQSOUND(Q7B l);
QSpinBox *Q7B_CQSPINBOX(Q7B l);
QSplashScreen *Q7B_CQSPLASHSCREEN(Q7B l);
QSplitter *Q7B_CQSPLITTER(Q7B l);
QSplitterHandle *Q7B_CQSPLITTERHANDLE(Q7B l);
QStackedLayout *Q7B_CQSTACKEDLAYOUT(Q7B l);
QStackedWidget *Q7B_CQSTACKEDWIDGET(Q7B l);
QStatusBar *Q7B_CQSTATUSBAR(Q7B l);
QStatusTipEvent *Q7B_CQSTATUSTIPEVENT(Q7B l);
QSvgWidget *Q7B_CQSVGWIDGET(Q7B l);
QSyntaxHighlighter *Q7B_CQSYNTAXHIGHLIGHTER(Q7B l);
QSystemLocale *Q7B_CQSYSTEMLOCALE(Q7B l);
QSystemTrayIcon *Q7B_CQSYSTEMTRAYICON(Q7B l);
QTabBar *Q7B_CQTABBAR(Q7B l);
QTabWidget *Q7B_CQTABWIDGET(Q7B l);
QTableView *Q7B_CQTABLEVIEW(Q7B l);
QTableWidget *Q7B_CQTABLEWIDGET(Q7B l);
QTableWidgetItem *Q7B_CQTABLEWIDGETITEM(Q7B l);
QTextBlock *Q7B_CQTEXTBLOCK(Q7B l);
QTextBlockFormat *Q7B_CQTEXTBLOCKFORMAT(Q7B l);
QTextBrowser *Q7B_CQTEXTBROWSER(Q7B l);
QTextCharFormat *Q7B_CQTEXTCHARFORMAT(Q7B l);
QTextCursor *Q7B_CQTEXTCURSOR(Q7B l);
QTextDocument *Q7B_CQTEXTDOCUMENT(Q7B l);
QTextDocumentFragment *Q7B_CQTEXTDOCUMENTFRAGMENT(Q7B l);
QTextEdit *Q7B_CQTEXTEDIT(Q7B l);
QTextFormat *Q7B_CQTEXTFORMAT(Q7B l);
QTextFrameFormat *Q7B_CQTEXTFRAMEFORMAT(Q7B l);
QTextOption *Q7B_CQTEXTOPTION(Q7B l);
QThread *Q7B_CQTHREAD(Q7B l);
QTime *Q7B_CQTIME(Q7B l);
QTimeEdit *Q7B_CQTIMEEDIT(Q7B l);
QTimeLine *Q7B_CQTIMELINE(Q7B l);
QTimer *Q7B_CQTIMER(Q7B l);
QTimerEvent *Q7B_CQTIMEREVENT(Q7B l);
QToolBar *Q7B_CQTOOLBAR(Q7B l);
QToolBox *Q7B_CQTOOLBOX(Q7B l);
QToolButton *Q7B_CQTOOLBUTTON(Q7B l);
QTransform *Q7B_CQTRANSFORM(Q7B l);
QTreeView *Q7B_CQTREEVIEW(Q7B l);
QTreeWidget *Q7B_CQTREEWIDGET(Q7B l);
QTreeWidgetItem *Q7B_CQTREEWIDGETITEM(Q7B l);
QUrl *Q7B_CQURL(Q7B l);
QUrlInfo *Q7B_CQURLINFO(Q7B l);
QVBoxLayout *Q7B_CQVBOXLAYOUT(Q7B l);
QValidator *Q7B_CQVALIDATOR(Q7B l);
QVariant *Q7B_CQVARIANT(Q7B l);
QWebPage *Q7B_CQWEBPAGE(Q7B l);
QWebSettings *Q7B_CQWEBSETTINGS(Q7B l);
QWebView *Q7B_CQWEBVIEW(Q7B l);
QWhatsThisClickedEvent *Q7B_CQWHATSTHISCLICKEDEVENT(Q7B l);
QWidget *Q7B_CQWIDGET(Q7B l);
QWindowStateChangeEvent *Q7B_CQWINDOWSTATECHANGEEVENT(Q7B l);

// End Generator h#4

bool Q7B_Compiler_ConvertDeclareType(QString *sCast);

// ***

// *** OPERATOR ***********************************************************************************
Q7B Q7B_ASSIGNMENT(Q7B *l, Q7B *r);
Q7B Q7B_ASSIGNMENT2(Q7B *l, Q7B *r);
Q7B Q7B_STATICASSIGNMENT(Q7B *l, Q7B *r);
Q7B Q7B_ISEQUALCLASS(Q7B l, Q7B r);
Q7B Q7B_EQUALEQUALEQUAL(Q7B l, Q7B r);
Q7B Q7B_ISEQUALOBJECT(Q7B l, Q7B r);
Q7B Q7B_EQUALEQUAL(Q7B l, Q7B r);
Q7B Q7B_ISEQUALVALUE(Q7B l, Q7B r);
Q7B Q7B_EQUAL(Q7B l, Q7B r);
Q7B Q7B_UNEQUAL(Q7B l, Q7B r);
Q7B Q7B_SMALLER(Q7B l, Q7B r);
Q7B Q7B_GREATER(Q7B l, Q7B r);
Q7B Q7B_SMALLEREQUAL(Q7B l, Q7B r);
Q7B Q7B_GREATEREQUAL(Q7B l, Q7B r);
Q7B Q7B_FLIP(Q7B l);
Q7B Q7B_NOT(Q7B l);
Q7B Q7B_MINUS(Q7B l);
Q7B Q7B_AND(Q7B l, Q7B r);
Q7B Q7B_ANDALSO(Q7B l, Q7B r);
Q7B Q7B_ORELSE(Q7B l, Q7B r);
Q7B Q7B_OR(Q7B l, Q7B r);
Q7B Q7B_XOR(Q7B l, Q7B r);
Q7B Q7B_SHL(Q7B l, Q7B r);
Q7B Q7B_SHR(Q7B l, Q7B r);
Q7B Q7B_ADD(Q7B l, Q7B r);
Q7B Q7B_SUB(Q7B l, Q7B r);
Q7B Q7B_CONCAT(Q7B l, Q7B r);
Q7B Q7B_POWER(Q7B l, Q7B r);
Q7B Q7B_MUL(Q7B l, Q7B r);
Q7B Q7B_IDIV(Q7B l, Q7B r);
Q7B Q7B_DIV(Q7B l, Q7B r);
Q7B Q7B_MOD(Q7B l, Q7B r);

// ***************************************************************************************************************************************************************

bool Q7B_copyFile (const QString& from, const QString& to);
bool Q7B_copyDir (const QString& from, const QString& to, bool bFirst);
bool Q7B_fileExists(QString & s);

Q7B Q7B_VB6MsgBox(QString sMessage, int n, QString sTitle);

// *** builtins ****
void Q7B_DOEVENTS(Q7B MilliSeconds);
void Q7B_EXECAFTERMSEC(Q7B MilliSeconds, Q7B SignalProcedureName, Q7B Object);

Q7B Q7B_READLINES(Q7B FileName, Q7B Codec);
Q7B Q7B_WRITELINES(Q7B self, Q7B theLines, Q7B FileName, Q7B Codec);

Q7B Q7B_MSGBOX(Q7B a, Q7B b, Q7B VB6MsgBox);
Q7B Q7B___MSGBOX(Q7B a, Q7B b, Q7B Buttons, Q7B VB6MsgBox);
Q7B Q7B__MSGBOX(Q7B Q7B_Object);
Q7B Q7B_INPUTBOX(Q7B Prompt, Q7B Title, Q7B Default);
Q7B Q7B_ISDIR(Q7B FilePath);
Q7B Q7B_FILE(Q7B FilePath);
Q7B Q7B_COPY(Q7B SourceFilePath, Q7B DestinationFilePath);
Q7B Q7B_COPYDIR(Q7B SourceFilePath, Q7B DestinationFilePath);
Q7B Q7B_MOVE(Q7B SourceFilePath, Q7B DestinationFilePath);
Q7B Q7B_DELETE(Q7B FilePath);
Q7B Q7B_DRIVES();
Q7B Q7B_DIR(Q7B FilePath, Q7B Create);
Q7B Q7B_CLASSNAME(Q7B Q7B_Object);
Q7B Q7B_MESSAGEBOX(Q7B Icon, Q7B Title, Q7B Text, Q7B InformativeText, Q7B DetailedText, Q7B o1 = Q7B_IDNIL(), Q7B o2 = Q7B_IDNIL(), Q7B o3 = Q7B_IDNIL(), Q7B o4 = Q7B_IDNIL(), Q7B o5 = Q7B_IDNIL(), Q7B o6 = Q7B_IDNIL(), Q7B o7 = Q7B_IDNIL(), Q7B o8 = Q7B_IDNIL(), Q7B o9 = Q7B_IDNIL(), Q7B o10 = Q7B_IDNIL());

// *******


// *** MAINWINDOW ***********************************************************************************


// *** OS ***********************************************************************************

// extern Q7B Q7B_idOS;

Q7B Q7B_OS_ISWINDOWS(Q7B dummy);
Q7B Q7B_OS_ISMAC(Q7B dummy);
Q7B Q7B_OS_ISLINUX(Q7B dummy);

// *** QPAINTER ***********************************************************************************

Q7B Q7B_QPAINTER_INIT(QObject *parent, const char *objectName);
void Q7B_QPAINTER_DRAWLINE(Q7B qpainter, Q7B X1, Q7B Y1, Q7B X2, Q7B Y2);

// *** FILE ***********************************************************************************

Q7B Q7B_FILE_SIZE(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_RESIZE(Q7B dummy, Q7B FileName, Q7B NewSize);
Q7B Q7B_FILE_TRUNCATE(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_READSTRING(Q7B dummy, Q7B FileName, Q7B Codec, Q7B AutoDetectUnicode, Q7B GenerateByteOrderMark);
Q7B Q7B_FILE_READLINES(Q7B dummy, Q7B FileName, Q7B Codec, Q7B AutoDetectUnicode, Q7B GenerateByteOrderMark);
Q7B Q7B_FILE_WRITESTRING(Q7B dummy, Q7B Text, Q7B FileName, Q7B Append, Q7B Codec, Q7B AutoDetectUnicode, Q7B GenerateByteOrderMark);
Q7B Q7B_FILE_LINK(Q7B dummy, Q7B SourceFileName, Q7B DestinationFileName);
Q7B Q7B_FILE_CREATE(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_REMOVE(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_COPY(Q7B dummy, Q7B SourceFileName, Q7B DestinationFileName, Q7B Overwrite);
Q7B Q7B_FILE_MOVE(Q7B dummy, Q7B SourceFileName, Q7B DestinationFileName, Q7B Overwrite);
Q7B Q7B_FILE_RENAME(Q7B dummy, Q7B SourceFileName, Q7B DestinationFileName, Q7B Overwrite);
Q7B Q7B_FILE_EXISTS(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_DATETIMECREATED(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_DATETIMEUPDATED(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_DATETIMEREAD(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_WITHNATIVESEPARATORS(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_WITHOUTNATIVESEPARATORS(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_OWNER(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_GROUP(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_SYMLINKTARGET(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_ISRELATIVE(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_ISSYMLINK(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_ISREADABLE(Q7B dummy, Q7B FileName, Q7B Who);
Q7B Q7B_FILE_ISWRITABLE(Q7B dummy, Q7B FileName, Q7B Who);
Q7B Q7B_FILE_ISEXECUTABLE(Q7B dummy, Q7B FileName, Q7B Who);
Q7B Q7B_FILE_ISHIDDEN(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_ISFILE(Q7B dummy, Q7B FileName);
Q7B Q7B_FILE_ISDIR(Q7B dummy, Q7B FileName);

// *** CMATH ***********************************************************************************

Q7B Q7B_CMATH_SIN(Q7B dummy, Q7B v);
Q7B Q7B_CMATH_COS(Q7B dummy, Q7B v);
Q7B Q7B_CMATH_TAN(Q7B dummy, Q7B v);
Q7B Q7B_CMATH_ASIN(Q7B dummy, Q7B v);
Q7B Q7B_CMATH_ACOS(Q7B dummy, Q7B v);
Q7B Q7B_CMATH_ATAN(Q7B dummy, Q7B v);
Q7B Q7B_CMATH_ATAN2(Q7B dummy, Q7B v, Q7B v2);
Q7B Q7B_CMATH_SINH(Q7B dummy, Q7B v);
Q7B Q7B_CMATH_COSH(Q7B dummy, Q7B v);
Q7B Q7B_CMATH_TANH(Q7B dummy, Q7B v);
Q7B Q7B_CMATH_EXP(Q7B dummy, Q7B v);
Q7B Q7B_CMATH_LOG(Q7B dummy, Q7B v);
Q7B Q7B_CMATH_LOG10(Q7B dummy, Q7B v);
Q7B Q7B_CMATH_SQRT(Q7B dummy, Q7B v);
Q7B Q7B_CMATH_CEIL(Q7B dummy, Q7B v);
Q7B Q7B_CMATH_FLOOR(Q7B dummy, Q7B v);
Q7B Q7B_CMATH_FABS(Q7B dummy, Q7B v);
Q7B Q7B_CMATH_FMOD(Q7B dummy, Q7B v, Q7B v2);
Q7B Q7B_CMATH_POW(Q7B dummy, Q7B v, Q7B v2);

// *** PREFERENCES ***********************************************************************************

Q7B Q7B_PREFERENCES_IDS(Q7B dummy);
void Q7B_PREFERENCES_REMOVEALL(Q7B dummy);
Q7B Q7B_PREFERENCES_EXISTS(Q7B dummy, Q7B PreferenceId);
void Q7B_PREFERENCES_REMOVE(Q7B dummy, Q7B PreferenceId);
Q7B Q7B_PREFERENCES_BOOLEAN(Q7B dummy, Q7B PreferenceId);
Q7B Q7B_PREFERENCES_INTEGER(Q7B dummy, Q7B PreferenceId);
Q7B Q7B_PREFERENCES_STRING(Q7B dummy, Q7B PreferenceId);
Q7B Q7B_PREFERENCES_QSTRINGLIST(Q7B dummy, Q7B PreferenceId);
Q7B Q7B_PREFERENCES_FLOAT(Q7B dummy, Q7B PreferenceId);
Q7B Q7B_PREFERENCES_DECIMAL(Q7B dummy, Q7B PreferenceId);
Q7B Q7B_PREFERENCES_QBYTEARRAY(Q7B dummy, Q7B PreferenceId);
void Q7B_PREFERENCES_SETBOOLEAN(Q7B dummy, Q7B PreferenceId, Q7B Value);
void Q7B_PREFERENCES_SETINTEGER(Q7B dummy, Q7B PreferenceId, Q7B Value);
void Q7B_PREFERENCES_SETSTRING(Q7B dummy, Q7B PreferenceId, Q7B Value);
void Q7B_PREFERENCES_SETQSTRINGLIST(Q7B dummy, Q7B PreferenceId, Q7B Value);
void Q7B_PREFERENCES_SETFLOAT(Q7B dummy, Q7B PreferenceId, Q7B Value);
void Q7B_PREFERENCES_SETDECIMAL(Q7B dummy, Q7B PreferenceId, Q7B Value);
void Q7B_PREFERENCES_SETQBYTEARRAY(Q7B dummy, Q7B PreferenceId, Q7B Value);


// *** DESKTOP ***********************************************************************************

Q7B Q7B_DESKTOP_DESKTOPLOCATION(Q7B dummy);

// *** DIR ***********************************************************************************

bool Q7B_RemoveDirectory(QDir aDir);
QStringList Q7B_FindFile(QString Path, QStringList NameFilter, qint64 Filter, qint64 Sorting, bool bRecursive, bool bRecursiveCall, bool bbb);

Q7B Q7B_DIR_ROOTPATH(Q7B Path);
Q7B Q7B_DIR_TEMPPATH(Q7B Path);
Q7B Q7B_DIR_APPLICATIONSPATH(Q7B dummy);
Q7B Q7B_DIR_HOMEPATH(Q7B dummy);
Q7B Q7B_DIR_DESKTOPPATH(Q7B dummy);
Q7B Q7B_DIR_CREATE(Q7B dummy, Q7B Path);
Q7B Q7B_DIR_RECURSIVECREATE(Q7B dummy, Q7B Path);
Q7B Q7B_DIR_REMOVE(Q7B dummy, Q7B Path);
Q7B Q7B_DIR_EXISTS(Q7B dummy, Q7B Path);
Q7B Q7B_DIR_RECURSIVEREMOVE(Q7B dummy, Q7B Path);
Q7B Q7B_DIR_FINDFILE(Q7B dummy, Q7B Path, Q7B NameFilter, Q7B Filter, Q7B Sorting);
Q7B Q7B_DIR_RECURSIVEFINDFILE(Q7B dummy, Q7B Path, Q7B NameFilter, Q7B Filter, Q7B Sorting);
Q7B Q7B_DIR_LIST(Q7B dummy, Q7B Path);
Q7B Q7B_DIR_RECURSIVELIST(Q7B dummy, Q7B Path);
Q7B Q7B_DIR_COPY(Q7B SourceFilePath, Q7B DestinationFilePath);
Q7B Q7B_DIR_MOVE(Q7B SourceFilePath, Q7B DestinationFilePath);
Q7B Q7B_DIR_ISDIR(Q7B FilePath);
Q7B Q7B_DIR_DATETIMECREATED(Q7B dummy, Q7B FileName);
Q7B Q7B_DIR_DATETIMEUPDATED(Q7B dummy, Q7B FileName);
Q7B Q7B_DIR_DATETIMEREAD(Q7B dummy, Q7B FileName);
Q7B Q7B_DIR_WITHNATIVESEPARATORS(Q7B dummy, Q7B FileName);
Q7B Q7B_DIR_WITHOUTNATIVESEPARATORS(Q7B dummy, Q7B FileName);
Q7B Q7B_DIR_OWNER(Q7B dummy, Q7B FileName);
Q7B Q7B_DIR_GROUP(Q7B dummy, Q7B FileName);
Q7B Q7B_DIR_SYMLINKTARGET(Q7B dummy, Q7B FileName);
Q7B Q7B_DIR_ISRELATIVE(Q7B dummy, Q7B FileName);
Q7B Q7B_DIR_ISSYMLINK(Q7B dummy, Q7B FileName);
Q7B Q7B_DIR_ISREADABLE(Q7B dummy, Q7B FileName, Q7B Who);
Q7B Q7B_DIR_ISWRITABLE(Q7B dummy, Q7B FileName, Q7B Who);
Q7B Q7B_DIR_ISEXECUTABLE(Q7B dummy, Q7B FileName, Q7B Who);
Q7B Q7B_DIR_ISHIDDEN(Q7B dummy, Q7B FileName);
Q7B Q7B_DIR_DRIVES();
Q7B Q7B_DIR_BUNDLENAME(Q7B dummy, Q7B FileName);
Q7B Q7B_DIR_ISROOT(Q7B dummy, Q7B FileName);
Q7B Q7B_DIR_ISBUNDLE(Q7B dummy, Q7B FileName);

// *** OPENFILEDIALOG ***********************************************************************************

Q7B Q7B_OPENFILEDIALOG_GETFILE(Q7B dummy);
Q7B Q7B_OPENFILEDIALOG_GETFILE2(Q7B dummy, Q7B WindowTitle, Q7B Directory, Q7B Filter);
Q7B Q7B_OPEFILENDIALOG_GETFILES(Q7B dummy);
Q7B Q7B_OPENFILEDIALOG_GETFILES2(Q7B dummy, Q7B WindowTitle, Q7B Directory, Q7B Filter);
Q7B Q7B_OPENFILEDIALOG_GETDIRECTORY(Q7B dummy);
Q7B Q7B_OPENFILEDIALOG_GETDIRECTORY2(Q7B dummy, Q7B WindowTitle, Q7B Directory);

// *** SAVEFILEDIALOG ***********************************************************************************

Q7B Q7B_SAVEFILEDIALOG_GETFILE(Q7B dummy);
Q7B Q7B_SAVEFILEDIALOG_GETFILE2(Q7B dummy, Q7B WindowTitle, Q7B Directory, Q7B Filter);
Q7B Q7B_SAVEFILEDIALOG_GETDIRECTORY(Q7B dummy);
Q7B Q7B_SAVEFILEDIALOG_GETDIRECTORY2(Q7B dummy, Q7B WindowTitle, Q7B Directory);

// *** COLORDIALOG ***********************************************************************************

Q7B Q7B_COLORDIALOG_GETCOLOR(Q7B dummy);
Q7B Q7B_COLORDIALOG_RED(Q7B dummy);
Q7B Q7B_COLORDIALOG_GREEN(Q7B dummy);
Q7B Q7B_COLORDIALOG_BLUE(Q7B dummy);
Q7B Q7B_COLORDIALOG_ALPHA(Q7B dummy);
Q7B Q7B_COLORDIALOG_GETCOLOR2(Q7B dummy, Q7B Red, Q7B Green, Q7B Blue, Q7B Alpha);

// *** FONTDIALOG ***********************************************************************************

Q7B Q7B_FONTDIALOG_GETFONT(Q7B dummy);
Q7B Q7B_FONTDIALOG_NAME(Q7B dummy);
Q7B Q7B_FONTDIALOG_SIZE(Q7B dummy);
Q7B Q7B_FONTDIALOG_ITALIC(Q7B dummy);
Q7B Q7B_FONTDIALOG_BOLD(Q7B dummy);
Q7B Q7B_FONTDIALOG_UNDERLINE(Q7B dummy);
Q7B Q7B_FONTDIALOG_GETFONT2(Q7B dummy, Q7B Name, Q7B Size, Q7B Italic, Q7B Bold, Q7B Underline);

// *** PROGRESSDIALOG ***********************************************************************************

void Q7B_PROGRESSDIALOG_SHOW(Q7B dummy);
void Q7B_PROGRESSDIALOG_HIDE(Q7B dummy);
void Q7B_PROGRESSDIALOG_SHOW2(Q7B dummy, Q7B WindowTitle, Q7B CancelText);
Q7B Q7B_PROGRESSDIALOG_CANCELED(Q7B dummy);
void Q7B_PROGRESSDIALOG_WINDOWTITLE(Q7B dummy, Q7B _WindowTitle);
Q7B Q7B_PROGRESSDIALOG_WINDOWTITLE(Q7B dummy);
void Q7B_PROGRESSDIALOG_CANCELTEXT(Q7B dummy, Q7B _CancelText);
Q7B Q7B_PROGRESSDIALOG_CANCELTEXT(Q7B dummy);
void Q7B_PROGRESSDIALOG_VALUE(Q7B dummy, Q7B _Value);
Q7B Q7B_PROGRESSDIALOG_VALUE(Q7B dummy);
void Q7B_PROGRESSDIALOG_MINIMUM(Q7B dummy, Q7B _Minimum);
Q7B Q7B_PROGRESSDIALOG_MINIMUM(Q7B dummy);
void Q7B_PROGRESSDIALOG_MAXIMUM(Q7B dummy, Q7B _Maximum);
Q7B Q7B_PROGRESSDIALOG_MAXIMUM(Q7B dummy);
void Q7B_PROGRESSDIALOG_WAIT(Q7B dummy, Q7B _Wait);
Q7B Q7B_PROGRESSDIALOG_WAIT(Q7B dummy);

// *** INPUTDIALOG ***********************************************************************************

Q7B Q7B_INPUTDIALOG_GETFLOAT(Q7B dummy, Q7B WindowTitle, Q7B Text, Q7B Value, Q7B Minimum, Q7B Maximum, Q7B Decimals);
Q7B Q7B_INPUTDIALOG_GETINTEGER(Q7B dummy, Q7B WindowTitle, Q7B Text, Q7B Value, Q7B Minimum, Q7B Maximum, Q7B Step);
Q7B Q7B_INPUTDIALOG_GETSTRING(Q7B dummy, Q7B WindowTitle, Q7B Text, Q7B Value, Q7B EchoMode);
Q7B Q7B_INPUTDIALOG_OK(Q7B dummy);

// *** DATABASE ***********************************************************************************

Q7B Q7B_DATABASE_MYSQL(Q7B dummy);
Q7B Q7B_DATABASE_POSTGRESQL(Q7B dummy);
Q7B Q7B_DATABASE_SQLITE(Q7B dummy);
Q7B Q7B_DATABASE_LOCALHOST(Q7B dummy);
Q7B Q7B_DATABASE_DEFAULTPORT(Q7B dummy);
Q7B Q7B_DATABASE_DEFAULTOPTIONS(Q7B dummy);
Q7B Q7B_DATABASE_SETCURRENTDATABASE(Q7B dummy, Q7B Name);
Q7B Q7B_DATABASE_SETCURRENTDATABASE(Q7B dummy);
Q7B Q7B_DATABASE_EXISTS(Q7B dummy, Q7B Driver, Q7B Name, Q7B User, Q7B Password, Q7B Host, Q7B Options, Q7B Port);
Q7B Q7B_DATABASE_CREATE(Q7B dummy, Q7B Driver, Q7B Name, Q7B User, Q7B Password, Q7B Host, Q7B Options, Q7B Port);
Q7B Q7B_DATABASE_TESTCONNECTION(Q7B dummy, Q7B Driver, Q7B User, Q7B Password, Q7B Host, Q7B Options, Q7B Port);
Q7B Q7B_DATABASE_EMPTY(Q7B dummy, Q7B Driver, Q7B Name, Q7B User, Q7B Password, Q7B Host, Q7B Options, Q7B Port);
Q7B Q7B_DATABASE_DROP(Q7B dummy, Q7B Driver, Q7B Name, Q7B User, Q7B Password, Q7B Host, Q7B Options, Q7B Port);
Q7B Q7B_DATABASE_OPENSQLITE(Q7B dummy, Q7B Name);
Q7B Q7B_DATABASE_OPEN(Q7B dummy, Q7B Driver, Q7B Name, Q7B User, Q7B Password, Q7B Host, Q7B Options, Q7B Port);
Q7B Q7B_DATABASE_CLOSE(Q7B dummy, Q7B Name);
Q7B Q7B_DATABASE_ISOPEN(Q7B dummy, Q7B Name);
Q7B Q7B_DATABASE_LASTSQLERROR(Q7B dummy, Q7B Name);
Q7B Q7B_DATABASE_LASTSQLCOMMANDS(Q7B dummy, Q7B Name);
Q7B Q7B_DATABASE_LASTSQLCOMMANDFAILED(Q7B dummy, Q7B Name);
Q7B Q7B_DATABASE_ISTRANSACTIONSUPPORTED(Q7B dummy, Q7B Name);
Q7B Q7B_DATABASE_TRANSACTION(Q7B dummy, Q7B Name);
Q7B Q7B_DATABASE_COMMIT(Q7B dummy, Q7B Name);
Q7B Q7B_DATABASE_ROLLBACK(Q7B dummy, Q7B Name);
Q7B Q7B_DATABASE_TABLES(Q7B dummy, Q7B Name);
Q7B Q7B_DATABASE_DRIVERS(Q7B dummy);

// *** TABLE ***********************************************************************************

Q7B Q7B_TABLE_EXISTS(Q7B dummy, Q7B Table);
Q7B Q7B_TABLE_EXISTS2(Q7B dummy, Q7B Database, Q7B Table);
Q7B Q7B_TABLE_CREATE(Q7B dummy, Q7B Table, Q7B Fields);
Q7B Q7B_TABLE_CREATE2(Q7B dummy, Q7B Database, Q7B Table, Q7B Fields);
Q7B Q7B_TABLE_EMPTY(Q7B dummy, Q7B Table);
Q7B Q7B_TABLE_EMPTY2(Q7B dummy, Q7B Database, Q7B Table);
Q7B Q7B_TABLE_DROP(Q7B dummy, Q7B Table);
Q7B Q7B_TABLE_DROP2(Q7B dummy, Q7B Database, Q7B Table);
Q7B Q7B_TABLE_DELETE(Q7B dummy, Q7B Table, Q7B Where);
Q7B Q7B_TABLE_DELETE2(Q7B dummy, Q7B Database, Q7B Table, Q7B Where);
Q7B Q7B_TABLE_UPDATE(Q7B dummy, Q7B Table, Q7B Update, Q7B Where);
Q7B Q7B_TABLE_UPDATE2(Q7B dummy, Q7B Database, Q7B Table, Q7B Update, Q7B Where);
Q7B Q7B_TABLE_INSERT(Q7B dummy, Q7B Table, Q7B Insert);
Q7B Q7B_TABLE_INSERT2(Q7B dummy, Q7B Database, Q7B Table, Q7B Insert);
Q7B Q7B_TABLE_FIELDNAMES(Q7B dummy, Q7B Table);
Q7B Q7B_TABLE_FIELDNAMES2(Q7B dummy, Q7B Database, Q7B Table);
Q7B Q7B_TABLE_PRIMARYKEYNAME(Q7B dummy, Q7B Table);
Q7B Q7B_TABLE_PRIMARYKEYNAME2(Q7B dummy, Q7B Database, Q7B Table);

// *** RECORDS ***********************************************************************************

Q7B Q7B_RECORDS_OPEN(Q7B dummy, Q7B TableOrSql);
Q7B Q7B_RECORDS_OPEN2(Q7B dummy, Q7B Database, Q7B TableOrSql);
Q7B Q7B_RECORDS_OPEN3(Q7B dummy, Q7B TableOrSql, Q7B Where);
Q7B Q7B_RECORDS_OPEN4(Q7B dummy, Q7B Database, Q7B TableOrSql, Q7B Where);
Q7B Q7B_RECORDS_OPEN5(Q7B dummy, Q7B Table, Q7B Where, Q7B OrderBy);
Q7B Q7B_RECORDS_OPEN6(Q7B dummy, Q7B Database, Q7B Table, Q7B Where, Q7B OrderBy);
Q7B Q7B_RECORDS_CLOSE(Q7B dummy, Q7B RecordsId);
Q7B Q7B_RECORDS_REQUERY(Q7B dummy, Q7B RecordsId);
Q7B Q7B_RECORDS_FIRST(Q7B dummy, Q7B RecordsId);
Q7B Q7B_RECORDS_NEXT(Q7B dummy, Q7B RecordsId);
Q7B Q7B_RECORDS_PREVIOUS(Q7B dummy, Q7B RecordsId);
Q7B Q7B_RECORDS_LAST(Q7B dummy, Q7B RecordsId);
Q7B Q7B_RECORDS_GOTO(Q7B dummy, Q7B RecordsId, Q7B Position);
Q7B Q7B_RECORDS_LENGTH(Q7B dummy, Q7B RecordsId);
Q7B Q7B_RECORDS_POSITION(Q7B dummy, Q7B RecordsId);
Q7B Q7B_RECORDS_FIELDNAMES(Q7B dummy, Q7B RecordsId);
Q7B Q7B_RECORDS_VALUE(Q7B dummy, Q7B RecordsId, Q7B Field);

// *** QUERY ***********************************************************************************

Q7B Q7B_QUERY_RUN(Q7B dummy, Q7B QueryNameOrSql);
Q7B Q7B_QUERY_RUN2(Q7B dummy, Q7B Database, Q7B QueryNameOrSql);
Q7B Q7B_QUERY_COMMAND(Q7B dummy, Q7B Command);
Q7B Q7B_QUERY_COMMAND2(Q7B dummy, Q7B Database, Q7B Command);

// *** MESSAGEBOX ***********************************************************************************

Q7B Q7B_MESSAGEBOX_CRITICAL(Q7B dummy, Q7B WindowTitle, Q7B Text, Q7B Buttons, Q7B DefaultButton);
Q7B Q7B_MESSAGEBOX_INFORMATION(Q7B dummy, Q7B WindowTitle, Q7B Text, Q7B Buttons, Q7B DefaultButton);
Q7B Q7B_MESSAGEBOX_QUESTION(Q7B dummy, Q7B WindowTitle, Q7B Text, Q7B Buttons, Q7B DefaultButton);
Q7B Q7B_MESSAGEBOX_WARNING(Q7B dummy, Q7B WindowTitle, Q7B Text, Q7B Buttons, Q7B DefaultButton);

// *** SYSTEMTRAYICON ***********************************************************************************

void Q7B_SYSTEMTRAYICON_CONTEXTMENU(Q7B qsystemtray, Q7B v);
Q7B Q7B_SYSTEMTRAYICON_CONTEXTMENU(Q7B qsystemtray);
void Q7B_SYSTEMTRAYICON_ICON(Q7B qsystemtray, Q7B v);
Q7B Q7B_SYSTEMTRAICONY_ICON(Q7B qsystemtray);
void Q7B_SYSTEMTRAYICON_TOOLTIP(Q7B qsystemtray, Q7B v);
Q7B Q7B_SYSTEMTRAYICON_TOOLTIP(Q7B qsystemtray);
void Q7B_SYSTEMTRAYICON_VISIBLE(Q7B qsystemtray, Q7B v);
Q7B Q7B_SYSTEMTRAYICON_VISIBLE(Q7B qsystemtray);
Q7B Q7B_SYSTEMTRAYICON_ISSYSTEMTRAYAVAILABLE(Q7B qsystemtray);
Q7B Q7B_SYSTEMTRAYICON_ISMESSAGEBOXSUPPORTED(Q7B qsystemtray);
void Q7B_SYSTEMTRAICONY_SHOW(Q7B qsystemtray);
void Q7B_SYSTEMTRAYICON_HIDE(Q7B qsystemtray);
void Q7B_SYSTEMTRAYICON_SHOWORHIDE(Q7B qsystemtray);
void Q7B_SYSTEMTRAYICON_MESSAGEBOX(Q7B qsystemtray, Q7B Text);
void Q7B_SYSTEMTRAYICON_MESSAGEBOX2(Q7B qsystemtray, Q7B Title, Q7B Text);
void Q7B_SYSTEMTRAYICON_MESSAGEBOX3(Q7B qsystemtray, Q7B Title, Q7B Text, Q7B MessageBoxIcon);
void Q7B_SYSTEMTRAYICON_MESSAGEBOX4(Q7B qsystemtray, Q7B Title, Q7B Text, Q7B MessageBoxIcon, Q7B TimeOut);

// *** TOOLBAR ***********************************************************************************

QToolBar *Q7B_getDefaultToolBar();

void Q7B_TOOLBAR_ADDPERMANENTWIDGET(Q7B qstatusbar, Q7B Widget, Q7B Action);

// *** SOUNDS ***********************************************************************************

Q7B Q7B_SOUNDS_PLAY(Q7B dummy, Q7B SoundId);
Q7B Q7B_SOUNDS_LOAD(Q7B dummy, Q7B SoundId, Q7B FileName);

// *** PIXMAPS ***********************************************************************************

Q7B Q7B_PIXMAPS_LOAD(Q7B dummy, Q7B PixmapId, Q7B FileName);

// *** COLORS ***********************************************************************************

Q7B Q7B_COLORS_SET(Q7B dummy, Q7B ColorId, Q7B R, Q7B G, Q7B B, Q7B A);

// *** FONTS ***********************************************************************************

Q7B Q7B_FONTS_SET(Q7B dummy, Q7B ColorId, Q7B R, Q7B G, Q7B B, Q7B A);

// *** STATUSBAR ***********************************************************************************

void Q7B_STATUSBAR_CLEARMESSAGE(Q7B qstatusbar);
void Q7B_STATUSBAR_SHOWMESSAGE(Q7B qstatusbar, Q7B Message);
void Q7B_STATUSBAR_SHOWMESSAGE(Q7B qstatusbar, Q7B Message, Q7B TimeOutInMilliSeconds);
void Q7B_STATUSBAR_ADDPERMANENTWIDGET(Q7B qstatusbar, Q7B Widget);

// *** APPLICATION ***********************************************************************************

void Q7B_APPLICATION_PATH(Q7B qapplication, Q7B v);
Q7B Q7B_APPLICATION_PATH(Q7B qapplication);
void Q7B_APPLICATION_FILENAME(Q7B qapplication, Q7B v);
Q7B Q7B_APPLICATION_FILENAME(Q7B qapplication);
void Q7B_APPLICATION_PID(Q7B qapplication, Q7B v);
Q7B Q7B_APPLICATION_PID(Q7B qapplication);
void Q7B_APPLICATION_ARGUMENTS(Q7B qapplication, Q7B v);
Q7B Q7B_APPLICATION_ARGUMENTS(Q7B qapplication);
void Q7B_APPLICATION_APPLICATIONNAME(Q7B qapplication, Q7B v);
Q7B Q7B_APPLICATION_APPLICATIONNAME(Q7B qapplication);
void Q7B_APPLICATION_APPLICATIONVERSION(Q7B qapplication, Q7B v);
Q7B Q7B_APPLICATION_APPLICATIONVERSION(Q7B qapplication);
void Q7B_APPLICATION_ORGANIZATIONDOMAIN(Q7B qapplication, Q7B v);
Q7B Q7B_APPLICATION_ORGANIZATIONDOMAIN(Q7B qapplication);
void Q7B_APPLICATION_ORGANIZATIONNAME(Q7B qapplication, Q7B v);
Q7B Q7B_APPLICATION_ORGANIZATIONNAME(Q7B qapplication);
void Q7B_APPLICATION_QUIT(Q7B qapplication);
void Q7B_APPLICATION_CURSORSETWAIT(Q7B qapplication);
void Q7B_APPLICATION_CURSORUNSETWAIT(Q7B qapplication);
Q7B Q7B_APPLICATION_CLIPBOARDTEXT(Q7B qapplication);
Q7B Q7B_APPLICATION_QTVERSION(Q7B qapplication);
Q7B Q7B_APPLICATION_OPERATINGSYSTEMNAME(Q7B qapplication);
void Q7B_APPLICATION_SETDEFAULTWINDOWICON(Q7B qapplication, Q7B Icon);
void Q7B_APPLICATION_CLOSEALLWINDOWS(Q7B qapplication);
Q7B Q7B_APPLICATION_ISRIGHTTOLEFTLAYOUTDIRECTION(Q7B qapplication);
Q7B Q7B_APPLICATION_FOCUSWINDOW(Q7B qapplication);
Q7B Q7B_APPLICATION_FOCUS(Q7B qapplication);
Q7B Q7B_APPLICATION_AVAILABLEMIMETYPES(Q7B qapplication);
Q7B Q7B_APPLICATION_AVAILABLELANGUAGES(Q7B qapplication);
void Q7B_APPLICATION_ABOUTQT(Q7B qapplication);
void Q7B_APPLICATION_SETQUITONLASTWINDOWCLOSED(Q7B qapplication, Q7B Quit);
void Q7B_APPLICATION_SETSTYLE(Q7B qapplication, Q7B Quit);
void Q7B_APPLICATION_SETSTYLESHEET(Q7B qapplication, Q7B Quit);
void Q7B_APPLICATION_SETRIGHTTOLEFTLAYOUTDIRECTION(Q7B qapplication, Q7B Quit);
Q7B Q7B_APPLICATION_LOADPROJECTFILEASSTRING(Q7B qapplication, Q7B FileName);
Q7B Q7B_APPLICATION_LOADPROJECTFILEASDATA(Q7B qapplication, Q7B FileName);
Q7B Q7B_APPLICATION_LOADURLASSTRING(Q7B qapplication, Q7B FileName);
Q7B Q7B_APPLICATION_LOADURLASDATA(Q7B qapplication, Q7B FileName);
void Q7B_APPLICATION_SETCLIPBOARDTEXT(Q7B qapplication, Q7B Text);
Q7B Q7B_APPLICATION_ISMIMETYPEAVAILABLE(Q7B qapplication, Q7B MimeTyp);
void Q7B_APPLICATION_SETLANGUAGE(Q7B qapplication, Q7B Language);
void Q7B_APPLICATION_SETCOUNTRY(Q7B qapplication, Q7B Language);
Q7B Q7B_APPLICATION_TAKESCREENSHOT(Q7B qapplication);
Q7B Q7B_APPLICATION_STANDARDOPERATINGSYSTEMICON(Q7B qapplication);
Q7B Q7B_APPLICATION_AVAILABLEFONTNAMES(Q7B qapplication);
void Q7B_APPLICATION_PRINTHTML(Q7B qapplication, Q7B Html);
void Q7B_APPLICATION_WRITEHTMLASPDF(Q7B qapplication, Q7B Html, Q7B PDFFilePath);
Q7B Q7B_APPLICATION_DOWNLOADURLASFILE(Q7B qapplication, Q7B URL, Q7B DestinationPath);
void Q7B_APPLICATION_ALERT(Q7B qapplication, Q7B Widget, Q7B MSec);
Q7B Q7B_APPLICATION_WIDGETAT(Q7B qapplication, Q7B X, Q7B Y);

// *** QBUTTONGROUP ***********************************************************************************

Q7B Q7B_QBUTTONGROUP_INIT(QObject *parent, const char *objectName);
void Q7B_QBUTTONGROUP_EXCLUSIVE(Q7B qbuttongroup, Q7B v);
Q7B Q7B_QBUTTONGROUP_EXCLUSIVE(Q7B qbuttongroup);
void Q7B_QBUTTONGROUP_ADDBUTTON(Q7B qbuttongroup, Q7B v);

// *** QABSTRACTBUTTON ***********************************************************************************

void Q7B_QABSTRACTBUTTON_TEXT(Q7B qabstractbutton, Q7B v);
Q7B Q7B_QABSTRACTBUTTON_TEXT(Q7B qabstractbutton);
void Q7B_COMMANDBUTTON_CAPTION(Q7B qabstractbutton, Q7B v);
Q7B Q7B_COMMANDBUTTON_CAPTION(Q7B qabstractbutton);
void Q7B_QABSTRACTBUTTON_ICON(Q7B qabstractbutton, Q7B v);
Q7B Q7B_QABSTRACTBUTTON_ICON(Q7B qabstractbutton);
void Q7B_QABSTRACTBUTTON_CHECKED(Q7B qabstractbutton, Q7B v);
Q7B Q7B_QABSTRACTBUTTON_CHECKED(Q7B qabstractbutton);
void Q7B_QABSTRACTBUTTON_CHECKABLE(Q7B qabstractbutton, Q7B v);
Q7B Q7B_QABSTRACTBUTTON_CHECKABLE(Q7B qabstractbutton);
void Q7B_QABSTRACTBUTTON_KEY(Q7B qabstractbutton, Q7B v);
Q7B Q7B_QABSTRACTBUTTON_KEY(Q7B qabstractbutton);

// *** QDECLARATIVEVIEW ***********************************************************************************

Q7B Q7B_QDECLARATIVEVIEW_INIT(QObject *parent, const char *objectName);

// *** QDIAL ***********************************************************************************

Q7B Q7B_QDIAL_INIT(QObject *parent, const char *objectName);

// *** QFONTCOMBOBOX ***********************************************************************************

Q7B Q7B_QFONTCOMBOBOX_INIT(QObject *parent, const char *objectName);

// *** QFRAME ***********************************************************************************

Q7B Q7B_QFRAME_INIT(QObject *parent, const char *objectName);

// *** QTOOLBOX ***********************************************************************************

Q7B Q7B_QTOOLBOX_INIT(QObject *parent, const char *objectName);

// *** QSCROLLAREA ***********************************************************************************

Q7B Q7B_QSCROLLAREA_INIT(QObject *parent, const char *objectName);

// *** QGROUPBOX ***********************************************************************************

Q7B Q7B_QGROUPBOX_INIT(QObject *parent, const char *objectName);
void Q7B_QGROUPBOX_TEXT(Q7B qgroupbox, Q7B v);
Q7B Q7B_QGROUPBOX_TEXT(Q7B qgroupbox);
void Q7B_QGROUPBOX_CAPTION(Q7B qgroupbox, Q7B v);
Q7B Q7B_QGROUPBOX_CAPTION(Q7B qgroupbox);

// *** QLCDNUMBER ***********************************************************************************

Q7B Q7B_QLCDNUMBER_INIT(QObject *parent, const char *objectName);

// *** QCALENDARWIDGET ***********************************************************************************

Q7B Q7B_QCALENDARWIDGET_INIT(QObject *parent, const char *objectName);

// *** QGRAPHICSVIEW ***********************************************************************************

Q7B Q7B_QGRAPHICSVIEW_INIT(QObject *parent, const char *objectName);

// *** QTABLEWIDGET ***********************************************************************************

Q7B Q7B_QTABLEWIDGET_INIT(QObject *parent, const char *objectName);
void Q7B_QTABLEWIDGET_CLEARCONTENTS(Q7B qtablewidget);
void Q7B_QTABLEWIDGET_SETHORIZONTALHEADERAUTORESIZE(Q7B qtablewidget);
void Q7B_QTABLEWIDGET_ROWCOUNT(Q7B qtablewidget, Q7B v);
Q7B Q7B_QTABLEWIDGET_ROWCOUNT(Q7B qtablewidget);
void Q7B_QTABLEWIDGET_COLUMNCOUNT(Q7B qtablewidget, Q7B v);
Q7B Q7B_QTABLEWIDGET_COLUMNCOUNT(Q7B qtablewidget);
Q7B Q7B_QTABLEWIDGET_CURRENTROW(Q7B qtablewidget);
void Q7B_QTABLEWIDGET_SORTITEMS(Q7B qtablewidget, Q7B Column);
void Q7B_QTABLEWIDGET_REMOVEROW(Q7B qtablewidget, Q7B Row);
Q7B Q7B_QTABLEWIDGET_ITEMTEXT(Q7B qtablewidget, Q7B Row, Q7B Column);
void Q7B_QTABLEWIDGET_SETCURRENTCELL(Q7B qtablewidget, Q7B Row, Q7B Column);
void Q7B_QTABLEWIDGET_SETITEMFONTBOLD(Q7B qtablewidget, Q7B Row, Q7B Column, Q7B Yes);
void Q7B_QTABLEWIDGET_SETITEMTEXT(Q7B qtablewidget, Q7B Row, Q7B Column, Q7B Text);
void Q7B_QTABLEWIDGET_SETITEMSTEXT(Q7B qtablewidget, Q7B Row, Q7B Column, Q7B aList);
Q7B Q7B_QTABLEWIDGET_ITEMSELECTED(Q7B qtablewidget, Q7B Row, Q7B Column);
void Q7B_QTABLEWIDGET_SETITEMSELECTED(Q7B qtablewidget, Q7B Row, Q7B Column, Q7B Yes);
Q7B Q7B_QTABLEWIDGET_FINDITEMINCOLUMN(Q7B qtablewidget, Q7B Text, Q7B Column, Q7B StartRow, Q7B MatchFlags);
Q7B Q7B_QTABLEWIDGET_FINDITEMINROW(Q7B qtablewidget, Q7B Text, Q7B Row, Q7B StartColumn, Q7B MatchFlags);
Q7B Q7B_QTABLEWIDGET_ITEMCHECKSTATE(Q7B qtablewidget, Q7B Row, Q7B Column);
void Q7B_QTABLEWIDGET_SETITEMCHECKSTATE(Q7B qtablewidget, Q7B Row, Q7B Column, Q7B CheckState);
void Q7B_QTABLEWIDGET_SETITEMFLAGS(Q7B qtablewidget, Q7B Row, Q7B Column, Q7B Flags);

// *** QCOLUMNVIEW ***********************************************************************************

Q7B Q7B_QCOLUMNVIEW_INIT(QObject *parent, const char *objectName);

// *** QTABLEVIEW ***********************************************************************************

Q7B Q7B_QTABLEVIEW_INIT(QObject *parent, const char *objectName);
void Q7B_QTABLEVIEW_SETCOLUMNWIDTH(Q7B qtableview, Q7B Column, Q7B Width);

// *** QTREEVIEW ***********************************************************************************

Q7B Q7B_QTREEVIEW_INIT(QObject *parent, const char *objectName);

// *** QLISTVIEW ***********************************************************************************

Q7B Q7B_QLISTVIEW_INIT(QObject *parent, const char *objectName);

// *** QDIALOGBUTTONBOX ***********************************************************************************

Q7B Q7B_QDIALOGBUTTONBOX_INIT(QObject *parent, const char *objectName);

// *** QVBOXLAYOUT ***********************************************************************************

Q7B Q7B_QVBOXLAYOUT_INIT(QObject *parent, const char *objectName);

// *** QHBOXLAYOUT ***********************************************************************************

Q7B Q7B_QHBOXLAYOUT_INIT(QObject *parent, const char *objectName);

// *** QGRIDLAYOUT ***********************************************************************************

Q7B Q7B_QGRIDLAYOUT_INIT(QObject *parent, const char *objectName);

// *** QFORMLAYOUT ***********************************************************************************

Q7B Q7B_QFORMLAYOUT_INIT(QObject *parent, const char *objectName);

// *** QWEBVIEW ***********************************************************************************

Q7B Q7B_QWEBVIEW_INIT(QObject *parent, const char *objectName);
void Q7B_QWEBVIEW_LOAD(Q7B qwebview, Q7B URL);
void Q7B_QWEBVIEW_SETHTML(Q7B qwebview, Q7B URL);

// *** QDIALOG ***********************************************************************************

Q7B Q7B_QDIALOG_INIT(QObject *parent, const char *objectName);
void Q7B_QDIALOG_ACCEPT(Q7B qdialog);
void Q7B_QDIALOG_REJECT(Q7B qdialog);

// *** QTOOLBOX ***********************************************************************************

void Q7B_QTOOLBOX_CURRENTINDEX(Q7B qtoolbox, Q7B v);
Q7B Q7B_QTOOLBOX_CURRENTINDEX(Q7B qtoolbox);

// *** QTABWIDGET ***********************************************************************************

Q7B Q7B_QTABWIDGET_INIT(QObject *parent, const char *objectName);
void Q7B_QTABWIDGET_CURRENTINDEX(Q7B qtabwidget, Q7B v);
Q7B Q7B_QTABWIDGET_CURRENTINDEX(Q7B qtabwidget);
Q7B Q7B_QTABWIDGET_COUNT(Q7B qtabwidget);
Q7B Q7B_QTABWIDGET_WIDGET(Q7B qtabwidget, Q7B Index);

// *** QSTACKEDWIDGET ***********************************************************************************

Q7B Q7B_QSTACKEDWIDGET_INIT(QObject *parent, const char *objectName);
void Q7B_QSTACKEDWIDGET_CURRENTINDEX(Q7B qstackedwidget, Q7B v);
Q7B Q7B_QSTACKEDWIDGET_CURRENTINDEX(Q7B qstackedwidget);

// *** QMAINWINDOW ***********************************************************************************

Q7B Q7B_QMAINWINDOW_INIT(QObject *parent, const char *objectName);

// *** QCOMMANDLINKBUTTON ***********************************************************************************

Q7B Q7B_QCOMMANDLINKBUTTON_INIT(QObject *parent, const char *objectName);
void Q7B_QCOMMANDLINKBUTTON_DESCRIPTION(Q7B qcommandlinkbutton, Q7B v);
Q7B Q7B_QCOMMANDLINKBUTTON_DESCRIPTION(Q7B qcommandlinkbutton);

// *** QCHECKBOX ***********************************************************************************

Q7B Q7B_QCHECKBOX_INIT(QObject *parent, const char *objectName);

// *** QRADIOBUTTON ***********************************************************************************

Q7B Q7B_QRADIOBUTTON_INIT(QObject *parent, const char *objectName);

// *** QPUSHBUTTON ***********************************************************************************

Q7B Q7B_QPUSHBUTTON_INIT(QObject *parent, const char *objectName);
void Q7B_QPUSHBUTTON_MENU(Q7B qpushbutton, Q7B v);
Q7B Q7B_QPUSHBUTTON_MENU(Q7B qpushbutton);
void Q7B_QPUSHBUTTON_AUTODEFAULT(Q7B qpushbutton, Q7B v);
Q7B Q7B_QPUSHBUTTON_AUTODEFAULT(Q7B qpushbutton);
void Q7B_QPUSHBUTTON_DEFAULT(Q7B qpushbutton, Q7B v);
Q7B Q7B_QPUSHBUTTON_DEFAULT(Q7B qpushbutton);
void Q7B_QPUSHBUTTON_FLAT(Q7B qpushbutton, Q7B v);
Q7B Q7B_QPUSHBUTTON_FLAT(Q7B qpushbutton);


// *** QOBJECT ***********************************************************************************

Q7B Q7B_QOBJECT_INIT(QObject *parent, const char *objectName);
void Q7B_QOBJECT_OBJECTNAME(Q7B qobject, Q7B v);
Q7B Q7B_QOBJECT_OBJECTNAME(Q7B qobject);
Q7B Q7B_QOBJECT_SENDER(Q7B qobject);
Q7B Q7B_QOBJECT_CHILD(Q7B qobject, Q7B Q7B_ObjectName);
Q7B Q7B_QOBJECT_CHILDREN(Q7B qobject);
Q7B Q7B_Variant2id(QVariant v, bool bSQL, bool bSQLQByteArrayEncodeBase64);
QVariant Q7B_id2Variant(Q7B Q7B_Object, bool bSQL, bool bSQLQByteArrayEncodeBase64);
void Q7B_PROPERTY(Q7B qobject, Q7B PropertyName, Q7B Q7B_Object);
Q7B Q7B_PROPERTY(Q7B qobject, Q7B PropertyName);

// *** LIST ***********************************************************************************

void Q7B_LIST_REMOVEALL(Q7B aList);
Q7B Q7B_LIST_TOQSTRINGLIST(Q7B aList);
void Q7B_LIST_FROMQSTRINGLIST(Q7B aList, Q7B qstringlist);
Q7B Q7B_LIST_LENGTH(Q7B aList);
Q7B Q7B_LIST_OBJECT(Q7B aList, Q7B Index);
void Q7B_LIST_INSERT(Q7B aList, Q7B Index, Q7B Q7B_Object);
void Q7B_LIST_SETOBJECT(Q7B aList, Q7B Index, Q7B Q7B_Object);
void Q7B_LIST_REMOVE(Q7B aList, Q7B Index);
void Q7B_LIST_APPEND(Q7B aList, Q7B Q7B_Object);

// *** DICTIONARY ***********************************************************************************

Q7B Q7B_DICTIONARY_LENGTH(Q7B aDictionary);
void Q7B_DICTIONARY_REMOVEALL(Q7B aDictionary);
Q7B Q7B_DICTIONARY_KEYS(Q7B aDictionary);
Q7B Q7B_DICTIONARY_VALUES(Q7B aDictionary);
void Q7B_DICTIONARY_REMOVE(Q7B aDictionary, Q7B Key);
Q7B Q7B_DICTIONARY_CONTAINS(Q7B aDictionary, Q7B Key);
Q7B Q7B_DICTIONARY_OBJECT(Q7B aDictionary, Q7B Key);
void Q7B_DICTIONARY_SETOBJECT(Q7B aDictionary, Q7B Key, Q7B Value);

// *** QWIDGET ***********************************************************************************

Q7B Q7B_QWIDGET_INIT(QObject *parent, const char *objectName);
Q7B Q7B_QWIDGET_WIDGET(Q7B qobject, Q7B Q7B_ObjectName);
void Q7B_QWIDGET_SHOWMAXIMIZED(Q7B qwidget);
void Q7B_QWIDGET_SHOWFULLSCREEN(Q7B qwidget);
void Q7B_QWIDGET_SHOWMINIMIZED(Q7B qwidget);
void Q7B_QWIDGET_TOGGLEVISIBLE(Q7B qwidget);
void Q7B_QWIDGET_SETATTRIBUTE(Q7B qwidget, Q7B Attribute, Q7B On);
void Q7B_QWIDGET_SETPARENT(Q7B qwidget, Q7B w);
void Q7B_QWIDGET_SHOWNORMAL(Q7B qwidget);
void Q7B_QWIDGET_SHOW(Q7B qwidget);
void Q7B_QWIDGET_HIDE(Q7B qwidget);
void Q7B_QWIDGET_ENABLED(Q7B qwidget, Q7B v);
Q7B Q7B_QWIDGET_ACTIONS(Q7B qwidget);
Q7B Q7B_QWIDGET_ENABLED(Q7B qwidget);
void Q7B_QWIDGET_VISIBLE(Q7B qwidget, Q7B v);
Q7B Q7B_QWIDGET_VISIBLE(Q7B qwidget);
void Q7B_QWIDGET_MINIMUMWIDTH(Q7B qwidget, Q7B v);
Q7B Q7B_QWIDGET_MINIMUMWIDTH(Q7B qwidget);
void Q7B_QWIDGET_MAXIMUMWIDTH(Q7B qwidget, Q7B v);
Q7B Q7B_QWIDGET_MAXIMUMWIDTH(Q7B qwidget);
void Q7B_QWIDGET_WINDOWTITLE(Q7B qwidget, Q7B v);
Q7B Q7B_QWIDGET_WINDOWTITLE(Q7B qwidget);
void Q7B_QWIDGET_WINDOWICON(Q7B qwidget, Q7B v);
Q7B Q7B_QWIDGET_WINDOWICON(Q7B qwidget);
void Q7B_QWIDGET_WINDOWFLAGS(Q7B qwidget, Q7B v);
Q7B Q7B_QWIDGET_WINDOWFLAGS(Q7B qwidget);
void Q7B_QWIDGET_CONTEXTMENUPOLICY(Q7B qwidget, Q7B v);
Q7B Q7B_QWIDGET_CONTEXTMENUPOLICY(Q7B qwidget);

// *** QICON ***********************************************************************************

Q7B Q7B_QICON_INIT(QObject *parent, const char *objectName, Q7B v);

// *** QDOUBLESPINBOX ***********************************************************************************

Q7B Q7B_QDOUBLESPINBOX_INIT(QObject *parent, const char *objectName);
void Q7B_QDOUBLESPINBOX_MINIMUM(Q7B qdoublespinbox, Q7B Value);
Q7B Q7B_QDOUBLESPINBOX_MINIMUM(Q7B qdoublespinbox);
void Q7B_QDOUBLESPINBOX_MAXIMUM(Q7B qdoublespinbox, Q7B Value);
Q7B Q7B_QDOUBLESPINBOX_MAXIMUM(Q7B qdoublespinbox);
void Q7B_QDOUBLESPINBOX_VALUE(Q7B qdoublespinbox, Q7B Value);
Q7B Q7B_QDOUBLESPINBOX_VALUE(Q7B qdoublespinbox);

// *** QTEXTBROWSER ***********************************************************************************

Q7B Q7B_QTEXTBROWSER_INIT(QObject *parent, const char *objectName);

// *** QSLIDER ***********************************************************************************

Q7B Q7B_QSLIDER_INIT(QObject *parent, const char *objectName);

// *** QSCROLLBAR ***********************************************************************************

Q7B Q7B_QSCROLLBAR_INIT(QObject *parent, const char *objectName);

// *** QDATEEDIT ***********************************************************************************

Q7B Q7B_QDATEEDIT_INIT(QObject *parent, const char *objectName);

// *** QTIMEEDIT ***********************************************************************************

Q7B Q7B_QTIMEEDIT_INIT(QObject *parent, const char *objectName);

// *** PHONONVOLUMESLIDER ***********************************************************************************

Q7B Q7B_PHONONVOLUMESLIDER_INIT(QObject *parent, const char *objectName);

// *** PHONONSEEKSLIDER ***********************************************************************************

Q7B Q7B_PHONONSEEKSLIDER_INIT(QObject *parent, const char *objectName);

// *** PHONONVIDEOPLAYER ***********************************************************************************

Q7B Q7B_PHONONVIDEOPLAYER_INIT(QObject *parent, const char *objectName);
void Q7B_PHONONVIDEOPLAYER_PLAY(Q7B phononvideoplayer, Q7B Value);

// *** QSPINBOX ***********************************************************************************

Q7B Q7B_QSPINBOX_INIT(QObject *parent, const char *objectName);
void Q7B_QSPINBOX_MINIMUM(Q7B qspinbox, Q7B Value);
Q7B Q7B_QSPINBOX_MINIMUM(Q7B qspinbox);
void Q7B_QSPINBOX_MAXIMUM(Q7B qspinbox, Q7B Value);
Q7B Q7B_QSPINBOX_MAXIMUM(Q7B qspinbox);
void Q7B_QSPINBOX_VALUE(Q7B qspinbox, Q7B Value);
Q7B Q7B_QSPINBOX_VALUE(Q7B qspinbox);

// *** QPROGRESSBAR ***********************************************************************************

Q7B Q7B_QPROGRESSBAR_INIT(QObject *parent, const char *objectName);
void Q7B_QPROGRESSBAR_MINIMUM(Q7B qprogressbar, Q7B Value);
Q7B Q7B_QPROGRESSBAR_MINIMUM(Q7B qprogressbar);
void Q7B_QPROGRESSBAR_MAXIMUM(Q7B qprogressbar, Q7B Value);
Q7B Q7B_QPROGRESSBAR_MAXIMUM(Q7B qprogressbar);
void Q7B_QPROGRESSBAR_VALUE(Q7B qprogressbar, Q7B Value);
Q7B Q7B_QPROGRESSBAR_VALUE(Q7B qprogressbar);
void Q7B_QPROGRESSBAR_TEXTVISIBLE(Q7B qprogressbar, Q7B v);
Q7B Q7B_QPROGRESSBAR_TEXTVISIBLE(Q7B qprogressbar);

// *** QMDIAREA ***********************************************************************************

Q7B Q7B_QMDIAREA_INIT(QObject *parent, const char *objectName);
void Q7B_QMDIAREA_ADDSUBWINDOW(Q7B qmdiarea, Q7B Widget);
void Q7B_QMDIAREA_VIEWMODE(Q7B qmdiarea, Q7B Value);
Q7B Q7B_QMDIAREA_VIEWMODE(Q7B qmdiarea);

// *** QMENUBAR ***********************************************************************************

Q7B Q7B__QMENUBAR_INIT(QObject *parent, const char *objectName);

// *** QTOOLBAR ***********************************************************************************

Q7B Q7B__QTOOLBAR_INIT(QObject *parent, const char *objectName);

// *** QSTATUSBAR ***********************************************************************************

Q7B Q7B__QSTATUSBAR_INIT(QObject *parent, const char *objectName);

// *** QMENU ***********************************************************************************

Q7B Q7B__QMENU_INIT(QObject *parent, const char *objectName, Q7B v);
Q7B Q7B_QMENU_INIT(QObject *parent, const char *objectName);
Q7B Q7B_QMENU_ADDACTION(Q7B qmenu, Q7B Text);
void Q7B_QMENU_ADDACTION2(Q7B qmenu, Q7B theAction);
Q7B Q7B_QMENU_ADDMENU(Q7B qmenu, Q7B Text);
Q7B Q7B_QMENU_ADDSEPARATOR(Q7B qmenu);
void Q7B_QMENU_CLEAR(Q7B qmenu);

// *** QLABEL ***********************************************************************************

Q7B Q7B_QLABEL_INIT(QObject *parent, const char *objectName);
void Q7B_QLABEL_TEXT(Q7B qlabel, Q7B Value);
Q7B Q7B_QLABEL_TEXT(Q7B qlabel);
void Q7B_QLABEL_OPENEXTERNALLINKS(Q7B qlabel, Q7B Value);
Q7B Q7B_QLABEL_OPENEXTERNALLINKS(Q7B qlabel);
void Q7B_QLABEL_WORDWRAP(Q7B qlabel, Q7B Value);
Q7B Q7B_QLABEL_WORDWRAP(Q7B qlabel);
void Q7B_QLABEL_SCALEDCONTENTS(Q7B qlabel, Q7B Value);
Q7B Q7B_QLABEL_SCALEDCONTENTS(Q7B qlabel);
void Q7B_QLABEL_ALIGNMENT(Q7B qlabel, Q7B Value);
Q7B Q7B_QLABEL_ALIGNMENT(Q7B qlabel);
void Q7B_QLABEL_TEXTINTERACTIONFLAGS(Q7B qlabel, Q7B Value);
Q7B Q7B_QLABEL_TEXTINTERACTIONFLAGS(Q7B qlabel);

// *** QLINEEDIT ***********************************************************************************

Q7B Q7B_QLINEEDIT_INIT(QObject *parent, const char *objectName);
void Q7B_QLINEEDIT_ALIGNMENT(Q7B qlineedit, Q7B Value);
Q7B Q7B_QLINEEDIT_ALIGNMENT(Q7B qlineedit);
void Q7B_QLINEEDIT_ECHOMODE(Q7B qlineedit, Q7B Value);
Q7B Q7B_QLINEEDIT_ECHOMODE(Q7B qlineedit);
void Q7B_QLINEEDIT_INPUTMASK(Q7B qlineedit, Q7B Value);
Q7B Q7B_QLINEEDIT_INPUTMASK(Q7B qlineedit);
void Q7B_QLINEEDIT_READONLY(Q7B qlineedit, Q7B Value);
Q7B Q7B_QLINEEDIT_READONLY(Q7B qlineedit);
void Q7B_QLINEEDIT_VALIDATORFLOAT(Q7B qlineedit, Q7B Value);
Q7B Q7B_QLINEEDIT_VALIDATORFLOAT(Q7B qlineedit);
void Q7B_QLINEEDIT_VALIDATORINTEGER(Q7B qlineedit, Q7B Value);
Q7B Q7B_QLINEEDIT_VALIDATORINTEGER(Q7B qlineedit);
void Q7B_QLINEEDIT_MAXIMUM(Q7B qlineedit, Q7B Value);
Q7B Q7B_QLINEEDIT_MAXIMUM(Q7B qlineedit);
void Q7B_QLINEEDIT_COMPLETER(Q7B qlineedit, Q7B Value);
Q7B Q7B_QLINEEDIT_COMPLETER(Q7B qlineedit);
void Q7B_QLINEEDIT_TEXT(Q7B qlineedit, Q7B Value);
Q7B Q7B_QLINEEDIT_TEXT(Q7B qlineedit);
Q7B Q7B_QLINEEDIT_ISVALID(Q7B qlineedit);
void Q7B_QLINEEDIT_SELECTALL(Q7B qlineedit);

// *** QTEXTEDIT ***********************************************************************************

Q7B Q7B_QTEXTEDIT_INIT(QObject *parent, const char *objectName);
void Q7B_QTEXTEDIT_HTML(Q7B qtextedit, Q7B Value);
Q7B Q7B_QTEXTEDIT_HTML(Q7B qtextedit);
void Q7B_QTEXTEDIT_PRINT(Q7B qtextedit);
void Q7B_QTEXTEDIT_PRINTTOPDF(Q7B qtextedit, Q7B FileName);

// *** QPLAINTEXTEDIT ***********************************************************************************

Q7B Q7B_QPLAINTEXTEDIT_INIT(QObject *parent, const char *objectName);
void Q7B_QPLAINTEXTEDIT_PRINT(Q7B qplaintextedit);
void Q7B_QPLAINTEXTEDIT_PRINTTOPDF(Q7B qplaintextedit, Q7B FileName);
void Q7B_QPLAINTEXTEDIT_PLAINTEXT(Q7B qplaintextedit, Q7B Value);
Q7B Q7B_QPLAINTEXTEDIT_PLAINTEXT(Q7B qplaintextedit);
void Q7B_QPLAINTEXTEDIT_READONLY(Q7B qplaintextedit, Q7B v);
Q7B Q7B_QPLAINTEXTEDIT_READONLY(Q7B qplaintextedit);
void Q7B_QPLAINTEXTEDIT_APPENDPLAINTEXT(Q7B qplaintextedit, Q7B v);

// *** QCOMBOBOX ***********************************************************************************

Q7B Q7B_QCOMBOBOX_INIT(QObject *parent, const char *objectName);
void Q7B_QCOMBOBOX_REMOVEALL(Q7B qcombobox);
void Q7B_QCOMBOBOX_SETNOCOMPLETER(Q7B qcombobox);
Q7B Q7B_QCOMBOBOX_TEXT(Q7B qcombobox);
void Q7B_QCOMBOBOX_APPEND(Q7B qcombobox, Q7B v);
Q7B Q7B_QCOMBOBOX_OBJECT(Q7B qcombobox, Q7B v);
void Q7B_QCOMBOBOX_CURRENTINDEX(Q7B qcombobox, Q7B v);
Q7B Q7B_QCOMBOBOX_LENGTH(Q7B qcombobox);
Q7B Q7B_QCOMBOBOX_CURRENTINDEX(Q7B qcombobox);
void Q7B_QCOMBOBOX_APPEND2(Q7B qcombobox, Q7B Icon, Q7B Text);

// *** QTREEWIDGET ***********************************************************************************

Q7B Q7B_QTREEWIDGET_INIT(QObject *parent, const char *objectName);
Q7B Q7B_QTREEWIDGET_COLUMNCOUNT(Q7B qtreewidget);
Q7B Q7B_QTREEWIDGET_CURRENTCOLUMN(Q7B qtreewidget);
Q7B Q7B_QTREEWIDGET_CURRENTITEM(Q7B qtreewidget);
Q7B Q7B_QTREEWIDGET_HEADERITEM(Q7B qtreewidget);
Q7B Q7B_QTREEWIDGET_INVISIBLEROOTITEM(Q7B qtreewidget);
Q7B Q7B_QTREEWIDGET_SELECTEDITEMS(Q7B qtreewidget);
Q7B Q7B_QTREEWIDGET_SORTCOLUMN(Q7B qtreewidget);
Q7B Q7B_QTREEWIDGET_TOPLEVELITEMCOUNT(Q7B qtreewidget);
void Q7B_QTREEWIDGET_COLLAPSEALL(Q7B qtreewidget);
void Q7B_QTREEWIDGET_EXPANDALL(Q7B qtreewidget);
void Q7B_QTREEWIDGET_SELECTALL(Q7B qtreewidget);
void Q7B_QTREEWIDGET_SCROLLTOBOTTOM(Q7B qtreewidget);
void Q7B_QTREEWIDGET_SCROLLTOTOP(Q7B qtreewidget);
Q7B Q7B_QTREEWIDGET_APPENDCHILD(Q7B qtreewidget, Q7B Text);
Q7B Q7B_QTREEWIDGET_CHILDCOUNT(Q7B qtreewidget, Q7B ItemId);
Q7B Q7B_QTREEWIDGET_ISEXPANDED(Q7B qtreewidget, Q7B ItemId);
Q7B Q7B_QTREEWIDGET_ISHIDDEN(Q7B qtreewidget, Q7B ItemId);
Q7B Q7B_QTREEWIDGET_ISSELECTED(Q7B qtreewidget, Q7B ItemId);
Q7B Q7B_QTREEWIDGET_COLUMNCOUNT2(Q7B qtreewidget, Q7B ItemId);
Q7B Q7B_QTREEWIDGET_APPEND(Q7B qtreewidget, Q7B Text);
Q7B Q7B_QTREEWIDGET_INDEXOFTOPLEVELITEM(Q7B qtreewidget, Q7B ItemId);
void Q7B_QTREEWIDGET_SETCOLUMNCOUNT(Q7B qtreewidget, Q7B Count);
void Q7B_QTREEWIDGET_SETCURRENTITEM(Q7B qtreewidget, Q7B ItemId);
void Q7B_QTREEWIDGET_SETHEADERLABEL(Q7B qtreewidget, Q7B Text);
void Q7B_QTREEWIDGET_REMOVETOPLEVELITEM(Q7B qtreewidget, Q7B Index);
Q7B Q7B_QTREEWIDGET_TOPLEVELITEM(Q7B qtreewidget, Q7B Index);
Q7B Q7B_QTREEWIDGET_ISCOLUMNHIDDEN(Q7B qtreewidget, Q7B Column);
Q7B Q7B_QTREEWIDGET_COLUMNWIDTH(Q7B qtreewidget, Q7B Column);
void Q7B_QTREEWIDGET_SHOWCOLUMN(Q7B qtreewidget, Q7B Column);
void Q7B_QTREEWIDGET_COLLAPSEITEM(Q7B qtreewidget, Q7B ItemId);
void Q7B_QTREEWIDGET_EXPANDITEM(Q7B qtreewidget, Q7B ItemId);
void Q7B_QTREEWIDGET_SCROLLTOITEM(Q7B qtreewidget, Q7B ItemId);
Q7B Q7B_QTREEWIDGET_FLAGS(Q7B qtreewidget, Q7B ItemId);
Q7B Q7B_QTREEWIDGET_APPENDCHILD2(Q7B qtreewidget, Q7B Icon, Q7B Text);
Q7B Q7B_QTREEWIDGET_APPENDCHILDTOID(Q7B qtreewidget, Q7B ItemId, Q7B Text);
Q7B Q7B_QTREEWIDGET_CHILD(Q7B qtreewidget, Q7B ItemId, Q7B Index);
Q7B Q7B_QTREEWIDGET_CHECKSTATE(Q7B qtreewidget, Q7B ItemId, Q7B Column);
Q7B Q7B_QTREEWIDGET_DATA(Q7B qtreewidget, Q7B ItemId, Q7B Column);
void Q7B_QTREEWIDGET_SETFLAGS(Q7B qtreewidget, Q7B ItemId, Q7B Flags);
Q7B Q7B_QTREEWIDGET_TEXT(Q7B qtreewidget, Q7B ItemId, Q7B Column);
Q7B Q7B_QTREEWIDGET_ICON(Q7B qtreewidget, Q7B ItemId, Q7B Column);
Q7B Q7B_QTREEWIDGET_INDEXOFCHILD(Q7B qtreewidget, Q7B ItemId, Q7B ChildId);
void Q7B_QTREEWIDGET_SETDISABLED(Q7B qtreewidget, Q7B ItemId, Q7B IsDisabled);
void Q7B_QTREEWIDGET_SETEXPANDED(Q7B qtreewidget, Q7B ItemId, Q7B IsExpanded);
void Q7B_QTREEWIDGET_SETHIDDEN(Q7B qtreewidget, Q7B ItemId, Q7B IsHidden);
void Q7B_QTREEWIDGET_SETSELECTED(Q7B qtreewidget, Q7B ItemId, Q7B IsSelected);
Q7B Q7B_QTREEWIDGET_STATUSTIP(Q7B qtreewidget, Q7B ItemId, Q7B Column);
Q7B Q7B_QTREEWIDGET_WHATSTHIS(Q7B qtreewidget, Q7B ItemId, Q7B Column);
Q7B Q7B_QTREEWIDGET_TOOLTIP(Q7B qtreewidget, Q7B ItemId, Q7B Column);
void Q7B_QTREEWIDGET_REMOVECHILD(Q7B qtreewidget, Q7B ItemId, Q7B Index);
Q7B Q7B_QTREEWIDGET_TEXTALIGNMENT(Q7B qtreewidget, Q7B ItemId, Q7B Column);
Q7B Q7B_QTREEWIDGET_APPEND2(Q7B qtreewidget, Q7B Icon, Q7B Text);
Q7B Q7B_QTREEWIDGET_INSERT2(Q7B qtreewidget, Q7B Index, Q7B Text);
Q7B Q7B_QTREEWIDGET_ITEMAT(Q7B qtreewidget, Q7B X, Q7B Y);
void Q7B_QTREEWIDGET_SETCURRENTITEM2(Q7B qtreewidget, Q7B ItemId, Q7B Column);
void Q7B_QTREEWIDGET_SETHEADERLABEL2(Q7B qtreewidget, Q7B Column, Q7B Text);
void Q7B_QTREEWIDGET_SORTITEMS(Q7B qtreewidget, Q7B Column, Q7B Descending);
void Q7B_QTREEWIDGET_SETCOLUMNHIDDEN(Q7B qtreewidget, Q7B Column, Q7B IsColumnHidden);
void Q7B_QTREEWIDGET_SETCOLUMNWIDTH(Q7B qtreewidget, Q7B Column, Q7B Width);
void Q7B_QTREEWIDGET_CLOSEPERSISTENTEDITOR(Q7B qtreewidget, Q7B ItemId, Q7B Column);
void Q7B_QTREEWIDGET_OPENPERSISTENTEDITOR(Q7B qtreewidget, Q7B ItemId, Q7B Column);
void Q7B_QTREEWIDGET_EDITITEM(Q7B qtreewidget, Q7B ItemId, Q7B Column);
Q7B Q7B_QTREEWIDGET_APPENDCHILDTOID2(Q7B qtreewidget, Q7B ItemId, Q7B Icon, Q7B Text);
void Q7B_QTREEWIDGET_SETCHECKSTATE(Q7B qtreewidget, Q7B ItemId, Q7B Column, Q7B CheckState);
void Q7B_QTREEWIDGET_SETTEXT(Q7B qtreewidget, Q7B ItemId, Q7B Column, Q7B Text);
void Q7B_QTREEWIDGET_SETICON(Q7B qtreewidget, Q7B ItemId, Q7B Column, Q7B Icon);
Q7B Q7B_QTREEWIDGET_INSERTCHILD(Q7B qtreewidget, Q7B ItemId, Q7B Index, Q7B Text);
Q7B Q7B_QTREEWIDGET_INSERTCHILD2(Q7B qtreewidget, Q7B ItemId, Q7B Index, Q7B Icon, Q7B Text);
void Q7B_QTREEWIDGET_SETSTATUSTIP(Q7B qtreewidget, Q7B ItemId, Q7B Column, Q7B StatusTip);
void Q7B_QTREEWIDGET_SETWHATSTHIS(Q7B qtreewidget, Q7B ItemId, Q7B Column, Q7B WhatsThis);
void Q7B_QTREEWIDGET_SETTOOLTIP(Q7B qtreewidget, Q7B ItemId, Q7B Column, Q7B ToolTip);
void Q7B_QTREEWIDGET_SETTEXTALIGNMENT(Q7B qtreewidget, Q7B ItemId, Q7B Column, Q7B TextAlignment);
Q7B Q7B_QTREEWIDGET_INSERT3(Q7B qtreewidget, Q7B Index, Q7B Icon, Q7B Text);

// *** QDOCKWIDGET ***********************************************************************************

Q7B Q7B_QDOCKWIDGET_INIT(QObject *parent, const char *objectName);
Q7B Q7B_QDOCKWIDGET_WIDGET(Q7B qdockwidget);

// *** QLISTWIDGET ***********************************************************************************

Q7B Q7B_QLISTWIDGET_INIT(QObject *parent, const char *objectName);
Q7B Q7B_QLISTWIDGET_LENGTH(Q7B qlistwidget);
void Q7B_QLISTWIDGET_REMOVEALL(Q7B qlistwidget);
Q7B Q7B_QLISTWIDGET_SELECTED(Q7B qlistwidget);
Q7B Q7B_QLISTWIDGET_SELECTEDTEXT(Q7B qlistwidget);
void Q7B_QLISTWIDGET_SORT(Q7B qlistwidget, Q7B Descending);
void Q7B_QLISTWIDGET_APPEND(Q7B qlistwidget, Q7B Text);
void Q7B_QLISTWIDGET_REMOVE(Q7B qlistwidget, Q7B Index);
void Q7B_QLISTWIDGET_SELECT(Q7B qlistwidget, Q7B Index);
void Q7B_QLISTWIDGET_SELECTTEXT(Q7B qlistwidget, Q7B Text);
Q7B Q7B_QLISTWIDGET_TEXT(Q7B qlistwidget, Q7B Index);
Q7B Q7B_QLISTWIDGET_DATA(Q7B qlistwidget, Q7B Index);
Q7B Q7B_QLISTWIDGET_ICON(Q7B qlistwidget, Q7B Index);
Q7B Q7B_QLISTWIDGET_CHECKSTATE(Q7B qlistwidget, Q7B Index);
Q7B Q7B_QLISTWIDGET_FLAGS(Q7B qlistwidget, Q7B Index);
Q7B Q7B_QLISTWIDGET_ISHIDDEN(Q7B qlistwidget, Q7B Index);
Q7B Q7B_QLISTWIDGET_ISSELECTED(Q7B qlistwidget, Q7B Index);
Q7B Q7B_QLISTWIDGET_STATUSTIP(Q7B qlistwidget, Q7B Index);
Q7B Q7B_QLISTWIDGET_WHATSTHIS(Q7B qlistwidget, Q7B Index);
Q7B Q7B_QLISTWIDGET_TOOLTIP(Q7B qlistwidget, Q7B Index);
Q7B Q7B_QLISTWIDGET_TEXTALIGNMENT(Q7B qlistwidget, Q7B Index);
void Q7B_QLISTWIDGET_SETTEXT(Q7B qlistwidget, Q7B Index, Q7B Text);
void Q7B_QLISTWIDGET_SETICON(Q7B qlistwidget, Q7B Index, Q7B Icon);
void Q7B_QLISTWIDGET_SETDATA(Q7B qlistwidget, Q7B Index, Q7B d);
void Q7B_QLISTWIDGET_SETCHECKSTATE(Q7B qlistwidget, Q7B Index, Q7B CheckState);
void Q7B_QLISTWIDGET_SETFLAGS(Q7B qlistwidget, Q7B Index, Q7B Flag);
void Q7B_QLISTWIDGET_SETHIDDEN(Q7B qlistwidget, Q7B Index, Q7B IsHidden);
void Q7B_QLISTWIDGET_SETSELECTED(Q7B qlistwidget, Q7B Index, Q7B IsSelected);
void Q7B_QLISTWIDGET_SETSTATUSTIP(Q7B qlistwidget, Q7B Index, Q7B StatusTip);
void Q7B_QLISTWIDGET_SETWHATSTHIS(Q7B qlistwidget, Q7B Index, Q7B WhatsThis);
void Q7B_QLISTWIDGET_SETTOOLTIP(Q7B qlistwidget, Q7B Index, Q7B ToolTip);
void Q7B_QLISTWIDGET_SETTEXTALIGNMENT(Q7B qlistwidget, Q7B Index, Q7B TextAlignment);
void Q7B_QLISTWIDGET_INSERT(Q7B qlistwidget, Q7B Index, Q7B Text);
void Q7B_QLISTWIDGET_APPEND2(Q7B qlistwidget, Q7B Icon, Q7B Text);
void Q7B_QLISTWIDGET_INSERT2(Q7B qlistwidget, Q7B Index, Q7B Icon, Q7B Text);

// *** QTOOLBUTTON ***********************************************************************************

Q7B Q7B_QTOOLBUTTON_INIT(QObject *parent, const char *objectName);
void Q7B_QTOOLBUTTON_MENU(Q7B qtoolbutton, Q7B v);
Q7B Q7B_QTOOLBUTTON_MENU(Q7B qtoolbutton);

// *** QACTION ***********************************************************************************

Q7B Q7B_QACTION_INIT(QObject *parent, const char *objectName);
void Q7B_QACTION_TEXT(Q7B qaction, Q7B v);
Q7B Q7B_QACTION_TEXT(Q7B qaction);
void Q7B_QACTION_TAG(Q7B qaction, Q7B v);
Q7B Q7B_QACTION_TAG(Q7B qaction);
void Q7B_QACTION_VISIBLE(Q7B qaction, Q7B v);
Q7B Q7B_QACTION_VISIBLE(Q7B qaction);
void Q7B_QACTION_ENABLED(Q7B qaction, Q7B v);
Q7B Q7B_QACTION_ENABLED(Q7B qaction);
void Q7B_QACTION_CHECKABLE(Q7B qaction, Q7B v);
Q7B Q7B_QACTION_CHECKABLE(Q7B qaction);
void Q7B_QACTION_CHECKED(Q7B qaction, Q7B v);
Q7B Q7B_QACTION_CHECKED(Q7B qaction);
void Q7B_QACTION_ICON(Q7B qaction, Q7B v);
Q7B Q7B_QACTION_ICON(Q7B qaction);

// *** TOOLBARVIEW ***********************************************************************************
/*
class ToolBarView : public QToolBar
{
  Q_OBJECT
public:
ToolBarView(QWidget *parent = 0) : QToolBar (parent)
{  
}
};*/

// *** LINE ***********************************************************************************

class Line : public QFrame
{
  Q_OBJECT
public:
Line(QWidget *parent = 0) : QFrame (parent)
{  
}
};
/*
// *** FORMSVIEW ***********************************************************************************

class FormsView : public QLabel
{
  Q_OBJECT
public:
FormsView(QWidget *parent = 0) : QLabel (parent)
{  
}
};

// *** FORMVIEW ***********************************************************************************

class FormView : public QLabel
{
  Q_OBJECT
public:
FormView(QWidget *parent = 0) : QLabel (parent)
{  
}
};
*/
// *** SPINBOX ***********************************************************************************
/*
class SpinBox : public QSpinBox
{
  Q_OBJECT
public:
SpinBox(QWidget *parent = 0) : QSpinBox (parent)
{  
}
};

// *** SCROLLBAR ***********************************************************************************

class ScrollBar : public QScrollBar
{
  Q_OBJECT
public:
ScrollBar(QWidget *parent = 0) : QScrollBar (parent)
{  
}
};

// *** SLIDER ***********************************************************************************

class Slider : public QSlider
{
  Q_OBJECT
public:
Slider(QWidget *parent = 0) : QSlider (parent)
{  
}
};
*/

// *** SVGBOX ***********************************************************************************
/*
class SvgBox : public QSvgWidget
{
  Q_OBJECT
public:
SvgBox(QWidget *parent = 0) : QSvgWidget (parent)
{  
}
};
*/
// *** HTMLVIEW ***********************************************************************************
/*
class HtmlView : public QTextBrowser
{
  Q_OBJECT
public:
HtmlView(QWidget *parent = 0) : QTextBrowser (parent)
{  
}
};

// *** WEBVIEW ***********************************************************************************

class WebView : public QWebView
{
  Q_OBJECT
public:
WebView(QWidget *parent = 0) : QWebView (parent)
{  
}
};

// *** RICHTEXTBOX ***********************************************************************************

class RichTextBox : public QTextEdit
{
  Q_OBJECT
public:
RichTextBox(QWidget *parent = 0) : QTextEdit (parent)
{  
}
};

// *** PROGRESSBAR ***********************************************************************************

class ProgressBar : public QProgressBar
{
  Q_OBJECT
public:
ProgressBar(QWidget *parent = 0) : QProgressBar (parent)
{  
}
};

Q7B PROGRESSBAR(QObject *parent, const char *objectName)
{
  ProgressBar* o = new ProgressBar( );
  o->setProperty("Parent", (qint64) parent);
  o->setObjectName(objectName);

  
  //Q7BCODEVIEW_CONNECT_SLOTS(parent, o, objectName);

  Q7B q (new Q7B_id(typeid(ProgressBar).name(), o)); 
  return q;
}


// *** BOX ***********************************************************************************

class Box : public QWidget
{
  Q_OBJECT
public:
Box(QWidget *parent = 0) : QWidget (parent)
{  
}
};

// *** LISTVIEW ***********************************************************************************

class ListView : public QTreeWidget
{
  Q_OBJECT
public:
ListView(QWidget *parent = 0) : QTreeWidget (parent)
{  
}
};

// *** TREEVIEW ***********************************************************************************

class TreeView : public QTreeWidget
{
  Q_OBJECT
public:
TreeView(QWidget *parent = 0) : QTreeWidget (parent)
{  
}
};
*/


// *** TABVIEW ***********************************************************************************
/*
class TabView : public QTabWidget
{
  Q_OBJECT
public:
TabView(QWidget *parent = 0) : QTabWidget (parent)
{  
}
};
*/
// *** MOVIEBOX ***********************************************************************************
/*
class MovieBox : public Phonon::VideoWidget
{
  Q_OBJECT
public:
MovieBox(QWidget *parent = 0) : Phonon::VideoWidget (parent)
{  
}
};*/
/*
// *** DATETIMEBOX ***********************************************************************************

class DateTimeBox : public QDateTimeEdit
{
  Q_OBJECT
public:
DateTimeBox(QWidget *parent = 0) : QDateTimeEdit (parent)
{  
}
};

// *** TIMEBOX ***********************************************************************************

class TimeBox : public QTimeEdit
{
  Q_OBJECT
public:
TimeBox(QWidget *parent = 0) : QTimeEdit (parent)
{  
}
};

// *** DATEBOX ***********************************************************************************

class DateBox : public QDateEdit
{
  Q_OBJECT
public:
DateBox(QWidget *parent = 0) : QDateEdit (parent)
{  
}
};

// *** LISTBOX ***********************************************************************************

class ListBox : public QListWidget
{
  Q_OBJECT
public:
ListBox(QWidget *parent = 0) : QListWidget (parent)
{  
}
};

// *** COMBOBOX ***********************************************************************************

class ComboBox : public QComboBox
{
  Q_OBJECT
public:
ComboBox(QWidget *parent = 0) : QComboBox (parent)
{  
}
};

// *** FRAME ***********************************************************************************

class Frame : public QGroupBox
{
  Q_OBJECT
public:
Frame(QWidget *parent = 0) : QGroupBox (parent)
{  
}
};
*/
// *** Q7BCODEVIEW ***********************************************************************************

/*
// PLUGIN to build the plugins - make the following uncomment

class Q7BCodeWindow : public QPlainTextEdit
{
  Q_OBJECT
public:
Q7BCodeWindow(QWidget *parent = 0) : QPlainTextEdit (parent)
{  
}
};*/

/*
//
class Q7BCodeView : public Q7BCodeWindow
//class Q7BCodeView : public QPlainTextEdit // plugins
{
  Q_OBJECT
public:
Q7BCodeView(QWidget *parent = 0) : Q7BCodeWindow (parent)
//Q7BCodeView(QWidget *parent = 0) : QPlainTextEdit (parent) // plugins
{  
}
};

Q7B Q7BCODEVIEW(QObject *parent, const char *objectName)
{
  Q7BCodeView* o = new Q7BCodeView( );
  o->setProperty("Parent", (qint64) parent);
  o->setObjectName(objectName);

  //Q7BCODEVIEW_CONNECT_SLOTS(parent, o, objectName);

  Q7B q (new Q7B_id(typeid(Q7BCodeView).name(), o)); 
  return q;
}*/

// *** RADIOBUTTON ***********************************************************************************
/*
class RadioButton : public QRadioButton
{
  Q_OBJECT
public:
RadioButton(QWidget *parent = 0) : QRadioButton (parent)
{  
}
};

// *** CHECKBOX ***********************************************************************************

class CheckBox : public QCheckBox
{
  Q_OBJECT
public:
CheckBox(QWidget *parent = 0) : QCheckBox (parent)
{  
}
};
*/


// *** TOOLBUTTON ***********************************************************************************
/*
class ToolButton : public QToolButton
{
  Q_OBJECT
public:
ToolButton(QWidget *parent = 0) : QToolButton (parent)
{  
}
};

// *** COMMANDLINKBUTTON ***********************************************************************************

class CommandLinkButton : public QCommandLinkButton
{
  Q_OBJECT
public:
CommandLinkButton(QWidget *parent = 0) : QCommandLinkButton (parent)
{  
}
};

// *** COMMANDBUTTON ***********************************************************************************

class CommandButton : public QPushButton
{
  Q_OBJECT
public:
CommandButton(QWidget *parent = 0) : QPushButton (parent)
{  
}
};
*/


/*
/void COMMANDBUTTON_CONNECT_SLOTS(QObject *parent, CommandButton* o, QString sName)
{
  QString s;
  s = QString("1on_") + sName + "_" + "released()"; if (parent->metaObject()->indexOfSlot(s.mid(1).toAscii()) != -1) QObject::connect(o, SIGNAL(released()), parent, s.toAscii());  
}

Q7B COMMANDBUTTON(QObject *parent, const char *objectName)
{
  CommandButton* o = new CommandButton();

  o->setProperty("Parent", (qlonglong) parent);

  o->setObjectName(objectName);

  COMMANDBUTTON_CONNECT_SLOTS(parent, o, objectName);

  Q7B q (new Q7B_id(typeid(CommandButton).name(), o)); 
  return q;
}*/

// *** TEXTBOX ***********************************************************************************
/*
class TextBox : public QLineEdit
{
  Q_OBJECT
public:
TextBox(QWidget *parent = 0) : QLineEdit (parent)
{  
}
};

void TEXTBOX_CONNECT_SLOTS(QObject *parent, TextBox* o, QString sName)
{
  QString s;
  s = QString("1on_") + sName + "_" + "returnPressed()"; 
  if (parent->metaObject()->indexOfSlot(s.mid(1).toAscii()) != -1) QObject::connect(o, SIGNAL(returnPressed()), parent, s.toAscii());  
}



Q7B TEXTBOX(QObject *parent, const char *objectName) // QWidget *parent = 0
{
  TextBox* o = new TextBox();
 // Control(o);

  o->setProperty("Parent", (qlonglong) parent);
  //o->setProperty("Group", "");

  o->setObjectName(objectName);

  TEXTBOX_CONNECT_SLOTS(parent, o, objectName);

    // if set

  //if (o->metaObject()->indexOfSignal("returnPressed()") != -1){
  //if (parent->metaObject()->indexOfSlot("on_t_returnPressed()") != -1){
  //if ( QObject::connect (o, SIGNAL(returnPressed()), parent, SLOT(on_t_returnPressed()) ) ){
  //if (QObject::connect(o, SIGNAL(returnPressed()), parent, on_t_returnPressed())){
  
  // alle signals manual und nur wenn indexOfSlot()
  / *
  if (parent->metaObject()->indexOfSlot(s.mid(1).toAscii()) != -1 && QObject::connect(o, SIGNAL(returnPressed()), parent, s.toAscii())){
  } else {
    QMessageBox::information(0, "connect", s);
  } * /

 // QMetaObject::connectSlotsByName(parent);

  Q7B q (new Q7B_id(typeid(TextBox).name(), o)); 
  return q;
}


void TEXTBOX_GROUP(Q7B textbox, Q7B v)
{
  if (Q7B_nil(textbox)){ Q7B_NULLPOINTEREXCEPTION(); return; }
  if (Q7B_nil(Q7B_QSTRING(v))){ Q7B_EXCEPTION("String expected"); return; }

  ((TextBox *) textbox->ref)->setProperty("Group",  *((QString *) v->ref) );

  QObject *parent = (QObject *)( ((TextBox *) textbox->ref)->property("Parent").toLongLong() );
  TEXTBOX_CONNECT_SLOTS(parent, (TextBox *) textbox->ref, *((QString *) v->ref));

/ *
  QString s;
  s = QString("1on_") + QString( *((QString *) v->ref) ) + "_returnPressed()"; // fkt: name, signal  -> 1on_ name _ signal

  if (parent->metaObject()->indexOfSlot(s.mid(1).toAscii()) != -1) QObject::connect((TextBox *) textbox->ref, SIGNAL(returnPressed()), parent, s.toAscii()); 
  * /
}

Q7B TEXTBOX_GROUP(Q7B textbox)
{
  if (Q7B_nil(textbox)){ Q7B_NULLPOINTEREXCEPTION(); return Q7B_idnil; }

  return Q7B_ID( ((TextBox *) textbox->ref)->property("Group").toString() );
}

Q7B TEXTBOX_ISVALID(Q7B textbox)
{
  if (Q7B_nil(textbox)){ Q7B_NULLPOINTEREXCEPTION(); return Q7B_idnil; }

  return Q7B_ID( ((TextBox *) textbox->ref)->hasAcceptableInput() );
}

void TEXTBOX_SELECTALL(Q7B textbox)
{
  if (Q7B_nil(textbox)){ Q7B_NULLPOINTEREXCEPTION(); return; }

  ((TextBox *) textbox->ref)->selectAll();
}

void TEXTBOX_SHOW(Q7B textbox)
{
  if (Q7B_nil(textbox)){ Q7B_NULLPOINTEREXCEPTION(); return; }

  ((TextBox *) textbox->ref)->show();
}

void TEXTBOX_VALUE(Q7B textbox, Q7B Value)
{
  if (Q7B_nil(textbox)){ Q7B_NULLPOINTEREXCEPTION(); return; }
  if (Q7B_nil(Q7B_QSTRING(Value))){ Q7B_EXCEPTION("String expected"); return; }

  ((TextBox *) textbox->ref)->setText( *((QString *) Value->ref) );
}

Q7B TEXTBOX_VALUE(Q7B textbox)
{
  if (Q7B_nil(textbox)){ Q7B_NULLPOINTEREXCEPTION(); return Q7B_idnil; }

  return Q7B_ID( ((TextBox *) textbox->ref)->text() );
}
*/

// *** DATETIME ***********************************************************************************

Q7B Q7B_ADDDAYS(Q7B Q7B_Object, Q7B Days);
Q7B Q7B_ADDHOURS(Q7B Q7B_Object, Q7B Hours);
Q7B Q7B_ADDMINUTES(Q7B Q7B_Object, Q7B Minutes);
Q7B Q7B_ADDMONTHS(Q7B Q7B_Object, Q7B Months);
Q7B Q7B_ADDSECONDS(Q7B Q7B_Object, Q7B Seconds);
Q7B Q7B_SUBDAYS(Q7B Q7B_Object, Q7B Days);
Q7B Q7B_SUBHOURS(Q7B Q7B_Object, Q7B Hours);
Q7B Q7B_SUBMINUTES(Q7B Q7B_Object, Q7B Minutes);
Q7B Q7B_SUBMONTHS(Q7B Q7B_Object, Q7B Months);
Q7B Q7B_SUBSECONDS(Q7B Q7B_Object, Q7B Seconds);
Q7B Q7B_TIMEVALUE(Q7B Q7B_Object);
Q7B Q7B_TIMESERIAL(Q7B Q7B_Object, Q7B Hour, Q7B Minute, Q7B Second);
Q7B Q7B_DATESERIAL(Q7B Q7B_Object, Q7B Year, Q7B Month, Q7B Day);
Q7B Q7B_FORMATDATETIME(Q7B Q7B_Object, Q7B Format);
Q7B Q7B_DATEVALUE(Q7B Q7B_Object);
Q7B Q7B_DATEPART(Q7B Q7B_Object, Q7B Interval);
Q7B Q7B_DATEDIFF(Q7B Q7B_Object, Q7B dt, Q7B Interval);
Q7B Q7B_DATEADD(Q7B Q7B_Object, Q7B Interval, Q7B Number);
Q7B Q7B_DIFFSECONDS(Q7B Q7B_Object, Q7B dt);
Q7B Q7B_DIFFDAYS(Q7B Q7B_Object, Q7B dt);
Q7B Q7B_WEEKNUMBER(Q7B Q7B_Object);
Q7B Q7B_MONTHNAME(Q7B Q7B_Object, Q7B LongMonthName);
Q7B Q7B_DATETIME_INIT(Q7B Year, Q7B Month, Q7B Day, Q7B Hour, Q7B Minute, Q7B Second, Q7B MSecond);
Q7B Q7B_DAYSINYEAR(Q7B Q7B_Object);
Q7B Q7B_DAYSINMONTH(Q7B Q7B_Object);
Q7B Q7B_DAYOFYEAR(Q7B Q7B_Object);
Q7B Q7B_DAYOFWEEK(Q7B Q7B_Object);
Q7B Q7B_DAYNAME(Q7B Q7B_Object, Q7B LongDayName);
Q7B Q7B_SECOND(Q7B Q7B_Object);
Q7B Q7B_MINUTE(Q7B Q7B_Object);
Q7B Q7B_HOUR(Q7B Q7B_Object);
Q7B Q7B_MONTH(Q7B Q7B_Object);
Q7B Q7B_YEAR(Q7B Q7B_Object);
Q7B Q7B_DAY(Q7B Q7B_Object);
Q7B Q7B_ISLEAPYEAR(Q7B Q7B_Object);
Q7B Q7B_ISDATETIMEVALID(Q7B Q7B_Object);
Q7B Q7B_ISDATEVALID(Q7B Q7B_Object);
Q7B Q7B_ISTIMEVALID(Q7B Q7B_Object);

// *** STRING ***********************************************************************************

Q7B Q7B_STRREVERSE(Q7B Q7B_Object);
Q7B Q7B_FILL(Q7B Q7B_Object, Q7B Character, Q7B Size);
Q7B Q7B_INSERT(Q7B Q7B_Object, Q7B Position, Q7B Str);
Q7B Q7B_NZ(Q7B Q7B_Object, Q7B ReturnValue);
void Q7B_MIDASSIGNMENT(Q7B *l, Q7B Position, Q7B Length, Q7B r);
Q7B Q7B_LEFT(Q7B Q7B_Object, Q7B Position);
Q7B Q7B_TRUNCATE(Q7B Q7B_Object, Q7B Position);
Q7B Q7B_SECTION(Q7B Q7B_Object, Q7B Separator, Q7B Start, Q7B End, Q7B SectionFlags);
Q7B Q7B_LEFTJUSTIFIED(Q7B Q7B_Object, Q7B Width, Q7B Fill, Q7B Truncate);
Q7B Q7B_RIGHTJUSTIFIED(Q7B Q7B_Object, Q7B Width, Q7B Fill, Q7B Truncate);
QString Q7B_LoadString(Q7B Q7B_Object, QString sEncoding);
Q7B Q7B_READSTRING(Q7B Q7B_Object, Q7B Encoding);
Q7B Q7B_READCSTRING(Q7B Q7B_Object);
Q7B Q7B_WRITECSTRING(Q7B Q7B_Object, Q7B FilePathOrURL);
Q7B Q7B_WRITESTRING(Q7B Q7B_Object, Q7B FilePathOrURL, Q7B Encoding);
Q7B Q7B_ISEMPTY(Q7B Q7B_Object);
Q7B Q7B_LEN(Q7B Q7B_Object);
Q7B Q7B_LTRIM(Q7B Q7B_Object);
Q7B Q7B_REVERSED(Q7B Q7B_Object);
Q7B Q7B_RTRIM(Q7B Q7B_Object);
Q7B Q7B_FILENAME(Q7B FilePath);
Q7B Q7B_FILEBASENAME(Q7B FilePath);
Q7B Q7B_FILEEXTENSION(Q7B FilePath);
Q7B Q7B_FILEPATH(Q7B FilePath);
Q7B Q7B_STRING(Q7B Q7B_Object);
Q7B Q7B_AT(Q7B Q7B_Object, Q7B Index);
Q7B Q7B_UNICODE(Q7B Q7B_Object, Q7B Index);
Q7B Q7B_MID(Q7B Q7B_Object, Q7B Index, Q7B Length);
Q7B Q7B_RIGHT(Q7B Q7B_Object, Q7B Position);
Q7B Q7B_SPLIT(Q7B Q7B_Object, Q7B Separator, Q7B CaseSensitive);
Q7B Q7B_SPACE(Q7B Count, Q7B FillWith);
Q7B Q7B_JOIN(Q7B Q7B_Object, Q7B Separator);
Q7B Q7B_SIMPLIFIED(Q7B Q7B_Object);
Q7B Q7B_TRIM(Q7B Q7B_Object);
Q7B Q7B_INSTR(Q7B Q7B_Object, Q7B Search, Q7B Index, Q7B CaseSensitive);
Q7B Q7B_INSTRREV(Q7B Q7B_Object, Q7B Search, Q7B Index, Q7B CaseSensitive);
Q7B Q7B_CONTAINS(Q7B Q7B_Object, Q7B Search, Q7B CaseSensitive);
Q7B Q7B_APPEND(Q7B Q7B_Object, Q7B Append);
Q7B Q7B_PREPEND(Q7B Q7B_Object, Q7B Prepend);
Q7B Q7B_LCASE(Q7B Q7B_Object);
Q7B Q7B_UCASE(Q7B Q7B_Object);
Q7B Q7B_COMPARE(Q7B Q7B_Object, Q7B Search, Q7B CaseSensitive);
Q7B Q7B_REPLACE(Q7B Q7B_Object, Q7B Search, Q7B Replace, Q7B CaseSensitive);
Q7B Q7B_REMOVE(Q7B Q7B_Object, Q7B Position, Q7B Length);
Q7B Q7B_COUNT(Q7B Q7B_Object, Q7B Search, Q7B CaseSensitive);
Q7B Q7B_STARTSWITH(Q7B Q7B_Object, Q7B Search, Q7B CaseSensitive);
Q7B Q7B_ENDSWITH(Q7B Q7B_Object, Q7B Search, Q7B CaseSensitive);
Q7B Q7B_CHARACTER(Q7B Unicode);
Q7B Q7B_VALUE(Q7B Str);
Q7B Q7B_BIN(Q7B Number);
Q7B Q7B_HEX(Q7B Number);
Q7B Q7B_FORMAT(Q7B Number, Q7B Local8Bit);
Q7B Q7B_FORMATFLOAT(Q7B Number, Q7B Local8Bit, Q7B DecimalPlaceLength);
Q7B Q7B_FORMATDECIMAL(Q7B Number, Q7B Local8Bit, Q7B DecimalPlaceLength);

// *** UI ***********************************************************************************

QWidget* Q7B_CREATE_FROM_UI_FILE(QString uiName, QWidget *parentWidget);
void Q7B_OPENTEXTWINDOW(Q7B Text);
void Q7B_OPENHTMLWINDOW(Q7B Text);
void Q7B_OPENWEBWINDOW(Q7B Text);
Q7B Q7B_LOADUI(Q7B uiName);
Q7B Q7B_UNLOADUI(Q7B uiWidget);
Q7B Q7B_OPENWINDOW(Q7B uiName);
Q7B Q7B_OPENTOOLWINDOW(Q7B uiName);
Q7B Q7B_OPENDOCKWIDGET(Q7B uiName);
QMdiArea *Q7B_getDefaultMDI();
Q7B Q7B_OPENMDI(Q7B uiName); 
Q7B Q7B_OPENSDI(Q7B uiName);
Q7B Q7B_OPENDIALOG(Q7B uiName);
Q7B Q7B_CLOSEDOCKWIDGET(Q7B uiName);
Q7B Q7B_CLOSETOOLWINDOW(Q7B uiName);
Q7B Q7B_CLOSEWINDOW(Q7B uiName);
Q7B Q7B_CLOSEMDI(Q7B Widget);
Q7B Q7B_CLOSEALLMDI();
Q7B Q7B_CLOSE(Q7B Widget);
Q7B Q7B_FOCUSWINDOW();
Q7B Q7B_FOCUS();
Q7B Q7B_LISTMDI();
void Q7B_SETFOCUSMDI(Q7B Widget);
Q7B Q7B_FOCUSMDI();
void Q7B_SETFOCUSWINDOW(Q7B Widget);
void Q7B_SETFOCUS(Q7B Widget);
void Q7B_HIDE(Q7B Widget);
void Q7B_SHOW(Q7B Widget);
void Q7B_SHOWNORMAL(Q7B Widget);
void Q7B_SHOWMAXIMIZED(Q7B Widget);
void Q7B_SHOWMINIMIZED(Q7B Widget);
void Q7B_SHOWORHIDE(Q7B Widget);

// *** MATH ***********************************************************************************
  
void Q7B_RANDOMIZE();
//Q7B Q7B___RANDOM(bool bExpression, Q7B dValue);
//Q7B Q7B__RANDOM();
Q7B Q7B_RANDOM(Q7B dValue);
Q7B Q7B_BITCLR(Q7B Value, Q7B Position);
Q7B Q7B_BITSET(Q7B Value, Q7B Position);
Q7B Q7B_BITTST(Q7B Value, Q7B Position);
Q7B Q7B_MIN(Q7B l, Q7B r);
Q7B Q7B_MAX(Q7B l, Q7B r);

Q7B Q7B_ABS(Q7B v);
Q7B Q7B_ATN(Q7B v);
Q7B Q7B_COS(Q7B v);
Q7B Q7B_SIN(Q7B v);
Q7B Q7B_EXP(Q7B v);
Q7B Q7B_LN(Q7B v);
Q7B Q7B_LOG10(Q7B v);
Q7B Q7B_FIX(Q7B v);
Q7B Q7B_INT(Q7B v);
Q7B Q7B_SQR(Q7B v);
Q7B Q7B_TAN(Q7B v);

Q7B Q7B_FACT(Q7B m);
Q7B Q7B_ROUND(Q7B l, Q7B r);

// *** misc. ***********************************************************************************

void Q7B_STDOUT(Q7B m);
void Q7B_STDERR(Q7B m);
Q7B Q7B_READREGISTRY(Q7B RegistryPath, Q7B RegistryKey);
Q7B Q7B_OPENURL(Q7B PathOrURL);
Q7B Q7B_OPENEMAIL(Q7B SenderEmail, Q7B Subject, Q7B Body);
Q7B Q7B_FLOAT(Q7B Expression, Q7B Local8Bit);
Q7B Q7B_BOOLEAN(Q7B Expression, Q7B Local8Bit);
Q7B Q7B_QSTRINGLIST(Q7B Expression, Q7B Local8Bit);
Q7B Q7B_STRING(Q7B Expression, Q7B Local8Bit);
Q7B Q7B_DECIMAL(Q7B Expression, Q7B Local8Bit);
Q7B Q7B_DATETIME(Q7B Expression, Q7B Local8Bit);
Q7B Q7B_INTEGER(Q7B Expression, Q7B Local8Bit);
void Q7B_WAIT(Q7B MSec);
void Q7B_QUIT();
void Q7B_BEEP();
Q7B Q7B_DATE();
Q7B Q7B_TIME();
Q7B Q7B_NOW();

// *** VB6 & QBasic ********************************************************************************************************************************

Q7B Q7B_FREEFILE(Q7B Range);
Q7B Q7B_EOF(Q7B FILEHANDLE);
void Q7B_LINEINPUT(Q7B FILEHANDLE, Q7B *Var);
void Q7B_CLOSEFILE(Q7B FILEHANDLE);
void Q7B_CLOSEALLFILES();
void Q7B_OPEN(Q7B FileName, Q7B Mode, Q7B FILEHANDLE, Q7B Len);

// ***********************************************************************************************************************************

Q7B Q7B_RUN(Q7B FilePath, Q7B Arguments);
Q7B Q7B_LAUNCH(Q7B FilePath, Q7B Arguments, Q7B WorkingDirectory, Q7B Wait);
Q7B Q7B_SHELL(Q7B Command);

QString Q7B_PlaySound(QString sFilePath);

Q7B Q7B_PLAYSOUND(Q7B FileName);

class Q7BMovie : public Phonon::VideoWidget
{
public:
  Q7BMovie(QWidget *parent = 0) : Phonon::VideoWidget(parent)
  {
  }

  void mousePressEvent ( QMouseEvent * e )
  {
    close();
  }

  void keyPressEvent ( QKeyEvent * e ) 
  {
    close();
  }

};

Q7B Q7B_PLAYMOVIE(Q7B FileName);

void Q7B_fromXMLDictionary(QXmlStreamReader * xmlReader, Q7B_Dictionary *d, Q7B theArray2, Q7B theType2);

void Q7B_fromXMLList(QXmlStreamReader * xmlReader, Q7B_List *a, Q7B theArray2, Q7B theType2);

Q7B Q7B_READLIST(Q7B Q7B_Object);
Q7B Q7B_WRITELIST(Q7B Q7B_Object, Q7B FilePathOrURL);
Q7B Q7B_READDICTIONARY(Q7B Q7B_Object);
Q7B Q7B_WRITEDICTIONARY(Q7B Q7B_Object, Q7B FilePathOrURL);
Q7B Q7B_ISLIST(Q7B aList);
Q7B Q7B_ISFLOAT(Q7B v);
Q7B Q7B_ISINTEGER(Q7B v);
Q7B Q7B_ISBOOLEAN(Q7B v);
Q7B Q7B_ISSTRING(Q7B v);
Q7B Q7B_ISDATETIME(Q7B v);
Q7B Q7B_ISDECIMAL(Q7B v);
Q7B Q7B_ISNULL(Q7B v);

// *** SQL ***********************************************************************************

Q7B Q7B_PSQLCONNECT(Q7B Name, Q7B User, Q7B Password, Q7B Host, Q7B ConnectOptions, Q7B Port);
void Q7B_PSQLDISCONNECT();
Q7B Q7B_PSQLLASTINSERTID(Q7B Table);
Q7B Q7B_MD5(Q7B Argument);
Q7B Q7B_PSQL(Q7B SQL);
Q7B Q7B_MYSQLCONNECT(Q7B Name, Q7B User, Q7B Password, Q7B Host, Q7B ConnectOptions, Q7B Port);
void Q7B_MYSQLDISCONNECT();
Q7B Q7B_MYSQLLASTINSERTID();
Q7B Q7B_MYSQL(Q7B SQL);
Q7B Q7B_SQLITELASTINSERTID();
Q7B Q7B_SQLITE(Q7B SQL, Q7B FilePath);
void Q7B_CLOSEALLDATABASES();
Q7B Q7B_SQLBLOB(Q7B v);
Q7B Q7B_SQLTEXT(Q7B v);
Q7B Q7B_SQLBOOLEAN(Q7B v);
Q7B Q7B_SQLINTEGER(Q7B v);
Q7B Q7B_SQLFLOAT(Q7B v);

// *** CONTROL ***********************************************************************************

class Q7B_Control;

class Q7B_ControlHelper: public QObject
{

  Q_OBJECT
 
public:

Q7B_ControlHelper(Q7B_Control *q7b_su)
{
  q7b_super = q7b_su;
}

public slots:
void frameChanged(int);

private:
  Q7B_Control *q7b_super;

};



class Q7B_Control
{
 //Q_OBJECT
public:

Q7B_Control(QWidget *q7b_su)
{  
  q7b_super = q7b_su;

  movie = 0; moviea = 0; movieb = 0;
  cursoranimation_movie = 0; cursoranimation_moviea = 0; cursoranimation_movieb = 0;  

  Q7B_ControlPrivate = new Q7B_ControlHelper(this);
}

~Q7B_Control()
{
  if (movie) delete movie; if (moviea) delete moviea; if (movieb) delete movieb;
  if (cursoranimation_movie) delete cursoranimation_movie; if (cursoranimation_moviea) delete cursoranimation_moviea; if (cursoranimation_movieb) delete cursoranimation_movieb;

  delete Q7B_ControlPrivate;
}

bool setMyMovie(QWidget *control, QMovie **movie, QByteArray **moviea, QBuffer **movieb, QString n)
{

   if (!(n.contains("/") || n.contains("\\"))){      
     n = qApp->applicationDirPath()+ "/" + n;
   }
   /*
     int nn = 0;
     void *pp = loadProjectFile(n, &nn);

     if (pp != 0){
       int nCurrentFrameNumber = 0;
       if (*movie){
         nCurrentFrameNumber  = (*movie)->currentFrameNumber();
         delete *movie; 
       }
       if (*moviea) delete *moviea; if (*movieb) delete *movieb;
       *moviea = new QByteArray((const char *) pp, nn);
       *movieb = new QBuffer(*moviea); (*movieb)->open(QIODevice::ReadOnly);
       *movie = new QMovie(*movieb);
       if (control && qobject_cast<QLabel *>(control)){
         (*movie)->setScaledSize(control->size());
       } else if (control && qobject_cast<QPushButton *>(control)){
         (*movie)->jumpToFrame(0);
         QPixmap p = (*movie)->currentPixmap();
         (*movie)->jumpToFrame(-1);
         if (!p.isNull()){
           ((QPushButton *)control)->setIconSize(p.size());         
         }
       } else {
         (*movie)->setScaledSize(QSize(32, 32));
       }
       (*movie)->jumpToFrame(nCurrentFrameNumber);     

     }*/
   //} else 
   {
     if (*movie) delete *movie;
     *movie = new QMovie(n);
     if (control && qobject_cast<QLabel *>(control)){
       (*movie)->setScaledSize(control->size());
     } else if (control && qobject_cast<QPushButton *>(control)){
         (*movie)->jumpToFrame(0);
         QPixmap p = (*movie)->currentPixmap();
         (*movie)->jumpToFrame(-1);
         if (!p.isNull()){
           ((QPushButton *)control)->setIconSize(p.size());         
         }
     } else {
       (*movie)->setScaledSize(QSize(32, 32));
     }
   }

   if ((*movie)->isValid()){
      return true;
     
   }
   return false;
}

void setMyIcon(QString n);

void setMyIcon2();

protected:
  QMovie *movie; QByteArray *moviea; QBuffer *movieb;
  QMovie *cursoranimation_movie; QByteArray *cursoranimation_moviea; QBuffer *cursoranimation_movieb;

  Q7B_ControlHelper *Q7B_ControlPrivate;
  QPixmap qpixmap;

private:
  QWidget *q7b_super;
};



void Q7B_Control_constructor(QWidget *o);


Q7B Q7B_CONTROL_INIT(QObject *parent, const char *objectName);
void Q7B_CONTROL_ENABLED(Q7B q7b_control, Q7B v);
Q7B Q7B_CONTROL_ENABLED(Q7B q7b_control);
void Q7B_CONTROL_GROUP(Q7B q7b_control, Q7B v);
Q7B Q7B_CONTROL_GROUP(Q7B q7b_control);

// ******************************************************************************************

// *** TIMER ***********************************************************************************

// TODO2 EventOnOpen wie in kbasic

class Q7B_Timer : public QObject, public Q7B_Control
{
  Q_OBJECT

public:

  Q7B_Timer() : Q7B_Control(0)
  {        
    //Q7B_Control_constructor(this);

    setProperty("Enabled", true);

  //  ControlType ="Timer";  
    //Enabled = true;

    connect(&t, SIGNAL(timeout()), this, SLOT(_Event()));
    connect(&t, SIGNAL(timeout()), this, SLOT(_SoundEvent()));
  }

  ~Q7B_Timer()
  {
    t.stop();
  }

signals:
  void Event();

public slots:
  
  void _Event()
  {
    emit Event();
  }

  void _SoundEvent()
  {    
    /* TODO2
    QString s = GETPROPERTY_SoundOnEvent();
    if (!s.isEmpty()){
      EXTERN_my_sounds->playOnce(s);
    }
    */
  }

 // *** Control signals ***  
protected:
  virtual void mousePressEvent(QMouseEvent *e){ emit MouseDown(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }
  virtual void mouseDoubleClickEvent(QMouseEvent *e){ emit DblClick(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }   
  virtual void mouseReleaseEvent(QMouseEvent *e){ 
    emit MouseUp(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); 
    emit Click(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton);
  }   
  virtual void focusInEvent(QFocusEvent *e){ emit GotFocus(); }   
  virtual void focusOutEvent(QFocusEvent *e){ emit LostFocus(); }   
  virtual void enterEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void exitEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void resizeEvent(QResizeEvent *e){ emit Resize(e->size().width(), e->size().height(), e->oldSize().width(), e->oldSize().height()); }   
  
signals:
  void MouseDown(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void Click(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void DblClick(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void MouseUp(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void GotFocus();
  void LostFocus();
  void Enter();
  void Exit();
  void Resize(int Width, int Height, int OldWidth, int OldHeight);  
private:  
 // ***

public:  
 // bool Enabled;

  QTimer t;
};

Q7B Q7B_TIMER_INIT(QObject *parent, const char *objectName);
void Q7B_TIMER_ENABLED(Q7B q7b_timer, Q7B v);
Q7B Q7B_TIMER_ENABLED(Q7B q7b_timer);
Q7B Q7B_TIMER_ISRUNNING(Q7B q7b_timer);
void Q7B_TIMER_INTERVAL(Q7B q7b_timer, Q7B v);
Q7B Q7B_TIMER_INTERVAL(Q7B q7b_timer);
void Q7B_TIMER_START(Q7B q7b_timer);
void Q7B_TIMER_STOP(Q7B q7b_timer);

// ******************************************************************************************

// *** BOX ***********************************************************************************

/*
class Q7B_Box : public QWidget, public Q7B_Control
{
  Q_OBJECT
public:

Q7B_Box(QWidget *parent = 0) : QWidget (parent), Q7B_Control(this)
{
  Q7B_Control_constructor((QWidget *) this);
}

 // *** Control signals ***  
protected:
  virtual void mousePressEvent(QMouseEvent *e){ emit MouseDown(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }
  virtual void mouseDoubleClickEvent(QMouseEvent *e){ emit DblClick(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }   
  virtual void mouseReleaseEvent(QMouseEvent *e){ 
    emit MouseUp(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); 
    emit Click(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton);
  }   
  virtual void focusInEvent(QFocusEvent *e){ emit GotFocus(); }   
  virtual void focusOutEvent(QFocusEvent *e){ emit LostFocus(); }   
  virtual void enterEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void exitEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void resizeEvent(QResizeEvent *e){ emit Resize(e->size().width(), e->size().height(), e->oldSize().width(), e->oldSize().height()); }   
  
signals:
  void MouseDown(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void Click(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void DblClick(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void MouseUp(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void GotFocus();
  void LostFocus();
  void Enter();
  void Exit();
  void Resize(int Width, int Height, int OldWidth, int OldHeight);  
private:  
 // ***

};*/

// ******************************************************************************************

// *** IMAGEBUTTON ***********************************************************************************

class Q7B_ImageButton : public QWidget, public Q7B_Control
{
  Q_OBJECT
public:

Q7B_ImageButton(QWidget *parent = 0) : QWidget (parent), Q7B_Control(this)
{
  Q7B_Control_constructor((QWidget *) this);

  setAutoFillBackground(true);
  QPalette p = palette();
  p.setColor(QPalette::Window, Qt::white);  
  setPalette(p);

  setProperty("Value", ""); setProperty("OldValue", "");

  setProperty("Caption", "");
  setProperty("Icon", "");
  //setProperty("Key", "");
 // setProperty("ContextMenu", "");

  //setProperty("AutoDefault", false);
  setProperty("Checkable", false);
  setProperty("CheckableExclusive", true);
  setProperty("Checked", false);
  //setProperty("Default", false);

  setProperty("CheckEnterImage", "");
  setProperty("CheckExitImage", "");
  setProperty("CheckMouseDownImage", "");
  setProperty("CheckMouseUpImage", "");
  setProperty("CheckEnabledImage", "");
  setProperty("CheckDisabledImage", "");

  setProperty("EnterImage", "");
  setProperty("ExitImage", "");
  setProperty("MouseDownImage", "");
  setProperty("MouseUpImage", "");
  setProperty("EnabledImage", "");
  setProperty("DisabledImage", "");

  setProperty("EnterSound", "");
  setProperty("ExitSound", "");
  setProperty("MouseDownSound", "");
  setProperty("MouseUpSound", "");

  setProperty("Scale", false);


  setFocusPolicy(Qt::TabFocus);

  qfocusframe = 0;

  bEventClick = false;


}

void setImageButtonBooleanValue(QString sGroup, Q7B_ImageButton *control, bool b)
{
  if (sGroup.isEmpty()) return;

  if (!b) b = true;

  QObjectList ol = control->parentWidget()->children();

  for (int q = 0; q < ol.size(); q++){

    Q7B_ImageButton *ib = qobject_cast<Q7B_ImageButton *>(ol.at(q));
    if (ib && ib != control){

        bool bb = ib->property("CheckableExclusive").toBool();      

        QString ss = control->property("Group").toString();      

        if (bb == false && ss == sGroup){
          ib->setProperty("Checked", false);

          if (ib->property("Enabled").toBool()){
            ib->setImage(property("EnabledImage").toString());

            //ib->SETPROPERTY_EnabledImage(ib->GETPROPERTY_EnabledImage()); 
          } else {
            ib->setImage(property("DisabledImage").toString());

            //ib->SETPROPERTY_DisabledImage(ib->GETPROPERTY_DisabledImage());            
          }          
        }     
    }
  }
 
  control->setProperty("Checked", b);
}

void setChecked(bool b)
{  
  QString s = this->property("Group").toString();
  if (!s.isEmpty()){
    this->setImageButtonBooleanValue(s, this, b);
  }        

  this->setProperty("Checked", b);

  if (this->property("Checked") == true){
    if (this->property("Enabled") == true){
      //setProperty("CheckEnabledImage", property("CheckEnabledImage"));
      this->setImage(this->property("CheckedEnabledImage").toString());
    } else {
      //setProperty("CheckDisabledImage", property("CheckDisabledImage"));
      this->setImage(this->property("CheckedDisabledImage").toString());
    }
  } else {
    if (this->property("Enabled") == true){
      this->setImage(this->property("EnabledImage").toString());
      //this->setProperty("EnabledImage", property("EnabledImage"));
    } else {
      this->setImage(this->property("DisabledImage").toString());
      //setProperty("DisabledImage", property("DisabledImage"));
    }
  }
}

void setImage(QString n)
{  
  setAutoFillBackground(!n.isEmpty());

  QPixmap qpixmap = Q7B_createPixmap(n);

   QBrush b(qpixmap);
   QPalette p = palette();
   p.setBrush(QPalette::Window, b);  
   setPalette(p);

/*
   if (n.length() > 200){ // QString contains binary data         TODO2 Binary datentyp f?r bin?r strings

      QPixmap pi;
      if (n.left(200).contains("<svg ", Qt::CaseInsensitive)){
        QString fn = n;
        fn = fn.trimmed();
        QSvgWidget w(0);
        w.resize(width(), height());
        QSvgRenderer *r = w.renderer();
        if (r->load(fn.toLatin1())){
          QPixmap p(width(), height());
          QPainter painter(&p);
          r->render(&painter);
          pi = p;
        }
      } else {
        pi.loadFromData(n.toLatin1());
      }

     QBrush b(pi);
     QPalette p = palette();
     p.setBrush(QPalette::Window, b);  
     setPalette(p);

   } else {

      QPixmap pi = Q7B_loadPixmap(n.contains(".") ? n : n + ".png");
      if (property("Scale") == true && !pi.isNull()){
        pi = pi.scaled(width(), height());
      }

     QBrush b(pi);
     QPalette p = palette();
     p.setBrush(QPalette::Window, b);  
     setPalette(p);
   }*/

   repaint();
}


void mousePressEvent ( QMouseEvent * e )
{    
 // QMessageBox::information(0,"mousePressEvent", ""); 

  if (property("Enabled") == true){
    QString s = property("MouseDownSound").toString();
    if (!s.isEmpty()){
    //  QMessageBox::information(0,"Q7B_PlaySound", s); 
      Q7B_PlaySound(s);
    }
  }

  QString fn;
  if (property("Enabled") == true){
    

    if (property("Checked") == true){
      fn = property("CheckedMouseDownImage").toString(); 
    } else {
      fn = property("MouseDownImage").toString(); 
    }
  }    

//  QMessageBox::information(0,"mousePressEvent", fn); 

  if (!fn.isEmpty()){
    setImage(fn);
  }

  bEventClick = true;
  Qt::MouseButton bu = e->button();
  emit MouseDown(e->x(), e->y(), e->globalX(), e->globalY(), bu == Qt::LeftButton, bu == Qt::RightButton, bu == Qt::MidButton);
  emit Click(e->x(), e->y(), e->globalX(), e->globalY(), bu == Qt::LeftButton, bu == Qt::RightButton, bu == Qt::MidButton);  
}

void mouseReleaseEvent ( QMouseEvent * e ) 
{
  //QMessageBox::information(0,"mouseReleaseEvent", "mouseReleaseEvent"); 

  if (property("Enabled") == true){
    QString s = property("MouseUpSound").toString();
    if (!s.isEmpty()){
      Q7B_PlaySound(s);
    }
  }
    
  QString fn;
  if (property("Enabled") == true){
    if (property("Checked") == true){
      fn = property("CheckedMouseUpImage").toString(); 
      if (fn.isEmpty()) fn = property("CheckedEnterImage").toString(); 
    } else {
      fn = property("MouseUpImage").toString();
      if (fn.isEmpty()) fn = property("EnterImage").toString(); 
    }     
  }

  if (!fn.isEmpty()){
    setImage(fn);
  }

  Qt::MouseButton bu = e->button();
  int x = e->x();
  int y = e->y();
  int gx = e->globalX();
  int gy = e->globalY();
  if (bEventClick){
    bEventClick = false;      
    emit Click(x, y, gx, gy, bu == Qt::LeftButton, bu == Qt::RightButton, bu == Qt::MidButton);

    if (property("Enabled") == true){
      if (property("Checkable") == true){
        setChecked(!property("Checked").toBool());
        //setProperty("Checked", !property("Checked").toBool());
      }

      QString s = property("SoundOnEvent").toString();
      if (!s.isEmpty()){
        Q7B_PlaySound(s);
      }

      setFocus(); 
      emit Event();
    }

  }

  emit MouseUp(x, y, gx, gy, bu == Qt::LeftButton, bu == Qt::RightButton, bu == Qt::MidButton);

}

void focusInEvent ( QFocusEvent * e)
{
  if (e->reason() == Qt::TabFocusReason || e->reason() == Qt::BacktabFocusReason){
    qfocusframe = new QFocusFrame(this->parentWidget());
    qfocusframe->setWidget(this);
    qfocusframe->show();
  }
  
  emit GotFocus();
}

void focusOutEvent ( QFocusEvent * e)
{
  if (qfocusframe){
    delete qfocusframe;
    qfocusframe = 0;
  }

  emit LostFocus();

}

void enterEvent ( QEvent * e)
{
  

  QString s = property("EnterSound").toString();

  //QMessageBox::information(0,"s", s); 

  if (!s.isEmpty()){
   //QMessageBox::information(0,"Q7B_PlaySound=", Q7B_PlaySound(s));
    Q7B_PlaySound(s);
  }

  QString fn;
  if (property("Enabled") == true){
    if (property("Checked") == true){
      fn = property("CheckedEnterImage").toString();         
    } else {
      fn = property("EnterImage").toString();        
    }     
  }

  if (!fn.isEmpty()){
    setImage(fn);
  }

  emit Enter();
}

void leaveEvent ( QEvent * e)
{
  QString s = property("ExitSound").toString();
  if (!s.isEmpty()){
   Q7B_PlaySound(s);
  }

  QString fn;
  if (property("Enabled") == true){
    if (property("Checked") == true){
      fn = property("CheckedeXITImage").toString(); 
      if (!fn.length()) fn = property("CheckedEnabledImage").toString(); 
    } else {
      fn = property("ExitImage").toString();
      if (!fn.length()) fn = property("EnabledImage").toString(); 
    }     
  }

  if (!fn.isEmpty()){
    setImage(fn);
  }

  emit Exit();  
}

void resizeEvent( QResizeEvent *e)
{  
  if (property("Scale") == true){
     setAutoFillBackground(true);
     QPalette p = palette();
     QPixmap pi = p.brush(QPalette::Window).texture();  
     if (!pi.isNull()){
       pi = pi.scaled(width(), height());
       QBrush b(pi);
       p.setBrush(QPalette::Window, b);  
       setPalette(p);
     }
  }

  emit Resize(e->size().width(), e->size().height(), e->oldSize().width(), e->oldSize().height()); 
}


void paintEvent ( QPaintEvent * e)
{
  // emit Paint
  //if (property("DrawOnPaint") == true)
  {
    
    QString s = property("Caption").toString();
    QString s2 = property("Icon").toString();
    if (!s.isEmpty() && !s2.isEmpty()){
      QPainter p(this);
      p.setPen(palette().color(QPalette::ButtonText));
      p.setFont(font());
      p.drawText(0, 0, width(), height(), Qt::AlignCenter, s);
      int x = (width() / 4) - qpixmap.width() * 2;
      if (x - 5 < 0) x = 5;
      p.drawPixmap(x, (height() / 2) - (qpixmap.height() / 2), qpixmap);
    } else if (!s.isEmpty()){
      QPainter p(this);
      p.setPen(palette().color(QPalette::ButtonText));
      p.setFont(font());
      p.drawText(0, 0, width(), height(), Qt::AlignCenter, s);
    } else if (!s2.isEmpty()){
      QPainter p(this);
      p.drawPixmap((width() / 2) - (qpixmap.width() / 2), (height() / 2) - (qpixmap.height() / 2), qpixmap);
    }

  }

}

void mouseDoubleClickEvent ( QMouseEvent * e )
{
  Qt::MouseButton bu = e->button();
  emit DblClick(e->x(), e->y(), e->globalX(), e->globalY(), bu == Qt::LeftButton, bu == Qt::RightButton, bu == Qt::MidButton);
}


 // *** Control signals ***  
protected:
  /*
  virtual void mousePressEvent(QMouseEvent *e){ emit MouseDown(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }
  virtual void mouseDoubleClickEvent(QMouseEvent *e){ emit DblClick(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }   
  virtual void mouseReleaseEvent(QMouseEvent *e){ 
    emit MouseUp(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); 
    emit Click(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton);
  }   
  virtual void focusInEvent(QFocusEvent *e){ emit GotFocus(); }   
  virtual void focusOutEvent(QFocusEvent *e){ emit LostFocus(); }   
  virtual void enterEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void exitEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void resizeEvent(QResizeEvent *e){ emit Resize(e->size().width(), e->size().height(), e->oldSize().width(), e->oldSize().height()); }   
  */
signals:
  void MouseDown(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void Click(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void DblClick(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void MouseUp(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void GotFocus();
  void LostFocus();
  void Enter();
  void Exit();
  void Resize(int Width, int Height, int OldWidth, int OldHeight);  
private:  
 // ***

signals:
void Event();

/*
void MouseDown(int, int, int, int, bool, bool, bool);
void Click(int, int, int, int, bool, bool, bool);
void MouseUp(int, int, int, int, bool, bool, bool);
void GotFocus();
void LostFocus();
void Enter();
void Exit();  
void Resize(int, int, int, int);
void DblClick(int, int, int, int, bool, bool, bool);
*/

/*
void EVENT_OnEvent2(bool b) // needed for updating radio buttons in the same group
{
  
  QString s = GETPROPERTY_Group();
  if (!s.isEmpty()){
    my_form_setImageButtonBooleanValue(my_form, GETPROPERTY_Group(), this, b);
  }  
}
*/



private:



QFocusFrame *qfocusframe;
bool bEventClick;

};

Q7B Q7B_IMAGEBUTTON_INIT(QObject *parent, const char *objectName);
void Q7B_IMAGEBUTTON_CHECKABLE(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_CHECKABLE(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_CHECKABLEEXCLUSIVE(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_CHECKABLEEXCLUSIVE(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_CHECKED(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_CHECKED(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_CAPTION(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_CAPTION(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_ENABLEDIMAGE(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_ENABLEDIMAGE(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_DISABLEDIMAGE(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_DISABLEDIMAGE(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_ENTERIMAGE(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_ENTERIMAGE(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_EXITIMAGE(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_EXITIMAGE(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_MOUSEDOWNIMAGE(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_MOUSEDOWNIMAGE(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_MOUSEUPIMAGE(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_MOUSEUPIMAGE(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_ENTERSOUND(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_ENTERSOUND(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_EXITSOUND(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_EXITSOUND(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_MOUSEDOWNSOUND(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_MOUSEDOWNSOUND(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_MOUSEUPSOUND(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_MOUSEUPSOUND(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_CHECKEDENABLEDIMAGE(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_CHECKEDENABLEDIMAGE(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_CHECKEDDISABLEDIMAGE(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_CHECKEDDISABLEDIMAGE(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_CHECKEDENTERIMAGE(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_CHECKEDENTERIMAGE(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_CHECKEDEXITIMAGE(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_CHECKEDEXITIMAGE(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_CHECKEDMOUSEDOWNIMAGE(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_CHECKEDMOUSEDOWNIMAGE(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_CHECKEDMOUSEUPIMAGE(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_CHECKEDMOUSEUPIMAGE(Q7B q7b_imagebutton);
void Q7B_IMAGEBUTTON_SCALE(Q7B q7b_imagebutton, Q7B v);
Q7B Q7B_IMAGEBUTTON_SCALE(Q7B q7b_imagebutton);

// ******************************************************************************************

// ******************************************************************************************

// *** TEXTBOX ***********************************************************************************

class Q7B_TextBox : public QLineEdit, public Q7B_Control
{
  Q_OBJECT
public:

Q7B_TextBox(QWidget *parent = 0) : QLineEdit (parent), Q7B_Control(this)
{
  Q7B_Control_constructor((QWidget *) this);
}

 // *** Control signals ***  
protected:
  virtual void mousePressEvent(QMouseEvent *e){ emit MouseDown(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }
  virtual void mouseDoubleClickEvent(QMouseEvent *e){ emit DblClick(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }   
  virtual void mouseReleaseEvent(QMouseEvent *e){ 
    emit MouseUp(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); 
    emit Click(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton);
  }   
  virtual void focusInEvent(QFocusEvent *e){ emit GotFocus(); }   
  virtual void focusOutEvent(QFocusEvent *e){ emit LostFocus(); }   
  virtual void enterEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void exitEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void resizeEvent(QResizeEvent *e){ emit Resize(e->size().width(), e->size().height(), e->oldSize().width(), e->oldSize().height()); }   
  
signals:
  void MouseDown(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void Click(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void DblClick(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void MouseUp(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void GotFocus();
  void LostFocus();
  void Enter();
  void Exit();
  void Resize(int Width, int Height, int OldWidth, int OldHeight);  
private:  
 // ***

};

Q7B Q7B_TEXTBOX_INIT(QObject *parent, const char *objectName);

// ******************************************************************************************

// *** COMMANDBUTTON ***********************************************************************************

class Q7B_CommandButton : public QPushButton, public Q7B_Control
{
  Q_OBJECT
public:

Q7B_CommandButton(QWidget *parent = 0) : QPushButton (parent), Q7B_Control(this)
{
  Q7B_Control_constructor((QWidget *) this);

  setProperty("Caption", "");
  setProperty("Key", "");

  connect(this, SIGNAL(clicked(bool)), this, SLOT(_Event(bool)));
}

public slots:
  
  void _Event(bool)
  {
    emit Event();
  }

signals:

void Event();

 // *** Control signals ***  
protected:
  virtual void mousePressEvent(QMouseEvent *e){ emit MouseDown(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }
  virtual void mouseDoubleClickEvent(QMouseEvent *e){ emit DblClick(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }   
  virtual void mouseReleaseEvent(QMouseEvent *e){ 
    emit MouseUp(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); 
    emit Click(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton);
  }   
  virtual void focusInEvent(QFocusEvent *e){ emit GotFocus(); }   
  virtual void focusOutEvent(QFocusEvent *e){ emit LostFocus(); }   
  virtual void enterEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void exitEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void resizeEvent(QResizeEvent *e){ emit Resize(e->size().width(), e->size().height(), e->oldSize().width(), e->oldSize().height()); }   
  
signals:
  void MouseDown(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void Click(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void DblClick(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void MouseUp(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void GotFocus();
  void LostFocus();
  void Enter();
  void Exit();
  void Resize(int Width, int Height, int OldWidth, int OldHeight);  
private:  
 // ***

};

Q7B Q7B_COMMANDBUTTON_INIT(QObject *parent, const char *objectName);
void Q7B_COMMANDBUTTON_ICON(Q7B commandbutton, Q7B Value);
Q7B Q7B_COMMANDBUTTON_ICON(Q7B commandbutton);

// ******************************************************************************************

// *** COMMANDLINKBUTTON ***********************************************************************************

class Q7B_CommandLinkButton : public QCommandLinkButton, public Q7B_Control
{
  Q_OBJECT
public:

Q7B_CommandLinkButton(QWidget *parent = 0) : QCommandLinkButton (parent), Q7B_Control(this)
{
  Q7B_Control_constructor((QWidget *) this);

  connect(this, SIGNAL(clicked(bool)), this, SLOT(_Event(bool)));
}

public slots:
  
  void _Event(bool)
  {
    emit Event();
  }

signals:

void Event();

 // *** Control signals ***  
protected:
  virtual void mousePressEvent(QMouseEvent *e){ emit MouseDown(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }
  virtual void mouseDoubleClickEvent(QMouseEvent *e){ emit DblClick(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }   
  virtual void mouseReleaseEvent(QMouseEvent *e){ 
    emit MouseUp(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); 
    emit Click(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton);
  }   
  virtual void focusInEvent(QFocusEvent *e){ emit GotFocus(); }   
  virtual void focusOutEvent(QFocusEvent *e){ emit LostFocus(); }   
  virtual void enterEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void exitEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void resizeEvent(QResizeEvent *e){ emit Resize(e->size().width(), e->size().height(), e->oldSize().width(), e->oldSize().height()); }   
  
signals:
  void MouseDown(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void Click(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void DblClick(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void MouseUp(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void GotFocus();
  void LostFocus();
  void Enter();
  void Exit();
  void Resize(int Width, int Height, int OldWidth, int OldHeight);  
private:  
 // ***
  

};

Q7B Q7B_COMMANDLINKBUTTON_INIT(QObject *parent, const char *objectName);
void Q7B_COMMANDLINKBUTTON_ICON(Q7B commandlinkbutton, Q7B Value);
Q7B Q7B_COMMANDLINKBUTTON_ICON(Q7B commandlinkbutton);

// ******************************************************************************************

// *** TOOLBUTTON ***********************************************************************************

class Q7B_ToolButton : public QToolButton, public Q7B_Control
{
  Q_OBJECT
public:

Q7B_ToolButton(QWidget *parent = 0) : QToolButton (parent), Q7B_Control(this)
{
  Q7B_Control_constructor((QWidget *) this);

  connect(this, SIGNAL(clicked(bool)), this, SLOT(_Event(bool)));
}

public slots:
  
  void _Event(bool)
  {
    emit Event();
  }

signals:

void Event();

 // *** Control signals ***  
protected:
  virtual void mousePressEvent(QMouseEvent *e){ emit MouseDown(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }
  virtual void mouseDoubleClickEvent(QMouseEvent *e){ emit DblClick(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }   
  virtual void mouseReleaseEvent(QMouseEvent *e){ 
    emit MouseUp(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); 
    emit Click(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton);
  }   
  virtual void focusInEvent(QFocusEvent *e){ emit GotFocus(); }   
  virtual void focusOutEvent(QFocusEvent *e){ emit LostFocus(); }   
  virtual void enterEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void exitEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void resizeEvent(QResizeEvent *e){ emit Resize(e->size().width(), e->size().height(), e->oldSize().width(), e->oldSize().height()); }   
  
signals:
  void MouseDown(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void Click(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void DblClick(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void MouseUp(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void GotFocus();
  void LostFocus();
  void Enter();
  void Exit();
  void Resize(int Width, int Height, int OldWidth, int OldHeight);  
private:  
 // ***
  

};

Q7B Q7B_TOOLBUTTON_INIT(QObject *parent, const char *objectName);
void Q7B_TOOLBUTTON_ICON(Q7B toolbutton, Q7B Value);
Q7B Q7B_TOOLBUTTON_ICON(Q7B toolbutton);

// ******************************************************************************************

// *** CHECKBOX ***********************************************************************************

class Q7B_CheckBox : public QCheckBox, public Q7B_Control
{
  Q_OBJECT
public:

Q7B_CheckBox(QWidget *parent = 0) : QCheckBox (parent), Q7B_Control(this)
{
  Q7B_Control_constructor((QWidget *) this);

  connect(this, SIGNAL(clicked(bool)), this, SLOT(_Event(bool)));
}

public slots:
  
  void _Event(bool)
  {
    emit Event();
  }

signals:

void Event();

 // *** Control signals ***  
protected:
  virtual void mousePressEvent(QMouseEvent *e){ emit MouseDown(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }
  virtual void mouseDoubleClickEvent(QMouseEvent *e){ emit DblClick(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }   
  virtual void mouseReleaseEvent(QMouseEvent *e){ 
    emit MouseUp(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); 
    emit Click(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton);
  }   
  virtual void focusInEvent(QFocusEvent *e){ emit GotFocus(); }   
  virtual void focusOutEvent(QFocusEvent *e){ emit LostFocus(); }   
  virtual void enterEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void exitEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void resizeEvent(QResizeEvent *e){ emit Resize(e->size().width(), e->size().height(), e->oldSize().width(), e->oldSize().height()); }   
  
signals:
  void MouseDown(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void Click(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void DblClick(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void MouseUp(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void GotFocus();
  void LostFocus();
  void Enter();
  void Exit();
  void Resize(int Width, int Height, int OldWidth, int OldHeight);  
private:  
 // ***
  

};

Q7B Q7B_CHECKBOX_INIT(QObject *parent, const char *objectName);
void Q7B_CHECKBOX_ICON(Q7B checkbox, Q7B Value);
Q7B Q7B_CHECKBOX_ICON(Q7B checkbox);

// ******************************************************************************************

// *** RADIOBUTTON ***********************************************************************************

class Q7B_RadioButton : public QRadioButton, public Q7B_Control
{
  Q_OBJECT
public:

Q7B_RadioButton(QWidget *parent = 0) : QRadioButton (parent), Q7B_Control(this)
{
  Q7B_Control_constructor((QWidget *) this);

  connect(this, SIGNAL(clicked(bool)), this, SLOT(_Event(bool)));
}

public slots:
  
  void _Event(bool)
  {
    emit Event();
  }

signals:

void Event();

 // *** Control signals ***  
protected:
  virtual void mousePressEvent(QMouseEvent *e){ emit MouseDown(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }
  virtual void mouseDoubleClickEvent(QMouseEvent *e){ emit DblClick(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }   
  virtual void mouseReleaseEvent(QMouseEvent *e){ 
    emit MouseUp(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); 
    emit Click(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton);
  }   
  virtual void focusInEvent(QFocusEvent *e){ emit GotFocus(); }   
  virtual void focusOutEvent(QFocusEvent *e){ emit LostFocus(); }   
  virtual void enterEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void exitEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void resizeEvent(QResizeEvent *e){ emit Resize(e->size().width(), e->size().height(), e->oldSize().width(), e->oldSize().height()); }   
  
signals:
  void MouseDown(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void Click(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void DblClick(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void MouseUp(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void GotFocus();
  void LostFocus();
  void Enter();
  void Exit();
  void Resize(int Width, int Height, int OldWidth, int OldHeight);  
private:  
 // ***
  

};

Q7B Q7B_RADIOBUTTON_INIT(QObject *parent, const char *objectName);
void Q7B_RADIOBUTTON_ICON(Q7B radiobutton, Q7B Value);
Q7B Q7B_RADIOBUTTON_ICON(Q7B radiobutton);

// ******************************************************************************************

// *** LABEL ***********************************************************************************

class Q7B_Label : public QLabel, public Q7B_Control
{
  Q_OBJECT
public:

Q7B_Label(QWidget *parent = 0) : QLabel (parent), Q7B_Control(this)
{
  Q7B_Control_constructor((QWidget *) this);
}

 // *** Control signals ***  
protected:
  virtual void mousePressEvent(QMouseEvent *e){ emit MouseDown(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }
  virtual void mouseDoubleClickEvent(QMouseEvent *e){ emit DblClick(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }   
  virtual void mouseReleaseEvent(QMouseEvent *e){ 
    emit MouseUp(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); 
    emit Click(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton);
  }   
  virtual void focusInEvent(QFocusEvent *e){ emit GotFocus(); }   
  virtual void focusOutEvent(QFocusEvent *e){ emit LostFocus(); }   
  virtual void enterEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void exitEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void resizeEvent(QResizeEvent *e){ emit Resize(e->size().width(), e->size().height(), e->oldSize().width(), e->oldSize().height()); }   
  
signals:
  void MouseDown(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void Click(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void DblClick(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void MouseUp(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void GotFocus();
  void LostFocus();
  void Enter();
  void Exit();
  void Resize(int Width, int Height, int OldWidth, int OldHeight);  
private:  
 // ***

  

};

Q7B Q7B_LABEL_INIT(QObject *parent, const char *objectName);
void Q7B_LABEL_SHAPE(Q7B q7b_label, Q7B v);
Q7B Q7B_LABEL_SHAPE(Q7B q7b_label);
void Q7B_LABEL_INPUTCONTROL(Q7B q7b_label, Q7B v);
Q7B Q7B_LABEL_INPUTCONTROL(Q7B q7b_label);
void Q7B_LABEL_ICON(Q7B q7b_label, Q7B Value);
Q7B Q7B_LABEL_ICON(Q7B q7b_label);

// ******************************************************************************************

// *** FRAME ***********************************************************************************

class Q7B_Frame : public QGroupBox, public Q7B_Control
{
  Q_OBJECT
public:

Q7B_Frame(QWidget *parent = 0) : QGroupBox (parent), Q7B_Control(this)
{
  Q7B_Control_constructor((QWidget *) this);
}

 // *** Control signals ***  
protected:
  virtual void mousePressEvent(QMouseEvent *e){ emit MouseDown(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }
  virtual void mouseDoubleClickEvent(QMouseEvent *e){ emit DblClick(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }   
  virtual void mouseReleaseEvent(QMouseEvent *e){ 
    emit MouseUp(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); 
    emit Click(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton);
  }   
  virtual void focusInEvent(QFocusEvent *e){ emit GotFocus(); }   
  virtual void focusOutEvent(QFocusEvent *e){ emit LostFocus(); }   
  virtual void enterEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void exitEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void resizeEvent(QResizeEvent *e){ emit Resize(e->size().width(), e->size().height(), e->oldSize().width(), e->oldSize().height()); }   
  
signals:
  void MouseDown(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void Click(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void DblClick(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void MouseUp(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void GotFocus();
  void LostFocus();
  void Enter();
  void Exit();
  void Resize(int Width, int Height, int OldWidth, int OldHeight);  
private:  
 // ***
  
};

Q7B Q7B_FRAME_INIT(QObject *parent, const char *objectName);

// ******************************************************************************************

// *** FORMCLASS ***********************************************************************************

class Q7B_FormClass : public QWidget
{
  Q_OBJECT
public:

Q7B_FormClass(QWidget *parent = 0) : QWidget (parent)
{  
}

private:
  
};

// ******************************************************************************************

// *** UICLASS ***********************************************************************************

class Q7B_uiClass : public QWidget
{
  Q_OBJECT
public:

Q7B_uiClass(QWidget *parent = 0) : QWidget (parent)
{  
}

private:
  
};

Q7B Q7B_UICLASS_INIT(QObject *parent, const char *objectName);

// ******************************************************************************************

// *** CLASS ***********************************************************************************

class Q7B_Class : public QObject
{
  Q_OBJECT
public:

Q7B_Class(QObject *parent = 0) : QObject (parent)
{  
}

private:
  
};

Q7B Q7B_CLASS_INIT(QObject *parent, const char *objectName);

// ******************************************************************************************

// *** MODULE ***********************************************************************************

class Q7B_Module : public QObject
{
  Q_OBJECT
public:

Q7B_Module(QObject *parent = 0) : QObject (parent)
{  
}

private:
  
};

Q7B Q7B_MODULE_INIT(QObject *parent, const char *objectName);

// ******************************************************************************************

// *** IMAGEBOX ***********************************************************************************

class Q7B_ImageBox : public QFrame, public Q7B_Control
{
  Q_OBJECT
public:

Q7B_ImageBox(QWidget *parent = 0) : QFrame (parent), Q7B_Control(this)
{
  Q7B_Control_constructor((QWidget *) this);
}

 // *** Control signals ***  
protected:
  virtual void mousePressEvent(QMouseEvent *e){ emit MouseDown(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }
  virtual void mouseDoubleClickEvent(QMouseEvent *e){ emit DblClick(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); }   
  virtual void mouseReleaseEvent(QMouseEvent *e){ 
    emit MouseUp(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton); 
    emit Click(e->x(), e->y(), e->globalX(), e->globalY(), e->buttons() & Qt::LeftButton, e->buttons() & Qt::RightButton, e->buttons() & Qt::MidButton);
  }   
  virtual void focusInEvent(QFocusEvent *e){ emit GotFocus(); }   
  virtual void focusOutEvent(QFocusEvent *e){ emit LostFocus(); }   
  virtual void enterEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void exitEvent(QFocusEvent *e){ emit Enter(); }   
  virtual void resizeEvent(QResizeEvent *e){ emit Resize(e->size().width(), e->size().height(), e->oldSize().width(), e->oldSize().height()); }   
  
signals:
  void MouseDown(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void Click(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void DblClick(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void MouseUp(int X, int Y, int GlobalX, int GlobalY, bool LeftButton, bool RightButton, bool MidButton);
  void GotFocus();
  void LostFocus();
  void Enter();
  void Exit();
  void Resize(int Width, int Height, int OldWidth, int OldHeight);  
private:  
 // ***
  
};

Q7B Q7B_IMAGEBOX_INIT(QObject *parent, const char *objectName);
void Q7B_IMAGEBOX_VALUE(Q7B q7b_imagebox, Q7B v);
Q7B Q7B_IMAGEBOX_VALUE(Q7B q7b_imagebox);
void Q7B_IMAGEBOX_TEXT(Q7B q7b_imagebox, Q7B v);
Q7B Q7B_IMAGEBOX_TEXT(Q7B q7b_imagebox);

// ******************************************************************************************

// *** UDPSOCKET ***********************************************************************************

// TODO2 EventOnOpen wie in kbasic

class Q7B_UdpSocket: public QObject //: public Q7B_Control
{
  Q_OBJECT

public:

  Q7B_UdpSocket()
  {        
  //  ControlType ="UdpSocket";  
  //  Enabled = true;

    t = new QUdpSocket(this);
    nPort = 0;
    a = 0; a2 = 0;
   
    connect(t, SIGNAL(readyRead()), this, SLOT(_Event()));
    connect(t, SIGNAL(readyRead()), this, SLOT(_SoundEvent()));
    connect(t, SIGNAL(connected()), this, SLOT(_Open()));
    connect(t, SIGNAL(disconnected()), this, SLOT(_Close()));
    connect(t, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(_Error()));
  }

  ~Q7B_UdpSocket()
  {
    delete t;    
  }

signals:
  void Event();
  void Error();
  void Open();
  void Close();

public slots:
  
  void _SoundOnEvent()
  {
    /* TODO
  #ifdef RUN
    QString s = GETPROPERTY_SoundOnEvent();
    if (!s.isEmpty()){
      EXTERN_my_sounds->playOnce(s);
    }
  #endif
    */
  }

  void _Event()
  {
    emit Event();
  }

  void _Error()
  {
    emit Error();
  }

  void _Open()
  {
    emit Open();
  }

  void _Close()
  {
    emit Close();
  }

public:  
  //bool Enabled;

  QUdpSocket *t;
  QHostAddress *a;
  qint64 nPort;

  QHostAddress *a2;
  qint64 nPort2;

  QString sHost;
  //QString sPort;
};

Q7B Q7B_UDPSOCKET_INIT(QObject *parent, const char *objectName);
Q7B Q7B_UDPSOCKET_OPEN(Q7B q7b_udpsocket);
Q7B Q7B_UDPSOCKET_BIND(Q7B q7b_udpsocket, Q7B Host, Q7B Port);
Q7B Q7B_UDPSOCKET_READDATA(Q7B q7b_udpsocket);
Q7B Q7B_UDPSOCKET_WRITEDATA(Q7B q7b_udpsocket, Q7B Data);
void Q7B_UDPSOCKET_CLOSE(Q7B q7b_udpsocket);
Q7B Q7B_UDPSOCKET_LASTERROR(Q7B q7b_udpsocket);
Q7B Q7B_UDPSOCKET_LASTERRORTEXT(Q7B q7b_udpsocket);
void Q7B_UDPSOCKET_HOST(Q7B q7b_udpsocket, Q7B v);
Q7B Q7B_UDPSOCKET_HOST(Q7B q7b_udpsocket);
void Q7B_UDPSOCKET_PORT(Q7B q7b_udpsocket, Q7B v);
Q7B Q7B_UDPSOCKET_PORT(Q7B q7b_udpsocket);

// ******************************************************************************************

class Q7B_Screen: public QWidget
{
    Q_OBJECT
public:
  
Q7B_Screen(QWidget *parent = 0);
~Q7B_Screen();

void focusInEvent (QFocusEvent *e);
void focusOutEvent (QFocusEvent *e);
void hideEvent (QHideEvent *e);

void setWindowIcon2();

void activate();
void deactivate();

void setActiveW();
bool isActivated();

void pressAnyKey(bool bPrintText = true);
void clearLastLine();

void line(bool step, int x1, int y1, 
         bool step2, bool expression, int x2, int y2, 
         bool bColor, int color, bool b, bool bf, bool bStyle, int style);
void color(int forecolor, int backcolor);
void cls(int no);
void beep();
char *inkey(int *nKeyPressed);
void print(const char *s);
void print(const QString & s);
char *input();
int pos();
void locate(int y, int x);
int csrlin();
void setActivated(bool b);

// not supported yet:
void circle(bool step, int x, int y, int radius, int color, int start, int end, int aspect);
void paint(bool step, int x, int y, int color, char *pattern, int bordercolor, int backcolor);
void viewprint(int no);
void viewscreen(int no);
void window(int no);
void pmap(int no);
void point(int no);
void draw(int no);
void get(int no);
void put(int no);
void key(int no);

void preset(bool step, int x, int y, int color);
void pset(bool step, int x, int y, bool bColor, int color);
void palette(int no);
void sound(int no);
void play(int no);
void view(int no);

void printScreen(bool bDialog);


void test1();
void test2();

bool bHide;

void captureScreen();


public slots:
void aboutToQuit();


private:


QPixmap m2;


void paintEvent(QPaintEvent *);
void timerEvent( QTimerEvent * );

int nCurrentScreen;
int nForecolor;
int nBackcolor;





void incCursorX();
void incCursorY();
void decCursorX();
void decCursorY();


void setCursorX(int n);
void setCursorY(int n);



void keyPressEvent( QKeyEvent * e);
void keyReleaseEvent ( QKeyEvent * e );

void closeEvent ( QCloseEvent * e );

static int abs(int n);


int getCursorX();
int getCursorY();

int nCursorX;
int nCursorY;
bool bCursor;
QFont font;

int nFontWidth;
int nFontHeight;

bool bActivated;
bool bWasActivated;

bool bCTRL;
bool bSHIFT;

int nTimerId;
int nInput;
int nInput2;
QString sInput;
bool bInputted;

int getWidth;
int getHeight;
int getColumn;
int getLine;

QColor colors[256];

QPainter p2;

qreal PI;

};

void Q7B_SHOWSCREEN();
void Q7B_HIDESCREEN();
void Q7B_CLOSESCREEN();
void Q7B_CLS();
void Q7B_LINE(Q7B x1, Q7B y1, Q7B x2, Q7B y2, Q7B bColor, Q7B color);
void Q7B_PSET(Q7B x1, Q7B y1, Q7B bColor, Q7B color);
Q7B Q7B_CSRLIN();
Q7B Q7B_POS();
void Q7B_COLOR(Q7B nFORE, Q7B nBACK);
void Q7B_PRINTSCREEN(Q7B bPrintDialog);
void Q7B_LOCATE(Q7B Y, Q7B X);
void Q7B_PRINT(Q7B Q7B_Object);

// ******************************************************************************************

class Q7BDebugListener : public QObject
{   
  Q_OBJECT

public:

Q7BDebugListener(QObject *parent = 0) : QObject (parent)
{  
}

void init();

public slots:

  void fileChanged ( const QString  & path);
  
public:
 QFileSystemWatcher watch;

};

//void Q7BE(QString sFile, QString sScope, QString sLine/*, QString sType*/);
bool Q7BS(QString sFile, QString sScope, QString sLine, QString sType);




// Begin Generator h#6

Q7B Q7B_FORMCLASS_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QLISTQSTRINGLIST_INIT(QObject *parent, const char *objectName); // generated




Q7B Q7B_QDATETIMEEDIT_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QACCESSIBLEEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QACTIONEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QCHILDEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QCUSTOMEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QDECLARATIVECONTEXT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QDRAGLEAVEEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QDROPEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QDYNAMICPROPERTYCHANGEEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QFILEOPENEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QGRAPHICSSCENEEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QHELPEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QHIDEEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QHOVEREVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QICONDRAGEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QINPUTMETHODEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QMOVEEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QPRINTPREVIEWDIALOG_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QPRINTERINFO_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSHORTCUTEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSHOWEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSTATUSTIPEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTIMEREVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QWHATSTHISCLICKEDEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QWINDOWSTATECHANGEEVENT_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QSYSTEMTRAYICON_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QCLIPBOARD_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QDRAG_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QFONTDATABASE_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QFTP_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QHOSTADDRESS_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QLINE_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QLOCALSERVER_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QLOCALSOCKET_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QNETWORKSESSION_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QREGEXPVALIDATOR_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QRESOURCE_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QRUBBERBAND_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSESSIONMANAGER_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSIZEGRIP_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSIZEPOLICY_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSOUND_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSTACKEDLAYOUT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSYSTEMLOCALE_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTIMELINE_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QPEN_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QPOLYGON_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTEXTDOCUMENTFRAGMENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTEXTFRAMEFORMAT_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QLAYOUTITEM_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QITEMSELECTIONMODEL_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QMIMEDATA_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTEXTBLOCKFORMAT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTEXTCHARFORMAT_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QABSTRACTPRINTDIALOG_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QINTVALIDATOR_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QPRINTDIALOG_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QABSTRACTITEMMODEL_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QACTIONGROUP_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QCOMPLETER_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QCOREAPPLICATION_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QPRINTPREVIEWWIDGET_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QURLINFO_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QMODELINDEX_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QABSTRACTITEMVIEW_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QHEADERVIEW_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QINPUTDIALOG_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QVALIDATOR_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QFILEINFOLIST_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QSPLITTERHANDLE_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QTABLEWIDGETITEM_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QNETWORKREQUEST_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QWEBSETTINGS_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QABSTRACTTEXTDOCUMENTLAYOUT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QPRINTER_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSIZEF_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTEXTFORMAT_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QTEXTCURSOR_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTEXTOPTION_INIT(QObject *parent, const char *objectName); // generated

Q7B Q7B_QURL_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QBITMAP_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QBOXLAYOUT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QBRUSH_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QBYTEARRAY_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QCHAR_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QCLOSEEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QCOLOR_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QCONTEXTMENUEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QCURSOR_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QDATE_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QDATETIME_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QDIR_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QELAPSEDTIMER_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QFILEINFO_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QFILESYSTEMWATCHER_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QFOCUSEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QFONT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QFONTINFO_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QFONTMETRICS_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QHOSTINFO_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QICON_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QIMAGE_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QINPUTEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QKEYSEQUENCE_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QLISTWIDGETITEM_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QLOCALE_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QMARGINS_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QMATRIX_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QMDISUBWINDOW_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QMENUBAR_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QMOVIE_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QPAINTEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QPALETTE_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QPICTURE_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QPIXMAP_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QPIXMAP_INIT(QObject *parent, const char *objectName, Q7B v); // generated
Q7B Q7B_QPOINT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QPROCESS_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QPROCESSENVIRONMENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QPROGRESSDIALOG_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QRECT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QREGEXP_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QREGION_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QRESIZEEVENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QRGB_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSIGNALMAPPER_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSIZE_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSPLASHSCREEN_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSPLITTER_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSTATUSBAR_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSTRING_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSTRINGLIST_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QSVGWIDGET_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTABBAR_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTEXTBLOCK_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTEXTDOCUMENT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTHREAD_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTIME_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTIMER_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTOOLBAR_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTRANSFORM_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QTREEWIDGETITEM_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QVARIANT_INIT(QObject *parent, const char *objectName); // generated
Q7B Q7B_QWEBPAGE_INIT(QObject *parent, const char *objectName); // generated
// End Generator h#6


void Q7B_QABSTRACTBUTTON_ANIMATECLICK(Q7B self, Q7B MiliSeconds); // generated
Q7B Q7B_QABSTRACTBUTTON_AUTOEXCLUSIVE(Q7B self); // generated
void Q7B_QABSTRACTBUTTON_AUTOEXCLUSIVE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QABSTRACTBUTTON_AUTOREPEAT(Q7B self); // generated
void Q7B_QABSTRACTBUTTON_AUTOREPEAT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QABSTRACTBUTTON_AUTOREPEATDELAY(Q7B self); // generated
void Q7B_QABSTRACTBUTTON_AUTOREPEATDELAY(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QABSTRACTBUTTON_AUTOREPEATINTERVAL(Q7B self); // generated
void Q7B_QABSTRACTBUTTON_AUTOREPEATINTERVAL(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QABSTRACTBUTTON_CHECKABLE(Q7B self); // generated
void Q7B_QABSTRACTBUTTON_CHECKABLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QABSTRACTBUTTON_CHECKED(Q7B self); // generated
void Q7B_QABSTRACTBUTTON_CHECKED(Q7B self, Q7B theProperty); // generated
void Q7B_QABSTRACTBUTTON_CLICK(Q7B self); // generated
Q7B Q7B_QABSTRACTBUTTON_DOWN(Q7B self); // generated
void Q7B_QABSTRACTBUTTON_DOWN(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QABSTRACTBUTTON_GROUP(Q7B self); // generated
Q7B Q7B_QABSTRACTBUTTON_ICON(Q7B self); // generated
Q7B Q7B_QABSTRACTBUTTON_ICONSIZE(Q7B self); // generated
void Q7B_QABSTRACTBUTTON_ICONSIZE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QABSTRACTBUTTON_SHORTCUT(Q7B self); // generated
void Q7B_QABSTRACTBUTTON_SHORTCUT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QABSTRACTBUTTON_TEXT(Q7B self); // generated
void Q7B_QABSTRACTBUTTON_TEXT(Q7B self, Q7B theProperty); // generated
void Q7B_QABSTRACTBUTTON_TOGGLE(Q7B self); // generated
Q7B Q7B_QCALENDARWIDGET_DATEEDITACCEPTDELAY(Q7B self); // generated
void Q7B_QCALENDARWIDGET_DATEEDITACCEPTDELAY(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QCALENDARWIDGET_DATEEDITENABLED(Q7B self); // generated
void Q7B_QCALENDARWIDGET_DATEEDITENABLED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QCALENDARWIDGET_GRIDVISIBLE(Q7B self); // generated
void Q7B_QCALENDARWIDGET_GRIDVISIBLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QCALENDARWIDGET_MAXIMUMDATE(Q7B self); // generated
void Q7B_QCALENDARWIDGET_MAXIMUMDATE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QCALENDARWIDGET_MINIMUMDATE(Q7B self); // generated
void Q7B_QCALENDARWIDGET_MINIMUMDATE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QCALENDARWIDGET_MONTHSHOWN(Q7B self); // generated
Q7B Q7B_QCALENDARWIDGET_NAVIGATIONBARVISIBLE(Q7B self); // generated
void Q7B_QCALENDARWIDGET_NAVIGATIONBARVISIBLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QCALENDARWIDGET_SELECTEDDATE(Q7B self); // generated
void Q7B_QCALENDARWIDGET_SETCURRENTPAGE(Q7B self, Q7B Year, Q7B Month); // generated
void Q7B_QCALENDARWIDGET_SETDATERANGE(Q7B self, Q7B Minimum, Q7B Maximum); // generated
void Q7B_QCALENDARWIDGET_SETSELECTEDDATE(Q7B self, Q7B Date); // generated
void Q7B_QCALENDARWIDGET_SHOWNEXTMONTH(Q7B self); // generated
void Q7B_QCALENDARWIDGET_SHOWNEXTYEAR(Q7B self); // generated
void Q7B_QCALENDARWIDGET_SHOWPREVIOUSMONTH(Q7B self); // generated
void Q7B_QCALENDARWIDGET_SHOWPREVIOUSYEAR(Q7B self); // generated
void Q7B_QCALENDARWIDGET_SHOWSELECTEDDATE(Q7B self); // generated
void Q7B_QCALENDARWIDGET_SHOWTODAY(Q7B self); // generated
Q7B Q7B_QCALENDARWIDGET_YEARSHOWN(Q7B self); // generated
Q7B Q7B_QCHAR_HASMIRRORED(Q7B self); // generated
Q7B Q7B_QCHAR_ISDIGIT(Q7B self); // generated
Q7B Q7B_QCHAR_ISHIGHSURROGATE(Q7B self); // generated
Q7B Q7B_QCHAR_ISLETTER(Q7B self); // generated
Q7B Q7B_QCHAR_ISLETTERORNUMBER(Q7B self); // generated
Q7B Q7B_QCHAR_ISLOWSURROGATE(Q7B self); // generated
Q7B Q7B_QCHAR_ISLOWER(Q7B self); // generated
Q7B Q7B_QCHAR_ISMARK(Q7B self); // generated
Q7B Q7B_QCHAR_ISNULL(Q7B self); // generated
Q7B Q7B_QCHAR_ISNUMBER(Q7B self); // generated
Q7B Q7B_QCHAR_ISPRINT(Q7B self); // generated
Q7B Q7B_QCHAR_ISPUNCT(Q7B self); // generated
Q7B Q7B_QCHAR_ISSPACE(Q7B self); // generated
Q7B Q7B_QCHAR_ISSYMBOL(Q7B self); // generated
Q7B Q7B_QCHAR_ISTITLECASE(Q7B self); // generated
Q7B Q7B_QCHAR_ISUPPER(Q7B self); // generated
Q7B Q7B_QCHAR_MIRROREDCHAR(Q7B self); // generated
Q7B Q7B_QCHAR_TOCASEFOLDED(Q7B self); // generated
Q7B Q7B_QCHAR_TOLOWER(Q7B self); // generated
Q7B Q7B_QCHAR_TOTITLECASE(Q7B self); // generated
Q7B Q7B_QCHAR_TOUPPER(Q7B self); // generated
Q7B Q7B_QCHECKBOX_CHECKSTATE(Q7B self); // generated
void Q7B_QCHECKBOX_SETCHECKSTATE(Q7B self, Q7B State); // generated
Q7B Q7B_QCHECKBOX_TRISTATE(Q7B self); // generated
void Q7B_QCHECKBOX_TRISTATE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDATE_ADDDAYS(Q7B self, Q7B NumberDays); // generated
Q7B Q7B_QDATE_ADDMONTHS(Q7B self, Q7B NumberMonths); // generated
Q7B Q7B_QDATE_ADDYEARS(Q7B self, Q7B NumberYears); // generated
Q7B Q7B_QDATE_DAY(Q7B self); // generated
Q7B Q7B_QDATE_DAYOFWEEK(Q7B self); // generated
Q7B Q7B_QDATE_DAYOFYEAR(Q7B self); // generated
Q7B Q7B_QDATE_DAYSINMONTH(Q7B self); // generated
Q7B Q7B_QDATE_DAYSINYEAR(Q7B self); // generated
Q7B Q7B_QDATE_DAYSTO(Q7B self, Q7B Date); // generated
Q7B Q7B_QDATE_ISNULL(Q7B self); // generated
Q7B Q7B_QDATE_ISVALID(Q7B self); // generated
Q7B Q7B_QDATE_MONTH(Q7B self); // generated
Q7B Q7B_QDATE_SETDATE(Q7B self, Q7B Year, Q7B Month, Q7B Day); // generated
Q7B Q7B_QDATE_TOJULIANDAY(Q7B self); // generated
Q7B Q7B_QDATE_TOSTRING(Q7B self, Q7B Format); // generated
Q7B Q7B_QDATE_YEAR(Q7B self); // generated
Q7B Q7B_QDATETIME_ADDDAYS(Q7B self, Q7B NumberDays); // generated
Q7B Q7B_QDATETIME_ADDMSECS(Q7B self, Q7B Milliseconds); // generated
Q7B Q7B_QDATETIME_ADDMONTHS(Q7B self, Q7B NumberMonths); // generated
Q7B Q7B_QDATETIME_ADDSECS(Q7B self, Q7B NumberSeconds); // generated
Q7B Q7B_QDATETIME_ADDYEARS(Q7B self, Q7B NumberYears); // generated
Q7B Q7B_QDATETIME_DATE(Q7B self); // generated
Q7B Q7B_QDATETIME_DAYSTO(Q7B self, Q7B Other); // generated
Q7B Q7B_QDATETIME_ISNULL(Q7B self); // generated
Q7B Q7B_QDATETIME_ISVALID(Q7B self); // generated
Q7B Q7B_QDATETIME_MSECSTO(Q7B self, Q7B Other); // generated
Q7B Q7B_QDATETIME_SECSTO(Q7B self, Q7B Other); // generated
void Q7B_QDATETIME_SETDATE(Q7B self, Q7B Date); // generated
void Q7B_QDATETIME_SETMSECSSINCEEPOCH(Q7B self, Q7B Milliseconds); // generated
void Q7B_QDATETIME_SETTIME(Q7B self, Q7B Time); // generated
Q7B Q7B_QDATETIME_TIME(Q7B self); // generated
Q7B Q7B_QDATETIME_TOLOCALTIME(Q7B self); // generated
Q7B Q7B_QDATETIME_TOMSECSSINCEEPOCH(Q7B self); // generated
Q7B Q7B_QDATETIME_TOSTRING(Q7B self, Q7B Format); // generated

Q7B Q7B_QDIAL_NOTCHSIZE(Q7B self); // generated
void Q7B_QDIAL_NOTCHSIZE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDIAL_NOTCHTARGET(Q7B self); // generated
void Q7B_QDIAL_NOTCHTARGET(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDIAL_NOTCHESVISIBLE(Q7B self); // generated
void Q7B_QDIAL_NOTCHESVISIBLE(Q7B self, Q7B theProperty); // generated
void Q7B_QDIAL_SETNOTCHESVISIBLE(Q7B self, Q7B Visible); // generated
void Q7B_QDIAL_SETWRAPPING(Q7B self, Q7B On); // generated
Q7B Q7B_QDIAL_WRAPPING(Q7B self); // generated
void Q7B_QDIAL_WRAPPING(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDOCKWIDGET_ALLOWEDAREAS(Q7B self); // generated
void Q7B_QDOCKWIDGET_ALLOWEDAREAS(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDOCKWIDGET_FEATURES(Q7B self); // generated
void Q7B_QDOCKWIDGET_FEATURES(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDOCKWIDGET_FLOATING(Q7B self); // generated
void Q7B_QDOCKWIDGET_FLOATING(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDOCKWIDGET_ISAREAALLOWED(Q7B self, Q7B Area); // generated
void Q7B_QDOCKWIDGET_SETFEATURES(Q7B self, Q7B Features); // generated
void Q7B_QDOCKWIDGET_SETTITLEBARWIDGET(Q7B self, Q7B Widget); // generated
void Q7B_QDOCKWIDGET_SETWIDGET(Q7B self, Q7B Widget); // generated
Q7B Q7B_QDOCKWIDGET_TITLEBARWIDGET(Q7B self); // generated
Q7B Q7B_QDOCKWIDGET_TOGGLEVIEWACTION(Q7B self); // generated
Q7B Q7B_QDOCKWIDGET_WIDGET(Q7B self); // generated
Q7B Q7B_QDOCKWIDGET_WINDOWTITLE(Q7B self); // generated
void Q7B_QDOCKWIDGET_WINDOWTITLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QELAPSEDTIMER_ELAPSED(Q7B self); // generated
Q7B Q7B_QELAPSEDTIMER_HASEXPIRED(Q7B self, Q7B Timeout); // generated
void Q7B_QELAPSEDTIMER_INVALIDATE(Q7B self); // generated
Q7B Q7B_QELAPSEDTIMER_ISVALID(Q7B self); // generated
Q7B Q7B_QELAPSEDTIMER_MSECSSINCEREFERENCE(Q7B self); // generated
Q7B Q7B_QELAPSEDTIMER_MSECSTO(Q7B self, Q7B Other); // generated
Q7B Q7B_QELAPSEDTIMER_RESTART(Q7B self); // generated
Q7B Q7B_QELAPSEDTIMER_SECSTO(Q7B self, Q7B Other); // generated
void Q7B_QELAPSEDTIMER_START(Q7B self); // generated
Q7B Q7B_QFILEINFO_ABSOLUTEDIR(Q7B self); // generated
Q7B Q7B_QFILEINFO_ABSOLUTEFILEPATH(Q7B self); // generated
Q7B Q7B_QFILEINFO_ABSOLUTEPATH(Q7B self); // generated
Q7B Q7B_QFILEINFO_BASENAME(Q7B self); // generated
Q7B Q7B_QFILEINFO_BUNDLENAME(Q7B self); // generated
Q7B Q7B_QFILEINFO_CACHING(Q7B self); // generated
Q7B Q7B_QFILEINFO_CANONICALFILEPATH(Q7B self); // generated
Q7B Q7B_QFILEINFO_CANONICALPATH(Q7B self); // generated
Q7B Q7B_QFILEINFO_COMPLETEBASENAME(Q7B self); // generated
Q7B Q7B_QFILEINFO_COMPLETESUFFIX(Q7B self); // generated
Q7B Q7B_QFILEINFO_CREATED(Q7B self); // generated
Q7B Q7B_QFILEINFO_DIR(Q7B self); // generated
Q7B Q7B_QFILEINFO_EXISTS(Q7B self); // generated
Q7B Q7B_QFILEINFO_FILENAME(Q7B self); // generated
Q7B Q7B_QFILEINFO_FILEPATH(Q7B self); // generated
Q7B Q7B_QFILEINFO_GROUP(Q7B self); // generated
Q7B Q7B_QFILEINFO_GROUPID(Q7B self); // generated
Q7B Q7B_QFILEINFO_ISABSOLUTE(Q7B self); // generated
Q7B Q7B_QFILEINFO_ISBUNDLE(Q7B self); // generated
Q7B Q7B_QFILEINFO_ISDIR(Q7B self); // generated
Q7B Q7B_QFILEINFO_ISEXECUTABLE(Q7B self); // generated
Q7B Q7B_QFILEINFO_ISFILE(Q7B self); // generated
Q7B Q7B_QFILEINFO_ISHIDDEN(Q7B self); // generated
Q7B Q7B_QFILEINFO_ISREADABLE(Q7B self); // generated
Q7B Q7B_QFILEINFO_ISRELATIVE(Q7B self); // generated
Q7B Q7B_QFILEINFO_ISROOT(Q7B self); // generated
Q7B Q7B_QFILEINFO_ISSYMLINK(Q7B self); // generated
Q7B Q7B_QFILEINFO_ISWRITABLE(Q7B self); // generated
Q7B Q7B_QFILEINFO_LASTMODIFIED(Q7B self); // generated
Q7B Q7B_QFILEINFO_LASTREAD(Q7B self); // generated
Q7B Q7B_QFILEINFO_MAKEABSOLUTE(Q7B self); // generated
Q7B Q7B_QFILEINFO_OWNER(Q7B self); // generated
Q7B Q7B_QFILEINFO_OWNERID(Q7B self); // generated
Q7B Q7B_QFILEINFO_PATH(Q7B self); // generated
Q7B Q7B_QFILEINFO_PERMISSION(Q7B self, Q7B Permissions); // generated
Q7B Q7B_QFILEINFO_PERMISSIONS(Q7B self); // generated
void Q7B_QFILEINFO_REFRESH(Q7B self); // generated
void Q7B_QFILEINFO_SETCACHING(Q7B self, Q7B Enable); // generated
void Q7B_QFILEINFO_SETFILE(Q7B self, Q7B File); // generated
Q7B Q7B_QFILEINFO_SIZE(Q7B self); // generated
Q7B Q7B_QFILEINFO_SUFFIX(Q7B self); // generated
Q7B Q7B_QFILEINFO_SYMLINKTARGET(Q7B self); // generated
void Q7B_QFILESYSTEMWATCHER_ADDPATH(Q7B self, Q7B Path); // generated
void Q7B_QFILESYSTEMWATCHER_ADDPATHS(Q7B self, Q7B Paths); // generated
Q7B Q7B_QFILESYSTEMWATCHER_DIRECTORIES(Q7B self); // generated
Q7B Q7B_QFILESYSTEMWATCHER_FILES(Q7B self); // generated
void Q7B_QFILESYSTEMWATCHER_REMOVEPATH(Q7B self, Q7B Path); // generated
void Q7B_QFILESYSTEMWATCHER_REMOVEPATHS(Q7B self, Q7B Paths); // generated
Q7B Q7B_QFRAME_FRAMERECT(Q7B self); // generated
void Q7B_QFRAME_FRAMERECT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QFRAME_FRAMESHADOW(Q7B self); // generated
void Q7B_QFRAME_FRAMESHADOW(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QFRAME_FRAMESHAPE(Q7B self); // generated
void Q7B_QFRAME_FRAMESHAPE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QFRAME_FRAMESTYLE(Q7B self); // generated
Q7B Q7B_QFRAME_FRAMEWIDTH(Q7B self); // generated
void Q7B_QFRAME_FRAMEWIDTH(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QFRAME_LINEWIDTH(Q7B self); // generated
void Q7B_QFRAME_LINEWIDTH(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QFRAME_MIDLINEWIDTH(Q7B self); // generated
void Q7B_QFRAME_MIDLINEWIDTH(Q7B self, Q7B theProperty); // generated
void Q7B_QFRAME_SETFRAMESTYLE(Q7B self, Q7B Style); // generated
Q7B Q7B_QGROUPBOX_ALIGNMENT(Q7B self); // generated
void Q7B_QGROUPBOX_ALIGNMENT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QGROUPBOX_CHECKABLE(Q7B self); // generated
void Q7B_QGROUPBOX_CHECKABLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QGROUPBOX_CHECKED(Q7B self); // generated
void Q7B_QGROUPBOX_CHECKED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QGROUPBOX_FLAT(Q7B self); // generated
void Q7B_QGROUPBOX_FLAT(Q7B self, Q7B theProperty); // generated
void Q7B_QGROUPBOX_SETCHECKED(Q7B self, Q7B Checked); // generated
Q7B Q7B_QGROUPBOX_TITLE(Q7B self); // generated
void Q7B_QGROUPBOX_TITLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QHOSTINFO_ERROR(Q7B self); // generated
Q7B Q7B_QHOSTINFO_ERRORSTRING(Q7B self); // generated
Q7B Q7B_QHOSTINFO_HOSTNAME(Q7B self); // generated
Q7B Q7B_QHOSTINFO_LOOKUPID(Q7B self); // generated
void Q7B_QHOSTINFO_SETERROR(Q7B self, Q7B Error); // generated
void Q7B_QHOSTINFO_SETERRORSTRING(Q7B self, Q7B Str); // generated
void Q7B_QHOSTINFO_SETHOSTNAME(Q7B self, Q7B HostName); // generated
void Q7B_QHOSTINFO_SETLOOKUPID(Q7B self, Q7B Id); // generated
Q7B Q7B_QIMAGE_ALLGRAY(Q7B self); // generated
Q7B Q7B_QIMAGE_BITPLANECOUNT(Q7B self); // generated
Q7B Q7B_QIMAGE_BYTECOUNT(Q7B self); // generated
Q7B Q7B_QIMAGE_BYTESPERLINE(Q7B self); // generated
Q7B Q7B_QIMAGE_CACHEKEY(Q7B self); // generated
Q7B Q7B_QIMAGE_COLOR(Q7B self, Q7B I); // generated
Q7B Q7B_QIMAGE_COLORCOUNT(Q7B self); // generated
Q7B Q7B_QIMAGE_CONVERTTOFORMAT(Q7B self, Q7B Format, Q7B Flags); // generated
Q7B Q7B_QIMAGE_COPY(Q7B self, Q7B X, Q7B Y, Q7B Width, Q7B Height); // generated
Q7B Q7B_QIMAGE_CREATEALPHAMASK(Q7B self, Q7B Flags); // generated
Q7B Q7B_QIMAGE_CREATEHEURISTICMASK(Q7B self, Q7B ClipTight); // generated
Q7B Q7B_QIMAGE_CREATEMASKFROMCOLOR(Q7B self, Q7B Color, Q7B Mode); // generated
Q7B Q7B_QIMAGE_DEPTH(Q7B self); // generated
Q7B Q7B_QIMAGE_DOTSPERMETERX(Q7B self); // generated
Q7B Q7B_QIMAGE_DOTSPERMETERY(Q7B self); // generated
void Q7B_QIMAGE_FILL(Q7B self, Q7B PixelValue); // generated
Q7B Q7B_QIMAGE_FORMAT(Q7B self); // generated
Q7B Q7B_QIMAGE_HASALPHACHANNEL(Q7B self); // generated
Q7B Q7B_QIMAGE_HEIGHT(Q7B self); // generated
void Q7B_QIMAGE_INVERTPIXELS(Q7B self, Q7B Mode); // generated
Q7B Q7B_QIMAGE_ISGRAYSCALE(Q7B self); // generated
Q7B Q7B_QIMAGE_ISNULL(Q7B self); // generated
Q7B Q7B_QIMAGE_LOAD(Q7B self, Q7B FileName, Q7B Format); // generated
Q7B Q7B_QIMAGE_LOADFROMDATA(Q7B self, Q7B Data, Q7B Format); // generated
Q7B Q7B_QIMAGE_MIRRORED(Q7B self, Q7B Horizontal, Q7B Vertical); // generated
Q7B Q7B_QIMAGE_OFFSET(Q7B self); // generated
Q7B Q7B_QIMAGE_PIXEL(Q7B self, Q7B X, Q7B Y); // generated
Q7B Q7B_QIMAGE_PIXELINDEX(Q7B self, Q7B Position); // generated
Q7B Q7B_QIMAGE_RECT(Q7B self); // generated
Q7B Q7B_QIMAGE_RGBSWAPPED(Q7B self); // generated
Q7B Q7B_QIMAGE_SAVE(Q7B self, Q7B FileName, Q7B Format, Q7B Quality); // generated
Q7B Q7B_QIMAGE_SCALED(Q7B self, Q7B Width, Q7B Heigth, Q7B AspectRatioMode, Q7B TransformMode); // generated
Q7B Q7B_QIMAGE_SCALEDTOHEIGHT(Q7B self, Q7B Height, Q7B Mode); // generated
Q7B Q7B_QIMAGE_SCALEDTOWIDTH(Q7B self, Q7B Width, Q7B Mode); // generated
void Q7B_QIMAGE_SETCOLOR(Q7B self, Q7B Index, Q7B ColorValue); // generated
void Q7B_QIMAGE_SETCOLORCOUNT(Q7B self, Q7B ColorCount); // generated
void Q7B_QIMAGE_SETDOTSPERMETERX(Q7B self, Q7B X); // generated
void Q7B_QIMAGE_SETDOTSPERMETERY(Q7B self, Q7B Y); // generated
void Q7B_QIMAGE_SETOFFSET(Q7B self, Q7B Offset); // generated
void Q7B_QIMAGE_SETPIXEL(Q7B self, Q7B X, Q7B Y, Q7B IndexOrRgb); // generated
void Q7B_QIMAGE_SETTEXT(Q7B self, Q7B Key, Q7B Text); // generated
Q7B Q7B_QIMAGE_SIZE(Q7B self); // generated
Q7B Q7B_QIMAGE_TEXT(Q7B self, Q7B Key); // generated
Q7B Q7B_QIMAGE_TEXTKEYS(Q7B self); // generated
Q7B Q7B_QIMAGE_TRANSFORMED(Q7B self, Q7B Matrix, Q7B Mode); // generated
Q7B Q7B_QIMAGE_VALID(Q7B self, Q7B X, Q7B Y); // generated
Q7B Q7B_QIMAGE_WIDTH(Q7B self); // generated
Q7B Q7B_QLCDNUMBER_CHECKOVERFLOW(Q7B self, Q7B Number); // generated
Q7B Q7B_QLCDNUMBER_CHECKOVERFLOW2(Q7B self, Q7B Number); // generated
Q7B Q7B_QLCDNUMBER_DIGITCOUNT(Q7B self); // generated
void Q7B_QLCDNUMBER_DIGITCOUNT(Q7B self, Q7B theProperty); // generated
void Q7B_QLCDNUMBER_DISPLAY(Q7B self, Q7B Text); // generated
void Q7B_QLCDNUMBER_DISPLAY2(Q7B self, Q7B Number); // generated
Q7B Q7B_QLCDNUMBER_INTVALUE(Q7B self); // generated
void Q7B_QLCDNUMBER_INTVALUE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QLCDNUMBER_MODE(Q7B self); // generated
void Q7B_QLCDNUMBER_MODE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QLCDNUMBER_SEGMENTSTYLE(Q7B self); // generated
void Q7B_QLCDNUMBER_SEGMENTSTYLE(Q7B self, Q7B theProperty); // generated
void Q7B_QLCDNUMBER_SETBINMODE(Q7B self); // generated
void Q7B_QLCDNUMBER_SETDECMODE(Q7B self); // generated
void Q7B_QLCDNUMBER_SETHEXMODE(Q7B self); // generated
void Q7B_QLCDNUMBER_SETOCTMODE(Q7B self); // generated
void Q7B_QLCDNUMBER_SETSMALLDECIMALPOINT(Q7B self, Q7B Enable); // generated
Q7B Q7B_QLCDNUMBER_SMALLDECIMALPOINT(Q7B self); // generated
void Q7B_QLCDNUMBER_SMALLDECIMALPOINT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QLCDNUMBER_VALUE(Q7B self); // generated
void Q7B_QLCDNUMBER_VALUE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QLABEL_ALIGNMENT(Q7B self); // generated
void Q7B_QLABEL_ALIGNMENT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QLABEL_BUDDY(Q7B self); // generated
void Q7B_QLABEL_CLEAR(Q7B self); // generated
Q7B Q7B_QLABEL_HASSCALEDCONTENTS(Q7B self); // generated
Q7B Q7B_QLABEL_HASSELECTEDTEXT(Q7B self); // generated
Q7B Q7B_QLABEL_INDENT(Q7B self); // generated
void Q7B_QLABEL_INDENT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QLABEL_MARGIN(Q7B self); // generated
void Q7B_QLABEL_MARGIN(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QLABEL_MOVIE(Q7B self); // generated
Q7B Q7B_QLABEL_OPENEXTERNALLINKS(Q7B self); // generated
void Q7B_QLABEL_OPENEXTERNALLINKS(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QLABEL_PICTURE(Q7B self); // generated
Q7B Q7B_QLABEL_PIXMAP(Q7B self); // generated
Q7B Q7B_QLABEL_SCALEDCONTENTS(Q7B self); // generated
void Q7B_QLABEL_SCALEDCONTENTS(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QLABEL_SELECTEDTEXT(Q7B self); // generated
void Q7B_QLABEL_SELECTEDTEXT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QLABEL_SELECTIONSTART(Q7B self); // generated
void Q7B_QLABEL_SETBUDDY(Q7B self, Q7B Buddy); // generated
void Q7B_QLABEL_SETMOVIE(Q7B self, Q7B Movie); // generated
void Q7B_QLABEL_SETNUM(Q7B self, Q7B Num); // generated
void Q7B_QLABEL_SETPICTURE(Q7B self, Q7B Picture); // generated
void Q7B_QLABEL_SETPIXMAP(Q7B self, Q7B Pixmap); // generated
void Q7B_QLABEL_SETSELECTION(Q7B self, Q7B Start, Q7B Length); // generated
void Q7B_QLABEL_SETTEXT(Q7B self, Q7B Text); // generated
Q7B Q7B_QLABEL_TEXT(Q7B self); // generated
void Q7B_QLABEL_TEXT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QLABEL_TEXTFORMAT(Q7B self); // generated
void Q7B_QLABEL_TEXTFORMAT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QLABEL_TEXTINTERACTIONFLAGS(Q7B self); // generated
void Q7B_QLABEL_TEXTINTERACTIONFLAGS(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QLABEL_WORDWRAP(Q7B self); // generated
void Q7B_QLISTWIDGET_ADDITEM(Q7B self, Q7B Item); // generated
void Q7B_QLISTWIDGET_ADDITEMS(Q7B self, Q7B Labels); // generated
void Q7B_QLISTWIDGET_CLEAR(Q7B self); // generated
void Q7B_QLISTWIDGET_CLOSEPERSISTENTEDITOR(Q7B self, Q7B Item); // generated
Q7B Q7B_QLISTWIDGET_COUNT(Q7B self); // generated
void Q7B_QLISTWIDGET_COUNT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QLISTWIDGET_CURRENTITEM(Q7B self); // generated
Q7B Q7B_QLISTWIDGET_CURRENTROW(Q7B self); // generated
void Q7B_QLISTWIDGET_CURRENTROW(Q7B self, Q7B theProperty); // generated
void Q7B_QLISTWIDGET_EDITITEM(Q7B self, Q7B Item); // generated
Q7B Q7B_QLISTWIDGET_FINDITEMS(Q7B self, Q7B Text, Q7B Flags); // generated
void Q7B_QLISTWIDGET_INSERTITEM(Q7B self, Q7B Row, Q7B theLabel); // generated
void Q7B_QLISTWIDGET_INSERTITEMS(Q7B self, Q7B Row, Q7B Labels); // generated
Q7B Q7B_QLISTWIDGET_ITEM(Q7B self, Q7B Row); // generated
Q7B Q7B_QLISTWIDGET_ITEMAT(Q7B self, Q7B X, Q7B Y); // generated
Q7B Q7B_QLISTWIDGET_ITEMWIDGET(Q7B self, Q7B Item); // generated
void Q7B_QLISTWIDGET_OPENPERSISTENTEDITOR(Q7B self, Q7B Item); // generated
void Q7B_QLISTWIDGET_REMOVEITEMWIDGET(Q7B self, Q7B Item); // generated
Q7B Q7B_QLISTWIDGET_ROW(Q7B self, Q7B Item); // generated
void Q7B_QLISTWIDGET_SCROLLTOITEM(Q7B self, Q7B Item, Q7B Hint); // generated
Q7B Q7B_QLISTWIDGET_SELECTEDITEMS(Q7B self); // generated
void Q7B_QLISTWIDGET_SETCURRENTITEM(Q7B self, Q7B Item, Q7B Command); // generated
void Q7B_QLISTWIDGET_SETCURRENTROW(Q7B self, Q7B Row, Q7B Command); // generated
void Q7B_QLISTWIDGET_SETITEMWIDGET(Q7B self, Q7B Item, Q7B Widget); // generated
void Q7B_QLISTWIDGET_SORTITEMS(Q7B self, Q7B Order); // generated
Q7B Q7B_QLISTWIDGET_SORTINGENABLED(Q7B self); // generated
void Q7B_QLISTWIDGET_SORTINGENABLED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QLISTWIDGET_TAKEITEM(Q7B self, Q7B Row); // generated
Q7B Q7B_QLISTWIDGET_VISUALITEMRECT(Q7B self, Q7B Item); // generated
Q7B Q7B_QLISTWIDGETITEM_BACKGROUND(Q7B self); // generated
Q7B Q7B_QLISTWIDGETITEM_CHECKSTATE(Q7B self); // generated
Q7B Q7B_QLISTWIDGETITEM_DATA(Q7B self, Q7B Role); // generated
Q7B Q7B_QLISTWIDGETITEM_FLAGS(Q7B self); // generated
Q7B Q7B_QLISTWIDGETITEM_FONT(Q7B self); // generated
Q7B Q7B_QLISTWIDGETITEM_FOREGROUND(Q7B self); // generated
Q7B Q7B_QLISTWIDGETITEM_ICON(Q7B self); // generated
Q7B Q7B_QLISTWIDGETITEM_ISHIDDEN(Q7B self); // generated
Q7B Q7B_QLISTWIDGETITEM_ISSELECTED(Q7B self); // generated
Q7B Q7B_QLISTWIDGETITEM_LISTWIDGET(Q7B self); // generated
void Q7B_QLISTWIDGETITEM_SETBACKGROUND(Q7B self, Q7B Brush); // generated
void Q7B_QLISTWIDGETITEM_SETCHECKSTATE(Q7B self, Q7B State); // generated
void Q7B_QLISTWIDGETITEM_SETDATA(Q7B self, Q7B Role, Q7B Value); // generated
void Q7B_QLISTWIDGETITEM_SETFLAGS(Q7B self, Q7B Flags); // generated
void Q7B_QLISTWIDGETITEM_SETFONT (Q7B self, Q7B Font); // generated
void Q7B_QLISTWIDGETITEM_SETFOREGROUND(Q7B self, Q7B Brush); // generated
void Q7B_QLISTWIDGETITEM_SETHIDDEN(Q7B self, Q7B Hide); // generated
void Q7B_QLISTWIDGETITEM_SETICON(Q7B self, Q7B Icon); // generated
void Q7B_QLISTWIDGETITEM_SETSELECTED(Q7B self, Q7B Select); // generated
void Q7B_QLISTWIDGETITEM_SETSIZEHINT(Q7B self, Q7B Size); // generated
void Q7B_QLISTWIDGETITEM_SETSTATUSTIP(Q7B self, Q7B StatusTip); // generated
void Q7B_QLISTWIDGETITEM_SETTEXT(Q7B self, Q7B Text); // generated
void Q7B_QLISTWIDGETITEM_SETTEXTALIGNMENT(Q7B self, Q7B Alignment); // generated
void Q7B_QLISTWIDGETITEM_SETTOOLTIP(Q7B self, Q7B Tooltip); // generated
void Q7B_QLISTWIDGETITEM_SETWHATSTHIS(Q7B self, Q7B WhatsThis); // generated
Q7B Q7B_QLISTWIDGETITEM_SIZEHINT(Q7B self); // generated
Q7B Q7B_QLISTWIDGETITEM_STATUSTIP(Q7B self); // generated
Q7B Q7B_QLISTWIDGETITEM_TEXT(Q7B self); // generated
Q7B Q7B_QLISTWIDGETITEM_TEXTALIGNMENT(Q7B self); // generated
Q7B Q7B_QLISTWIDGETITEM_TOOLTIP(Q7B self); // generated
Q7B Q7B_QLISTWIDGETITEM_TYPE(Q7B self); // generated
Q7B Q7B_QLISTWIDGETITEM_WHATSTHIS(Q7B self); // generated
Q7B Q7B_QLOCALE_AMTEXT(Q7B self); // generated
Q7B Q7B_QLOCALE_BCP47NAME(Q7B self); // generated
Q7B Q7B_QLOCALE_COUNTRY(Q7B self); // generated
Q7B Q7B_QLOCALE_CREATESEPARATEDLIST(Q7B self, Q7B ItemList); // generated
Q7B Q7B_QLOCALE_CURRENCYSYMBOL(Q7B self, Q7B Format); // generated
Q7B Q7B_QLOCALE_DATEFORMAT(Q7B self, Q7B Format); // generated
Q7B Q7B_QLOCALE_DATETIMEFORMAT(Q7B self, Q7B Format); // generated
Q7B Q7B_QLOCALE_DAYNAME(Q7B self, Q7B Day, Q7B Type); // generated
Q7B Q7B_QLOCALE_DECIMALPOINT(Q7B self); // generated
Q7B Q7B_QLOCALE_EXPONENTIAL(Q7B self); // generated
Q7B Q7B_QLOCALE_FIRSTDAYOFWEEK(Q7B self); // generated
Q7B Q7B_QLOCALE_GROUPSEPARATOR(Q7B self); // generated
Q7B Q7B_QLOCALE_LANGUAGE(Q7B self); // generated
Q7B Q7B_QLOCALE_MEASUREMENTSYSTEM(Q7B self); // generated
Q7B Q7B_QLOCALE_MONTHNAME(Q7B self, Q7B Month, Q7B Type); // generated
Q7B Q7B_QLOCALE_NAME(Q7B self); // generated
Q7B Q7B_QLOCALE_NATIVECOUNTRYNAME(Q7B self); // generated
Q7B Q7B_QLOCALE_NATIVELANGUAGENAME(Q7B self); // generated
Q7B Q7B_QLOCALE_NEGATIVESIGN(Q7B self); // generated
Q7B Q7B_QLOCALE_NUMBEROPTIONS(Q7B self); // generated
Q7B Q7B_QLOCALE_PERCENT(Q7B self); // generated
Q7B Q7B_QLOCALE_PMTEXT(Q7B self); // generated
Q7B Q7B_QLOCALE_POSITIVESIGN(Q7B self); // generated
Q7B Q7B_QLOCALE_QUOTESTRING(Q7B self, Q7B Str, Q7B Style); // generated
Q7B Q7B_QLOCALE_SCRIPT(Q7B self); // generated
void Q7B_QLOCALE_SETNUMBEROPTIONS(Q7B self, Q7B Options); // generated
Q7B Q7B_QLOCALE_STANDALONEDAYNAME(Q7B self, Q7B Day, Q7B Type); // generated
Q7B Q7B_QLOCALE_STANDALONEMONTHNAME(Q7B self, Q7B Month, Q7B Type); // generated
Q7B Q7B_QLOCALE_TEXTDIRECTION(Q7B self); // generated
Q7B Q7B_QLOCALE_TIMEFORMAT(Q7B self, Q7B Format); // generated
Q7B Q7B_QLOCALE_TOCURRENCYSTRING(Q7B self, Q7B Value, Q7B Symbol); // generated
Q7B Q7B_QLOCALE_TOCURRENCYSTRING2(Q7B self, Q7B Value, Q7B Symbol); // generated
Q7B Q7B_QLOCALE_TODATE(Q7B self, Q7B DateString, Q7B Format); // generated
Q7B Q7B_QLOCALE_TODATE2(Q7B self, Q7B DateString, Q7B Format); // generated
Q7B Q7B_QLOCALE_TODATETIME(Q7B self, Q7B DateString, Q7B Format); // generated
Q7B Q7B_QLOCALE_TODATETIME2(Q7B self, Q7B DateString, Q7B Format); // generated
Q7B Q7B_QLOCALE_TODOUBLE(Q7B self, Q7B S, Q7B Ok); // generated
Q7B Q7B_QLOCALE_TOLONGLONG(Q7B self, Q7B S, Q7B Ok, Q7B Base); // generated
Q7B Q7B_QLOCALE_TOLOWER(Q7B self, Q7B Str); // generated
Q7B Q7B_QLOCALE_TOSTRING(Q7B self, Q7B I); // generated
Q7B Q7B_QLOCALE_TOSTRING2(Q7B self, Q7B Date, Q7B Format); // generated
Q7B Q7B_QLOCALE_TOSTRING3(Q7B self, Q7B Date, Q7B Format); // generated
Q7B Q7B_QLOCALE_TOSTRING4(Q7B self, Q7B Time, Q7B Format); // generated
Q7B Q7B_QLOCALE_TOSTRING5(Q7B self, Q7B Time, Q7B Format); // generated
Q7B Q7B_QLOCALE_TOSTRING6(Q7B self, Q7B DateTime, Q7B Format); // generated
Q7B Q7B_QLOCALE_TOSTRING7(Q7B self, Q7B DateTime, Q7B Format); // generated
Q7B Q7B_QLOCALE_TOSTRING8(Q7B self, Q7B I, Q7B F, Q7B Prec); // generated
Q7B Q7B_QLOCALE_TOTIME(Q7B self, Q7B TimeString, Q7B Format); // generated
Q7B Q7B_QLOCALE_TOUPPER(Q7B self, Q7B Str); // generated
Q7B Q7B_QLOCALE_UILANGUAGES(Q7B self); // generated
Q7B Q7B_QLOCALE_WEEKDAYS(Q7B self); // generated
Q7B Q7B_QLOCALE_ZERODIGIT(Q7B self); // generated
void Q7B_QMAINWINDOW_ADDDOCKWIDGET(Q7B self, Q7B Area, Q7B DockWidget, Q7B Orientation); // generated
Q7B Q7B_QMAINWINDOW_ADDTOOLBAR(Q7B self, Q7B Title); // generated
void Q7B_QMAINWINDOW_ADDTOOLBARBREAK(Q7B self, Q7B Area); // generated
Q7B Q7B_QMAINWINDOW_ANIMATED(Q7B self); // generated
void Q7B_QMAINWINDOW_ANIMATED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QMAINWINDOW_CENTRALWIDGET(Q7B self); // generated
Q7B Q7B_QMAINWINDOW_CORNER(Q7B self, Q7B Corner); // generated
Q7B Q7B_QMAINWINDOW_DOCKNESTINGENABLED(Q7B self); // generated
void Q7B_QMAINWINDOW_DOCKNESTINGENABLED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QMAINWINDOW_DOCKOPTIONS(Q7B self); // generated
void Q7B_QMAINWINDOW_DOCKOPTIONS(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QMAINWINDOW_DOCKWIDGETAREA(Q7B self, Q7B DockWidget); // generated
Q7B Q7B_QMAINWINDOW_DOCUMENTMODE(Q7B self); // generated
void Q7B_QMAINWINDOW_DOCUMENTMODE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QMAINWINDOW_ICONSIZE(Q7B self); // generated
void Q7B_QMAINWINDOW_ICONSIZE(Q7B self, Q7B theProperty); // generated
void Q7B_QMAINWINDOW_INSERTTOOLBAR(Q7B self, Q7B Before, Q7B ToolBar); // generated
void Q7B_QMAINWINDOW_INSERTTOOLBARBREAK(Q7B self, Q7B Before); // generated
Q7B Q7B_QMAINWINDOW_MENUBAR(Q7B self); // generated
Q7B Q7B_QMAINWINDOW_MENUWIDGET(Q7B self); // generated
void Q7B_QMAINWINDOW_REMOVEDOCKWIDGET(Q7B self, Q7B DockWidget); // generated
void Q7B_QMAINWINDOW_REMOVETOOLBAR(Q7B self, Q7B ToolBar); // generated
void Q7B_QMAINWINDOW_REMOVETOOLBARBREAK(Q7B self, Q7B Before); // generated
Q7B Q7B_QMAINWINDOW_RESTOREDOCKWIDGET(Q7B self, Q7B DockWidget); // generated
Q7B Q7B_QMAINWINDOW_RESTORESTATE(Q7B self, Q7B State, Q7B Version); // generated
Q7B Q7B_QMAINWINDOW_SAVESTATE(Q7B self, Q7B Version); // generated
void Q7B_QMAINWINDOW_SETANIMATED(Q7B self, Q7B Enabled); // generated
void Q7B_QMAINWINDOW_SETCENTRALWIDGET(Q7B self, Q7B Widget); // generated
void Q7B_QMAINWINDOW_SETCORNER(Q7B self, Q7B Corner, Q7B Area); // generated
void Q7B_QMAINWINDOW_SETDOCKNESTINGENABLED(Q7B self, Q7B Enabled); // generated
void Q7B_QMAINWINDOW_SETMENUBAR(Q7B self, Q7B MenuBar); // generated
void Q7B_QMAINWINDOW_SETMENUWIDGET(Q7B self, Q7B MenuBar); // generated
void Q7B_QMAINWINDOW_SETSTATUSBAR(Q7B self, Q7B StatusBar); // generated
void Q7B_QMAINWINDOW_SETTABPOSITION(Q7B self, Q7B Areas, Q7B TabPosition); // generated
void Q7B_QMAINWINDOW_SETTABSHAPE(Q7B self, Q7B TabShape); // generated
void Q7B_QMAINWINDOW_SPLITDOCKWIDGET(Q7B self, Q7B First, Q7B Second, Q7B Orientation); // generated
Q7B Q7B_QMAINWINDOW_STATUSBAR(Q7B self); // generated
Q7B Q7B_QMAINWINDOW_TABPOSITION(Q7B self, Q7B Area); // generated
Q7B Q7B_QMAINWINDOW_TABSHAPE(Q7B self); // generated
Q7B Q7B_QMAINWINDOW_TABIFIEDDOCKWIDGETS(Q7B self, Q7B DockWidget); // generated
void Q7B_QMAINWINDOW_TABIFYDOCKWIDGET(Q7B self, Q7B First, Q7B Second); // generated
Q7B Q7B_QMAINWINDOW_TOOLBARAREA(Q7B self, Q7B ToolBar); // generated
Q7B Q7B_QMAINWINDOW_TOOLBARBREAK(Q7B self, Q7B ToolBar); // generated
Q7B Q7B_QMAINWINDOW_TOOLBUTTONSTYLE(Q7B self); // generated
void Q7B_QMAINWINDOW_TOOLBUTTONSTYLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QMAINWINDOW_UNIFIEDTITLEANDTOOLBARONMAC(Q7B self); // generated
void Q7B_QMAINWINDOW_UNIFIEDTITLEANDTOOLBARONMAC(Q7B self, Q7B theProperty); // generated
void Q7B_QMDIAREA_ACTIVATENEXTSUBWINDOW(Q7B self); // generated
void Q7B_QMDIAREA_ACTIVATEPREVIOUSSUBWINDOW(Q7B self); // generated
Q7B Q7B_QMDIAREA_ACTIVATIONORDER(Q7B self); // generated
void Q7B_QMDIAREA_ACTIVATIONORDER(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QMDIAREA_ACTIVESUBWINDOW(Q7B self); // generated
Q7B Q7B_QMDIAREA_ADDSUBWINDOW(Q7B self, Q7B Widget, Q7B WindowFlags); // generated
Q7B Q7B_QMDIAREA_BACKGROUND(Q7B self); // generated
void Q7B_QMDIAREA_BACKGROUND(Q7B self, Q7B theProperty); // generated
void Q7B_QMDIAREA_CASCADESUBWINDOWS(Q7B self); // generated
void Q7B_QMDIAREA_CLOSEACTIVESUBWINDOW(Q7B self); // generated
void Q7B_QMDIAREA_CLOSEALLSUBWINDOWS(Q7B self); // generated
Q7B Q7B_QMDIAREA_DOCUMENTMODE(Q7B self); // generated
void Q7B_QMDIAREA_DOCUMENTMODE(Q7B self, Q7B theProperty); // generated
void Q7B_QMDIAREA_REMOVESUBWINDOW(Q7B self, Q7B Widget); // generated
void Q7B_QMDIAREA_SETACTIVESUBWINDOW(Q7B self, Q7B Window); // generated
void Q7B_QMDIAREA_SETOPTION(Q7B self, Q7B Option, Q7B On); // generated
Q7B Q7B_QMDIAREA_SUBWINDOWLIST(Q7B self, Q7B Order); // generated
Q7B Q7B_QMDIAREA_TABPOSITION(Q7B self); // generated
void Q7B_QMDIAREA_TABPOSITION(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QMDIAREA_TABSHAPE(Q7B self); // generated
void Q7B_QMDIAREA_TABSHAPE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QMDIAREA_TESTOPTION(Q7B self, Q7B Option); // generated
void Q7B_QMDIAREA_TILESUBWINDOWS(Q7B self); // generated
Q7B Q7B_QMDIAREA_VIEWMODE(Q7B self); // generated
void Q7B_QMDIAREA_VIEWMODE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QMDISUBWINDOW_ISSHADED(Q7B self); // generated
Q7B Q7B_QMDISUBWINDOW_KEYBOARDPAGESTEP(Q7B self); // generated
void Q7B_QMDISUBWINDOW_KEYBOARDPAGESTEP(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QMDISUBWINDOW_KEYBOARDSINGLESTEP(Q7B self); // generated
void Q7B_QMDISUBWINDOW_KEYBOARDSINGLESTEP(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QMDISUBWINDOW_MDIAREA(Q7B self); // generated
void Q7B_QMDISUBWINDOW_SETOPTION(Q7B self, Q7B Option, Q7B On); // generated
void Q7B_QMDISUBWINDOW_SETSYSTEMMENU(Q7B self, Q7B SystemMenu); // generated
void Q7B_QMDISUBWINDOW_SETWIDGET(Q7B self, Q7B Widget); // generated
void Q7B_QMDISUBWINDOW_SHOWSHADED(Q7B self); // generated
void Q7B_QMDISUBWINDOW_SHOWSYSTEMMENU(Q7B self); // generated
Q7B Q7B_QMDISUBWINDOW_SYSTEMMENU(Q7B self); // generated
Q7B Q7B_QMDISUBWINDOW_TESTOPTION(Q7B self, Q7B Option); // generated
Q7B Q7B_QMDISUBWINDOW_WIDGET(Q7B self); // generated
Q7B Q7B_QMOVIE_BACKGROUNDCOLOR(Q7B self); // generated
Q7B Q7B_QMOVIE_CACHEMODE(Q7B self); // generated
void Q7B_QMOVIE_CACHEMODE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QMOVIE_CURRENTFRAMENUMBER(Q7B self); // generated
Q7B Q7B_QMOVIE_CURRENTIMAGE(Q7B self); // generated
Q7B Q7B_QMOVIE_CURRENTPIXMAP(Q7B self); // generated
Q7B Q7B_QMOVIE_FILENAME(Q7B self); // generated
Q7B Q7B_QMOVIE_FORMAT(Q7B self); // generated
Q7B Q7B_QMOVIE_FRAMECOUNT(Q7B self); // generated
Q7B Q7B_QMOVIE_FRAMERECT(Q7B self); // generated
Q7B Q7B_QMOVIE_ISVALID(Q7B self); // generated
Q7B Q7B_QMOVIE_JUMPTOFRAME(Q7B self, Q7B FrameNumber); // generated
Q7B Q7B_QMOVIE_JUMPTONEXTFRAME(Q7B self); // generated
Q7B Q7B_QMOVIE_LOOPCOUNT(Q7B self); // generated
Q7B Q7B_QMOVIE_NEXTFRAMEDELAY(Q7B self); // generated
Q7B Q7B_QMOVIE_SCALEDSIZE(Q7B self); // generated
void Q7B_QMOVIE_SETBACKGROUNDCOLOR(Q7B self, Q7B Color); // generated
void Q7B_QMOVIE_SETFILENAME(Q7B self, Q7B FileName); // generated
void Q7B_QMOVIE_SETFORMAT(Q7B self, Q7B Format); // generated
void Q7B_QMOVIE_SETPAUSED(Q7B self, Q7B Paused); // generated
void Q7B_QMOVIE_SETSCALEDSIZE(Q7B self, Q7B Size); // generated
void Q7B_QMOVIE_SETSPEED(Q7B self, Q7B PercentSpeed); // generated
Q7B Q7B_QMOVIE_SPEED(Q7B self); // generated
void Q7B_QMOVIE_SPEED(Q7B self, Q7B theProperty); // generated
void Q7B_QMOVIE_START(Q7B self); // generated
Q7B Q7B_QMOVIE_STATE(Q7B self); // generated
void Q7B_QMOVIE_STOP(Q7B self); // generated
void Q7B_QPROCESS_CLOSEREADCHANNEL(Q7B self, Q7B Channel); // generated
void Q7B_QPROCESS_CLOSEWRITECHANNEL(Q7B self); // generated
Q7B Q7B_QPROCESS_EXITCODE(Q7B self); // generated
Q7B Q7B_QPROCESS_EXITSTATUS(Q7B self); // generated
void Q7B_QPROCESS_KILL(Q7B self); // generated
Q7B Q7B_QPROCESS_NATIVEARGUMENTS(Q7B self); // generated
Q7B Q7B_QPROCESS_PID(Q7B self); // generated
Q7B Q7B_QPROCESS_PROCESSCHANNELMODE(Q7B self); // generated
Q7B Q7B_QPROCESS_PROCESSENVIRONMENT(Q7B self); // generated
Q7B Q7B_QPROCESS_READALLSTANDARDERROR(Q7B self); // generated
Q7B Q7B_QPROCESS_READALLSTANDARDOUTPUT(Q7B self); // generated
Q7B Q7B_QPROCESS_READCHANNEL(Q7B self); // generated
void Q7B_QPROCESS_SETNATIVEARGUMENTS(Q7B self, Q7B Arguments); // generated
void Q7B_QPROCESS_SETPROCESSCHANNELMODE(Q7B self, Q7B Mode); // generated
void Q7B_QPROCESS_SETPROCESSENVIRONMENT(Q7B self, Q7B Environment); // generated
void Q7B_QPROCESS_SETREADCHANNEL(Q7B self, Q7B Channel); // generated
void Q7B_QPROCESS_SETSTANDARDERRORFILE(Q7B self, Q7B FileName, Q7B Mode); // generated
void Q7B_QPROCESS_SETSTANDARDINPUTFILE(Q7B self, Q7B FileName); // generated
void Q7B_QPROCESS_SETSTANDARDOUTPUTFILE(Q7B self, Q7B FileName, Q7B Mode); // generated
void Q7B_QPROCESS_SETSTANDARDOUTPUTPROCESS(Q7B self, Q7B Destination); // generated
void Q7B_QPROCESS_SETWORKINGDIRECTORY(Q7B self, Q7B theDir); // generated
void Q7B_QPROCESS_START(Q7B self, Q7B Program, Q7B Mode); // generated
Q7B Q7B_QPROCESS_STATE(Q7B self); // generated
void Q7B_QPROCESS_TERMINATE(Q7B self); // generated
Q7B Q7B_QPROCESS_WAITFORFINISHED(Q7B self, Q7B Msecs); // generated
Q7B Q7B_QPROCESS_WAITFORSTARTED(Q7B self, Q7B Msecs); // generated
Q7B Q7B_QPROCESS_WORKINGDIRECTORY(Q7B self); // generated
void Q7B_QPROCESSENVIRONMENT_CLEAR(Q7B self); // generated
Q7B Q7B_QPROCESSENVIRONMENT_CONTAINS(Q7B self, Q7B Name); // generated
void Q7B_QPROCESSENVIRONMENT_INSERT(Q7B self, Q7B Name, Q7B Value); // generated
Q7B Q7B_QPROCESSENVIRONMENT_ISEMPTY(Q7B self); // generated
Q7B Q7B_QPROCESSENVIRONMENT_KEYS(Q7B self); // generated
void Q7B_QPROCESSENVIRONMENT_REMOVE(Q7B self, Q7B Name); // generated
Q7B Q7B_QPROCESSENVIRONMENT_TOSTRINGLIST(Q7B self); // generated
Q7B Q7B_QPROCESSENVIRONMENT_VALUE(Q7B self, Q7B Name, Q7B DefaultValue); // generated
Q7B Q7B_QPROGRESSBAR_ALIGNMENT(Q7B self); // generated
void Q7B_QPROGRESSBAR_ALIGNMENT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPROGRESSBAR_FORMAT(Q7B self); // generated
void Q7B_QPROGRESSBAR_FORMAT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPROGRESSBAR_INVERTEDAPPEARANCE(Q7B self); // generated
void Q7B_QPROGRESSBAR_INVERTEDAPPEARANCE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPROGRESSBAR_MAXIMUM(Q7B self); // generated
void Q7B_QPROGRESSBAR_MAXIMUM(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPROGRESSBAR_MINIMUM(Q7B self); // generated
void Q7B_QPROGRESSBAR_MINIMUM(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPROGRESSBAR_ORIENTATION(Q7B self); // generated
void Q7B_QPROGRESSBAR_ORIENTATION(Q7B self, Q7B theProperty); // generated
void Q7B_QPROGRESSBAR_RESET(Q7B self); // generated
void Q7B_QPROGRESSBAR_SETMAXIMUM(Q7B self, Q7B Maximum); // generated
void Q7B_QPROGRESSBAR_SETMINIMUM(Q7B self, Q7B Minimum); // generated
void Q7B_QPROGRESSBAR_SETORIENTATION(Q7B self, Q7B a0); // generated
void Q7B_QPROGRESSBAR_SETRANGE(Q7B self, Q7B Minimum, Q7B Maximum); // generated
void Q7B_QPROGRESSBAR_SETVALUE(Q7B self, Q7B Value); // generated
Q7B Q7B_QPROGRESSBAR_TEXT(Q7B self); // generated
void Q7B_QPROGRESSBAR_TEXT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPROGRESSBAR_TEXTDIRECTION(Q7B self); // generated
void Q7B_QPROGRESSBAR_TEXTDIRECTION(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPROGRESSBAR_TEXTVISIBLE(Q7B self); // generated
void Q7B_QPROGRESSBAR_TEXTVISIBLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPROGRESSBAR_VALUE(Q7B self); // generated
void Q7B_QPROGRESSBAR_VALUE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPROGRESSDIALOG_AUTOCLOSE(Q7B self); // generated
void Q7B_QPROGRESSDIALOG_AUTOCLOSE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPROGRESSDIALOG_AUTORESET(Q7B self); // generated
void Q7B_QPROGRESSDIALOG_AUTORESET(Q7B self, Q7B theProperty); // generated
void Q7B_QPROGRESSDIALOG_CANCEL(Q7B self); // generated
Q7B Q7B_QPROGRESSDIALOG_LABELTEXT(Q7B self); // generated
void Q7B_QPROGRESSDIALOG_LABELTEXT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPROGRESSDIALOG_MAXIMUM(Q7B self); // generated
void Q7B_QPROGRESSDIALOG_MAXIMUM(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPROGRESSDIALOG_MINIMUM(Q7B self); // generated
void Q7B_QPROGRESSDIALOG_MINIMUM(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPROGRESSDIALOG_MINIMUMDURATION(Q7B self); // generated
void Q7B_QPROGRESSDIALOG_MINIMUMDURATION(Q7B self, Q7B theProperty); // generated
void Q7B_QPROGRESSDIALOG_OPEN(Q7B self, Q7B Receiver, Q7B Member); // generated
void Q7B_QPROGRESSDIALOG_RESET(Q7B self); // generated
void Q7B_QPROGRESSDIALOG_SETBAR(Q7B self, Q7B Bar); // generated
void Q7B_QPROGRESSDIALOG_SETCANCELBUTTON(Q7B self, Q7B CancelButton); // generated
void Q7B_QPROGRESSDIALOG_SETCANCELBUTTONTEXT(Q7B self, Q7B CancelButtonText); // generated
void Q7B_QPROGRESSDIALOG_SETLABEL(Q7B self, Q7B Label); // generated
void Q7B_QPROGRESSDIALOG_SETLABELTEXT(Q7B self, Q7B Text); // generated
void Q7B_QPROGRESSDIALOG_SETMAXIMUM(Q7B self, Q7B Maximum); // generated
void Q7B_QPROGRESSDIALOG_SETMINIMUM(Q7B self, Q7B Minimum); // generated
void Q7B_QPROGRESSDIALOG_SETMINIMUMDURATION(Q7B self, Q7B Ms); // generated
void Q7B_QPROGRESSDIALOG_SETRANGE(Q7B self, Q7B Minimum, Q7B Maximum); // generated
void Q7B_QPROGRESSDIALOG_SETVALUE(Q7B self, Q7B Progress); // generated
Q7B Q7B_QPROGRESSDIALOG_VALUE(Q7B self); // generated
void Q7B_QPROGRESSDIALOG_VALUE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPROGRESSDIALOG_WASCANCELED(Q7B self); // generated
void Q7B_QPROGRESSDIALOG_WASCANCELED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPUSHBUTTON_AUTODEFAULT(Q7B self); // generated
void Q7B_QPUSHBUTTON_AUTODEFAULT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPUSHBUTTON_DEFAULT(Q7B self); // generated
void Q7B_QPUSHBUTTON_DEFAULT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPUSHBUTTON_FLAT(Q7B self); // generated
void Q7B_QPUSHBUTTON_FLAT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPUSHBUTTON_MENU(Q7B self); // generated
void Q7B_QPUSHBUTTON_SETMENU(Q7B self, Q7B Menu); // generated
void Q7B_QPUSHBUTTON_SHOWMENU(Q7B self); // generated
Q7B Q7B_QSCROLLAREA_ALIGNMENT(Q7B self); // generated
void Q7B_QSCROLLAREA_ALIGNMENT(Q7B self, Q7B theProperty); // generated
void Q7B_QSCROLLAREA_ENSUREVISIBLE(Q7B self, Q7B X, Q7B Y, Q7B YMargin); // generated
void Q7B_QSCROLLAREA_ENSUREWIDGETVISIBLE(Q7B self, Q7B ChildWidget, Q7B XMargin, Q7B YMargin); // generated
void Q7B_QSCROLLAREA_SETWIDGET(Q7B self, Q7B Widget); // generated
Q7B Q7B_QSCROLLAREA_TAKEWIDGET(Q7B self); // generated
Q7B Q7B_QSCROLLAREA_WIDGET(Q7B self); // generated
Q7B Q7B_QSCROLLAREA_WIDGETRESIZABLE(Q7B self); // generated
void Q7B_QSCROLLAREA_WIDGETRESIZABLE(Q7B self, Q7B theProperty); // generated
void Q7B_QSIGNALMAPPER_MAP(Q7B self, Q7B Sender); // generated
Q7B Q7B_QSIGNALMAPPER_MAPPING(Q7B self, Q7B theObject); // generated
void Q7B_QSIGNALMAPPER_REMOVEMAPPINGS(Q7B self, Q7B Sender); // generated
void Q7B_QSIGNALMAPPER_SETMAPPING(Q7B self, Q7B Sender, Q7B theObject); // generated
Q7B Q7B_QSLIDER_TICKINTERVAL(Q7B self); // generated
void Q7B_QSLIDER_TICKINTERVAL(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QSLIDER_TICKPOSITION(Q7B self); // generated
void Q7B_QSLIDER_TICKPOSITION(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QSPINBOX_CLEANTEXT(Q7B self); // generated
void Q7B_QSPINBOX_CLEANTEXT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QSPINBOX_MAXIMUM(Q7B self); // generated
void Q7B_QSPINBOX_MAXIMUM(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QSPINBOX_MINIMUM(Q7B self); // generated
void Q7B_QSPINBOX_MINIMUM(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QSPINBOX_PREFIX(Q7B self); // generated
void Q7B_QSPINBOX_PREFIX(Q7B self, Q7B theProperty); // generated
void Q7B_QSPINBOX_SETRANGE(Q7B self, Q7B Minimum, Q7B Maximum); // generated
void Q7B_QSPINBOX_SETVALUE(Q7B self, Q7B Val); // generated
Q7B Q7B_QSPINBOX_SINGLESTEP(Q7B self); // generated
void Q7B_QSPINBOX_SINGLESTEP(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QSPINBOX_SUFFIX(Q7B self); // generated
void Q7B_QSPINBOX_SUFFIX(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QSPINBOX_VALUE(Q7B self); // generated
void Q7B_QSPLASHSCREEN_CLEARMESSAGE(Q7B self); // generated
void Q7B_QSPLASHSCREEN_FINISH(Q7B self, Q7B MainWin); // generated
Q7B Q7B_QSPLASHSCREEN_PIXMAP(Q7B self); // generated
void Q7B_QSPLASHSCREEN_REPAINT(Q7B self); // generated
void Q7B_QSPLASHSCREEN_SETPIXMAP(Q7B self, Q7B Pixmap); // generated
void Q7B_QSPLASHSCREEN_SHOWMESSAGE(Q7B self, Q7B Message, Q7B Alignment, Q7B Color); // generated
void Q7B_QSPLITTER_ADDWIDGET(Q7B self, Q7B Widget); // generated
Q7B Q7B_QSPLITTER_CHILDRENCOLLAPSIBLE(Q7B self); // generated
void Q7B_QSPLITTER_CHILDRENCOLLAPSIBLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QSPLITTER_COUNT(Q7B self); // generated
Q7B Q7B_QSPLITTER_HANDLE(Q7B self, Q7B Index); // generated
Q7B Q7B_QSPLITTER_HANDLEWIDTH(Q7B self); // generated
void Q7B_QSPLITTER_HANDLEWIDTH(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QSPLITTER_INDEXOF(Q7B self, Q7B Widget); // generated
void Q7B_QSPLITTER_INSERTWIDGET(Q7B self, Q7B Index, Q7B Widget); // generated
Q7B Q7B_QSPLITTER_ISCOLLAPSIBLE(Q7B self, Q7B Index); // generated
Q7B Q7B_QSPLITTER_OPAQUERESIZE(Q7B self); // generated
void Q7B_QSPLITTER_OPAQUERESIZE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QSPLITTER_ORIENTATION(Q7B self); // generated
void Q7B_QSPLITTER_ORIENTATION(Q7B self, Q7B theProperty); // generated
void Q7B_QSPLITTER_REFRESH(Q7B self); // generated
Q7B Q7B_QSPLITTER_RESTORESTATE(Q7B self, Q7B State); // generated
Q7B Q7B_QSPLITTER_SAVESTATE(Q7B self); // generated
void Q7B_QSPLITTER_SETCOLLAPSIBLE(Q7B self, Q7B Index, Q7B Collapse); // generated
void Q7B_QSPLITTER_SETSIZES(Q7B self, Q7B list); // generated
void Q7B_QSPLITTER_SETSTRETCHFACTOR(Q7B self, Q7B Index, Q7B Stretch); // generated
Q7B Q7B_QSPLITTER_SIZES(Q7B self); // generated
Q7B Q7B_QSPLITTER_WIDGET(Q7B self, Q7B Index); // generated
void Q7B_QSTATUSBAR_ADDPERMANENTWIDGET(Q7B self, Q7B Widget, Q7B Stretch); // generated
void Q7B_QSTATUSBAR_ADDWIDGET(Q7B self, Q7B Widget, Q7B Stretch); // generated
void Q7B_QSTATUSBAR_CLEARMESSAGE(Q7B self); // generated
Q7B Q7B_QSTATUSBAR_CURRENTMESSAGE(Q7B self); // generated
Q7B Q7B_QSTATUSBAR_INSERTPERMANENTWIDGET(Q7B self, Q7B Index, Q7B Widget, Q7B Stretch); // generated
Q7B Q7B_QSTATUSBAR_INSERTWIDGET(Q7B self, Q7B Index, Q7B Widget, Q7B Stretch); // generated
void Q7B_QSTATUSBAR_REMOVEWIDGET(Q7B self, Q7B Widget); // generated
void Q7B_QSTATUSBAR_SHOWMESSAGE(Q7B self, Q7B Message, Q7B Timeout); // generated
Q7B Q7B_QSTATUSBAR_SIZEGRIPENABLED(Q7B self); // generated
void Q7B_QSTATUSBAR_SIZEGRIPENABLED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QSTRING_APPEND(Q7B self, Q7B Str); // generated
Q7B Q7B_QSTRING_APPEND2(Q7B self, Q7B Ch); // generated
Q7B Q7B_QSTRING_ARG(Q7B self, Q7B A, Q7B FieldWidth, Q7B FillChar); // generated
Q7B Q7B_QSTRING_ARG2(Q7B self, Q7B A, Q7B FieldWidth, Q7B Base, Q7B FillChar); // generated
Q7B Q7B_QSTRING_ARG3(Q7B self, Q7B A, Q7B FieldWidth, Q7B FillChar); // generated
Q7B Q7B_QSTRING_ARG4(Q7B self, Q7B A, Q7B FieldWidth, Q7B Format, Q7B Precision, Q7B FillChar); // generated
Q7B Q7B_QSTRING_AT(Q7B self, Q7B Position); // generated
Q7B Q7B_QSTRING_CAPACITY(Q7B self); // generated
void Q7B_QSTRING_CHOP(Q7B self, Q7B N); // generated
void Q7B_QSTRING_CLEAR(Q7B self); // generated
Q7B Q7B_QSTRING_COMPARE(Q7B self, Q7B Other); // generated
Q7B Q7B_QSTRING_COMPARE2(Q7B self, Q7B Other, Q7B Cs); // generated
Q7B Q7B_QSTRING_CONTAINS(Q7B self, Q7B Str, Q7B Cs); // generated
Q7B Q7B_QSTRING_CONTAINS2(Q7B self, Q7B Ch, Q7B Cs); // generated
Q7B Q7B_QSTRING_CONTAINS3 (Q7B self, Q7B Rx); // generated
Q7B Q7B_QSTRING_COUNT(Q7B self, Q7B Str, Q7B Cs); // generated
Q7B Q7B_QSTRING_COUNT2(Q7B self, Q7B Ch, Q7B Cs); // generated
Q7B Q7B_QSTRING_COUNT3(Q7B self, Q7B Rx); // generated
Q7B Q7B_QSTRING_COUNT4(Q7B self); // generated
Q7B Q7B_QSTRING_ENDSWITH(Q7B self, Q7B S, Q7B Cs); // generated
Q7B Q7B_QSTRING_ENDSWITH2(Q7B self, Q7B C, Q7B Cs); // generated
Q7B Q7B_QSTRING_FILL(Q7B self, Q7B Ch, Q7B Size); // generated
Q7B Q7B_QSTRING_INDEXOF(Q7B self, Q7B Str, Q7B From, Q7B Cs); // generated
Q7B Q7B_QSTRING_INDEXOF2(Q7B self, Q7B Ch, Q7B From, Q7B Cs); // generated
Q7B Q7B_QSTRING_INDEXOF3(Q7B self, Q7B Rx, Q7B From); // generated
Q7B Q7B_QSTRING_INSERT(Q7B self, Q7B Position, Q7B Str); // generated
Q7B Q7B_QSTRING_INSERT2(Q7B self, Q7B Position, Q7B Ch); // generated
Q7B Q7B_QSTRING_ISEMPTY(Q7B self); // generated
Q7B Q7B_QSTRING_ISNULL(Q7B self); // generated
Q7B Q7B_QSTRING_ISRIGHTTOLEFT(Q7B self); // generated
Q7B Q7B_QSTRING_LASTINDEXOF(Q7B self, Q7B Str, Q7B From, Q7B Cs); // generated
Q7B Q7B_QSTRING_LASTINDEXOF2(Q7B self, Q7B Ch, Q7B From, Q7B Cs); // generated
Q7B Q7B_QSTRING_LASTINDEXOF3(Q7B self, Q7B Rx, Q7B From); // generated
Q7B Q7B_QSTRING_LEFT(Q7B self, Q7B N); // generated
Q7B Q7B_QSTRING_LEFTJUSTIFIED(Q7B self, Q7B Width, Q7B Fill, Q7B Truncate); // generated
Q7B Q7B_QSTRING_LENGTH(Q7B self); // generated
Q7B Q7B_QSTRING_LOCALEAWARECOMPARE(Q7B self, Q7B Other); // generated
Q7B Q7B_QSTRING_MID(Q7B self, Q7B Position, Q7B N); // generated
Q7B Q7B_QSTRING_NORMALIZED(Q7B self, Q7B Mode); // generated
Q7B Q7B_QSTRING_NORMALIZED2(Q7B self, Q7B Mode, Q7B Version); // generated
Q7B Q7B_QSTRING_PREPEND(Q7B self, Q7B Str); // generated
Q7B Q7B_QSTRING_PREPEND2(Q7B self, Q7B Ch); // generated
void Q7B_QSTRING_PUSH_BACK(Q7B self, Q7B Other); // generated
void Q7B_QSTRING_PUSH_BACK2(Q7B self, Q7B Ch); // generated
void Q7B_QSTRING_PUSH_FRONT(Q7B self, Q7B Other); // generated
void Q7B_QSTRING_PUSH_FRONT2(Q7B self, Q7B Ch); // generated
Q7B Q7B_QSTRING_REMOVE(Q7B self, Q7B Position, Q7B N); // generated
Q7B Q7B_QSTRING_REMOVE2(Q7B self, Q7B Ch, Q7B Cs); // generated
Q7B Q7B_QSTRING_REMOVE3(Q7B self, Q7B Str, Q7B Cs); // generated
Q7B Q7B_QSTRING_REMOVE4(Q7B self, Q7B Rx); // generated
Q7B Q7B_QSTRING_REPEATED(Q7B self, Q7B Times); // generated
Q7B Q7B_QSTRING_REPLACE(Q7B self, Q7B Position, Q7B N, Q7B After); // generated
Q7B Q7B_QSTRING_REPLACE2(Q7B self, Q7B Position, Q7B N, Q7B After); // generated
Q7B Q7B_QSTRING_REPLACE3(Q7B self, Q7B Before, Q7B After, Q7B Cs); // generated
Q7B Q7B_QSTRING_REPLACE4(Q7B self, Q7B Before, Q7B After, Q7B a2); // generated
Q7B Q7B_QSTRING_REPLACE5(Q7B self, Q7B Before, Q7B After, Q7B Cs); // generated
Q7B Q7B_QSTRING_REPLACE6(Q7B self, Q7B Rx, Q7B After); // generated
void Q7B_QSTRING_RESERVE(Q7B self, Q7B Size); // generated
void Q7B_QSTRING_RESIZE(Q7B self, Q7B Size); // generated
Q7B Q7B_QSTRING_RIGHT(Q7B self, Q7B N); // generated
Q7B Q7B_QSTRING_RIGHTJUSTIFIED(Q7B self, Q7B Width, Q7B Fill, Q7B Truncate); // generated
Q7B Q7B_QSTRING_SECTION(Q7B self, Q7B Sep, Q7B Start, Q7B End, Q7B Flags); // generated
Q7B Q7B_QSTRING_SECTION2(Q7B self, Q7B Sep, Q7B Start, Q7B End, Q7B Flags); // generated
Q7B Q7B_QSTRING_SECTION3(Q7B self, Q7B Reg, Q7B Start, Q7B End, Q7B Flags); // generated
Q7B Q7B_QSTRING_SETNUM(Q7B self, Q7B N, Q7B Base); // generated
Q7B Q7B_QSTRING_SETNUM2(Q7B self, Q7B N, Q7B Format, Q7B Precision); // generated
Q7B Q7B_QSTRING_SIMPLIFIED(Q7B self); // generated
Q7B Q7B_QSTRING_SIZE(Q7B self); // generated
Q7B Q7B_QSTRING_SPLIT(Q7B self, Q7B Sep, Q7B Behavior, Q7B Cs); // generated
Q7B Q7B_QSTRING_SPLIT2(Q7B self, Q7B Sep, Q7B Behavior, Q7B Cs); // generated
Q7B Q7B_QSTRING_SPLIT3(Q7B self, Q7B Rx, Q7B Behavior); // generated
void Q7B_QSTRING_SQUEEZE(Q7B self); // generated
Q7B Q7B_QSTRING_STARTSWITH(Q7B self, Q7B S, Q7B Cs); // generated
Q7B Q7B_QSTRING_STARTSWITH2(Q7B self, Q7B C, Q7B Cs); // generated
Q7B Q7B_QSTRING_TOASCII(Q7B self); // generated
Q7B Q7B_QSTRING_TOCASEFOLDED(Q7B self); // generated
Q7B Q7B_QSTRING_TODOUBLE(Q7B self, Q7B Ok); // generated
Q7B Q7B_QSTRING_TOINT(Q7B self, Q7B Ok, Q7B Base); // generated
Q7B Q7B_QSTRING_TOLATIN1(Q7B self); // generated
Q7B Q7B_QSTRING_TOLOCAL8BIT(Q7B self); // generated
Q7B Q7B_QSTRING_TOLONGLONG(Q7B self, Q7B Ok, Q7B Base); // generated
Q7B Q7B_QSTRING_TOLOWER(Q7B self); // generated
Q7B Q7B_QSTRING_TOUPPER(Q7B self); // generated
Q7B Q7B_QSTRING_TOUTF8(Q7B self); // generated
Q7B Q7B_QSTRING_TRIMMED(Q7B self); // generated
void Q7B_QSTRING_TRUNCATE(Q7B self, Q7B Position); // generated
void Q7B_QSVGWIDGET_LOAD(Q7B self, Q7B Contents); // generated
Q7B Q7B_QSYNTAXHIGHLIGHTER_DOCUMENT(Q7B self); // generated
void Q7B_QSYNTAXHIGHLIGHTER_REHIGHLIGHT(Q7B self); // generated
void Q7B_QSYNTAXHIGHLIGHTER_REHIGHLIGHTBLOCK(Q7B self, Q7B Block); // generated
void Q7B_QSYNTAXHIGHLIGHTER_SETDOCUMENT(Q7B self, Q7B Doc); // generated
Q7B Q7B_QTABBAR_ADDTAB(Q7B self, Q7B Icon, Q7B Text); // generated
Q7B Q7B_QTABBAR_COUNT(Q7B self); // generated
void Q7B_QTABBAR_COUNT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTABBAR_CURRENTINDEX(Q7B self); // generated
void Q7B_QTABBAR_CURRENTINDEX(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTABBAR_DOCUMENTMODE(Q7B self); // generated
void Q7B_QTABBAR_DOCUMENTMODE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTABBAR_DRAWBASE(Q7B self); // generated
void Q7B_QTABBAR_DRAWBASE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTABBAR_ELIDEMODE(Q7B self); // generated
void Q7B_QTABBAR_ELIDEMODE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTABBAR_EXPANDING(Q7B self); // generated
void Q7B_QTABBAR_EXPANDING(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTABBAR_ICONSIZE(Q7B self); // generated
void Q7B_QTABBAR_ICONSIZE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTABBAR_INSERTTAB(Q7B self, Q7B Index, Q7B Icon, Q7B Text); // generated
Q7B Q7B_QTABBAR_ISTABENABLED(Q7B self, Q7B Index); // generated
Q7B Q7B_QTABBAR_MOVABLE(Q7B self); // generated
void Q7B_QTABBAR_MOVABLE(Q7B self, Q7B theProperty); // generated
void Q7B_QTABBAR_MOVETAB(Q7B self, Q7B FromTab, Q7B ToTab); // generated
void Q7B_QTABBAR_REMOVETAB(Q7B self, Q7B Index); // generated
Q7B Q7B_QTABBAR_SELECTIONBEHAVIORONREMOVE(Q7B self); // generated
void Q7B_QTABBAR_SELECTIONBEHAVIORONREMOVE(Q7B self, Q7B theProperty); // generated
void Q7B_QTABBAR_SETCURRENTINDEX(Q7B self, Q7B Index); // generated
void Q7B_QTABBAR_SETTABBUTTON(Q7B self, Q7B Index, Q7B Position, Q7B Widget); // generated
void Q7B_QTABBAR_SETTABDATA(Q7B self, Q7B Index, Q7B Data); // generated
void Q7B_QTABBAR_SETTABENABLED(Q7B self, Q7B Index, Q7B Enabled); // generated
void Q7B_QTABBAR_SETTABICON(Q7B self, Q7B Index, Q7B Icon); // generated
void Q7B_QTABBAR_SETTABTEXT(Q7B self, Q7B Index, Q7B Text); // generated
void Q7B_QTABBAR_SETTABTEXTCOLOR(Q7B self, Q7B Index, Q7B Color); // generated
void Q7B_QTABBAR_SETTABTOOLTIP(Q7B self, Q7B Index, Q7B Tip); // generated
void Q7B_QTABBAR_SETTABWHATSTHIS(Q7B self, Q7B Index, Q7B Text); // generated
Q7B Q7B_QTABBAR_SHAPE(Q7B self); // generated
void Q7B_QTABBAR_SHAPE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTABBAR_TABAT(Q7B self, Q7B Position); // generated
Q7B Q7B_QTABBAR_TABBUTTON(Q7B self, Q7B Index, Q7B Position); // generated
Q7B Q7B_QTABBAR_TABDATA(Q7B self, Q7B Index); // generated
Q7B Q7B_QTABBAR_TABICON(Q7B self, Q7B Index); // generated
Q7B Q7B_QTABBAR_TABRECT(Q7B self, Q7B Index); // generated
Q7B Q7B_QTABBAR_TABTEXT(Q7B self, Q7B Index); // generated
Q7B Q7B_QTABBAR_TABTEXTCOLOR(Q7B self, Q7B Index); // generated
Q7B Q7B_QTABBAR_TABTOOLTIP(Q7B self, Q7B Index); // generated
Q7B Q7B_QTABBAR_TABWHATSTHIS(Q7B self, Q7B Index); // generated
Q7B Q7B_QTABBAR_TABSCLOSABLE(Q7B self); // generated
void Q7B_QTABBAR_TABSCLOSABLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTABBAR_USESSCROLLBUTTONS(Q7B self); // generated
void Q7B_QTABBAR_USESSCROLLBUTTONS(Q7B self, Q7B theProperty); // generated
void Q7B_QTHREAD_EXIT(Q7B self, Q7B ReturnCode); // generated
Q7B Q7B_QTHREAD_ISFINISHED(Q7B self); // generated
Q7B Q7B_QTHREAD_ISRUNNING(Q7B self); // generated
Q7B Q7B_QTHREAD_PRIORITY(Q7B self); // generated
void Q7B_QTHREAD_QUIT(Q7B self); // generated
void Q7B_QTHREAD_SETPRIORITY(Q7B self, Q7B Priority); // generated
void Q7B_QTHREAD_SETSTACKSIZE(Q7B self, Q7B StackSize); // generated
Q7B Q7B_QTHREAD_STACKSIZE(Q7B self); // generated
void Q7B_QTHREAD_START(Q7B self, Q7B Priority); // generated
void Q7B_QTHREAD_TERMINATE(Q7B self); // generated
Q7B Q7B_QTHREAD_WAIT(Q7B self, Q7B Time); // generated
Q7B Q7B_QTIME_ADDMSECS(Q7B self, Q7B Ms); // generated
Q7B Q7B_QTIME_ADDSECS(Q7B self, Q7B S); // generated
Q7B Q7B_QTIME_ELAPSED(Q7B self); // generated
Q7B Q7B_QTIME_HOUR(Q7B self); // generated
Q7B Q7B_QTIME_ISNULL(Q7B self); // generated
Q7B Q7B_QTIME_ISVALID(Q7B self); // generated
Q7B Q7B_QTIME_MINUTE(Q7B self); // generated
Q7B Q7B_QTIME_MSEC(Q7B self); // generated
Q7B Q7B_QTIME_MSECSTO(Q7B self, Q7B T); // generated
Q7B Q7B_QTIME_RESTART(Q7B self); // generated
Q7B Q7B_QTIME_SECOND(Q7B self); // generated
Q7B Q7B_QTIME_SECSTO(Q7B self, Q7B T); // generated
Q7B Q7B_QTIME_SETHMS(Q7B self, Q7B H, Q7B M, Q7B S, Q7B Ms); // generated
void Q7B_QTIME_START(Q7B self); // generated
Q7B Q7B_QTIME_TOSTRING(Q7B self, Q7B Format); // generated
Q7B Q7B_QTIMER_ACTIVE(Q7B self); // generated
void Q7B_QTIMER_ACTIVE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTIMER_INTERVAL(Q7B self); // generated
void Q7B_QTIMER_INTERVAL(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTIMER_SINGLESHOT(Q7B self); // generated
void Q7B_QTIMER_SINGLESHOT(Q7B self, Q7B theProperty); // generated
void Q7B_QTIMER_START(Q7B self); // generated
void Q7B_QTIMER_START2(Q7B self, Q7B Msec); // generated
void Q7B_QTIMER_STOP(Q7B self); // generated
Q7B Q7B_QTOOLBAR_ACTIONAT(Q7B self, Q7B P); // generated
Q7B Q7B_QTOOLBAR_ACTIONAT2(Q7B self, Q7B X, Q7B Y); // generated
void Q7B_QTOOLBAR_ADDACTION(Q7B self, Q7B Action); // generated
Q7B Q7B_QTOOLBAR_ADDACTION2(Q7B self, Q7B Text); // generated
Q7B Q7B_QTOOLBAR_ADDACTION3(Q7B self, Q7B Icon, Q7B Text); // generated
Q7B Q7B_QTOOLBAR_ADDACTION4(Q7B self, Q7B Text, Q7B Receiver, Q7B Member); // generated
Q7B Q7B_QTOOLBAR_ADDACTION5(Q7B self, Q7B Icon, Q7B Text, Q7B Receiver, Q7B Member); // generated
Q7B Q7B_QTOOLBAR_ADDSEPARATOR(Q7B self); // generated
Q7B Q7B_QTOOLBAR_ADDWIDGET(Q7B self, Q7B Widget); // generated
Q7B Q7B_QTOOLBAR_ALLOWEDAREAS(Q7B self); // generated
void Q7B_QTOOLBAR_ALLOWEDAREAS(Q7B self, Q7B theProperty); // generated
void Q7B_QTOOLBAR_CLEAR(Q7B self); // generated
Q7B Q7B_QTOOLBAR_FLOATABLE(Q7B self); // generated
void Q7B_QTOOLBAR_FLOATABLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTOOLBAR_FLOATING(Q7B self); // generated
void Q7B_QTOOLBAR_FLOATING(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTOOLBAR_ICONSIZE(Q7B self); // generated
void Q7B_QTOOLBAR_ICONSIZE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTOOLBAR_INSERTSEPARATOR(Q7B self, Q7B Before); // generated
Q7B Q7B_QTOOLBAR_INSERTWIDGET(Q7B self, Q7B Before, Q7B Widget); // generated
Q7B Q7B_QTOOLBAR_ISAREAALLOWED(Q7B self, Q7B Area); // generated
Q7B Q7B_QTOOLBAR_MOVABLE(Q7B self); // generated
void Q7B_QTOOLBAR_MOVABLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTOOLBAR_ORIENTATION(Q7B self); // generated
void Q7B_QTOOLBAR_ORIENTATION(Q7B self, Q7B theProperty); // generated
void Q7B_QTOOLBAR_SETICONSIZE(Q7B self, Q7B IconSize); // generated
void Q7B_QTOOLBAR_SETTOOLBUTTONSTYLE(Q7B self, Q7B ToolButtonStyle); // generated
Q7B Q7B_QTOOLBAR_TOGGLEVIEWACTION(Q7B self); // generated
Q7B Q7B_QTOOLBAR_TOOLBUTTONSTYLE(Q7B self); // generated
void Q7B_QTOOLBAR_TOOLBUTTONSTYLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTOOLBAR_WIDGETFORACTION(Q7B self, Q7B Action); // generated
Q7B Q7B_QTOOLBOX_ADDITEM(Q7B self, Q7B Widget, Q7B IconSet, Q7B Text); // generated
Q7B Q7B_QTOOLBOX_ADDITEM2(Q7B self, Q7B W, Q7B Text); // generated
Q7B Q7B_QTOOLBOX_COUNT(Q7B self); // generated
void Q7B_QTOOLBOX_COUNT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTOOLBOX_CURRENTINDEX(Q7B self); // generated
void Q7B_QTOOLBOX_CURRENTINDEX(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTOOLBOX_CURRENTWIDGET(Q7B self); // generated
Q7B Q7B_QTOOLBOX_INDEXOF(Q7B self, Q7B Widget); // generated
Q7B Q7B_QTOOLBOX_INSERTITEM(Q7B self, Q7B Index, Q7B Widget, Q7B Icon, Q7B Text); // generated
Q7B Q7B_QTOOLBOX_INSERTITEM2(Q7B self, Q7B Index, Q7B Widget, Q7B Text); // generated
Q7B Q7B_QTOOLBOX_ISITEMENABLED(Q7B self, Q7B Index); // generated
Q7B Q7B_QTOOLBOX_ITEMICON(Q7B self, Q7B Index); // generated
Q7B Q7B_QTOOLBOX_ITEMTEXT(Q7B self, Q7B Index); // generated
Q7B Q7B_QTOOLBOX_ITEMTOOLTIP(Q7B self, Q7B Index); // generated
void Q7B_QTOOLBOX_REMOVEITEM(Q7B self, Q7B Index); // generated
void Q7B_QTOOLBOX_SETCURRENTINDEX(Q7B self, Q7B Index); // generated
void Q7B_QTOOLBOX_SETCURRENTWIDGET(Q7B self, Q7B Widget); // generated
void Q7B_QTOOLBOX_SETITEMENABLED(Q7B self, Q7B Index, Q7B Enabled); // generated
void Q7B_QTOOLBOX_SETITEMICON(Q7B self, Q7B Index, Q7B Icon); // generated
void Q7B_QTOOLBOX_SETITEMTEXT(Q7B self, Q7B Index, Q7B Text); // generated
void Q7B_QTOOLBOX_SETITEMTOOLTIP(Q7B self, Q7B Index, Q7B ToolTip); // generated
Q7B Q7B_QTOOLBOX_WIDGET(Q7B self, Q7B Index); // generated
Q7B Q7B_QTOOLBUTTON_ARROWTYPE(Q7B self); // generated
void Q7B_QTOOLBUTTON_ARROWTYPE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTOOLBUTTON_AUTORAISE(Q7B self); // generated
void Q7B_QTOOLBUTTON_AUTORAISE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTOOLBUTTON_DEFAULTACTION(Q7B self); // generated
Q7B Q7B_QTOOLBUTTON_MENU(Q7B self); // generated
Q7B Q7B_QTOOLBUTTON_POPUPMODE(Q7B self); // generated
void Q7B_QTOOLBUTTON_POPUPMODE(Q7B self, Q7B theProperty); // generated
void Q7B_QTOOLBUTTON_SETDEFAULTACTION(Q7B self, Q7B Action); // generated
void Q7B_QTOOLBUTTON_SETMENU(Q7B self, Q7B Menu); // generated
void Q7B_QTOOLBUTTON_SETTOOLBUTTONSTYLE(Q7B self, Q7B Style); // generated
Q7B Q7B_QTOOLBUTTON_TOOLBUTTONSTYLE(Q7B self); // generated
void Q7B_QTOOLBUTTON_TOOLBUTTONSTYLE(Q7B self, Q7B theProperty); // generated
void Q7B_QTREEWIDGET_ADDTOPLEVELITEM(Q7B self, Q7B Item); // generated
void Q7B_QTREEWIDGET_ADDTOPLEVELITEMS(Q7B self, Q7B Items); // generated
void Q7B_QTREEWIDGET_CLEAR(Q7B self); // generated
void Q7B_QTREEWIDGET_CLOSEPERSISTENTEDITOR(Q7B self, Q7B Item, Q7B Column); // generated
void Q7B_QTREEWIDGET_COLLAPSEITEM(Q7B self, Q7B Item); // generated
Q7B Q7B_QTREEWIDGET_COLUMNCOUNT(Q7B self); // generated
void Q7B_QTREEWIDGET_COLUMNCOUNT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTREEWIDGET_CURRENTCOLUMN(Q7B self); // generated
Q7B Q7B_QTREEWIDGET_CURRENTITEM(Q7B self); // generated
void Q7B_QTREEWIDGET_EDITITEM(Q7B self, Q7B Item, Q7B Column); // generated
void Q7B_QTREEWIDGET_EXPANDITEM(Q7B self, Q7B Item); // generated
Q7B Q7B_QTREEWIDGET_FINDITEMS(Q7B self, Q7B Text, Q7B Flags, Q7B Column); // generated
Q7B Q7B_QTREEWIDGET_HEADERITEM(Q7B self); // generated
Q7B Q7B_QTREEWIDGET_INDEXOFTOPLEVELITEM(Q7B self, Q7B Item); // generated
void Q7B_QTREEWIDGET_INSERTTOPLEVELITEM(Q7B self, Q7B Index, Q7B Item); // generated
void Q7B_QTREEWIDGET_INSERTTOPLEVELITEMS(Q7B self, Q7B Index, Q7B Items); // generated
Q7B Q7B_QTREEWIDGET_INVISIBLEROOTITEM(Q7B self); // generated
Q7B Q7B_QTREEWIDGET_ISFIRSTITEMCOLUMNSPANNED(Q7B self, Q7B Item); // generated
Q7B Q7B_QTREEWIDGET_ITEMABOVE(Q7B self, Q7B Item); // generated
Q7B Q7B_QTREEWIDGET_ITEMAT(Q7B self, Q7B P); // generated
Q7B Q7B_QTREEWIDGET_ITEMAT2(Q7B self, Q7B X, Q7B Y); // generated
Q7B Q7B_QTREEWIDGET_ITEMBELOW(Q7B self, Q7B Item); // generated
Q7B Q7B_QTREEWIDGET_ITEMWIDGET(Q7B self, Q7B Item, Q7B Column); // generated
void Q7B_QTREEWIDGET_OPENPERSISTENTEDITOR(Q7B self, Q7B Item, Q7B Column); // generated
void Q7B_QTREEWIDGET_REMOVEITEMWIDGET (Q7B self, Q7B Item, Q7B Column); // generated
void Q7B_QTREEWIDGET_SCROLLTOITEM(Q7B self, Q7B Item, Q7B Hint); // generated
Q7B Q7B_QTREEWIDGET_SELECTEDITEMS(Q7B self); // generated
void Q7B_QTREEWIDGET_SETCURRENTITEM(Q7B self, Q7B Item); // generated
void Q7B_QTREEWIDGET_SETCURRENTITEM2(Q7B self, Q7B Item, Q7B Column); // generated
void Q7B_QTREEWIDGET_SETCURRENTITEM3(Q7B self, Q7B Item, Q7B Column, Q7B Command); // generated
void Q7B_QTREEWIDGET_SETFIRSTITEMCOLUMNSPANNED(Q7B self, Q7B Item, Q7B Span); // generated
void Q7B_QTREEWIDGET_SETHEADERITEM(Q7B self, Q7B Item); // generated
void Q7B_QTREEWIDGET_SETHEADERLABEL(Q7B self, Q7B Label); // generated
void Q7B_QTREEWIDGET_SETHEADERLABELS(Q7B self, Q7B Labels); // generated
void Q7B_QTREEWIDGET_SETITEMWIDGET(Q7B self, Q7B Iteam, Q7B Column, Q7B Widget); // generated
Q7B Q7B_QTREEWIDGET_SORTCOLUMN(Q7B self); // generated
void Q7B_QTREEWIDGET_SORTITEMS(Q7B self, Q7B Column, Q7B Order); // generated
Q7B Q7B_QTREEWIDGET_TAKETOPLEVELITEM(Q7B self, Q7B Index); // generated
Q7B Q7B_QTREEWIDGET_TOPLEVELITEM(Q7B self, Q7B Index); // generated
Q7B Q7B_QTREEWIDGET_TOPLEVELITEMCOUNT(Q7B self); // generated
void Q7B_QTREEWIDGET_TOPLEVELITEMCOUNT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTREEWIDGET_VISUALITEMRECT(Q7B self, Q7B Item); // generated
Q7B Q7B_QWEBPAGE_BYTESRECEIVED(Q7B self); // generated
Q7B Q7B_QWEBPAGE_CONTENTEDITABLE(Q7B self); // generated
void Q7B_QWEBPAGE_CONTENTEDITABLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWEBPAGE_CURRENTFRAME(Q7B self); // generated
Q7B Q7B_QWEBPAGE_FINDTEXT(Q7B self, Q7B SubString, Q7B Options); // generated
Q7B Q7B_QWEBPAGE_FOCUSNEXTPREVCHILD(Q7B self, Q7B Next); // generated
Q7B Q7B_QWEBPAGE_FORWARDUNSUPPORTEDCONTENT(Q7B self); // generated
void Q7B_QWEBPAGE_FORWARDUNSUPPORTEDCONTENT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWEBPAGE_FRAMEAT(Q7B self, Q7B Pos); // generated
Q7B Q7B_QWEBPAGE_HISTORY(Q7B self); // generated
Q7B Q7B_QWEBPAGE_LINKDELEGATIONPOLICY(Q7B self); // generated
void Q7B_QWEBPAGE_LINKDELEGATIONPOLICY(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWEBPAGE_MAINFRAME(Q7B self); // generated
Q7B Q7B_QWEBPAGE_MODIFIED(Q7B self); // generated
void Q7B_QWEBPAGE_MODIFIED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWEBPAGE_PALETTE(Q7B self); // generated
void Q7B_QWEBPAGE_PALETTE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWEBPAGE_PREFERREDCONTENTSSIZE(Q7B self); // generated
void Q7B_QWEBPAGE_PREFERREDCONTENTSSIZE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWEBPAGE_SELECTEDTEXT(Q7B self); // generated
void Q7B_QWEBPAGE_SELECTEDTEXT(Q7B self, Q7B theProperty); // generated
void Q7B_QWEBPAGE_SETVIEW(Q7B self, Q7B View); // generated
void Q7B_QWEBPAGE_SETVIEWPORTSIZE(Q7B self, Q7B Size); // generated
Q7B Q7B_QWEBPAGE_SETTINGS(Q7B self); // generated
Q7B Q7B_QWEBPAGE_SHOULDINTERRUPTJAVASCRIPT(Q7B self); // generated
Q7B Q7B_QWEBPAGE_SWALLOWCONTEXTMENUEVENT(Q7B self, Q7B Event); // generated
Q7B Q7B_QWEBPAGE_TOTALBYTES(Q7B self); // generated
void Q7B_QWEBPAGE_UPDATEPOSITIONDEPENDENTACTIONS(Q7B self, Q7B Pos); // generated
Q7B Q7B_QWEBPAGE_VIEW(Q7B self); // generated
Q7B Q7B_QWEBPAGE_VIEWPORTSIZE(Q7B self); // generated
void Q7B_QWEBPAGE_VIEWPORTSIZE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_ACCEPTDROPS(Q7B self); // generated
void Q7B_QWIDGET_ACCEPTDROPS(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_ACCESSIBLEDESCRIPTION(Q7B self); // generated
void Q7B_QWIDGET_ACCESSIBLEDESCRIPTION(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_ACCESSIBLENAME(Q7B self); // generated
void Q7B_QWIDGET_ACCESSIBLENAME(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_ACTIONS(Q7B self); // generated
void Q7B_QWIDGET_ACTIVATEWINDOW(Q7B self); // generated
void Q7B_QWIDGET_ADDACTION(Q7B self, Q7B Action); // generated
void Q7B_QWIDGET_ADDACTIONS(Q7B self, Q7B Actions); // generated
void Q7B_QWIDGET_ADJUSTSIZE(Q7B self); // generated
Q7B Q7B_QWIDGET_AUTOFILLBACKGROUND(Q7B self); // generated
void Q7B_QWIDGET_AUTOFILLBACKGROUND(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_BACKGROUNDROLE(Q7B self); // generated
Q7B Q7B_QWIDGET_BASESIZE(Q7B self); // generated
void Q7B_QWIDGET_BASESIZE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_CHILDAT(Q7B self, Q7B X, Q7B Y); // generated
Q7B Q7B_QWIDGET_CHILDAT2(Q7B self, Q7B P); // generated
Q7B Q7B_QWIDGET_CHILDRENRECT(Q7B self); // generated
void Q7B_QWIDGET_CHILDRENRECT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_CHILDRENREGION(Q7B self); // generated
void Q7B_QWIDGET_CHILDRENREGION(Q7B self, Q7B theProperty); // generated
void Q7B_QWIDGET_CLEARFOCUS(Q7B self); // generated
void Q7B_QWIDGET_CLEARMASK(Q7B self); // generated
Q7B Q7B_QWIDGET_CLOSE(Q7B self); // generated
Q7B Q7B_QWIDGET_CONTENTSMARGINS(Q7B self); // generated
Q7B Q7B_QWIDGET_CONTENTSRECT(Q7B self); // generated
Q7B Q7B_QWIDGET_CONTEXTMENUPOLICY(Q7B self); // generated
void Q7B_QWIDGET_CONTEXTMENUPOLICY(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_CURSOR(Q7B self); // generated
void Q7B_QWIDGET_CURSOR(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_ENABLED(Q7B self); // generated
void Q7B_QWIDGET_ENABLED(Q7B self, Q7B theProperty); // generated
void Q7B_QWIDGET_ENSUREPOLISHED(Q7B self); // generated
Q7B Q7B_QWIDGET_FOCUS(Q7B self); // generated
void Q7B_QWIDGET_FOCUS(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_FOCUSPOLICY(Q7B self); // generated
void Q7B_QWIDGET_FOCUSPOLICY(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_FOCUSPROXY(Q7B self); // generated
Q7B Q7B_QWIDGET_FOCUSWIDGET(Q7B self); // generated
Q7B Q7B_QWIDGET_FONT(Q7B self); // generated
void Q7B_QWIDGET_FONT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_FONTINFO(Q7B self); // generated
Q7B Q7B_QWIDGET_FONTMETRICS(Q7B self); // generated
Q7B Q7B_QWIDGET_FOREGROUNDROLE(Q7B self); // generated
Q7B Q7B_QWIDGET_FRAMEGEOMETRY(Q7B self); // generated
void Q7B_QWIDGET_FRAMEGEOMETRY(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_FRAMESIZE(Q7B self); // generated
void Q7B_QWIDGET_FRAMESIZE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_FULLSCREEN(Q7B self); // generated
void Q7B_QWIDGET_FULLSCREEN(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_GEOMETRY(Q7B self); // generated
void Q7B_QWIDGET_GEOMETRY(Q7B self, Q7B theProperty); // generated
void Q7B_QWIDGET_GRABGESTURE(Q7B self, Q7B Gesture, Q7B Flags); // generated
void Q7B_QWIDGET_GRABKEYBOARD(Q7B self); // generated
void Q7B_QWIDGET_GRABMOUSE(Q7B self); // generated
void Q7B_QWIDGET_GRABMOUSE2(Q7B self, Q7B Cursor); // generated
Q7B Q7B_QWIDGET_GRABSHORTCUT(Q7B self, Q7B Key, Q7B Context); // generated
Q7B Q7B_QWIDGET_HASFOCUS(Q7B self); // generated
Q7B Q7B_QWIDGET_HASMOUSETRACKING(Q7B self); // generated
Q7B Q7B_QWIDGET_HEIGHT(Q7B self); // generated
void Q7B_QWIDGET_HEIGHT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_HEIGHTFORWIDTH(Q7B self, Q7B W); // generated
void Q7B_QWIDGET_HIDE(Q7B self); // generated
Q7B Q7B_QWIDGET_INPUTMETHODHINTS(Q7B self); // generated
void Q7B_QWIDGET_INPUTMETHODHINTS(Q7B self, Q7B theProperty); // generated
void Q7B_QWIDGET_INSERTACTION(Q7B self, Q7B Before, Q7B Action); // generated
void Q7B_QWIDGET_INSERTACTIONS(Q7B self, Q7B Before, Q7B Actions); // generated
Q7B Q7B_QWIDGET_ISACTIVEWINDOW(Q7B self); // generated
void Q7B_QWIDGET_ISACTIVEWINDOW(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_ISANCESTOROF(Q7B self, Q7B Child); // generated
Q7B Q7B_QWIDGET_ISENABLEDTO(Q7B self, Q7B Ancestor); // generated
Q7B Q7B_QWIDGET_ISHIDDEN(Q7B self); // generated
Q7B Q7B_QWIDGET_ISVISIBLETO(Q7B self, Q7B Ancestor); // generated
Q7B Q7B_QWIDGET_ISWINDOW(Q7B self); // generated
Q7B Q7B_QWIDGET_ISWINDOWMODIFIED(Q7B self); // generated
Q7B Q7B_QWIDGET_LAYOUT(Q7B self); // generated
Q7B Q7B_QWIDGET_LAYOUTDIRECTION(Q7B self); // generated
void Q7B_QWIDGET_LAYOUTDIRECTION(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_LOCALE(Q7B self); // generated
void Q7B_QWIDGET_LOCALE(Q7B self, Q7B theProperty); // generated
void Q7B_QWIDGET_LOWER(Q7B self); // generated
Q7B Q7B_QWIDGET_MAPFROM(Q7B self, Q7B Parent, Q7B Pos); // generated
Q7B Q7B_QWIDGET_MAPFROMGLOBAL(Q7B self, Q7B Pos); // generated
Q7B Q7B_QWIDGET_MAPFROMPARENT(Q7B self, Q7B Pos); // generated
Q7B Q7B_QWIDGET_MAPTO(Q7B self, Q7B Parent, Q7B Pos); // generated
Q7B Q7B_QWIDGET_MAPTOGLOBAL(Q7B self, Q7B Pos); // generated
Q7B Q7B_QWIDGET_MAPTOPARENT(Q7B self, Q7B Pos); // generated
Q7B Q7B_QWIDGET_MASK(Q7B self); // generated
Q7B Q7B_QWIDGET_MAXIMIZED(Q7B self); // generated
void Q7B_QWIDGET_MAXIMIZED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_MAXIMUMHEIGHT(Q7B self); // generated
void Q7B_QWIDGET_MAXIMUMHEIGHT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_MAXIMUMSIZE(Q7B self); // generated
void Q7B_QWIDGET_MAXIMUMSIZE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_MAXIMUMWIDTH(Q7B self); // generated
void Q7B_QWIDGET_MAXIMUMWIDTH(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_MINIMIZED(Q7B self); // generated
void Q7B_QWIDGET_MINIMIZED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_MINIMUMHEIGHT(Q7B self); // generated
void Q7B_QWIDGET_MINIMUMHEIGHT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_MINIMUMSIZE(Q7B self); // generated
void Q7B_QWIDGET_MINIMUMSIZE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_MINIMUMSIZEHINT(Q7B self); // generated
void Q7B_QWIDGET_MINIMUMSIZEHINT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_MINIMUMWIDTH(Q7B self); // generated
void Q7B_QWIDGET_MINIMUMWIDTH(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_MODAL(Q7B self); // generated
void Q7B_QWIDGET_MODAL(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_MOUSETRACKING(Q7B self); // generated
void Q7B_QWIDGET_MOUSETRACKING(Q7B self, Q7B theProperty); // generated
void Q7B_QWIDGET_MOVE(Q7B self, Q7B Point); // generated
void Q7B_QWIDGET_MOVE2(Q7B self, Q7B X, Q7B Y); // generated
Q7B Q7B_QWIDGET_NATIVEPARENTWIDGET(Q7B self); // generated
Q7B Q7B_QWIDGET_NEXTINFOCUSCHAIN(Q7B self); // generated
Q7B Q7B_QWIDGET_NORMALGEOMETRY(Q7B self); // generated
void Q7B_QWIDGET_OVERRIDEWINDOWFLAGS(Q7B self, Q7B Flags); // generated
Q7B Q7B_QWIDGET_PALETTE(Q7B self); // generated
Q7B Q7B_QWIDGET_PARENTWIDGET(Q7B self); // generated
Q7B Q7B_QWIDGET_POS(Q7B self); // generated
Q7B Q7B_QWIDGET_PREVIOUSINFOCUSCHAIN(Q7B self); // generated
void Q7B_QWIDGET_RAISE(Q7B self); // generated
Q7B Q7B_QWIDGET_RECT(Q7B self); // generated
void Q7B_QWIDGET_RELEASEKEYBOARD(Q7B self); // generated
void Q7B_QWIDGET_RELEASEMOUSE(Q7B self); // generated
void Q7B_QWIDGET_RELEASESHORTCUT(Q7B self, Q7B Id); // generated
void Q7B_QWIDGET_REMOVEACTION(Q7B self, Q7B Action); // generated
void Q7B_QWIDGET_REPAINT(Q7B self); // generated
void Q7B_QWIDGET_REPAINT2(Q7B self, Q7B Rect); // generated
void Q7B_QWIDGET_REPAINT3(Q7B self, Q7B Rgn); // generated
void Q7B_QWIDGET_RESIZE(Q7B self, Q7B NewSize); // generated
void Q7B_QWIDGET_RESIZE2(Q7B self, Q7B W, Q7B H); // generated
Q7B Q7B_QWIDGET_RESTOREGEOMETRY(Q7B self, Q7B Geometry); // generated
Q7B Q7B_QWIDGET_SAVEGEOMETRY(Q7B self); // generated
void Q7B_QWIDGET_SCROLL(Q7B self, Q7B Dx, Q7B Dy); // generated
void Q7B_QWIDGET_SCROLL2(Q7B self, Q7B Dx, Q7B Dy, Q7B R); // generated
void Q7B_QWIDGET_SETATTRIBUTE(Q7B self, Q7B Attribute, Q7B On); // generated
void Q7B_QWIDGET_SETBACKGROUNDROLE(Q7B self, Q7B Role); // generated
void Q7B_QWIDGET_SETBASESIZE(Q7B self, Q7B BaseW, Q7B BaseH); // generated
void Q7B_QWIDGET_SETCONTENTSMARGINS(Q7B self, Q7B Left, Q7B Top, Q7B Right, Q7B Bottom); // generated
void Q7B_QWIDGET_SETCONTENTSMARGINS2(Q7B self, Q7B Margins); // generated
void Q7B_QWIDGET_SETCONTEXTMENUPOLICY(Q7B self, Q7B Policy); // generated
void Q7B_QWIDGET_SETDISABLED(Q7B self, Q7B Disable); // generated
void Q7B_QWIDGET_SETENABLED(Q7B self, Q7B Enable); // generated
void Q7B_QWIDGET_SETFIXEDHEIGHT(Q7B self, Q7B H); // generated
void Q7B_QWIDGET_SETFIXEDSIZE(Q7B self, Q7B S); // generated
void Q7B_QWIDGET_SETFIXEDSIZE2(Q7B self, Q7B W, Q7B H); // generated
void Q7B_QWIDGET_SETFIXEDWIDTH(Q7B self, Q7B W); // generated
void Q7B_QWIDGET_SETFOCUS(Q7B self); // generated
void Q7B_QWIDGET_SETFOCUSPOLICY(Q7B self, Q7B Policy); // generated
void Q7B_QWIDGET_SETFOCUSPROXY(Q7B self, Q7B W); // generated
void Q7B_QWIDGET_SETFOREGROUNDROLE(Q7B self, Q7B Role); // generated
void Q7B_QWIDGET_SETGEOMETRY(Q7B self, Q7B X, Q7B Y, Q7B W, Q7B H); // generated
void Q7B_QWIDGET_SETHIDDEN(Q7B self, Q7B Hidden); // generated
void Q7B_QWIDGET_SETLAYOUT(Q7B self, Q7B Layout); // generated
void Q7B_QWIDGET_SETLAYOUTDIRECTION(Q7B self, Q7B Direction); // generated
void Q7B_QWIDGET_SETLOCALE(Q7B self, Q7B Locale); // generated
void Q7B_QWIDGET_SETMASK(Q7B self, Q7B Bitmap); // generated
void Q7B_QWIDGET_SETMASK2(Q7B self, Q7B Region); // generated
void Q7B_QWIDGET_SETMAXIMUMSIZE(Q7B self, Q7B MaxW, Q7B MaxH); // generated
void Q7B_QWIDGET_SETMAXIMUMWIDTH(Q7B self, Q7B MaxW); // generated
void Q7B_QWIDGET_SETMINIMUMSIZE(Q7B self, Q7B MinW, Q7B MinH); // generated
void Q7B_QWIDGET_SETMINIMUMWIDTH(Q7B self, Q7B MinW); // generated
void Q7B_QWIDGET_SETPARENT(Q7B self, Q7B Parent); // generated
void Q7B_QWIDGET_SETPARENT2(Q7B self, Q7B Parent, Q7B Flags); // generated
void Q7B_QWIDGET_SETSHORTCUTAUTOREPEAT(Q7B self, Q7B Id, Q7B Enable); // generated
void Q7B_QWIDGET_SETSHORTCUTENABLED(Q7B self, Q7B Id, Q7B Enable); // generated
void Q7B_QWIDGET_SETSIZEINCREMENT(Q7B self, Q7B W, Q7B H); // generated
void Q7B_QWIDGET_SETSIZEPOLICY(Q7B self, Q7B Horizontal, Q7B Vertical); // generated
void Q7B_QWIDGET_SETSTYLESHEET(Q7B self, Q7B StyleSheet); // generated
void Q7B_QWIDGET_SETVISIBLE(Q7B self, Q7B Visible); // generated
void Q7B_QWIDGET_SETWINDOWMODALITY(Q7B self, Q7B WindowModality); // generated
void Q7B_QWIDGET_SETWINDOWMODIFIED(Q7B self, Q7B Modified); // generated
void Q7B_QWIDGET_SETWINDOWROLE(Q7B self, Q7B Role); // generated
void Q7B_QWIDGET_SETWINDOWSTATE(Q7B self, Q7B WindowState); // generated
void Q7B_QWIDGET_SETWINDOWTITLE(Q7B self, Q7B Title); // generated
void Q7B_QWIDGET_SHOW(Q7B self); // generated
void Q7B_QWIDGET_SHOWFULLSCREEN(Q7B self); // generated
void Q7B_QWIDGET_SHOWMAXIMIZED(Q7B self); // generated
void Q7B_QWIDGET_SHOWMINIMIZED(Q7B self); // generated
void Q7B_QWIDGET_SHOWNORMAL(Q7B self); // generated
Q7B Q7B_QWIDGET_SIZE(Q7B self); // generated
Q7B Q7B_QWIDGET_SIZEHINT(Q7B self); // generated
void Q7B_QWIDGET_SIZEHINT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_SIZEINCREMENT(Q7B self); // generated
void Q7B_QWIDGET_SIZEINCREMENT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_SIZEPOLICY(Q7B self); // generated
Q7B Q7B_QWIDGET_STATUSTIP(Q7B self); // generated
void Q7B_QWIDGET_STATUSTIP(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_STYLE(Q7B self); // generated
Q7B Q7B_QWIDGET_STYLESHEET(Q7B self); // generated
void Q7B_QWIDGET_STYLESHEET(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_TESTATTRIBUTE(Q7B self, Q7B Attribute); // generated
Q7B Q7B_QWIDGET_TOOLTIP(Q7B self); // generated
Q7B Q7B_QWIDGET_UNDERMOUSE(Q7B self); // generated
void Q7B_QWIDGET_UNGRABGESTURE(Q7B self, Q7B Gesture); // generated
void Q7B_QWIDGET_UNSETCURSOR(Q7B self); // generated
void Q7B_QWIDGET_UNSETLAYOUTDIRECTION(Q7B self); // generated
void Q7B_QWIDGET_UNSETLOCALE(Q7B self); // generated
void Q7B_QWIDGET_UPDATE(Q7B self); // generated
void Q7B_QWIDGET_UPDATE2(Q7B self, Q7B Rect); // generated
void Q7B_QWIDGET_UPDATE3(Q7B self, Q7B Rgn); // generated
void Q7B_QWIDGET_UPDATEGEOMETRY(Q7B self); // generated
Q7B Q7B_QWIDGET_UPDATESENABLED(Q7B self); // generated
void Q7B_QWIDGET_UPDATESENABLED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_VISIBLE(Q7B self); // generated
void Q7B_QWIDGET_VISIBLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_VISIBLEREGION(Q7B self); // generated
Q7B Q7B_QWIDGET_WHATSTHIS(Q7B self); // generated
void Q7B_QWIDGET_WHATSTHIS(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_WIDTH(Q7B self); // generated
void Q7B_QWIDGET_WIDTH(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_WINDOW(Q7B self); // generated
Q7B Q7B_QWIDGET_WINDOWFILEPATH(Q7B self); // generated
void Q7B_QWIDGET_WINDOWFILEPATH(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_WINDOWFLAGS(Q7B self); // generated
void Q7B_QWIDGET_WINDOWFLAGS(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_WINDOWICON(Q7B self); // generated
void Q7B_QWIDGET_WINDOWICON(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_WINDOWICONTEXT(Q7B self); // generated
void Q7B_QWIDGET_WINDOWICONTEXT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_WINDOWMODALITY(Q7B self); // generated
void Q7B_QWIDGET_WINDOWMODALITY(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_WINDOWMODIFIED(Q7B self); // generated
void Q7B_QWIDGET_WINDOWMODIFIED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_WINDOWOPACITY(Q7B self); // generated
void Q7B_QWIDGET_WINDOWOPACITY(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_WINDOWROLE(Q7B self); // generated
Q7B Q7B_QWIDGET_WINDOWSTATE(Q7B self); // generated
Q7B Q7B_QWIDGET_WINDOWTITLE(Q7B self); // generated
Q7B Q7B_QWIDGET_WINDOWTYPE(Q7B self); // generated
Q7B Q7B_QWIDGET_X(Q7B self); // generated
void Q7B_QWIDGET_X(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWIDGET_Y(Q7B self); // generated
void Q7B_QWIDGET_Y(Q7B self, Q7B theProperty); // generated


void Q7B_QTEXTDOCUMENT_ADDRESOURCE(Q7B self, Q7B theType, Q7B Name, Q7B Resource); // generated
void Q7B_QTEXTDOCUMENT_ADJUSTSIZE(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_AVAILABLEREDOSTEPS(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_AVAILABLEUNDOSTEPS(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_BEGIN(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_BLOCKCOUNT(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_BLOCKCOUNT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTEXTDOCUMENT_CHARACTERAT(Q7B self, Q7B Pos); // generated
Q7B Q7B_QTEXTDOCUMENT_CHARACTERCOUNT(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_CLEAR(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_DEFAULTCURSORMOVESTYLE(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_DEFAULTFONT(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_DEFAULTFONT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTEXTDOCUMENT_DEFAULTSTYLESHEET(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_DEFAULTSTYLESHEET(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTEXTDOCUMENT_DEFAULTTEXTOPTION(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_DEFAULTTEXTOPTION(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTEXTDOCUMENT_DOCUMENTLAYOUT(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_DOCUMENTMARGIN(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_DOCUMENTMARGIN(Q7B self, Q7B theProperty); // generated
void Q7B_QTEXTDOCUMENT_DRAWCONTENTS(Q7B self, Q7B a0, Q7B Rect); // generated
Q7B Q7B_QTEXTDOCUMENT_END(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_FIND(Q7B self, Q7B SubString, Q7B Cursor, Q7B Options); // generated
Q7B Q7B_QTEXTDOCUMENT_FIND2(Q7B self, Q7B Expr, Q7B Cursor, Q7B Options); // generated
Q7B Q7B_QTEXTDOCUMENT_FIND3(Q7B self, Q7B SubString, Q7B Position, Q7B Options); // generated
Q7B Q7B_QTEXTDOCUMENT_FIND4(Q7B self, Q7B Expr, Q7B Position, Q7B Options); // generated
Q7B Q7B_QTEXTDOCUMENT_FINDBLOCK(Q7B self, Q7B Pos); // generated
Q7B Q7B_QTEXTDOCUMENT_FINDBLOCKBYLINENUMBER(Q7B self, Q7B LineNumber); // generated
Q7B Q7B_QTEXTDOCUMENT_FINDBLOCKBYNUMBER(Q7B self, Q7B BlockNumber); // generated
Q7B Q7B_QTEXTDOCUMENT_FIRSTBLOCK(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_IDEALWIDTH(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_INDENTWIDTH(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_INDENTWIDTH(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTEXTDOCUMENT_ISEMPTY(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_ISREDOAVAILABLE(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_ISUNDOAVAILABLE(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_LASTBLOCK(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_LINECOUNT(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_MARKCONTENTSDIRTY(Q7B self, Q7B Position, Q7B Length); // generated
Q7B Q7B_QTEXTDOCUMENT_MAXIMUMBLOCKCOUNT(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_MAXIMUMBLOCKCOUNT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTEXTDOCUMENT_METAINFORMATION(Q7B self, Q7B Info); // generated
Q7B Q7B_QTEXTDOCUMENT_MODIFIED(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_MODIFIED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTEXTDOCUMENT_OBJECT(Q7B self, Q7B ObjectIndex); // generated
Q7B Q7B_QTEXTDOCUMENT_OBJECTFORFORMAT(Q7B self, Q7B Format); // generated
Q7B Q7B_QTEXTDOCUMENT_PAGECOUNT(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_PAGESIZE(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_PAGESIZE(Q7B self, Q7B theProperty); // generated
void Q7B_QTEXTDOCUMENT_PRINT(Q7B self, Q7B Printer); // generated
void Q7B_QTEXTDOCUMENT_REDO(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_RESOURCE(Q7B self, Q7B Type, Q7B Name); // generated
Q7B Q7B_QTEXTDOCUMENT_REVISION(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_ROOTFRAME(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_SETDEFAULTCURSORMOVESTYLE(Q7B self, Q7B Style); // generated
void Q7B_QTEXTDOCUMENT_SETDOCUMENTLAYOUT(Q7B self, Q7B Layout); // generated
void Q7B_QTEXTDOCUMENT_SETHTML(Q7B self, Q7B Html); // generated
void Q7B_QTEXTDOCUMENT_SETMETAINFORMATION(Q7B self, Q7B Info, Q7B S); // generated
void Q7B_QTEXTDOCUMENT_SETMODIFIED(Q7B self, Q7B Modified); // generated
void Q7B_QTEXTDOCUMENT_SETPLAINTEXT(Q7B self, Q7B Text); // generated
void Q7B_QTEXTDOCUMENT_SETTEXTWIDTH(Q7B self, Q7B Width); // generated
void Q7B_QTEXTDOCUMENT_SETUNDOREDOENABLED(Q7B self, Q7B Enable); // generated
void Q7B_QTEXTDOCUMENT_SETUSEDESIGNMETRICS(Q7B self, Q7B B); // generated
Q7B Q7B_QTEXTDOCUMENT_SIZE(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_SIZE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTEXTDOCUMENT_TEXTWIDTH(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_TEXTWIDTH(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTEXTDOCUMENT_TOHTML(Q7B self, Q7B Encoding); // generated
Q7B Q7B_QTEXTDOCUMENT_TOPLAINTEXT(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_UNDO(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENT_UNDOREDOENABLED(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_UNDOREDOENABLED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTEXTDOCUMENT_USEDESIGNMETRICS(Q7B self); // generated
void Q7B_QTEXTDOCUMENT_USEDESIGNMETRICS(Q7B self, Q7B theProperty); // generated


Q7B Q7B_QTEXTEDIT_ACCEPTRICHTEXT(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_ALIGNMENT(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_ANCHORAT(Q7B self, Q7B Pos); // generated
void Q7B_QTEXTEDIT_APPEND(Q7B self, Q7B Text); // generated
Q7B Q7B_QTEXTEDIT_AUTOFORMATTING(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_CANPASTE(Q7B self); // generated
void Q7B_QTEXTEDIT_CLEAR(Q7B self); // generated
void Q7B_QTEXTEDIT_COPY(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_CREATESTANDARDCONTEXTMENU(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_CREATESTANDARDCONTEXTMENU2(Q7B self, Q7B Position); // generated
Q7B Q7B_QTEXTEDIT_CURRENTFONT(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_CURSORFORPOSITION(Q7B self, Q7B Pos); // generated
Q7B Q7B_QTEXTEDIT_CURSORWIDTH(Q7B self); // generated
void Q7B_QTEXTEDIT_CUT(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_DOCUMENT(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_DOCUMENTTITLE(Q7B self); // generated
void Q7B_QTEXTEDIT_ENSURECURSORVISIBLE(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_FIND(Q7B self, Q7B Exp, Q7B Options); // generated
Q7B Q7B_QTEXTEDIT_FONTFAMILY(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_FONTITALIC(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_FONTPOINTSIZE(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_FONTUNDERLINE(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_FONTWEIGHT(Q7B self); // generated
void Q7B_QTEXTEDIT_INSERTHTML(Q7B self, Q7B Text); // generated
void Q7B_QTEXTEDIT_INSERTPLAINTEXT(Q7B self, Q7B Text); // generated
Q7B Q7B_QTEXTEDIT_ISREADONLY(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_ISUNDOREDOENABLED(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_LINEWRAPCOLUMNORWIDTH(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_LINEWRAPMODE(Q7B self); // generated
void Q7B_QTEXTEDIT_MOVECURSOR(Q7B self, Q7B Operation, Q7B Mode); // generated
Q7B Q7B_QTEXTEDIT_OVERWRITEMODE(Q7B self); // generated
void Q7B_QTEXTEDIT_PASTE(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_PLAINTEXT(Q7B self); // generated
void Q7B_QTEXTEDIT_PLAINTEXT(Q7B self, Q7B theProperty); // generated
void Q7B_QTEXTEDIT_PRINT(Q7B self, Q7B Printer); // generated
Q7B Q7B_QTEXTEDIT_READONLY(Q7B self); // generated
void Q7B_QTEXTEDIT_READONLY(Q7B self, Q7B theProperty); // generated
void Q7B_QTEXTEDIT_REDO(Q7B self); // generated
void Q7B_QTEXTEDIT_SCROLLTOANCHOR(Q7B self, Q7B Name); // generated
void Q7B_QTEXTEDIT_SELECTALL(Q7B self); // generated
void Q7B_QTEXTEDIT_SETACCEPTRICHTEXT(Q7B self, Q7B Accept); // generated
void Q7B_QTEXTEDIT_SETALIGNMENT(Q7B self, Q7B A); // generated
void Q7B_QTEXTEDIT_SETAUTOFORMATTING(Q7B self, Q7B Features); // generated
void Q7B_QTEXTEDIT_SETCURRENTFONT(Q7B self, Q7B F); // generated
void Q7B_QTEXTEDIT_SETCURSORWIDTH(Q7B self, Q7B Width); // generated
void Q7B_QTEXTEDIT_SETDOCUMENT(Q7B self, Q7B Document); // generated
void Q7B_QTEXTEDIT_SETDOCUMENTTITLE(Q7B self, Q7B Title); // generated
void Q7B_QTEXTEDIT_SETFONTFAMILY(Q7B self, Q7B FontFamily); // generated
void Q7B_QTEXTEDIT_SETFONTITALIC(Q7B self, Q7B Italic); // generated
void Q7B_QTEXTEDIT_SETFONTPOINTSIZE(Q7B self, Q7B S); // generated
void Q7B_QTEXTEDIT_SETFONTUNDERLINE(Q7B self, Q7B Underline); // generated
void Q7B_QTEXTEDIT_SETFONTWEIGHT(Q7B self, Q7B Weight); // generated
void Q7B_QTEXTEDIT_SETHTML(Q7B self, Q7B Text); // generated
void Q7B_QTEXTEDIT_SETLINEWRAPCOLUMNORWIDTH(Q7B self, Q7B W); // generated
void Q7B_QTEXTEDIT_SETLINEWRAPMODE(Q7B self, Q7B Mode); // generated
void Q7B_QTEXTEDIT_SETOVERWRITEMODE(Q7B self, Q7B Overwrite); // generated
void Q7B_QTEXTEDIT_SETPLAINTEXT(Q7B self, Q7B Text); // generated
void Q7B_QTEXTEDIT_SETREADONLY(Q7B self, Q7B ReadOnly); // generated
void Q7B_QTEXTEDIT_SETTABCHANGESFOCUS(Q7B self, Q7B a0); // generated
void Q7B_QTEXTEDIT_SETTABSTOPWIDTH(Q7B self, Q7B Width); // generated
void Q7B_QTEXTEDIT_SETTEXT(Q7B self, Q7B Text); // generated
void Q7B_QTEXTEDIT_SETTEXTBACKGROUNDCOLOR(Q7B self, Q7B C); // generated
void Q7B_QTEXTEDIT_SETTEXTCOLOR(Q7B self, Q7B C); // generated
void Q7B_QTEXTEDIT_SETTEXTCURSOR(Q7B self, Q7B Cursor); // generated
void Q7B_QTEXTEDIT_SETTEXTINTERACTIONFLAGS(Q7B self, Q7B Flags); // generated
void Q7B_QTEXTEDIT_SETUNDOREDOENABLED(Q7B self, Q7B Enable); // generated
void Q7B_QTEXTEDIT_SETWORDWRAPMODE(Q7B self, Q7B Policy); // generated
Q7B Q7B_QTEXTEDIT_TABCHANGESFOCUS(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_TABSTOPWIDTH(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_TEXTBACKGROUNDCOLOR(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_TEXTCOLOR(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_TEXTCURSOR(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_TEXTINTERACTIONFLAGS(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_TOHTML(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_TOPLAINTEXT(Q7B self); // generated
void Q7B_QTEXTEDIT_UNDO(Q7B self); // generated
Q7B Q7B_QTEXTEDIT_UNDOREDOENABLED(Q7B self); // generated
void Q7B_QTEXTEDIT_UNDOREDOENABLED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTEXTEDIT_WORDWRAPMODE(Q7B self); // generated
void Q7B_QTEXTEDIT_ZOOMIN(Q7B self, Q7B Range); // generated
void Q7B_QTEXTEDIT_ZOOMOUT(Q7B self, Q7B Range); // generated

Q7B Q7B_QWEBSETTINGS_DEFAULTTEXTENCODING(Q7B self); // generated
Q7B Q7B_QWEBSETTINGS_FONTFAMILY(Q7B self, Q7B Which); // generated
Q7B Q7B_QWEBSETTINGS_FONTSIZE(Q7B self, Q7B Type); // generated
Q7B Q7B_QWEBSETTINGS_LOCALSTORAGEPATH(Q7B self); // generated
void Q7B_QWEBSETTINGS_RESETFONTFAMILY(Q7B self, Q7B Which); // generated
void Q7B_QWEBSETTINGS_RESETFONTSIZE(Q7B self, Q7B Type); // generated
void Q7B_QWEBSETTINGS_SETATTRIBUTE(Q7B self, Q7B Attribute, Q7B On); // generated
void Q7B_QWEBSETTINGS_SETDEFAULTTEXTENCODING(Q7B self, Q7B Encoding); // generated
void Q7B_QWEBSETTINGS_SETFONTFAMILY(Q7B self, Q7B Which, Q7B Family); // generated
void Q7B_QWEBSETTINGS_SETFONTSIZE(Q7B self, Q7B Type, Q7B Size); // generated
void Q7B_QWEBSETTINGS_SETLOCALSTORAGEPATH(Q7B self, Q7B Path); // generated
Q7B Q7B_QWEBSETTINGS_TESTATTRIBUTE(Q7B self, Q7B Attribute); // generated

void Q7B_QWEBVIEW_BACK(Q7B self); // generated
Q7B Q7B_QWEBVIEW_FINDTEXT(Q7B self, Q7B SubString, Q7B Options); // generated
void Q7B_QWEBVIEW_FORWARD(Q7B self); // generated
Q7B Q7B_QWEBVIEW_HISTORY(Q7B self); // generated
Q7B Q7B_QWEBVIEW_ICON(Q7B self); // generated
Q7B Q7B_QWEBVIEW_ISMODIFIED(Q7B self); // generated
void Q7B_QWEBVIEW_LOAD2(Q7B self, Q7B Request, Q7B Operation, Q7B Body); // generated
Q7B Q7B_QWEBVIEW_MODIFIED(Q7B self); // generated
void Q7B_QWEBVIEW_MODIFIED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWEBVIEW_PAGE(Q7B self); // generated
void Q7B_QWEBVIEW_PRINT(Q7B self, Q7B Printer); // generated
void Q7B_QWEBVIEW_RELOAD(Q7B self); // generated
Q7B Q7B_QWEBVIEW_RENDERHINTS(Q7B self); // generated
void Q7B_QWEBVIEW_RENDERHINTS(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QWEBVIEW_SELECTEDTEXT(Q7B self); // generated
void Q7B_QWEBVIEW_SELECTEDTEXT(Q7B self, Q7B theProperty); // generated
void Q7B_QWEBVIEW_SETPAGE(Q7B self, Q7B Page); // generated
void Q7B_QWEBVIEW_SETTEXTSIZEMULTIPLIER(Q7B self, Q7B Factor); // generated
void Q7B_QWEBVIEW_SETURL(Q7B self, Q7B Url); // generated
void Q7B_QWEBVIEW_SETZOOMFACTOR(Q7B self, Q7B Factor); // generated
Q7B Q7B_QWEBVIEW_SETTINGS(Q7B self); // generated
void Q7B_QWEBVIEW_STOP(Q7B self); // generated
Q7B Q7B_QWEBVIEW_TEXTSIZEMULTIPLIER(Q7B self); // generated
Q7B Q7B_QWEBVIEW_TITLE(Q7B self); // generated
void Q7B_QWEBVIEW_TRIGGERPAGEACTION(Q7B self, Q7B Action, Q7B Checked); // generated
Q7B Q7B_QWEBVIEW_URL(Q7B self); // generated
Q7B Q7B_QWEBVIEW_ZOOMFACTOR(Q7B self); // generated


Q7B Q7B_QABSTRACTSLIDER_HASTRACKING(Q7B self); // generated
Q7B Q7B_QABSTRACTSLIDER_INVERTEDAPPEARANCE(Q7B self); // generated
Q7B Q7B_QABSTRACTSLIDER_INVERTEDCONTROLS(Q7B self); // generated
Q7B Q7B_QABSTRACTSLIDER_ISSLIDERDOWN(Q7B self); // generated
Q7B Q7B_QABSTRACTSLIDER_MAXIMUM(Q7B self); // generated
Q7B Q7B_QABSTRACTSLIDER_MINIMUM(Q7B self); // generated
Q7B Q7B_QABSTRACTSLIDER_ORIENTATION(Q7B self); // generated
Q7B Q7B_QABSTRACTSLIDER_PAGESTEP(Q7B self); // generated
void Q7B_QABSTRACTSLIDER_SETINVERTEDAPPEARANCE(Q7B self, Q7B Inverted); // generated
void Q7B_QABSTRACTSLIDER_SETINVERTEDCONTROLS(Q7B self, Q7B Inverted); // generated
void Q7B_QABSTRACTSLIDER_SETMAXIMUM(Q7B self, Q7B Maximum); // generated
void Q7B_QABSTRACTSLIDER_SETMINIMUM(Q7B self, Q7B Minimum); // generated
void Q7B_QABSTRACTSLIDER_SETORIENTATION(Q7B self, Q7B Orientation); // generated
void Q7B_QABSTRACTSLIDER_SETPAGESTEP(Q7B self, Q7B Step); // generated
void Q7B_QABSTRACTSLIDER_SETRANGE(Q7B self, Q7B Min, Q7B Max); // generated
void Q7B_QABSTRACTSLIDER_SETSINGLESTEP(Q7B self, Q7B Step); // generated
void Q7B_QABSTRACTSLIDER_SETSLIDERDOWN(Q7B self, Q7B Down); // generated
void Q7B_QABSTRACTSLIDER_SETSLIDERPOSITION(Q7B self, Q7B Position); // generated
void Q7B_QABSTRACTSLIDER_SETTRACKING(Q7B self, Q7B Enable); // generated
void Q7B_QABSTRACTSLIDER_SETVALUE(Q7B self, Q7B Value); // generated
Q7B Q7B_QABSTRACTSLIDER_SINGLESTEP(Q7B self); // generated
void Q7B_QABSTRACTSLIDER_SINGLESTEP(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QABSTRACTSLIDER_SLIDERDOWN(Q7B self); // generated
void Q7B_QABSTRACTSLIDER_SLIDERDOWN(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QABSTRACTSLIDER_SLIDERPOSITION(Q7B self); // generated
Q7B Q7B_QABSTRACTSLIDER_TRACKING(Q7B self); // generated
void Q7B_QABSTRACTSLIDER_TRACKING(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QABSTRACTSLIDER_VALUE(Q7B self); // generated

void Q7B_QCOMBOBOX_ADDITEM(Q7B self, Q7B Icon, Q7B Text, Q7B UserData); // generated
void Q7B_QCOMBOBOX_ADDITEMS(Q7B self, Q7B Texts); // generated
void Q7B_QCOMBOBOX_CLEAR(Q7B self); // generated
void Q7B_QCOMBOBOX_CLEAREDITTEXT(Q7B self); // generated
Q7B Q7B_QCOMBOBOX_COUNT(Q7B self); // generated
Q7B Q7B_QCOMBOBOX_CURRENTTEXT(Q7B self); // generated
Q7B Q7B_QCOMBOBOX_DUPLICATESENABLED(Q7B self); // generated
Q7B Q7B_QCOMBOBOX_EDITABLE(Q7B self); // generated
void Q7B_QCOMBOBOX_EDITABLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QCOMBOBOX_FRAME(Q7B self); // generated
void Q7B_QCOMBOBOX_FRAME(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QCOMBOBOX_HASFRAME(Q7B self); // generated
Q7B Q7B_QCOMBOBOX_ICONSIZE(Q7B self); // generated
void Q7B_QCOMBOBOX_INSERTITEM(Q7B self, Q7B Index, Q7B Icon, Q7B Text, Q7B UserData); // generated
void Q7B_QCOMBOBOX_INSERTITEMS(Q7B self, Q7B Index, Q7B List); // generated
Q7B Q7B_QCOMBOBOX_INSERTPOLICY(Q7B self); // generated
void Q7B_QCOMBOBOX_INSERTSEPARATOR(Q7B self, Q7B Index); // generated
Q7B Q7B_QCOMBOBOX_ISEDITABLE(Q7B self); // generated
Q7B Q7B_QCOMBOBOX_ITEMICON(Q7B self, Q7B Index); // generated
Q7B Q7B_QCOMBOBOX_ITEMTEXT(Q7B self, Q7B Index); // generated
Q7B Q7B_QCOMBOBOX_LINEEDIT(Q7B self); // generated
Q7B Q7B_QCOMBOBOX_MAXCOUNT(Q7B self); // generated
Q7B Q7B_QCOMBOBOX_MAXVISIBLEITEMS(Q7B self); // generated
Q7B Q7B_QCOMBOBOX_MINIMUMCONTENTSLENGTH(Q7B self); // generated
void Q7B_QCOMBOBOX_MINIMUMCONTENTSLENGTH(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QCOMBOBOX_MINIMUMCONTENTSLENGTH (Q7B self); // generated
Q7B Q7B_QCOMBOBOX_MODELCOLUMN(Q7B self); // generated
void Q7B_QCOMBOBOX_REMOVEITEM(Q7B self, Q7B Index); // generated
void Q7B_QCOMBOBOX_SETCURRENTINDEX(Q7B self, Q7B Index); // generated
void Q7B_QCOMBOBOX_SETDUPLICATESENABLED(Q7B self, Q7B Enable); // generated
void Q7B_QCOMBOBOX_SETEDITTEXT(Q7B self, Q7B Text); // generated
void Q7B_QCOMBOBOX_SETEDITABLE(Q7B self, Q7B Editable); // generated
void Q7B_QCOMBOBOX_SETFRAME(Q7B self, Q7B Frame); // generated
void Q7B_QCOMBOBOX_SETICONSIZE(Q7B self, Q7B Size); // generated
void Q7B_QCOMBOBOX_SETINSERTPOLICY(Q7B self, Q7B Policy); // generated
void Q7B_QCOMBOBOX_SETITEMICON(Q7B self, Q7B Index, Q7B Icon); // generated
void Q7B_QCOMBOBOX_SETITEMTEXT(Q7B self, Q7B Index, Q7B Text); // generated
void Q7B_QCOMBOBOX_SETLINEEDIT(Q7B self, Q7B Edit); // generated
void Q7B_QCOMBOBOX_SETMAXCOUNT(Q7B self, Q7B Max); // generated
void Q7B_QCOMBOBOX_SETMAXVISIBLEITEMS(Q7B self, Q7B MaxItems); // generated
void Q7B_QCOMBOBOX_SETMINIMUMCONTENTSLENGTH(Q7B self, Q7B Characters); // generated
void Q7B_QCOMBOBOX_SETMODELCOLUMN(Q7B self, Q7B VisibleColumn); // generated
void Q7B_QCOMBOBOX_SETSIZEADJUSTPOLICY(Q7B self, Q7B Policy); // generated
Q7B Q7B_QCOMBOBOX_SIZEADJUSTPOLICY(Q7B self); // generated

Q7B Q7B_QCOMMANDLINKBUTTON_FLAT(Q7B self); // generated
void Q7B_QCOMMANDLINKBUTTON_FLAT(Q7B self, Q7B theProperty); // generated
void Q7B_QCOMMANDLINKBUTTON_SETDESCRIPTION(Q7B self, Q7B Description); // generated

Q7B Q7B_QLINEEDIT_ACCEPTABLEINPUT(Q7B self); // generated
void Q7B_QLINEEDIT_ACCEPTABLEINPUT(Q7B self, Q7B theProperty); // generated
void Q7B_QLINEEDIT_BACKSPACE(Q7B self); // generated
void Q7B_QLINEEDIT_CLEAR(Q7B self); // generated
void Q7B_QLINEEDIT_COPY(Q7B self); // generated
Q7B Q7B_QLINEEDIT_CREATESTANDARDCONTEXTMENU(Q7B self); // generated
void Q7B_QLINEEDIT_CURSORBACKWARD(Q7B self, Q7B Mark, Q7B Steps); // generated
void Q7B_QLINEEDIT_CURSORFORWARD(Q7B self, Q7B Mark, Q7B Steps); // generated
Q7B Q7B_QLINEEDIT_CURSORMOVESTYLE(Q7B self); // generated
Q7B Q7B_QLINEEDIT_CURSORPOSITION(Q7B self); // generated
Q7B Q7B_QLINEEDIT_CURSORPOSITIONAT(Q7B self, Q7B Pos); // generated
void Q7B_QLINEEDIT_CURSORWORDBACKWARD(Q7B self, Q7B Mark); // generated
void Q7B_QLINEEDIT_CURSORWORDFORWARD(Q7B self, Q7B Mark); // generated
void Q7B_QLINEEDIT_CUT(Q7B self); // generated
void Q7B_QLINEEDIT_DEL(Q7B self); // generated
void Q7B_QLINEEDIT_DESELECT(Q7B self); // generated
Q7B Q7B_QLINEEDIT_DISPLAYTEXT(Q7B self); // generated
Q7B Q7B_QLINEEDIT_DRAGENABLED(Q7B self); // generated
void Q7B_QLINEEDIT_END(Q7B self, Q7B Mark); // generated
Q7B Q7B_QLINEEDIT_FRAME(Q7B self); // generated
void Q7B_QLINEEDIT_FRAME(Q7B self, Q7B theProperty); // generated
void Q7B_QLINEEDIT_GETTEXTMARGINS(Q7B self, Q7B Left, Q7B Top, Q7B Right, Q7B Bottom); // generated
Q7B Q7B_QLINEEDIT_HASACCEPTABLEINPUT(Q7B self); // generated
Q7B Q7B_QLINEEDIT_HASFRAME(Q7B self); // generated
Q7B Q7B_QLINEEDIT_HASSELECTEDTEXT(Q7B self); // generated
void Q7B_QLINEEDIT_HOME(Q7B self, Q7B Mark); // generated
void Q7B_QLINEEDIT_INSERT(Q7B self, Q7B NewText); // generated
Q7B Q7B_QLINEEDIT_ISMODIFIED(Q7B self); // generated
Q7B Q7B_QLINEEDIT_ISREADONLY(Q7B self); // generated
Q7B Q7B_QLINEEDIT_ISREDOAVAILABLE(Q7B self); // generated
Q7B Q7B_QLINEEDIT_ISUNDOAVAILABLE(Q7B self); // generated
Q7B Q7B_QLINEEDIT_MAXLENGTH(Q7B self); // generated
Q7B Q7B_QLINEEDIT_MODIFIED(Q7B self); // generated
void Q7B_QLINEEDIT_MODIFIED(Q7B self, Q7B theProperty); // generated
void Q7B_QLINEEDIT_PASTE(Q7B self); // generated
Q7B Q7B_QLINEEDIT_PLACEHOLDERTEXT(Q7B self); // generated
void Q7B_QLINEEDIT_REDO(Q7B self); // generated
Q7B Q7B_QLINEEDIT_REDOAVAILABLE(Q7B self); // generated
void Q7B_QLINEEDIT_REDOAVAILABLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QLINEEDIT_SELECTEDTEXT(Q7B self); // generated
Q7B Q7B_QLINEEDIT_SELECTIONSTART(Q7B self); // generated
void Q7B_QLINEEDIT_SETALIGNMENT(Q7B self, Q7B Flag); // generated
void Q7B_QLINEEDIT_SETCURSORMOVESTYLE(Q7B self, Q7B Style); // generated
void Q7B_QLINEEDIT_SETCURSORPOSITION(Q7B self, Q7B Position); // generated
void Q7B_QLINEEDIT_SETDRAGENABLED(Q7B self, Q7B B); // generated
void Q7B_QLINEEDIT_SETECHOMODE(Q7B self, Q7B Mode); // generated
void Q7B_QLINEEDIT_SETFRAME(Q7B self, Q7B Frame); // generated
void Q7B_QLINEEDIT_SETINPUTMASK(Q7B self, Q7B InputMask); // generated
void Q7B_QLINEEDIT_SETMAXLENGTH(Q7B self, Q7B Length); // generated
void Q7B_QLINEEDIT_SETMODIFIED(Q7B self, Q7B Modified); // generated
void Q7B_QLINEEDIT_SETPLACEHOLDERTEXT(Q7B self, Q7B PlaceHolder); // generated
void Q7B_QLINEEDIT_SETREADONLY(Q7B self, Q7B Ro); // generated
void Q7B_QLINEEDIT_SETSELECTION(Q7B self, Q7B Start, Q7B Length); // generated
void Q7B_QLINEEDIT_SETTEXT(Q7B self, Q7B Text); // generated
void Q7B_QLINEEDIT_SETTEXTMARGINS(Q7B self, Q7B Left, Q7B Top, Q7B Right, Q7B Bottom); // generated
void Q7B_QLINEEDIT_UNDO(Q7B self); // generated
Q7B Q7B_QLINEEDIT_UNDOAVAILABLE(Q7B self); // generated
void Q7B_QLINEEDIT_UNDOAVAILABLE(Q7B self, Q7B theProperty); // generated

Q7B Q7B_QPLAINTEXTEDIT_ANCHORAT(Q7B self, Q7B Pos); // generated
void Q7B_QPLAINTEXTEDIT_APPENDHTML(Q7B self, Q7B Html); // generated
Q7B Q7B_QPLAINTEXTEDIT_BACKGROUNDVISIBLE(Q7B self); // generated
Q7B Q7B_QPLAINTEXTEDIT_BLOCKCOUNT(Q7B self); // generated
Q7B Q7B_QPLAINTEXTEDIT_CANPASTE(Q7B self); // generated
void Q7B_QPLAINTEXTEDIT_CENTERCURSOR(Q7B self); // generated
Q7B Q7B_QPLAINTEXTEDIT_CENTERONSCROLL(Q7B self); // generated
void Q7B_QPLAINTEXTEDIT_CLEAR(Q7B self); // generated
void Q7B_QPLAINTEXTEDIT_COPY(Q7B self); // generated
Q7B Q7B_QPLAINTEXTEDIT_CREATESTANDARDCONTEXTMENU(Q7B self); // generated
Q7B Q7B_QPLAINTEXTEDIT_CURSORFORPOSITION(Q7B self, Q7B Pos); // generated
Q7B Q7B_QPLAINTEXTEDIT_CURSORWIDTH(Q7B self); // generated
void Q7B_QPLAINTEXTEDIT_CUT(Q7B self); // generated
Q7B Q7B_QPLAINTEXTEDIT_DOCUMENT(Q7B self); // generated
Q7B Q7B_QPLAINTEXTEDIT_DOCUMENTTITLE(Q7B self); // generated
void Q7B_QPLAINTEXTEDIT_ENSURECURSORVISIBLE(Q7B self); // generated
Q7B Q7B_QPLAINTEXTEDIT_FIND(Q7B self, Q7B Exp, Q7B Options); // generated
void Q7B_QPLAINTEXTEDIT_INSERTPLAINTEXT(Q7B self, Q7B Text); // generated
Q7B Q7B_QPLAINTEXTEDIT_ISREADONLY(Q7B self); // generated
Q7B Q7B_QPLAINTEXTEDIT_ISUNDOREDOENABLED(Q7B self); // generated
Q7B Q7B_QPLAINTEXTEDIT_LINEWRAPMODE(Q7B self); // generated
Q7B Q7B_QPLAINTEXTEDIT_MAXIMUMBLOCKCOUNT(Q7B self); // generated
void Q7B_QPLAINTEXTEDIT_MOVECURSOR(Q7B self, Q7B Operation, Q7B Mode); // generated
Q7B Q7B_QPLAINTEXTEDIT_OVERWRITEMODE(Q7B self); // generated
void Q7B_QPLAINTEXTEDIT_PASTE(Q7B self); // generated
void Q7B_QPLAINTEXTEDIT_PRINT(Q7B self, Q7B Printer); // generated
void Q7B_QPLAINTEXTEDIT_REDO(Q7B self); // generated
void Q7B_QPLAINTEXTEDIT_SELECTALL(Q7B self); // generated
void Q7B_QPLAINTEXTEDIT_SETBACKGROUNDVISIBLE(Q7B self, Q7B Visible); // generated
void Q7B_QPLAINTEXTEDIT_SETCENTERONSCROLL(Q7B self, Q7B Enabled); // generated
void Q7B_QPLAINTEXTEDIT_SETCURSORWIDTH(Q7B self, Q7B Width); // generated
void Q7B_QPLAINTEXTEDIT_SETDOCUMENT(Q7B self, Q7B Document); // generated
void Q7B_QPLAINTEXTEDIT_SETDOCUMENTTITLE(Q7B self, Q7B Title); // generated
void Q7B_QPLAINTEXTEDIT_SETLINEWRAPMODE(Q7B self, Q7B Mode); // generated
void Q7B_QPLAINTEXTEDIT_SETMAXIMUMBLOCKCOUNT(Q7B self, Q7B Maximum); // generated
void Q7B_QPLAINTEXTEDIT_SETOVERWRITEMODE(Q7B self, Q7B Overwrite); // generated
void Q7B_QPLAINTEXTEDIT_SETPLAINTEXT(Q7B self, Q7B Text); // generated
void Q7B_QPLAINTEXTEDIT_SETREADONLY(Q7B self, Q7B Ro); // generated
void Q7B_QPLAINTEXTEDIT_SETTABCHANGESFOCUS(Q7B self, Q7B B); // generated
void Q7B_QPLAINTEXTEDIT_SETTABSTOPWIDTH(Q7B self, Q7B Width); // generated
void Q7B_QPLAINTEXTEDIT_SETTEXTCURSOR(Q7B self, Q7B Cursor); // generated
void Q7B_QPLAINTEXTEDIT_SETTEXTINTERACTIONFLAGS(Q7B self, Q7B Flags); // generated
void Q7B_QPLAINTEXTEDIT_SETUNDOREDOENABLED(Q7B self, Q7B Enable); // generated
Q7B Q7B_QPLAINTEXTEDIT_TABCHANGESFOCUS(Q7B self); // generated
Q7B Q7B_QPLAINTEXTEDIT_TABSTOPWIDTH(Q7B self); // generated
Q7B Q7B_QPLAINTEXTEDIT_TEXTCURSOR(Q7B self); // generated
Q7B Q7B_QPLAINTEXTEDIT_TEXTINTERACTIONFLAGS(Q7B self); // generated
Q7B Q7B_QPLAINTEXTEDIT_TOPLAINTEXT(Q7B self); // generated
void Q7B_QPLAINTEXTEDIT_UNDO(Q7B self); // generated
Q7B Q7B_QPLAINTEXTEDIT_UNDOREDOENABLED(Q7B self); // generated
void Q7B_QPLAINTEXTEDIT_UNDOREDOENABLED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPLAINTEXTEDIT_WORDWRAPMODE(Q7B self); // generated

Q7B Q7B_QSTACKEDWIDGET_ADDWIDGET(Q7B self, Q7B Widget); // generated
Q7B Q7B_QSTACKEDWIDGET_COUNT(Q7B self); // generated
Q7B Q7B_QSTACKEDWIDGET_INDEXOF(Q7B self, Q7B Widget); // generated
Q7B Q7B_QSTACKEDWIDGET_INSERTWIDGET(Q7B self, Q7B Index, Q7B Widget); // generated
void Q7B_QSTACKEDWIDGET_REMOVEWIDGET(Q7B self, Q7B Widget); // generated
void Q7B_QSTACKEDWIDGET_SETCURRENTINDEX(Q7B self, Q7B Index); // generated
void Q7B_QSTACKEDWIDGET_SETCURRENTWIDGET(Q7B self, Q7B Widget); // generated
Q7B Q7B_QSTACKEDWIDGET_WIDGET(Q7B self, Q7B Index); // generated

void Q7B_QSTRINGLIST_APPEND(Q7B self, Q7B Str); // generated
Q7B Q7B_QSTRINGLIST_CONTAINS(Q7B self, Q7B Str, Q7B Cs); // generated
Q7B Q7B_QSTRINGLIST_FILTER(Q7B self, Q7B Rx); // generated
Q7B Q7B_QSTRINGLIST_INDEXOF(Q7B self, Q7B Value, Q7B From); // generated
Q7B Q7B_QSTRINGLIST_JOIN(Q7B self, Q7B Separator); // generated
Q7B Q7B_QSTRINGLIST_LASTINDEXOF(Q7B self, Q7B Value, Q7B From); // generated
Q7B Q7B_QSTRINGLIST_REMOVEDUPLICATES(Q7B self); // generated
Q7B Q7B_QSTRINGLIST_REPLACEINSTRINGS(Q7B self, Q7B Rx, Q7B After); // generated
void Q7B_QSTRINGLIST_SORT(Q7B self); // generated

Q7B Q7B_QTABWIDGET_ADDTAB(Q7B self, Q7B Page, Q7B Icon, Q7B Label); // generated
void Q7B_QTABWIDGET_CLEAR(Q7B self); // generated
Q7B Q7B_QTABWIDGET_CURRENTWIDGET(Q7B self); // generated
Q7B Q7B_QTABWIDGET_DOCUMENTMODE(Q7B self); // generated
Q7B Q7B_QTABWIDGET_ELIDEMODE(Q7B self); // generated
Q7B Q7B_QTABWIDGET_ICONSIZE(Q7B self); // generated
Q7B Q7B_QTABWIDGET_INDEXOF(Q7B self, Q7B W); // generated
Q7B Q7B_QTABWIDGET_INSERTTAB(Q7B self, Q7B Index, Q7B Page, Q7B Icon, Q7B Label); // generated
Q7B Q7B_QTABWIDGET_ISMOVABLE(Q7B self); // generated
Q7B Q7B_QTABWIDGET_ISTABENABLED(Q7B self, Q7B Index); // generated
Q7B Q7B_QTABWIDGET_MOVABLE(Q7B self); // generated
void Q7B_QTABWIDGET_MOVABLE(Q7B self, Q7B theProperty); // generated
void Q7B_QTABWIDGET_REMOVETAB(Q7B self, Q7B Index); // generated
void Q7B_QTABWIDGET_SETCURRENTINDEX(Q7B self, Q7B Index); // generated
void Q7B_QTABWIDGET_SETCURRENTWIDGET(Q7B self, Q7B Widget); // generated
void Q7B_QTABWIDGET_SETDOCUMENTMODE(Q7B self, Q7B Set); // generated
void Q7B_QTABWIDGET_SETELIDEMODE(Q7B self, Q7B Mode); // generated
void Q7B_QTABWIDGET_SETICONSIZE(Q7B self, Q7B Size); // generated
void Q7B_QTABWIDGET_SETMOVABLE(Q7B self, Q7B Movable); // generated
void Q7B_QTABWIDGET_SETTABENABLED(Q7B self, Q7B Index, Q7B Enable); // generated
void Q7B_QTABWIDGET_SETTABICON(Q7B self, Q7B Index, Q7B Icon); // generated
void Q7B_QTABWIDGET_SETTABPOSITION(Q7B self, Q7B Position); // generated
void Q7B_QTABWIDGET_SETTABSHAPE(Q7B self, Q7B Shape); // generated
void Q7B_QTABWIDGET_SETTABTEXT(Q7B self, Q7B Index, Q7B Label); // generated
void Q7B_QTABWIDGET_SETTABTOOLTIP(Q7B self, Q7B Index, Q7B Tip); // generated
void Q7B_QTABWIDGET_SETTABWHATSTHIS(Q7B self, Q7B Index, Q7B Text); // generated
void Q7B_QTABWIDGET_SETTABSCLOSABLE(Q7B self, Q7B Closeable); // generated
void Q7B_QTABWIDGET_SETUSESSCROLLBUTTONS(Q7B self, Q7B UseButtons); // generated
Q7B Q7B_QTABWIDGET_TABICON(Q7B self, Q7B Index); // generated
Q7B Q7B_QTABWIDGET_TABPOSITION(Q7B self); // generated
Q7B Q7B_QTABWIDGET_TABSHAPE(Q7B self); // generated
Q7B Q7B_QTABWIDGET_TABTEXT(Q7B self, Q7B Index); // generated
Q7B Q7B_QTABWIDGET_TABTOOLTIP(Q7B self, Q7B Index); // generated
Q7B Q7B_QTABWIDGET_TABWHATSTHIS(Q7B self, Q7B Index); // generated
Q7B Q7B_QTABWIDGET_TABSCLOSABLE(Q7B self); // generated
Q7B Q7B_QTABWIDGET_USESSCROLLBUTTONS(Q7B self); // generated

Q7B Q7B_QTABLEWIDGET_ALTERNATINGROWCOLORS(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_AUTOSCROLL(Q7B self); // generated
void Q7B_QTABLEWIDGET_AUTOSCROLL(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTABLEWIDGET_AUTOSCROLLMARGIN(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_CELLWIDGET(Q7B self, Q7B Row, Q7B Column); // generated
void Q7B_QTABLEWIDGET_CLEARSELECTION(Q7B self); // generated
void Q7B_QTABLEWIDGET_CLOSEPERSISTENTEDITOR(Q7B self, Q7B Item); // generated
Q7B Q7B_QTABLEWIDGET_COLORCOUNT(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_CURRENTCOLUMN(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_CURRENTINDEX(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_CURRENTITEM(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_DEFAULTDROPACTION(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_DEPTH(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_DRAGDROPMODE(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_DRAGDROPOVERWRITEMODE(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_DRAGENABLED(Q7B self); // generated
void Q7B_QTABLEWIDGET_EDIT(Q7B self, Q7B Index); // generated
void Q7B_QTABLEWIDGET_EDITITEM(Q7B self, Q7B Item); // generated
Q7B Q7B_QTABLEWIDGET_EDITTRIGGERS(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_FINDITEMS(Q7B self, Q7B Text, Q7B Flags); // generated
Q7B Q7B_QTABLEWIDGET_HASAUTOSCROLL(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_HEIGHT(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_HEIGHTMM(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_HORIZONTALHEADERITEM(Q7B self, Q7B Column); // generated
Q7B Q7B_QTABLEWIDGET_HORIZONTALSCROLLMODE(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_ICONSIZE(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_INDEXWIDGET(Q7B self, Q7B Index); // generated
void Q7B_QTABLEWIDGET_INSERTCOLUMN(Q7B self, Q7B Column); // generated
void Q7B_QTABLEWIDGET_INSERTROW(Q7B self, Q7B Row); // generated
Q7B Q7B_QTABLEWIDGET_ITEMAT(Q7B self, Q7B Ax, Q7B Ay); // generated
void Q7B_QTABLEWIDGET_REMOVECELLWIDGET(Q7B self, Q7B Row, Q7B Column); // generated
void Q7B_QTABLEWIDGET_REMOVECOLUMN(Q7B self, Q7B Column); // generated
void Q7B_QTABLEWIDGET_RESET(Q7B self); // generated
void Q7B_QTABLEWIDGET_SCROLLTO(Q7B self, Q7B Index, Q7B Hint); // generated
void Q7B_QTABLEWIDGET_SCROLLTOBOTTOM(Q7B self); // generated
void Q7B_QTABLEWIDGET_SCROLLTOITEM(Q7B self, Q7B Item, Q7B Hint); // generated
void Q7B_QTABLEWIDGET_SCROLLTOTOP(Q7B self); // generated
void Q7B_QTABLEWIDGET_SELECTALL(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_SELECTEDITEMS(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_SELECTEDRANGES(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_SELECTIONBEHAVIOR(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_SELECTIONMODE(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_SELECTIONMODEL(Q7B self); // generated
void Q7B_QTABLEWIDGET_SETALTERNATINGROWCOLORS(Q7B self, Q7B Enable); // generated
void Q7B_QTABLEWIDGET_SETAUTOSCROLL(Q7B self, Q7B Enable); // generated
void Q7B_QTABLEWIDGET_SETAUTOSCROLLMARGIN(Q7B self, Q7B Margin); // generated
void Q7B_QTABLEWIDGET_SETCELLWIDGET(Q7B self, Q7B Row, Q7B Column, Q7B Widget); // generated
void Q7B_QTABLEWIDGET_SETCOLUMNCOUNT(Q7B self, Q7B Columns); // generated
void Q7B_QTABLEWIDGET_SETCURRENTITEM(Q7B self, Q7B Item, Q7B a1); // generated
void Q7B_QTABLEWIDGET_SETDEFAULTDROPACTION(Q7B self, Q7B DropAction); // generated
void Q7B_QTABLEWIDGET_SETDRAGDROPMODE(Q7B self, Q7B Behavior); // generated
void Q7B_QTABLEWIDGET_SETDRAGDROPOVERWRITEMODE(Q7B self, Q7B Overwrite); // generated
void Q7B_QTABLEWIDGET_SETDRAGENABLED(Q7B self, Q7B Enable); // generated
void Q7B_QTABLEWIDGET_SETDROPINDICATORSHOWN(Q7B self, Q7B Enable); // generated
void Q7B_QTABLEWIDGET_SETEDITTRIGGERS(Q7B self, Q7B Triggers); // generated
void Q7B_QTABLEWIDGET_SETHORIZONTALHEADERITEM(Q7B self, Q7B Column, Q7B Item); // generated
void Q7B_QTABLEWIDGET_SETHORIZONTALHEADERLABELS(Q7B self, Q7B Labels); // generated
void Q7B_QTABLEWIDGET_SETHORIZONTALSCROLLMODE(Q7B self, Q7B Mode); // generated
void Q7B_QTABLEWIDGET_SETICONSIZE(Q7B self, Q7B Size); // generated
void Q7B_QTABLEWIDGET_SETRANGESELECTED(Q7B self, Q7B Range, Q7B Select); // generated
void Q7B_QTABLEWIDGET_SETROWCOUNT(Q7B self, Q7B Rows); // generated
void Q7B_QTABLEWIDGET_SETSELECTIONBEHAVIOR(Q7B self, Q7B Behavior); // generated
void Q7B_QTABLEWIDGET_SETSELECTIONMODE(Q7B self, Q7B Mode); // generated
void Q7B_QTABLEWIDGET_SETSELECTIONMODEL(Q7B self, Q7B SelectionModel); // generated
void Q7B_QTABLEWIDGET_SETTABKEYNAVIGATION(Q7B self, Q7B Enable); // generated
void Q7B_QTABLEWIDGET_SETTEXTELIDEMODE(Q7B self, Q7B Mode); // generated
void Q7B_QTABLEWIDGET_SETVERTICALHEADERITEM(Q7B self, Q7B Row, Q7B Item); // generated
void Q7B_QTABLEWIDGET_SETVERTICALHEADERLABELS(Q7B self, Q7B Labels); // generated
void Q7B_QTABLEWIDGET_SETVERTICALSCROLLMODE(Q7B self, Q7B Mode); // generated
Q7B Q7B_QTABLEWIDGET_SHOWDROPINDICATOR(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_SIZEHINTFORCOLUMN(Q7B self, Q7B Column); // generated
Q7B Q7B_QTABLEWIDGET_SIZEHINTFORROW(Q7B self, Q7B Row); // generated
Q7B Q7B_QTABLEWIDGET_TABKEYNAVIGATION(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_TAKEHORIZONTALHEADERITEM(Q7B self, Q7B Column); // generated
Q7B Q7B_QTABLEWIDGET_TAKEITEM(Q7B self, Q7B Row, Q7B Column); // generated
Q7B Q7B_QTABLEWIDGET_TAKEVERTICALHEADERITEM(Q7B self, Q7B Row); // generated
Q7B Q7B_QTABLEWIDGET_TEXTELIDEMODE(Q7B self); // generated
void Q7B_QTABLEWIDGET_UPDATE(Q7B self, Q7B Index); // generated
Q7B Q7B_QTABLEWIDGET_VERTICALHEADERITEM(Q7B self, Q7B Row); // generated
Q7B Q7B_QTABLEWIDGET_VERTICALSCROLLMODE(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_WIDTH(Q7B self); // generated
Q7B Q7B_QTABLEWIDGET_WIDTHMM(Q7B self); // generated

void Q7B_QTREEWIDGETITEM_ADDCHILD(Q7B self, Q7B Child); // generated
Q7B Q7B_QTREEWIDGETITEM_BACKGROUND(Q7B self, Q7B Column); // generated
Q7B Q7B_QTREEWIDGETITEM_CHECKSTATE(Q7B self, Q7B Column); // generated
Q7B Q7B_QTREEWIDGETITEM_CHILD(Q7B self, Q7B Index); // generated
Q7B Q7B_QTREEWIDGETITEM_CHILDCOUNT(Q7B self); // generated
Q7B Q7B_QTREEWIDGETITEM_CHILDINDICATORPOLICY(Q7B self); // generated
Q7B Q7B_QTREEWIDGETITEM_CLONE(Q7B self); // generated
Q7B Q7B_QTREEWIDGETITEM_COLUMNCOUNT(Q7B self); // generated
Q7B Q7B_QTREEWIDGETITEM_FLAGS(Q7B self); // generated
Q7B Q7B_QTREEWIDGETITEM_FONT(Q7B self, Q7B Column); // generated
Q7B Q7B_QTREEWIDGETITEM_FOREGROUND(Q7B self, Q7B Column); // generated
Q7B Q7B_QTREEWIDGETITEM_ICON(Q7B self, Q7B Column); // generated
Q7B Q7B_QTREEWIDGETITEM_INDEXOFCHILD(Q7B self, Q7B Child); // generated
void Q7B_QTREEWIDGETITEM_INSERTCHILD(Q7B self, Q7B Index, Q7B Child); // generated
Q7B Q7B_QTREEWIDGETITEM_ISDISABLED(Q7B self); // generated
Q7B Q7B_QTREEWIDGETITEM_ISEXPANDED(Q7B self); // generated
Q7B Q7B_QTREEWIDGETITEM_ISFIRSTCOLUMNSPANNED(Q7B self); // generated
Q7B Q7B_QTREEWIDGETITEM_ISHIDDEN(Q7B self); // generated
Q7B Q7B_QTREEWIDGETITEM_ISSELECTED (Q7B self); // generated
Q7B Q7B_QTREEWIDGETITEM_PARENT(Q7B self); // generated
void Q7B_QTREEWIDGETITEM_READ(Q7B self, Q7B In); // generated
void Q7B_QTREEWIDGETITEM_REMOVECHILD(Q7B self, Q7B Child); // generated
void Q7B_QTREEWIDGETITEM_SETBACKGROUND(Q7B self, Q7B Column, Q7B Brush); // generated
void Q7B_QTREEWIDGETITEM_SETCHECKSTATE(Q7B self, Q7B Column, Q7B State); // generated
void Q7B_QTREEWIDGETITEM_SETCHILDINDICATORPOLICY(Q7B self, Q7B Policy); // generated
void Q7B_QTREEWIDGETITEM_SETDISABLED(Q7B self, Q7B Disabled); // generated
void Q7B_QTREEWIDGETITEM_SETEXPANDED(Q7B self, Q7B Expand); // generated
void Q7B_QTREEWIDGETITEM_SETFIRSTCOLUMNSPANNED(Q7B self, Q7B Span); // generated
void Q7B_QTREEWIDGETITEM_SETFLAGS(Q7B self, Q7B Flags); // generated
void Q7B_QTREEWIDGETITEM_SETFONT(Q7B self, Q7B Column, Q7B Font); // generated
void Q7B_QTREEWIDGETITEM_SETFOREGROUND(Q7B self, Q7B Column, Q7B Brush); // generated
void Q7B_QTREEWIDGETITEM_SETHIDDEN(Q7B self, Q7B Hide); // generated
void Q7B_QTREEWIDGETITEM_SETICON(Q7B self, Q7B Column, Q7B Icon); // generated
void Q7B_QTREEWIDGETITEM_SETSELECTED(Q7B self, Q7B Select); // generated
void Q7B_QTREEWIDGETITEM_SETSIZEHINT(Q7B self, Q7B Column, Q7B Size); // generated
void Q7B_QTREEWIDGETITEM_SETSTATUSTIP(Q7B self, Q7B Column, Q7B StatusTip); // generated
void Q7B_QTREEWIDGETITEM_SETTEXT(Q7B self, Q7B Column, Q7B Text); // generated
void Q7B_QTREEWIDGETITEM_SETTEXTALIGNMENT(Q7B self, Q7B Column, Q7B Alignment); // generated
void Q7B_QTREEWIDGETITEM_SETTOOLTIP(Q7B self, Q7B Column, Q7B ToolTip); // generated
void Q7B_QTREEWIDGETITEM_SETWHATSTHIS(Q7B self, Q7B Column, Q7B WhatThis); // generated
Q7B Q7B_QTREEWIDGETITEM_SIZEHINT(Q7B self, Q7B Column); // generated
Q7B Q7B_QTREEWIDGETITEM_STATUSTIP(Q7B self, Q7B Column); // generated
Q7B Q7B_QTREEWIDGETITEM_TAKECHILD(Q7B self, Q7B Index); // generated
Q7B Q7B_QTREEWIDGETITEM_TEXT(Q7B self, Q7B Column); // generated
Q7B Q7B_QTREEWIDGETITEM_TEXTALIGNMENT(Q7B self, Q7B Column); // generated
Q7B Q7B_QTREEWIDGETITEM_TOOLTIP(Q7B self, Q7B Column); // generated
Q7B Q7B_QTREEWIDGETITEM_TREEWIDGET(Q7B self); // generated
Q7B Q7B_QTREEWIDGETITEM_TYPE(Q7B self); // generated
Q7B Q7B_QTREEWIDGETITEM_WHATSTHIS(Q7B self, Q7B Column); // generated
void Q7B_QTREEWIDGETITEM_WRITE(Q7B self, Q7B Out); // generated

Q7B Q7B_QABSTRACTSPINBOX_ACCELERATED(Q7B self); // generated
void Q7B_QABSTRACTSPINBOX_ACCELERATED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QABSTRACTSPINBOX_ACCEPTABLEINPUT(Q7B self); // generated
void Q7B_QABSTRACTSPINBOX_ACCEPTABLEINPUT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QABSTRACTSPINBOX_ALIGNMENT(Q7B self); // generated
Q7B Q7B_QABSTRACTSPINBOX_BUTTONSYMBOLS(Q7B self); // generated
void Q7B_QABSTRACTSPINBOX_CLEAR(Q7B self); // generated
Q7B Q7B_QABSTRACTSPINBOX_CORRECTIONMODE(Q7B self); // generated
Q7B Q7B_QABSTRACTSPINBOX_FRAME(Q7B self); // generated
void Q7B_QABSTRACTSPINBOX_FRAME(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QABSTRACTSPINBOX_HASACCEPTABLEINPUT(Q7B self); // generated
Q7B Q7B_QABSTRACTSPINBOX_HASFRAME(Q7B self); // generated
void Q7B_QABSTRACTSPINBOX_INTERPRETTEXT(Q7B self); // generated
Q7B Q7B_QABSTRACTSPINBOX_ISACCELERATED(Q7B self); // generated
Q7B Q7B_QABSTRACTSPINBOX_ISREADONLY(Q7B self); // generated
Q7B Q7B_QABSTRACTSPINBOX_KEYBOARDTRACKING(Q7B self); // generated
Q7B Q7B_QABSTRACTSPINBOX_READONLY(Q7B self); // generated
void Q7B_QABSTRACTSPINBOX_READONLY(Q7B self, Q7B theProperty); // generated
void Q7B_QABSTRACTSPINBOX_SELECTALL(Q7B self); // generated
void Q7B_QABSTRACTSPINBOX_SETACCELERATED(Q7B self, Q7B On); // generated
void Q7B_QABSTRACTSPINBOX_SETALIGNMENT(Q7B self, Q7B Flag); // generated
void Q7B_QABSTRACTSPINBOX_SETBUTTONSYMBOLS(Q7B self, Q7B Bs); // generated
void Q7B_QABSTRACTSPINBOX_SETCORRECTIONMODE(Q7B self, Q7B Cm); // generated
void Q7B_QABSTRACTSPINBOX_SETFRAME(Q7B self, Q7B Frame); // generated
void Q7B_QABSTRACTSPINBOX_SETKEYBOARDTRACKING(Q7B self, Q7B Kt); // generated
void Q7B_QABSTRACTSPINBOX_SETREADONLY(Q7B self, Q7B R); // generated
void Q7B_QABSTRACTSPINBOX_SETSPECIALVALUETEXT(Q7B self, Q7B Txt); // generated
void Q7B_QABSTRACTSPINBOX_SETWRAPPING(Q7B self, Q7B W); // generated
Q7B Q7B_QABSTRACTSPINBOX_SPECIALVALUETEXT(Q7B self); // generated
void Q7B_QABSTRACTSPINBOX_STEPDOWN(Q7B self); // generated
void Q7B_QABSTRACTSPINBOX_STEPUP(Q7B self); // generated
Q7B Q7B_QABSTRACTSPINBOX_TEXT(Q7B self); // generated
Q7B Q7B_QABSTRACTSPINBOX_WRAPPING(Q7B self); // generated
void Q7B_QDIALOG_DONE(Q7B self, Q7B R); // generated
void Q7B_QDIALOG_EXEC(Q7B self); // generated
Q7B Q7B_QDIALOG_ISSIZEGRIPENABLED(Q7B self); // generated
void Q7B_QDIALOG_ISSIZEGRIPENABLED(Q7B self, Q7B theProperty); // generated
void Q7B_QDIALOG_OPEN(Q7B self); // generated
Q7B Q7B_QDIALOG_RESULT(Q7B self); // generated
void Q7B_QDIALOG_SETMODAL(Q7B self, Q7B Modal); // generated
void Q7B_QDIALOG_SETRESULT(Q7B self, Q7B I); // generated
void Q7B_QDIALOG_SETSIZEGRIPENABLED(Q7B self, Q7B Enabled); // generated
Q7B Q7B_QDIALOGBUTTONBOX_ADDBUTTON(Q7B self, Q7B Text, Q7B Role); // generated
Q7B Q7B_QDIALOGBUTTONBOX_ADDBUTTON2(Q7B self, Q7B Button); // generated
Q7B Q7B_QDIALOGBUTTONBOX_BUTTON(Q7B self, Q7B Which); // generated
Q7B Q7B_QDIALOGBUTTONBOX_BUTTONROLE(Q7B self, Q7B button); // generated
Q7B Q7B_QDIALOGBUTTONBOX_BUTTONS(Q7B self); // generated
Q7B Q7B_QDIALOGBUTTONBOX_CENTERBUTTONS(Q7B self); // generated
void Q7B_QDIALOGBUTTONBOX_CLEAR(Q7B self); // generated
Q7B Q7B_QDIALOGBUTTONBOX_ORIENTATION(Q7B self); // generated
void Q7B_QDIALOGBUTTONBOX_REMOVEBUTTON(Q7B self, Q7B Button); // generated
void Q7B_QDIALOGBUTTONBOX_SETCENTERBUTTONS(Q7B self, Q7B Center); // generated
void Q7B_QDIALOGBUTTONBOX_SETORIENTATION(Q7B self, Q7B Orientation); // generated
void Q7B_QDIALOGBUTTONBOX_SETSTANDARDBUTTONS(Q7B self, Q7B Buttons); // generated
Q7B Q7B_QDIALOGBUTTONBOX_STANDARDBUTTON(Q7B self); // generated
Q7B Q7B_QDIALOGBUTTONBOX_STANDARDBUTTONS(Q7B self); // generated
Q7B Q7B_QDIR_ABSOLUTEFILEPATH(Q7B self, Q7B FileName); // generated
Q7B Q7B_QDIR_ABSOLUTEPATH(Q7B self); // generated
Q7B Q7B_QDIR_CANONICALPATH(Q7B self); // generated
Q7B Q7B_QDIR_CD(Q7B self, Q7B DirName); // generated
Q7B Q7B_QDIR_CDUP(Q7B self); // generated
Q7B Q7B_QDIR_COUNT(Q7B self); // generated
Q7B Q7B_QDIR_DIRNAME(Q7B self); // generated
Q7B Q7B_QDIR_ENTRYINFOLIST(Q7B self, Q7B NameFilters, Q7B Filters, Q7B Sort); // generated
Q7B Q7B_QDIR_ENTRYLIST(Q7B self, Q7B NameFilters, Q7B Filters, Q7B Sort); // generated
Q7B Q7B_QDIR_EXISTS(Q7B self); // generated
Q7B Q7B_QDIR_FILEPATH(Q7B self, Q7B FileName); // generated
Q7B Q7B_QDIR_FILTER(Q7B self); // generated
Q7B Q7B_QDIR_ISABSOLUTE(Q7B self); // generated
Q7B Q7B_QDIR_ISREADABLE(Q7B self); // generated
Q7B Q7B_QDIR_ISRELATIVE(Q7B self); // generated
Q7B Q7B_QDIR_ISROOT(Q7B self); // generated
Q7B Q7B_QDIR_MAKEABSOLUTE(Q7B self); // generated
Q7B Q7B_QDIR_MKDIR(Q7B self, Q7B DirName); // generated
Q7B Q7B_QDIR_MKPATH(Q7B self, Q7B DirPath); // generated
Q7B Q7B_QDIR_NAMEFILTERS(Q7B self); // generated
Q7B Q7B_QDIR_PATH(Q7B self); // generated
void Q7B_QDIR_REFRESH(Q7B self); // generated
Q7B Q7B_QDIR_RELATIVEFILEPATH(Q7B self, Q7B FileName); // generated
Q7B Q7B_QDIR_REMOVE(Q7B self, Q7B FileName); // generated
Q7B Q7B_QDIR_RENAME(Q7B self, Q7B OldName, Q7B NewName); // generated
Q7B Q7B_QDIR_RMPATH(Q7B self, Q7B DirPath); // generated
Q7B Q7B_QDIR_RMDIR(Q7B self, Q7B DirName); // generated
void Q7B_QDIR_SETFILTER(Q7B self, Q7B Filters); // generated
void Q7B_QDIR_SETNAMEFILTERS(Q7B self, Q7B NameFilters); // generated
void Q7B_QDIR_SETPATH(Q7B self, Q7B Path); // generated
void Q7B_QDIR_SETSORTING(Q7B self, Q7B Sort); // generated
Q7B Q7B_QDIR_SORTING(Q7B self); // generated
Q7B Q7B_QFONTCOMBOBOX_CURRENTFONT(Q7B self); // generated
Q7B Q7B_QFONTCOMBOBOX_FONTFILTERS(Q7B self); // generated
void Q7B_QFONTCOMBOBOX_SETCURRENTFONT(Q7B self, Q7B Font); // generated
void Q7B_QFONTCOMBOBOX_SETFONTFILTERS(Q7B self, Q7B Filters); // generated
Q7B Q7B_QFONTCOMBOBOX_WRITINGSYSTEM(Q7B self); // generated
void Q7B_QFONTCOMBOBOX_WRITINGSYSTEM(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QPICTURE_BOUNDINGRECT(Q7B self); // generated
Q7B Q7B_QPICTURE_DATA(Q7B self); // generated
Q7B Q7B_QPICTURE_ISNULL(Q7B self); // generated
Q7B Q7B_QPICTURE_LOAD(Q7B self, Q7B FileName, Q7B Format); // generated
Q7B Q7B_QPICTURE_PLAY(Q7B self, Q7B Painter); // generated
Q7B Q7B_QPICTURE_SAVE(Q7B self, Q7B FileName, Q7B Format); // generated
void Q7B_QPICTURE_SETBOUNDINGRECT(Q7B self, Q7B R); // generated
void Q7B_QPICTURE_SETDATA(Q7B self, Q7B Data, Q7B Size); // generated
Q7B Q7B_QPICTURE_SIZE(Q7B self); // generated
void Q7B_QPICTURE_SWAP(Q7B self, Q7B Other); // generated
Q7B Q7B_QPIXMAP_CACHEKEY(Q7B self); // generated
Q7B Q7B_QPIXMAP_CONVERTFROMIMAGE(Q7B self, Q7B Image, Q7B Flags); // generated
Q7B Q7B_QPIXMAP_COPY(Q7B self, Q7B X, Q7B Y, Q7B Width, Q7B Height); // generated
Q7B Q7B_QPIXMAP_CREATEMASKFROMCOLOR(Q7B self, Q7B MaskColor, Q7B Mode); // generated
Q7B Q7B_QPIXMAP_CREATEMASKFROMCOLOR2(Q7B self, Q7B MaskColor); // generated
Q7B Q7B_QPIXMAP_DEPTH(Q7B self); // generated
void Q7B_QPIXMAP_DETACH(Q7B self); // generated
void Q7B_QPIXMAP_FILL(Q7B self, Q7B Widget, Q7B X, Q7B Y); // generated
Q7B Q7B_QPIXMAP_HASALPHA(Q7B self); // generated
Q7B Q7B_QPIXMAP_HASALPHACHANNEL(Q7B self); // generated
Q7B Q7B_QPIXMAP_HEIGHT(Q7B self); // generated
Q7B Q7B_QPIXMAP_ISNULL(Q7B self); // generated
Q7B Q7B_QPIXMAP_ISQBITMAP(Q7B self); // generated
Q7B Q7B_QPIXMAP_LOAD(Q7B self, Q7B FileName, Q7B Format, Q7B Flags); // generated
Q7B Q7B_QPIXMAP_LOADFROMDATA(Q7B self, Q7B Data, Q7B Format, Q7B Flags); // generated
Q7B Q7B_QPIXMAP_MASK(Q7B self); // generated
Q7B Q7B_QPIXMAP_RECT(Q7B self); // generated
Q7B Q7B_QPIXMAP_SAVE(Q7B self, Q7B FileName, Q7B Format, Q7B Quality); // generated
Q7B Q7B_QPIXMAP_SCALED(Q7B self, Q7B Width, Q7B Height, Q7B AspectRatioMode, Q7B TransformMode); // generated
Q7B Q7B_QPIXMAP_SCALEDTOHEIGHT(Q7B self, Q7B Height, Q7B Mode); // generated
Q7B Q7B_QPIXMAP_SCALEDTOWIDTH(Q7B self, Q7B Width, Q7B Mode); // generated
void Q7B_QPIXMAP_SCROLL(Q7B self, Q7B Dx, Q7B Dy, Q7B Rect, Q7B Exposed); // generated
void Q7B_QPIXMAP_SETMASK(Q7B self, Q7B Mask); // generated
Q7B Q7B_QPIXMAP_SIZE(Q7B self); // generated
void Q7B_QPIXMAP_SWAP(Q7B self, Q7B Other); // generated
Q7B Q7B_QPIXMAP_TOIMAGE(Q7B self); // generated
Q7B Q7B_QPIXMAP_TOICON(Q7B self); // generated
Q7B Q7B_QPIXMAP_TRANSFORMED(Q7B self, Q7B Matrix, Q7B Mode); // generated
Q7B Q7B_QPIXMAP_WIDTH(Q7B self); // generated
Q7B Q7B_QREGEXP_CAP(Q7B self, Q7B Nth); // generated
Q7B Q7B_QREGEXP_CAPTURECOUNT(Q7B self); // generated
Q7B Q7B_QREGEXP_CAPTUREDTEXTS(Q7B self); // generated
Q7B Q7B_QREGEXP_CASESENSITIVITY(Q7B self); // generated
Q7B Q7B_QREGEXP_ERRORSTRING(Q7B self); // generated
Q7B Q7B_QREGEXP_EXACTMATCH(Q7B self, Q7B Str); // generated
Q7B Q7B_QREGEXP_INDEXIN(Q7B self, Q7B Str, Q7B Offset, Q7B CaretMode); // generated
Q7B Q7B_QREGEXP_ISEMPTY(Q7B self); // generated
Q7B Q7B_QREGEXP_ISMINIMAL(Q7B self); // generated
Q7B Q7B_QREGEXP_ISVALID(Q7B self); // generated
Q7B Q7B_QREGEXP_LASTINDEXIN(Q7B self, Q7B Str, Q7B Offset, Q7B CaretMode); // generated
Q7B Q7B_QREGEXP_MATCHEDLENGTH(Q7B self); // generated
Q7B Q7B_QREGEXP_PATTERN(Q7B self); // generated
Q7B Q7B_QREGEXP_PATTERNSYNTAX(Q7B self); // generated
Q7B Q7B_QREGEXP_POS(Q7B self, Q7B Nth); // generated
void Q7B_QREGEXP_SETCASESENSITIVITY(Q7B self, Q7B Cs); // generated
void Q7B_QREGEXP_SETMINIMAL(Q7B self, Q7B Minimal); // generated
void Q7B_QREGEXP_SETPATTERN(Q7B self, Q7B Pattern); // generated
void Q7B_QREGEXP_SETPATTERNSYNTAX(Q7B self, Q7B Syntax); // generated
void Q7B_QREGEXP_SWAP(Q7B self, Q7B Other); // generated
void Q7B_QTEXTBROWSER_BACKWARD(Q7B self); // generated
Q7B Q7B_QTEXTBROWSER_BACKWARDHISTORYCOUNT(Q7B self); // generated
void Q7B_QTEXTBROWSER_CLEARHISTORY(Q7B self); // generated
void Q7B_QTEXTBROWSER_FORWARD(Q7B self); // generated
Q7B Q7B_QTEXTBROWSER_FORWARDHISTORYCOUNT(Q7B self); // generated
Q7B Q7B_QTEXTBROWSER_HISTORYTITLE(Q7B self, Q7B I); // generated
Q7B Q7B_QTEXTBROWSER_HISTORYURL(Q7B self, Q7B I); // generated
void Q7B_QTEXTBROWSER_HOME(Q7B self); // generated
Q7B Q7B_QTEXTBROWSER_ISBACKWARDAVAILABLE(Q7B self); // generated
Q7B Q7B_QTEXTBROWSER_ISFORWARDAVAILABLE(Q7B self); // generated
Q7B Q7B_QTEXTBROWSER_MODIFIED(Q7B self); // generated
void Q7B_QTEXTBROWSER_MODIFIED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTEXTBROWSER_OPENEXTERNALLINKS(Q7B self); // generated
Q7B Q7B_QTEXTBROWSER_OPENLINKS(Q7B self); // generated
Q7B Q7B_QTEXTBROWSER_READONLY(Q7B self); // generated
void Q7B_QTEXTBROWSER_READONLY(Q7B self, Q7B theProperty); // generated
void Q7B_QTEXTBROWSER_RELOAD(Q7B self); // generated
Q7B Q7B_QTEXTBROWSER_SEARCHPATHS(Q7B self); // generated
void Q7B_QTEXTBROWSER_SETOPENEXTERNALLINKS(Q7B self, Q7B Open); // generated
void Q7B_QTEXTBROWSER_SETOPENLINKS(Q7B self, Q7B Open); // generated
void Q7B_QTEXTBROWSER_SETSEARCHPATHS(Q7B self, Q7B Paths); // generated
void Q7B_QTEXTBROWSER_SETSOURCE(Q7B self, Q7B Name); // generated
Q7B Q7B_QTEXTBROWSER_SOURCE(Q7B self); // generated
Q7B Q7B_QTEXTBROWSER_UNDOREDOENABLED(Q7B self); // generated
void Q7B_QTEXTBROWSER_UNDOREDOENABLED(Q7B self, Q7B theProperty); // generated

Q7B Q7B_QSPLITTERHANDLE_OPAQUERESIZE(Q7B self); // generated
Q7B Q7B_QSPLITTERHANDLE_ORIENTATION(Q7B self); // generated
void Q7B_QSPLITTERHANDLE_SETORIENTATION(Q7B self, Q7B Orientation); // generated
Q7B Q7B_QSPLITTERHANDLE_SPLITTER(Q7B self); // generated
Q7B Q7B_QTABLEWIDGETITEM_BACKGROUND(Q7B self); // generated
Q7B Q7B_QTABLEWIDGETITEM_CHECKSTATE(Q7B self); // generated
Q7B Q7B_QTABLEWIDGETITEM_COLUMN(Q7B self); // generated
Q7B Q7B_QTABLEWIDGETITEM_FLAGS(Q7B self); // generated
Q7B Q7B_QTABLEWIDGETITEM_FONT(Q7B self); // generated
Q7B Q7B_QTABLEWIDGETITEM_FOREGROUND(Q7B self); // generated
Q7B Q7B_QTABLEWIDGETITEM_ICON(Q7B self); // generated
Q7B Q7B_QTABLEWIDGETITEM_ISSELECTED(Q7B self); // generated
void Q7B_QTABLEWIDGETITEM_READ(Q7B self, Q7B In); // generated
Q7B Q7B_QTABLEWIDGETITEM_ROW(Q7B self); // generated
void Q7B_QTABLEWIDGETITEM_SETBACKGROUND(Q7B self, Q7B Brush); // generated
void Q7B_QTABLEWIDGETITEM_SETCHECKSTATE(Q7B self, Q7B State); // generated
void Q7B_QTABLEWIDGETITEM_SETFLAGS(Q7B self, Q7B Flags); // generated
void Q7B_QTABLEWIDGETITEM_SETFONT(Q7B self, Q7B Font); // generated
void Q7B_QTABLEWIDGETITEM_SETFOREGROUND(Q7B self, Q7B Brush); // generated
void Q7B_QTABLEWIDGETITEM_SETICON(Q7B self, Q7B Icon); // generated
void Q7B_QTABLEWIDGETITEM_SETSELECTED(Q7B self, Q7B Select); // generated
void Q7B_QTABLEWIDGETITEM_SETSIZEHINT(Q7B self, Q7B Size); // generated
void Q7B_QTABLEWIDGETITEM_SETSTATUSTIP(Q7B self, Q7B StatusTip); // generated
void Q7B_QTABLEWIDGETITEM_SETTEXT(Q7B self, Q7B Text); // generated
void Q7B_QTABLEWIDGETITEM_SETTEXTALIGNMENT(Q7B self, Q7B Alignment); // generated
void Q7B_QTABLEWIDGETITEM_SETTOOLTIP(Q7B self, Q7B ToolTip); // generated
void Q7B_QTABLEWIDGETITEM_SETWHATSTHIS(Q7B self, Q7B WhatsThis); // generated
Q7B Q7B_QTABLEWIDGETITEM_SIZEHINT(Q7B self); // generated
Q7B Q7B_QTABLEWIDGETITEM_STATUSTIP(Q7B self); // generated
Q7B Q7B_QTABLEWIDGETITEM_TABLEWIDGET(Q7B self); // generated
Q7B Q7B_QTABLEWIDGETITEM_TEXT(Q7B self); // generated
Q7B Q7B_QTABLEWIDGETITEM_TEXTALIGNMENT(Q7B self); // generated
Q7B Q7B_QTABLEWIDGETITEM_TOOLTIP(Q7B self); // generated
Q7B Q7B_QTABLEWIDGETITEM_TYPE(Q7B self); // generated
Q7B Q7B_QTABLEWIDGETITEM_WHATSTHIS(Q7B self); // generated
void Q7B_QTABLEWIDGETITEM_WRITE(Q7B self, Q7B Out); // generated


Q7B Q7B_QCOLOR_ALPHA(Q7B self); // generated
Q7B Q7B_QCOLOR_ALPHAF(Q7B self); // generated
Q7B Q7B_QCOLOR_BLACK(Q7B self); // generated
Q7B Q7B_QCOLOR_BLACKF(Q7B self); // generated
Q7B Q7B_QCOLOR_BLUE(Q7B self); // generated
Q7B Q7B_QCOLOR_BLUEF(Q7B self); // generated
Q7B Q7B_QCOLOR_CONVERTTO(Q7B self, Q7B ColorSpec); // generated
Q7B Q7B_QCOLOR_CYAN(Q7B self); // generated
Q7B Q7B_QCOLOR_CYANF(Q7B self); // generated
Q7B Q7B_QCOLOR_DARKER(Q7B self, Q7B Factor); // generated
void Q7B_QCOLOR_GETCMYK(Q7B self, Q7B C, Q7B M, Q7B Y, Q7B K, Q7B A); // generated
void Q7B_QCOLOR_GETCMYKF(Q7B self, Q7B C, Q7B M, Q7B Y, Q7B K, Q7B A); // generated
void Q7B_QCOLOR_GETHSL(Q7B self, Q7B H, Q7B S, Q7B L, Q7B A); // generated
void Q7B_QCOLOR_GETHSLF(Q7B self, Q7B H, Q7B S, Q7B L, Q7B A); // generated
void Q7B_QCOLOR_GETHSV(Q7B self, Q7B H, Q7B S, Q7B V, Q7B A); // generated
void Q7B_QCOLOR_GETHSVF(Q7B self, Q7B H, Q7B S, Q7B V, Q7B A); // generated
void Q7B_QCOLOR_GETRGB(Q7B self, Q7B R, Q7B G, Q7B B, Q7B A); // generated
void Q7B_QCOLOR_GETRGBF(Q7B self, Q7B R, Q7B G, Q7B B, Q7B A); // generated
Q7B Q7B_QCOLOR_GREEN(Q7B self); // generated
Q7B Q7B_QCOLOR_GREENF(Q7B self); // generated
Q7B Q7B_QCOLOR_HSLHUE(Q7B self); // generated
Q7B Q7B_QCOLOR_HSLHUEF(Q7B self); // generated
Q7B Q7B_QCOLOR_HSLSATURATION(Q7B self); // generated
Q7B Q7B_QCOLOR_HSLSATURATIONF(Q7B self); // generated
Q7B Q7B_QCOLOR_HSVHUE(Q7B self); // generated
Q7B Q7B_QCOLOR_HSVHUEF(Q7B self); // generated
Q7B Q7B_QCOLOR_HSVSATURATION(Q7B self); // generated
Q7B Q7B_QCOLOR_HSVSATURATIONF(Q7B self); // generated
Q7B Q7B_QCOLOR_HUE(Q7B self); // generated
Q7B Q7B_QCOLOR_HUEF(Q7B self); // generated
Q7B Q7B_QCOLOR_LIGHTER(Q7B self, Q7B Factor); // generated
Q7B Q7B_QCOLOR_LIGHTNESS(Q7B self); // generated
Q7B Q7B_QCOLOR_LIGHTNESSF(Q7B self); // generated
Q7B Q7B_QCOLOR_MAGENTA(Q7B self); // generated
Q7B Q7B_QCOLOR_MAGENTAF(Q7B self); // generated
Q7B Q7B_QCOLOR_NAME(Q7B self); // generated
Q7B Q7B_QCOLOR_RED(Q7B self); // generated
Q7B Q7B_QCOLOR_REDF(Q7B self); // generated
Q7B Q7B_QCOLOR_RGB(Q7B self); // generated
Q7B Q7B_QCOLOR_RGBA(Q7B self); // generated
Q7B Q7B_QCOLOR_SATURATION(Q7B self); // generated
Q7B Q7B_QCOLOR_SATURATIONF(Q7B self); // generated
void Q7B_QCOLOR_SETALPHA(Q7B self, Q7B Alpha); // generated
void Q7B_QCOLOR_SETALPHAF(Q7B self, Q7B Alpha); // generated
void Q7B_QCOLOR_SETBLUE(Q7B self, Q7B Blue); // generated
void Q7B_QCOLOR_SETBLUEF(Q7B self, Q7B Blue); // generated
void Q7B_QCOLOR_SETCMYK(Q7B self, Q7B C, Q7B M, Q7B Y, Q7B K, Q7B A); // generated
void Q7B_QCOLOR_SETCMYKF(Q7B self, Q7B C, Q7B M, Q7B Y, Q7B K, Q7B A); // generated
void Q7B_QCOLOR_SETGREEN(Q7B self, Q7B Green); // generated
void Q7B_QCOLOR_SETGREENF(Q7B self, Q7B Green); // generated
void Q7B_QCOLOR_SETHSL(Q7B self, Q7B H, Q7B S, Q7B L, Q7B A); // generated
void Q7B_QCOLOR_SETHSLF(Q7B self, Q7B H, Q7B S, Q7B L, Q7B A); // generated
void Q7B_QCOLOR_SETHSV(Q7B self, Q7B H, Q7B S, Q7B V, Q7B A); // generated
void Q7B_QCOLOR_SETHSVF(Q7B self, Q7B H, Q7B S, Q7B V, Q7B A); // generated
void Q7B_QCOLOR_SETNAMEDCOLOR(Q7B self, Q7B Name); // generated
void Q7B_QCOLOR_SETRED(Q7B self, Q7B Red); // generated
void Q7B_QCOLOR_SETREDF(Q7B self, Q7B Red); // generated
void Q7B_QCOLOR_SETRGB(Q7B self, Q7B R, Q7B G, Q7B B, Q7B A); // generated
void Q7B_QCOLOR_SETRGBF(Q7B self, Q7B R, Q7B G, Q7B B, Q7B A); // generated
Q7B Q7B_QCOLOR_SPEC(Q7B self); // generated
Q7B Q7B_QCOLOR_TOCMYK(Q7B self); // generated
Q7B Q7B_QCOLOR_TOHSL(Q7B self); // generated
Q7B Q7B_QCOLOR_TOHSV(Q7B self); // generated
Q7B Q7B_QCOLOR_TORGB(Q7B self); // generated
Q7B Q7B_QCOLOR_VALUE(Q7B self); // generated
Q7B Q7B_QCOLOR_VALUEF(Q7B self); // generated
Q7B Q7B_QCOLOR_YELLOW(Q7B self); // generated
Q7B Q7B_QCOLOR_YELLOWF(Q7B self); // generated
Q7B Q7B_QCOLUMNVIEW_COLUMNWIDTHS(Q7B self); // generated
Q7B Q7B_QCOLUMNVIEW_PREVIEWWIDGET(Q7B self); // generated
Q7B Q7B_QCOLUMNVIEW_RESIZEGRIPSVISIBLE(Q7B self); // generated
void Q7B_QCOLUMNVIEW_SETCOLUMNWIDTHS(Q7B self, Q7B Widths); // generated
void Q7B_QCOLUMNVIEW_SETPREVIEWWIDGET(Q7B self, Q7B Widget); // generated
void Q7B_QCOLUMNVIEW_SETRESIZEGRIPSVISIBLE(Q7B self, Q7B Visible); // generated
Q7B Q7B_QFONT_BOLD(Q7B self); // generated
Q7B Q7B_QFONT_DEFAULTFAMILY(Q7B self); // generated
Q7B Q7B_QFONT_EXACTMATCH(Q7B self); // generated
Q7B Q7B_QFONT_FAMILY(Q7B self); // generated
Q7B Q7B_QFONT_FIXEDPITCH(Q7B self); // generated
Q7B Q7B_QFONT_FROMSTRING(Q7B self, Q7B Descrip); // generated
Q7B Q7B_QFONT_ITALIC(Q7B self); // generated
Q7B Q7B_QFONT_LASTRESORTFAMILY(Q7B self); // generated
Q7B Q7B_QFONT_LASTRESORTFONT(Q7B self); // generated
Q7B Q7B_QFONT_LETTERSPACING(Q7B self); // generated
Q7B Q7B_QFONT_LETTERSPACINGTYPE(Q7B self); // generated
Q7B Q7B_QFONT_OVERLINE(Q7B self); // generated
Q7B Q7B_QFONT_PIXELSIZE(Q7B self); // generated
Q7B Q7B_QFONT_POINTSIZE(Q7B self); // generated
Q7B Q7B_QFONT_POINTSIZEF(Q7B self); // generated
Q7B Q7B_QFONT_RESOLVE(Q7B self, Q7B Other); // generated
void Q7B_QFONT_SETBOLD(Q7B self, Q7B Enable); // generated
void Q7B_QFONT_SETCAPITALIZATION(Q7B self, Q7B Caps); // generated
void Q7B_QFONT_SETFAMILY(Q7B self, Q7B Family); // generated
void Q7B_QFONT_SETFIXEDPITCH(Q7B self, Q7B Enable); // generated
void Q7B_QFONT_SETITALIC(Q7B self, Q7B Enable); // generated
void Q7B_QFONT_SETLETTERSPACING(Q7B self, Q7B Type, Q7B Spacing); // generated
void Q7B_QFONT_SETOVERLINE(Q7B self, Q7B Enable); // generated
void Q7B_QFONT_SETPIXELSIZE(Q7B self, Q7B PixelSize); // generated
void Q7B_QFONT_SETPOINTSIZE(Q7B self, Q7B PointSize); // generated
void Q7B_QFONT_SETPOINTSIZEF(Q7B self, Q7B PointSize); // generated
void Q7B_QFONT_SETSTRETCH(Q7B self, Q7B Factor); // generated
void Q7B_QFONT_SETSTRIKEOUT(Q7B self, Q7B Enable); // generated
void Q7B_QFONT_SETSTYLE(Q7B self, Q7B Style); // generated
void Q7B_QFONT_SETSTYLESTRATEGY(Q7B self, Q7B S); // generated
void Q7B_QFONT_SETUNDERLINE(Q7B self, Q7B Enable); // generated
void Q7B_QFONT_SETWEIGHT(Q7B self, Q7B Weight); // generated
void Q7B_QFONT_SETWORDSPACING(Q7B self, Q7B Spacing); // generated
Q7B Q7B_QFONT_STRETCH(Q7B self); // generated
Q7B Q7B_QFONT_STRIKEOUT(Q7B self); // generated
Q7B Q7B_QFONT_STYLE(Q7B self); // generated
Q7B Q7B_QFONT_STYLESTRATEGY(Q7B self); // generated
Q7B Q7B_QFONT_TOSTRING(Q7B self); // generated
Q7B Q7B_QFONT_UNDERLINE(Q7B self); // generated
Q7B Q7B_QFONT_WEIGHT(Q7B self); // generated
Q7B Q7B_QFONT_WORDSPACING(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_CASCADINGSECTIONRESIZES(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_COUNT(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_DEFAULTALIGNMENT(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_DEFAULTSECTIONSIZE(Q7B self); // generated
void Q7B_QHEADERVIEW_HEADERDATACHANGED(Q7B self, Q7B Orientation, Q7B LogicalFirst, Q7B LogicalLast); // generated
Q7B Q7B_QHEADERVIEW_HIDDENSECTIONCOUNT(Q7B self); // generated
void Q7B_QHEADERVIEW_HIDESECTION(Q7B self, Q7B LogicalIndex); // generated
Q7B Q7B_QHEADERVIEW_HIGHLIGHTSECTIONS(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_ISCLICKABLE(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_ISMOVABLE(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_ISSECTIONHIDDEN(Q7B self, Q7B LogicalIndex); // generated
Q7B Q7B_QHEADERVIEW_ISSORTINDICATORSHOWN(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_LENGHT(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_LOGICALINDEX(Q7B self, Q7B VisualIndex); // generated
Q7B Q7B_QHEADERVIEW_LOGICALINDEXAT(Q7B self, Q7B X, Q7B Y); // generated
Q7B Q7B_QHEADERVIEW_MINIMUMSECTIONSIZE(Q7B self); // generated
void Q7B_QHEADERVIEW_MOVESECTION(Q7B self, Q7B From, Q7B To); // generated
Q7B Q7B_QHEADERVIEW_OFFSET(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_ORIENTATION(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_RESIZEMODE(Q7B self, Q7B LogicalIndex, Q7B Size); // generated
void Q7B_QHEADERVIEW_RESIZESECTION(Q7B self, Q7B LogicalIndex, Q7B Size); // generated
void Q7B_QHEADERVIEW_RESIZESECTIONS(Q7B self, Q7B Mode); // generated
Q7B Q7B_QHEADERVIEW_RESTORESTATE(Q7B self, Q7B State); // generated
Q7B Q7B_QHEADERVIEW_SAVESTATE(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_SECTIONPOSITION(Q7B self, Q7B LogicalIndex); // generated
Q7B Q7B_QHEADERVIEW_SECTIONSIZE(Q7B self, Q7B LogicalIndex); // generated
Q7B Q7B_QHEADERVIEW_SECTIONSIZEHINT(Q7B self, Q7B LogicalIndex); // generated
Q7B Q7B_QHEADERVIEW_SECTIONVIEWPORTPOSITION(Q7B self, Q7B LogicalIndex); // generated
Q7B Q7B_QHEADERVIEW_SECTIONSHIDDEN(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_SECTIONSMOVED(Q7B self); // generated
void Q7B_QHEADERVIEW_SETCASCADINGSECTIONRESIZES(Q7B self, Q7B Enable); // generated
void Q7B_QHEADERVIEW_SETCLICKABLE(Q7B self, Q7B Clickable); // generated
void Q7B_QHEADERVIEW_SETDEFAULTALIGNMENT(Q7B self, Q7B Alignment); // generated
void Q7B_QHEADERVIEW_SETDEFAULTSECTIONSIZE(Q7B self, Q7B Size); // generated
void Q7B_QHEADERVIEW_SETHIGHLIGHTSECTIONS(Q7B self, Q7B HighLight); // generated
void Q7B_QHEADERVIEW_SETMINIMUMSECTIONSIZE(Q7B self, Q7B Size); // generated
void Q7B_QHEADERVIEW_SETMOVABLE(Q7B self, Q7B Movable); // generated
void Q7B_QHEADERVIEW_SETOFFSET(Q7B self, Q7B Offset); // generated
void Q7B_QHEADERVIEW_SETOFFSETTOLASTSECTION(Q7B self); // generated
void Q7B_QHEADERVIEW_SETOFFSETTOSECTIONPOSITION(Q7B self, Q7B VisualIndex); // generated
void Q7B_QHEADERVIEW_SETRESIZEMODE(Q7B self, Q7B LogicalIndex, Q7B Mode); // generated
void Q7B_QHEADERVIEW_SETSECTIONHIDDEN(Q7B self, Q7B LogicalIndex, Q7B Hide); // generated
void Q7B_QHEADERVIEW_SETSORTINDICATOR(Q7B self, Q7B LogicalIndex, Q7B Order); // generated
void Q7B_QHEADERVIEW_SETSORTINDICATORSHOWN(Q7B self, Q7B Show); // generated
void Q7B_QHEADERVIEW_SETSTRETCHLASTSECTION(Q7B self, Q7B Stretch); // generated
void Q7B_QHEADERVIEW_SHOWSECTION(Q7B self, Q7B LogicalIndex); // generated
Q7B Q7B_QHEADERVIEW_SHOWSORTINDICATOR(Q7B self); // generated
void Q7B_QHEADERVIEW_SHOWSORTINDICATOR(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QHEADERVIEW_SORTINDICATORORDER(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_SORTINDICATORSECTION(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_STRETCHLASTSECTION(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_STRETCHSECTIONCOUNT(Q7B self); // generated
void Q7B_QHEADERVIEW_SWAPSECTIONS(Q7B self, Q7B First, Q7B Second); // generated
Q7B Q7B_QHEADERVIEW_VISUALINDEX(Q7B self, Q7B LogicalIndex); // generated
Q7B Q7B_QHEADERVIEW_VISUALINDEXAT(Q7B self, Q7B Position); // generated
Q7B Q7B_QINPUTDIALOG_CANCELBUTTONTEXT(Q7B self); // generated
Q7B Q7B_QINPUTDIALOG_COMBOBOXEDITABLE(Q7B self); // generated
void Q7B_QINPUTDIALOG_COMBOBOXEDITABLE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QINPUTDIALOG_COMBOBOXITEMS(Q7B self); // generated
Q7B Q7B_QINPUTDIALOG_DOUBLEDECIMALS(Q7B self); // generated
Q7B Q7B_QINPUTDIALOG_DOUBLEMAXIMUM(Q7B self); // generated
Q7B Q7B_QINPUTDIALOG_DOUBLEMINIMUM(Q7B self); // generated
Q7B Q7B_QINPUTDIALOG_DOUBLEVALUE(Q7B self); // generated
Q7B Q7B_QINPUTDIALOG_INPUTMODE(Q7B self); // generated
Q7B Q7B_QINPUTDIALOG_INTMAXIMUM(Q7B self); // generated
Q7B Q7B_QINPUTDIALOG_INTMINIMUM(Q7B self); // generated
Q7B Q7B_QINPUTDIALOG_INTSTEP(Q7B self); // generated
Q7B Q7B_QINPUTDIALOG_INTVALUE(Q7B self); // generated
Q7B Q7B_QINPUTDIALOG_ISCOMBOBOXEDITABLE(Q7B self); // generated
Q7B Q7B_QINPUTDIALOG_LABELTEXT(Q7B self); // generated
Q7B Q7B_QINPUTDIALOG_OKBUTTONTEXT(Q7B self); // generated
Q7B Q7B_QINPUTDIALOG_OPTIONS(Q7B self); // generated
void Q7B_QINPUTDIALOG_SETCANCELBUTTONTEXT(Q7B self, Q7B Text); // generated
void Q7B_QINPUTDIALOG_SETCOMBOBOXEDITABLE(Q7B self, Q7B Editable); // generated
void Q7B_QINPUTDIALOG_SETCOMBOBOXITEMS(Q7B self, Q7B Items); // generated
void Q7B_QINPUTDIALOG_SETDOUBLEDECIMALS(Q7B self, Q7B Decimals); // generated
void Q7B_QINPUTDIALOG_SETDOUBLEMAXIMUM(Q7B self, Q7B Max); // generated
void Q7B_QINPUTDIALOG_SETDOUBLEMINIMUM(Q7B self, Q7B a0); // generated
void Q7B_QINPUTDIALOG_SETDOUBLEVALUE(Q7B self, Q7B Value); // generated
void Q7B_QINPUTDIALOG_SETINPUTMODE(Q7B self, Q7B InputMode); // generated
void Q7B_QINPUTDIALOG_SETINTMAXIMUM(Q7B self, Q7B Max); // generated
void Q7B_QINPUTDIALOG_SETINTMINIMUM(Q7B self, Q7B Min); // generated
void Q7B_QINPUTDIALOG_SETINTSTEP(Q7B self, Q7B Step); // generated
void Q7B_QINPUTDIALOG_SETINTVALUE(Q7B self, Q7B Value); // generated
void Q7B_QINPUTDIALOG_SETLABELTEXT(Q7B self, Q7B Text); // generated
void Q7B_QINPUTDIALOG_SETOKBUTTONTEXT(Q7B self, Q7B Text); // generated
void Q7B_QINPUTDIALOG_SETOPTION(Q7B self, Q7B Option, Q7B On); // generated
void Q7B_QINPUTDIALOG_SETTEXTECHOMODE(Q7B self, Q7B Mode); // generated
void Q7B_QINPUTDIALOG_SETTEXTVALUE(Q7B self, Q7B Text); // generated
Q7B Q7B_QINPUTDIALOG_TEXTECHOMODE(Q7B self); // generated
Q7B Q7B_QINPUTDIALOG_TEXTVALUE(Q7B self); // generated
Q7B Q7B_QLISTVIEW_BATCHSIZE(Q7B self); // generated
void Q7B_QLISTVIEW_CLEARPROPERTYFLAGS(Q7B self); // generated
Q7B Q7B_QLISTVIEW_FLOW(Q7B self); // generated
Q7B Q7B_QLISTVIEW_GRIDSIZE(Q7B self); // generated
Q7B Q7B_QLISTVIEW_ISROWHIDDEN(Q7B self, Q7B Row); // generated
Q7B Q7B_QLISTVIEW_ISSELECTIONRECTVISIBLE(Q7B self); // generated
Q7B Q7B_QLISTVIEW_ISWRAPPING(Q7B self); // generated
Q7B Q7B_QLISTVIEW_LAYOUTMODE(Q7B self); // generated
Q7B Q7B_QLISTVIEW_MODELCOLUMN(Q7B self); // generated
Q7B Q7B_QLISTVIEW_MOVEMENT(Q7B self); // generated
Q7B Q7B_QLISTVIEW_RESIZEMODE(Q7B self); // generated
Q7B Q7B_QLISTVIEW_SELECTIONRECTVISIBLE(Q7B self); // generated
void Q7B_QLISTVIEW_SELECTIONRECTVISIBLE(Q7B self, Q7B theProperty); // generated
void Q7B_QLISTVIEW_SETBATCHSIZE(Q7B self, Q7B BatchSize); // generated
void Q7B_QLISTVIEW_SETFLOW(Q7B self, Q7B Flow); // generated
void Q7B_QLISTVIEW_SETGRIDSIZE(Q7B self, Q7B Size); // generated
void Q7B_QLISTVIEW_SETLAYOUTMODE(Q7B self, Q7B Mode); // generated
void Q7B_QLISTVIEW_SETMODELCOLUMN(Q7B self, Q7B Column); // generated
void Q7B_QLISTVIEW_SETMOVEMENT(Q7B self, Q7B Movement); // generated
void Q7B_QLISTVIEW_SETRESIZEMODE(Q7B self, Q7B Mode); // generated
void Q7B_QLISTVIEW_SETROWHIDDEN(Q7B self, Q7B Row, Q7B Hide); // generated
void Q7B_QLISTVIEW_SETSELECTIONRECTVISIBLE(Q7B self, Q7B Show); // generated
void Q7B_QLISTVIEW_SETSPACING(Q7B self, Q7B Space); // generated
void Q7B_QLISTVIEW_SETUNIFORMITEMSIZES(Q7B self, Q7B Enable); // generated
void Q7B_QLISTVIEW_SETVIEWMODE(Q7B self, Q7B Mode); // generated
void Q7B_QLISTVIEW_SETWORDWRAP(Q7B self, Q7B On); // generated
void Q7B_QLISTVIEW_SETWRAPPING(Q7B self, Q7B Enable); // generated
Q7B Q7B_QLISTVIEW_SPACING(Q7B self); // generated
Q7B Q7B_QLISTVIEW_UNIFORMITEMSIZES(Q7B self); // generated
Q7B Q7B_QLISTVIEW_VIEWMODE(Q7B self); // generated
Q7B Q7B_QLISTVIEW_WORDWRAP(Q7B self); // generated
void Q7B_QTABLEVIEW_CLEARSPANS(Q7B self); // generated
Q7B Q7B_QTABLEVIEW_COLUMNAT(Q7B self, Q7B X); // generated
Q7B Q7B_QTABLEVIEW_COLUMNSPAN(Q7B self, Q7B Row, Q7B Column); // generated
Q7B Q7B_QTABLEVIEW_COLUMNVIEWPORTPOSITION(Q7B self, Q7B Column); // generated
Q7B Q7B_QTABLEVIEW_COLUMNWIDTH(Q7B self, Q7B Column); // generated
Q7B Q7B_QTABLEVIEW_CORNERBUTTONENABLED(Q7B self); // generated
void Q7B_QTABLEVIEW_CORNERBUTTONENABLED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTABLEVIEW_GRIDSTYLE(Q7B self); // generated
void Q7B_QTABLEVIEW_HIDECOLUMN(Q7B self, Q7B Column); // generated
void Q7B_QTABLEVIEW_HIDEROW(Q7B self, Q7B Row); // generated
Q7B Q7B_QTABLEVIEW_HORIZONTALHEADER(Q7B self); // generated
Q7B Q7B_QTABLEVIEW_ISCOLUMNHIDDEN(Q7B self, Q7B Column); // generated
Q7B Q7B_QTABLEVIEW_ISCORNERBUTTONENABLED(Q7B self); // generated
Q7B Q7B_QTABLEVIEW_ISROWHIDDEN(Q7B self, Q7B Row); // generated
Q7B Q7B_QTABLEVIEW_ISSORTINGENABLED(Q7B self); // generated
void Q7B_QTABLEVIEW_RESIZECOLUMNTOCONTENTS(Q7B self, Q7B Column); // generated
void Q7B_QTABLEVIEW_RESIZECOLUMNSTOCONTENTS(Q7B self); // generated
void Q7B_QTABLEVIEW_RESIZEROWTOCONTENTS(Q7B self, Q7B Row); // generated
void Q7B_QTABLEVIEW_RESIZEROWSTOCONTENTS(Q7B self); // generated
Q7B Q7B_QTABLEVIEW_ROWAT(Q7B self, Q7B Y); // generated
Q7B Q7B_QTABLEVIEW_ROWHEIGHT(Q7B self, Q7B Row); // generated
Q7B Q7B_QTABLEVIEW_ROWSPAN(Q7B self, Q7B Row, Q7B Column); // generated
Q7B Q7B_QTABLEVIEW_ROWVIEWPORTPOSITION(Q7B self, Q7B Row); // generated
void Q7B_QTABLEVIEW_SELECTCOLUMN(Q7B self, Q7B Column); // generated
void Q7B_QTABLEVIEW_SELECTROW(Q7B self, Q7B Row); // generated
void Q7B_QTABLEVIEW_SETCOLUMNHIDDEN(Q7B self, Q7B Column, Q7B Hide); // generated
void Q7B_QTABLEVIEW_SETCORNERBUTTONENABLED(Q7B self, Q7B Enable); // generated
void Q7B_QTABLEVIEW_SETGRIDSTYLE(Q7B self, Q7B Style); // generated
void Q7B_QTABLEVIEW_SETHORIZONTALHEADER(Q7B self, Q7B Header); // generated
void Q7B_QTABLEVIEW_SETROWHEIGHT(Q7B self, Q7B Row, Q7B Height); // generated
void Q7B_QTABLEVIEW_SETROWHIDDEN(Q7B self, Q7B Row, Q7B Hide); // generated
void Q7B_QTABLEVIEW_SETSHOWGRID(Q7B self, Q7B Show); // generated
void Q7B_QTABLEVIEW_SETSORTINGENABLED(Q7B self, Q7B Enable); // generated
void Q7B_QTABLEVIEW_SETSPAN(Q7B self, Q7B Row, Q7B Column, Q7B RowSpanCount, Q7B ColumnSpanCount); // generated
void Q7B_QTABLEVIEW_SETVERTICALHEADER(Q7B self, Q7B Header); // generated
void Q7B_QTABLEVIEW_SETWORDWRAP(Q7B self, Q7B On); // generated
void Q7B_QTABLEVIEW_SHOWCOLUMN(Q7B self, Q7B Column); // generated
Q7B Q7B_QTABLEVIEW_SHOWGRID(Q7B self); // generated
void Q7B_QTABLEVIEW_SHOWROW(Q7B self, Q7B Row); // generated
void Q7B_QTABLEVIEW_SORTBYCOLUMN(Q7B self, Q7B Column, Q7B Order); // generated
Q7B Q7B_QTABLEVIEW_SORTINGENABLED(Q7B self); // generated
void Q7B_QTABLEVIEW_SORTINGENABLED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTABLEVIEW_VERTICALHEADER(Q7B self); // generated
Q7B Q7B_QTABLEVIEW_WORDWRAP(Q7B self); // generated
Q7B Q7B_QTREEVIEW_ALLCOLUMNSSHOWFOCUS(Q7B self); // generated
Q7B Q7B_QTREEVIEW_ANIMATED(Q7B self); // generated
void Q7B_QTREEVIEW_ANIMATED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTREEVIEW_AUTOEXPANDDELAY(Q7B self); // generated
void Q7B_QTREEVIEW_COLLAPSE(Q7B self, Q7B Index); // generated
void Q7B_QTREEVIEW_COLLAPSEALL(Q7B self); // generated
Q7B Q7B_QTREEVIEW_COLUMNAT(Q7B self, Q7B X); // generated
Q7B Q7B_QTREEVIEW_COLUMNVIEWPORTPOSITION(Q7B self, Q7B Column); // generated
Q7B Q7B_QTREEVIEW_COLUMNWIDTH(Q7B self, Q7B Column); // generated
void Q7B_QTREEVIEW_EXPAND(Q7B self, Q7B Index); // generated
void Q7B_QTREEVIEW_EXPANDALL(Q7B self); // generated
void Q7B_QTREEVIEW_EXPANDTODEPTH(Q7B self, Q7B Depth); // generated
Q7B Q7B_QTREEVIEW_EXPANDSONDOUBLECLICK(Q7B self); // generated
Q7B Q7B_QTREEVIEW_HEADER(Q7B self); // generated
Q7B Q7B_QTREEVIEW_HEADERHIDDEN(Q7B self); // generated
void Q7B_QTREEVIEW_HEADERHIDDEN(Q7B self, Q7B theProperty); // generated
void Q7B_QTREEVIEW_HIDECOLUMN(Q7B self, Q7B Column); // generated
Q7B Q7B_QTREEVIEW_INDENTATION(Q7B self); // generated
Q7B Q7B_QTREEVIEW_INDEXABOVE(Q7B self, Q7B Index); // generated
Q7B Q7B_QTREEVIEW_INDEXBELOW(Q7B self, Q7B Index); // generated
Q7B Q7B_QTREEVIEW_ISANIMATED(Q7B self); // generated
Q7B Q7B_QTREEVIEW_ISCOLUMNHIDDEN(Q7B self, Q7B Column); // generated
Q7B Q7B_QTREEVIEW_ISEXPANDED(Q7B self, Q7B Index); // generated
Q7B Q7B_QTREEVIEW_ISFIRSTCOLUMNSPANNED(Q7B self, Q7B Row, Q7B Parent); // generated
Q7B Q7B_QTREEVIEW_ISHEADERHIDDEN(Q7B self); // generated
Q7B Q7B_QTREEVIEW_ISROWHIDDEN(Q7B self, Q7B Row, Q7B Parent); // generated
Q7B Q7B_QTREEVIEW_ISSORTINGENABLED(Q7B self); // generated
Q7B Q7B_QTREEVIEW_ITEMSEXPANDABLE(Q7B self); // generated
void Q7B_QTREEVIEW_RESIZECOLUMNTOCONTENTS(Q7B self, Q7B Column); // generated
Q7B Q7B_QTREEVIEW_ROOTISDECORATED(Q7B self); // generated
void Q7B_QTREEVIEW_SETALLCOLUMNSSHOWFOCUS(Q7B self, Q7B Enable); // generated
void Q7B_QTREEVIEW_SETANIMATED(Q7B self, Q7B Enable); // generated
void Q7B_QTREEVIEW_SETAUTOEXPANDDELAY(Q7B self, Q7B Delay); // generated
void Q7B_QTREEVIEW_SETCOLUMNHIDDEN(Q7B self, Q7B Column, Q7B Hide); // generated
void Q7B_QTREEVIEW_SETCOLUMNWIDTH(Q7B self, Q7B Column, Q7B Width); // generated
void Q7B_QTREEVIEW_SETEXPANDED(Q7B self, Q7B Index, Q7B Expanded); // generated
void Q7B_QTREEVIEW_SETEXPANDSONDOUBLECLICK(Q7B self, Q7B Enable); // generated
void Q7B_QTREEVIEW_SETFIRSTCOLUMNSPANNED(Q7B self, Q7B Row, Q7B Parent, Q7B Span); // generated
void Q7B_QTREEVIEW_SETHEADER(Q7B self, Q7B Header); // generated
void Q7B_QTREEVIEW_SETHEADERHIDDEN(Q7B self, Q7B Hide); // generated
void Q7B_QTREEVIEW_SETINDENTATION(Q7B self, Q7B I); // generated
void Q7B_QTREEVIEW_SETITEMSEXPANDABLE(Q7B self, Q7B Enable); // generated
void Q7B_QTREEVIEW_SETROOTISDECORATED(Q7B self, Q7B Show); // generated
void Q7B_QTREEVIEW_SETROWHIDDEN(Q7B self, Q7B Row, Q7B Parent, Q7B Hide); // generated
void Q7B_QTREEVIEW_SETSORTINGENABLED(Q7B self, Q7B Enable); // generated
void Q7B_QTREEVIEW_SETUNIFORMROWHEIGHTS(Q7B self, Q7B Uniform); // generated
void Q7B_QTREEVIEW_SETWORDWRAP(Q7B self, Q7B On); // generated
void Q7B_QTREEVIEW_SHOWCOLUMN(Q7B self, Q7B Column); // generated
void Q7B_QTREEVIEW_SORTBYCOLUMN(Q7B self, Q7B Column, Q7B Order); // generated
Q7B Q7B_QTREEVIEW_SORTINGENABLED(Q7B self); // generated
void Q7B_QTREEVIEW_SORTINGENABLED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QTREEVIEW_UNIFORMROWHEIGHTS(Q7B self); // generated
Q7B Q7B_QTREEVIEW_WORDWRAP(Q7B self); // generated
void Q7B_QVALIDATOR_FIXUP(Q7B self, Q7B Input); // generated
Q7B Q7B_QVALIDATOR_LOCALE(Q7B self); // generated
void Q7B_QVALIDATOR_SETLOCALE(Q7B self, Q7B Locale); // generated
Q7B Q7B_QVALIDATOR_VALIDATE(Q7B self, Q7B Input, Q7B Pos); // generated


void Q7B_QACTION_ACTIVATE(Q7B self, Q7B Event); // generated
Q7B Q7B_QACTION_AUTOREPEAT(Q7B self); // generated
Q7B Q7B_QACTION_DATA(Q7B self); // generated
Q7B Q7B_QACTION_FONT(Q7B self); // generated
void Q7B_QACTION_HOVER(Q7B self); // generated
Q7B Q7B_QACTION_ICONTEXT(Q7B self); // generated
Q7B Q7B_QACTION_ICONVISIBLEINMENU(Q7B self); // generated
void Q7B_QACTION_ICONVISIBLEINMENU(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QACTION_ISCHECKABLE(Q7B self); // generated
Q7B Q7B_QACTION_ISCHECKED(Q7B self); // generated
Q7B Q7B_QACTION_ISENABLED(Q7B self); // generated
Q7B Q7B_QACTION_ISICONVISIBLEINMENU(Q7B self); // generated
Q7B Q7B_QACTION_ISSEPARATOR(Q7B self); // generated
Q7B Q7B_QACTION_ISVISIBLE(Q7B self); // generated
Q7B Q7B_QACTION_MENU(Q7B self); // generated
Q7B Q7B_QACTION_MENUROLE(Q7B self); // generated
Q7B Q7B_QACTION_PARENTWIDGET(Q7B self); // generated
Q7B Q7B_QACTION_PRIORITY(Q7B self); // generated
void Q7B_QACTION_SETAUTOREPEAT(Q7B self, Q7B Enable); // generated
void Q7B_QACTION_SETCHECKABLE(Q7B self, Q7B Checkable); // generated
void Q7B_QACTION_SETCHECKED(Q7B self, Q7B b); // generated
void Q7B_QACTION_SETDATA(Q7B self, Q7B UserData); // generated
void Q7B_QACTION_SETDISABLED(Q7B self, Q7B b); // generated
void Q7B_QACTION_SETENABLED(Q7B self, Q7B b); // generated
void Q7B_QACTION_SETFONT(Q7B self, Q7B Font); // generated
void Q7B_QACTION_SETICON(Q7B self, Q7B Icon); // generated
void Q7B_QACTION_SETICONTEXT(Q7B self, Q7B Text); // generated
void Q7B_QACTION_SETICONVISIBLEINMENU(Q7B self, Q7B Visible); // generated
void Q7B_QACTION_SETMENU(Q7B self, Q7B Menu); // generated
void Q7B_QACTION_SETMENUROLE(Q7B self, Q7B MenuRole); // generated
void Q7B_QACTION_SETPRIORITY(Q7B self, Q7B Priority); // generated
void Q7B_QACTION_SETSEPARATOR(Q7B self, Q7B B); // generated
void Q7B_QACTION_SETSHORTCUT(Q7B self, Q7B Shorcut); // generated
void Q7B_QACTION_SETSHORTCUTCONTEXT(Q7B self, Q7B Context); // generated
void Q7B_QACTION_SETSOFTKEYROLE(Q7B self, Q7B SoftKeyRole); // generated
void Q7B_QACTION_SETSTATUSTIP(Q7B self, Q7B StatusTip); // generated
void Q7B_QACTION_SETTEXT(Q7B self, Q7B Text); // generated
void Q7B_QACTION_SETTOOLTIP(Q7B self, Q7B Tip); // generated
void Q7B_QACTION_SETVISIBLE(Q7B self, Q7B b); // generated
void Q7B_QACTION_SETWHATSTHIS(Q7B self, Q7B What); // generated
Q7B Q7B_QACTION_SHORTCUT(Q7B self); // generated
Q7B Q7B_QACTION_SHORTCUTCONTEXT(Q7B self); // generated
Q7B Q7B_QACTION_SHOWSTATUSTEXT(Q7B self); // generated
Q7B Q7B_QACTION_SOFTKEYROLE(Q7B self); // generated
Q7B Q7B_QACTION_STATUSTIP(Q7B self); // generated
void Q7B_QACTION_TOGGLE(Q7B self); // generated
Q7B Q7B_QACTION_TOOLTIP(Q7B self); // generated
void Q7B_QACTION_TRIGGER(Q7B self); // generated
Q7B Q7B_QACTION_WHATSTHIS(Q7B self); // generated
Q7B Q7B_QACTIONGROUP_ACTIONS(Q7B self); // generated
Q7B Q7B_QACTIONGROUP_ADDACTION(Q7B self, Q7B Icon, Q7B Text); // generated
Q7B Q7B_QACTIONGROUP_CHECKEDACTION(Q7B self); // generated
Q7B Q7B_QACTIONGROUP_ENABLED(Q7B self); // generated
void Q7B_QACTIONGROUP_ENABLED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QACTIONGROUP_EXCLUSIVE(Q7B self); // generated
void Q7B_QACTIONGROUP_EXCLUSIVE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QACTIONGROUP_ISENABLED(Q7B self); // generated
Q7B Q7B_QACTIONGROUP_ISEXCLUSIVE(Q7B self); // generated
Q7B Q7B_QACTIONGROUP_ISVISIBLE(Q7B self); // generated
void Q7B_QACTIONGROUP_REMOVEACTION(Q7B self, Q7B Action); // generated
void Q7B_QACTIONGROUP_SETDISABLED(Q7B self, Q7B B); // generated
void Q7B_QACTIONGROUP_SETENABLED(Q7B self, Q7B Enabled); // generated
void Q7B_QACTIONGROUP_SETEXCLUSIVE(Q7B self, Q7B E); // generated
void Q7B_QACTIONGROUP_SETVISIBLE(Q7B self, Q7B Visible); // generated
Q7B Q7B_QACTIONGROUP_VISIBLE(Q7B self); // generated
void Q7B_QACTIONGROUP_VISIBLE(Q7B self, Q7B theProperty); // generated
void Q7B_QAPPLICATION_ABOUTQT(Q7B self); // generated
Q7B Q7B_QAPPLICATION_AUTOMAXIMIZETHRESHOLD(Q7B self); // generated
Q7B Q7B_QAPPLICATION_AUTOSIPENABLED(Q7B self); // generated
void Q7B_QAPPLICATION_CLOSEALLWINDOWS(Q7B self); // generated
Q7B Q7B_QAPPLICATION_CURSORFLASHTIME(Q7B self); // generated
void Q7B_QAPPLICATION_CURSORFLASHTIME(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QAPPLICATION_DOUBLECLICKINTERVAL(Q7B self); // generated
void Q7B_QAPPLICATION_DOUBLECLICKINTERVAL(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QAPPLICATION_GLOBALSTRUT(Q7B self); // generated
void Q7B_QAPPLICATION_GLOBALSTRUT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QAPPLICATION_INPUTCONTEXT(Q7B self); // generated
Q7B Q7B_QAPPLICATION_ISSESSIONRESTORED(Q7B self); // generated
Q7B Q7B_QAPPLICATION_KEYBOARDINPUTINTERVAL(Q7B self); // generated
void Q7B_QAPPLICATION_KEYBOARDINPUTINTERVAL(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QAPPLICATION_LAYOUTDIRECTION(Q7B self); // generated
void Q7B_QAPPLICATION_LAYOUTDIRECTION(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QAPPLICATION_QUITONLASTWINDOWCLOSED(Q7B self); // generated
void Q7B_QAPPLICATION_QUITONLASTWINDOWCLOSED(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QAPPLICATION_SESSIONID(Q7B self); // generated
Q7B Q7B_QAPPLICATION_SESSIONKEY(Q7B self); // generated
void Q7B_QAPPLICATION_SETAUTOMAXIMIZETHRESHOLD(Q7B self, Q7B Threshold); // generated
void Q7B_QAPPLICATION_SETAUTOSIPENABLED(Q7B self, Q7B Enabled); // generated
void Q7B_QAPPLICATION_SETINPUTCONTEXT(Q7B self, Q7B a0); // generated
void Q7B_QAPPLICATION_SETSTYLESHEET(Q7B self, Q7B Sheet); // generated
Q7B Q7B_QAPPLICATION_STARTDRAGDISTANCE(Q7B self); // generated
void Q7B_QAPPLICATION_STARTDRAGDISTANCE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QAPPLICATION_STARTDRAGTIME(Q7B self); // generated
void Q7B_QAPPLICATION_STARTDRAGTIME(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QAPPLICATION_STYLESHEET(Q7B self); // generated
Q7B Q7B_QAPPLICATION_WHEELSCROLLLINES(Q7B self); // generated
void Q7B_QAPPLICATION_WHEELSCROLLLINES(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QAPPLICATION_WINDOWICON(Q7B self); // generated
void Q7B_QAPPLICATION_WINDOWICON(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QCOMPLETER_CASESENSITIVITY(Q7B self); // generated
void Q7B_QCOMPLETER_COMPLETE(Q7B self, Q7B Rect); // generated
Q7B Q7B_QCOMPLETER_COMPLETIONCOLUMN(Q7B self); // generated
Q7B Q7B_QCOMPLETER_COMPLETIONCOUNT(Q7B self); // generated
Q7B Q7B_QCOMPLETER_COMPLETIONMODE(Q7B self); // generated
Q7B Q7B_QCOMPLETER_COMPLETIONPREFIX(Q7B self); // generated
Q7B Q7B_QCOMPLETER_COMPLETIONROLE(Q7B self); // generated
Q7B Q7B_QCOMPLETER_CURRENTCOMPLETION(Q7B self); // generated
Q7B Q7B_QCOMPLETER_CURRENTINDEX(Q7B self); // generated
Q7B Q7B_QCOMPLETER_CURRENTROW(Q7B self); // generated
Q7B Q7B_QCOMPLETER_MAXVISIBLEITEMS(Q7B self); // generated
Q7B Q7B_QCOMPLETER_MODELSORTING(Q7B self); // generated
Q7B Q7B_QCOMPLETER_POPUP(Q7B self); // generated
void Q7B_QCOMPLETER_SETCASESENSITIVITY(Q7B self, Q7B CaseSensitivity); // generated
void Q7B_QCOMPLETER_SETCOMPLETIONCOLUMN(Q7B self, Q7B Column); // generated
void Q7B_QCOMPLETER_SETCOMPLETIONMODE(Q7B self, Q7B Mode); // generated
void Q7B_QCOMPLETER_SETCOMPLETIONPREFIX(Q7B self, Q7B Prefix); // generated
void Q7B_QCOMPLETER_SETCOMPLETIONROLE(Q7B self, Q7B Role); // generated
Q7B Q7B_QCOMPLETER_SETCURRENTROW(Q7B self, Q7B Row); // generated
void Q7B_QCOMPLETER_SETMAXVISIBLEITEMS(Q7B self, Q7B MaxItems); // generated
void Q7B_QCOMPLETER_SETMODEL(Q7B self, Q7B Model); // generated
void Q7B_QCOMPLETER_SETMODELSORTING(Q7B self, Q7B Sorting); // generated
void Q7B_QCOMPLETER_SETPOPUP(Q7B self, Q7B Popup); // generated
void Q7B_QCOMPLETER_SETWIDGET(Q7B self, Q7B Widget); // generated
void Q7B_QCOMPLETER_SETWRAPAROUND(Q7B self, Q7B Wrap); // generated
Q7B Q7B_QCOMPLETER_WIDGET(Q7B self); // generated
Q7B Q7B_QCOMPLETER_WRAPAROUND(Q7B self); // generated
Q7B Q7B_QCOREAPPLICATION_APPLICATIONNAME(Q7B self); // generated
void Q7B_QCOREAPPLICATION_APPLICATIONNAME(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QCOREAPPLICATION_APPLICATIONVERSION(Q7B self); // generated
void Q7B_QCOREAPPLICATION_APPLICATIONVERSION(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QCOREAPPLICATION_ORGANIZATIONDOMAIN(Q7B self); // generated
void Q7B_QCOREAPPLICATION_ORGANIZATIONDOMAIN(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QCOREAPPLICATION_ORGANIZATIONNAME(Q7B self); // generated
void Q7B_QCOREAPPLICATION_ORGANIZATIONNAME(Q7B self, Q7B theProperty); // generated
void Q7B_QCOREAPPLICATION_QUIT(Q7B self); // generated
Q7B Q7B_QCOREAPPLICATION_SETEVENTFILTER(Q7B self, Q7B Filter); // generated
Q7B Q7B_QCURSOR_BITMAP(Q7B self); // generated
Q7B Q7B_QCURSOR_HOTSPOT(Q7B self); // generated
Q7B Q7B_QCURSOR_MASK(Q7B self); // generated
Q7B Q7B_QCURSOR_PIXMAP(Q7B self); // generated
void Q7B_QCURSOR_SETSHAPE(Q7B self, Q7B Shape); // generated
Q7B Q7B_QCURSOR_SHAPE(Q7B self); // generated
Q7B Q7B_QHEADERVIEW_LENGTH(Q7B self); // generated
Q7B Q7B_QMODELINDEX_CHILD(Q7B self, Q7B Row, Q7B Column); // generated
Q7B Q7B_QMODELINDEX_DATA(Q7B self, Q7B Role); // generated
Q7B Q7B_QMODELINDEX_FLAGS(Q7B self); // generated
Q7B Q7B_QMODELINDEX_INTERNALID(Q7B self); // generated
Q7B Q7B_QMODELINDEX_ISVALID(Q7B self); // generated
Q7B Q7B_QMODELINDEX_MODEL(Q7B self); // generated
Q7B Q7B_QMODELINDEX_PARENT(Q7B self); // generated
Q7B Q7B_QMODELINDEX_ROW(Q7B self); // generated
Q7B Q7B_QMODELINDEX_SIBLING(Q7B self, Q7B Row, Q7B Column); // generated
Q7B Q7B_QPRINTPREVIEWWIDGET_CURRENTPAGE(Q7B self); // generated
void Q7B_QPRINTPREVIEWWIDGET_FITINVIEW(Q7B self); // generated
void Q7B_QPRINTPREVIEWWIDGET_FITTOWIDTH(Q7B self); // generated
Q7B Q7B_QPRINTPREVIEWWIDGET_ORIENTATION(Q7B self); // generated
Q7B Q7B_QPRINTPREVIEWWIDGET_PAGECOUNT(Q7B self); // generated
void Q7B_QPRINTPREVIEWWIDGET_PRINT(Q7B self); // generated
void Q7B_QPRINTPREVIEWWIDGET_SETALLPAGESVIEWMODE(Q7B self); // generated
void Q7B_QPRINTPREVIEWWIDGET_SETCURRENTPAGE(Q7B self, Q7B Page); // generated
void Q7B_QPRINTPREVIEWWIDGET_SETFACINGPAGESVIEWMODE(Q7B self); // generated
void Q7B_QPRINTPREVIEWWIDGET_SETLANDSCAPEORIENTATION(Q7B self); // generated
void Q7B_QPRINTPREVIEWWIDGET_SETORIENTATION(Q7B self, Q7B Orientation); // generated
void Q7B_QPRINTPREVIEWWIDGET_SETPORTRAITORIENTATION(Q7B self); // generated
void Q7B_QPRINTPREVIEWWIDGET_SETSINGLEPAGEVIEWMODE(Q7B self); // generated
void Q7B_QPRINTPREVIEWWIDGET_SETVIEWMODE(Q7B self, Q7B Mode); // generated
void Q7B_QPRINTPREVIEWWIDGET_SETZOOMFACTOR(Q7B self, Q7B Factor); // generated
void Q7B_QPRINTPREVIEWWIDGET_SETZOOMMODE(Q7B self, Q7B ZoomMode); // generated
void Q7B_QPRINTPREVIEWWIDGET_UPDATEPREVIEW(Q7B self); // generated
Q7B Q7B_QPRINTPREVIEWWIDGET_VIEWMODE(Q7B self); // generated
Q7B Q7B_QPRINTPREVIEWWIDGET_ZOOMFACTOR(Q7B self); // generated
void Q7B_QPRINTPREVIEWWIDGET_ZOOMIN(Q7B self, Q7B Factor); // generated
Q7B Q7B_QPRINTPREVIEWWIDGET_ZOOMMODE(Q7B self); // generated
void Q7B_QPRINTPREVIEWWIDGET_ZOOMOUT(Q7B self, Q7B Factor); // generated
void Q7B_QURL_ADDENCODEDQUERYITEM(Q7B self, Q7B Key, Q7B Value); // generated
void Q7B_QURL_ADDQUERYITEM(Q7B self, Q7B Key, Q7B Value); // generated
Q7B Q7B_QURL_ALLENCODEDQUERYITEMVALUES(Q7B self, Q7B Key, Q7B Value); // generated
Q7B Q7B_QURL_ALLQUERYITEMVALUES(Q7B self, Q7B Key); // generated
Q7B Q7B_QURL_AUTHORITY(Q7B self); // generated
void Q7B_QURL_CLEAR(Q7B self); // generated
Q7B Q7B_QURL_ENCODEDFRAGMENT(Q7B self); // generated
Q7B Q7B_QURL_ENCODEDHOST(Q7B self); // generated
Q7B Q7B_QURL_ENCODEDPASSWORD(Q7B self); // generated
Q7B Q7B_QURL_ENCODEDPATH(Q7B self); // generated
Q7B Q7B_QURL_ENCODEDQUERY(Q7B self); // generated
Q7B Q7B_QURL_ENCODEDQUERYITEMVALUE(Q7B self, Q7B Key); // generated
Q7B Q7B_QURL_ENCODEDUSERNAME(Q7B self); // generated
Q7B Q7B_QURL_ERRORSTRING(Q7B self); // generated
Q7B Q7B_QURL_FRAGMENT(Q7B self); // generated
Q7B Q7B_QURL_HASENCODEDQUERYITEM(Q7B self, Q7B Key); // generated
Q7B Q7B_QURL_HASFRAGMENT(Q7B self); // generated
Q7B Q7B_QURL_HASQUERY(Q7B self); // generated
Q7B Q7B_QURL_HASQUERYITEM(Q7B self, Q7B Key); // generated
Q7B Q7B_QURL_HOST(Q7B self); // generated
Q7B Q7B_QURL_ISEMPTY(Q7B self); // generated
Q7B Q7B_QURL_ISLOCALFILE(Q7B self); // generated
Q7B Q7B_QURL_ISPARENTOF(Q7B self, Q7B ChildUrl); // generated
Q7B Q7B_QURL_ISRELATIVE(Q7B self); // generated
Q7B Q7B_QURL_ISVALID(Q7B self); // generated
Q7B Q7B_QURL_PASSWORD(Q7B self); // generated
Q7B Q7B_QURL_PATH(Q7B self); // generated
Q7B Q7B_QURL_PORT(Q7B self); // generated
Q7B Q7B_QURL_QUERYITEMVALUE(Q7B self, Q7B Key); // generated
Q7B Q7B_QURL_QUERYPAIRDELIMITER(Q7B self); // generated
Q7B Q7B_QURL_QUERYVALUEDELIMITER(Q7B self); // generated
Q7B Q7B_QURL_FROMLOCALFILE(Q7B self, Q7B localFile); // generated
void Q7B_QURL_REMOVEALLENCODEDQUERYITEMS(Q7B self, Q7B Key); // generated
void Q7B_QURL_REMOVEALLQUERYITEMS(Q7B self, Q7B Key); // generated
void Q7B_QURL_REMOVEENCODEDQUERYITEM (Q7B self, Q7B Key); // generated
void Q7B_QURL_REMOVEQUERYITEM(Q7B self, Q7B Key); // generated
Q7B Q7B_QURL_RESOLVED(Q7B self, Q7B Relative); // generated
Q7B Q7B_QURL_SCHEME(Q7B self); // generated
void Q7B_QURL_SETAUTHORITY(Q7B self, Q7B Authority); // generated
void Q7B_QURL_SETENCODEDHOST(Q7B self, Q7B Host); // generated
void Q7B_QURL_SETENCODEDPASSWORD(Q7B self, Q7B Password); // generated
void Q7B_QURL_SETENCODEDPATH(Q7B self, Q7B Path); // generated
void Q7B_QURL_SETENCODEDQUERY(Q7B self, Q7B Query); // generated
void Q7B_QURL_SETENCODEDURL(Q7B self, Q7B EncodedUrl); // generated
void Q7B_QURL_SETENCODEDUSERNAME(Q7B self, Q7B UserName); // generated
void Q7B_QURL_SETHOST(Q7B self, Q7B Host); // generated
void Q7B_QURL_SETPASSWORD(Q7B self, Q7B Password); // generated
void Q7B_QURL_SETPATH(Q7B self, Q7B Path); // generated
void Q7B_QURL_SETPORT(Q7B self, Q7B Port); // generated
void Q7B_QURL_SETQUERYDELIMITERS(Q7B self, Q7B ValueDelimiter, Q7B PairDelimeter); // generated
void Q7B_QURL_SETSCHEME(Q7B self, Q7B Scheme); // generated
void Q7B_QURL_SETURL(Q7B self, Q7B Url); // generated
void Q7B_QURL_SETUSERINFO(Q7B self, Q7B UserInfo); // generated
void Q7B_QURL_SETUSERNAME(Q7B self, Q7B UserName); // generated
void Q7B_QURL_SWAP(Q7B self, Q7B Other); // generated
Q7B Q7B_QURL_TOENCODED(Q7B self, Q7B Option); // generated
Q7B Q7B_QURL_TOLOCALFILE(Q7B self); // generated
Q7B Q7B_QURL_TOSTRING(Q7B self, Q7B Option); // generated
Q7B Q7B_QURL_TOPLEVELDOMAIN(Q7B self); // generated
Q7B Q7B_QURL_USERINFO(Q7B self); // generated
Q7B Q7B_QURL_USERNAME(Q7B self); // generated
Q7B Q7B_QURLINFO_GROUP(Q7B self); // generated
Q7B Q7B_QURLINFO_ISDIR(Q7B self); // generated
Q7B Q7B_QURLINFO_ISEXECUTABLE(Q7B self); // generated
Q7B Q7B_QURLINFO_ISFILE(Q7B self); // generated
Q7B Q7B_QURLINFO_ISREADABLE(Q7B self); // generated
Q7B Q7B_QURLINFO_ISSYMLINK(Q7B self); // generated
Q7B Q7B_QURLINFO_ISVALID(Q7B self); // generated
Q7B Q7B_QURLINFO_ISWRITABLE(Q7B self); // generated
Q7B Q7B_QURLINFO_LASTMODIFIED(Q7B self); // generated
Q7B Q7B_QURLINFO_LASTREAD(Q7B self); // generated
Q7B Q7B_QURLINFO_NAME(Q7B self); // generated
Q7B Q7B_QURLINFO_OWNER(Q7B self); // generated
Q7B Q7B_QURLINFO_PERMISSIONS(Q7B self); // generated
void Q7B_QURLINFO_SETDIR(Q7B self, Q7B B); // generated
void Q7B_QURLINFO_SETFILE(Q7B self, Q7B B); // generated
void Q7B_QURLINFO_SETGROUP(Q7B self, Q7B S); // generated
void Q7B_QURLINFO_SETLASTMODIFIED(Q7B self, Q7B Dt); // generated
void Q7B_QURLINFO_SETLASTREAD(Q7B self, Q7B Dt); // generated
void Q7B_QURLINFO_SETNAME(Q7B self, Q7B Name); // generated
void Q7B_QURLINFO_SETOWNER(Q7B self, Q7B S); // generated
void Q7B_QURLINFO_SETPERMISSIONS(Q7B self, Q7B P); // generated
void Q7B_QURLINFO_SETREADABLE(Q7B self, Q7B B); // generated
void Q7B_QURLINFO_SETSIZE(Q7B self, Q7B Size); // generated
void Q7B_QURLINFO_SETSYMLINK(Q7B self, Q7B B); // generated
void Q7B_QURLINFO_SETWRITABLE(Q7B self, Q7B B); // generated
Q7B Q7B_QURLINFO_SIZE(Q7B self); // generated
Q7B Q7B_QVARIANT_CANCONVERT(Q7B self, Q7B T); // generated
void Q7B_QVARIANT_CLEAR(Q7B self); // generated
Q7B Q7B_QVARIANT_CONVERT(Q7B self, Q7B T); // generated
Q7B Q7B_QVARIANT_ISNULL(Q7B self); // generated
Q7B Q7B_QVARIANT_ISVALID(Q7B self); // generated
void Q7B_QVARIANT_SWAP(Q7B self, Q7B Other); // generated
Q7B Q7B_QVARIANT_TOBITARRAY(Q7B self); // generated
Q7B Q7B_QVARIANT_TOBOOL(Q7B self); // generated
Q7B Q7B_QVARIANT_TOBYTEARRAY(Q7B self); // generated
Q7B Q7B_QVARIANT_TOCHAR(Q7B self); // generated
Q7B Q7B_QVARIANT_TODATE(Q7B self); // generated
Q7B Q7B_QVARIANT_TODATETIME(Q7B self); // generated
Q7B Q7B_QVARIANT_TODOUBLE(Q7B self, Q7B Ok); // generated
Q7B Q7B_QVARIANT_TOINT(Q7B self, Q7B Ok); // generated
Q7B Q7B_QVARIANT_TOLINE(Q7B self); // generated
Q7B Q7B_QVARIANT_TOLINEF(Q7B self); // generated
Q7B Q7B_QVARIANT_TOLIST(Q7B self); // generated
Q7B Q7B_QVARIANT_TOLOCALE(Q7B self); // generated
Q7B Q7B_QVARIANT_TOPOINT(Q7B self); // generated
Q7B Q7B_QVARIANT_TOPOINTF(Q7B self); // generated
Q7B Q7B_QVARIANT_TORECT(Q7B self); // generated
Q7B Q7B_QVARIANT_TORECTF(Q7B self); // generated
Q7B Q7B_QVARIANT_TOREGEXP(Q7B self); // generated
Q7B Q7B_QVARIANT_TOSIZE(Q7B self); // generated
Q7B Q7B_QVARIANT_TOSIZEF(Q7B self); // generated
Q7B Q7B_QVARIANT_TOSTRING(Q7B self); // generated
Q7B Q7B_QVARIANT_TOSTRINGLIST(Q7B self); // generated
Q7B Q7B_QVARIANT_TOTIME(Q7B self); // generated
Q7B Q7B_QVARIANT_TOURL(Q7B self); // generated
Q7B Q7B_QVARIANT_TYPE(Q7B self); // generated

Q7B Q7B_QINTVALIDATOR_BOTTOM(Q7B self); // generated
void Q7B_QINTVALIDATOR_SETBOTTOM(Q7B self, Q7B v); // generated
void Q7B_QINTVALIDATOR_SETRANGE(Q7B self, Q7B bottom, Q7B top); // generated
void Q7B_QINTVALIDATOR_SETTOP(Q7B self, Q7B v); // generated
Q7B Q7B_QINTVALIDATOR_TOP(Q7B self); // generated
Q7B Q7B_QPRINTDIALOG_OPTIONS(Q7B self); // generated
Q7B Q7B_QPRINTDIALOG_PRINTER(Q7B self); // generated
void Q7B_QPRINTDIALOG_SETOPTION(Q7B self, Q7B option, Q7B on); // generated
Q7B Q7B_QPRINTDIALOG_TESTOPTION(Q7B self, Q7B option); // generated

Q7B Q7B_QSTRINGLIST_TOLIST(Q7B self); // generated
Q7B Q7B_QSTRINGLIST_AT(Q7B self, Q7B Index); // generated
Q7B Q7B_QSTRINGLIST_LENGTH(Q7B self); // generated

Q7B Q7B_QVARIANT_FROMBOOLEAN(Q7B self, Q7B v); // generated
Q7B Q7B_QVARIANT_FROMDATETIME(Q7B self, Q7B v); // generated
Q7B Q7B_QVARIANT_FROMFLOAT(Q7B self, Q7B v); // generated
Q7B Q7B_QVARIANT_FROMINTEGER(Q7B self, Q7B v); // generated
Q7B Q7B_QVARIANT_FROMQSTRINGLIST(Q7B self, Q7B v); // generated
Q7B Q7B_QVARIANT_FROMSTRING(Q7B self, Q7B v); // generated


Q7B Q7B_QABSTRACTITEMMODEL_BUDDY(Q7B self, Q7B Index); // generated
Q7B Q7B_QABSTRACTITEMMODEL_CANFETCHMORE(Q7B self, Q7B Parent); // generated
Q7B Q7B_QABSTRACTITEMMODEL_COLUMNCOUNT(Q7B self, Q7B Parent); // generated
Q7B Q7B_QABSTRACTITEMMODEL_DATA(Q7B self, Q7B Index, Q7B Role); // generated
Q7B Q7B_QABSTRACTITEMMODEL_DROPMIMEDATA(Q7B self, Q7B Data, Q7B Action, Q7B Row, Q7B Column, Q7B Parent); // generated
void Q7B_QABSTRACTITEMMODEL_FETCHMORE(Q7B self, Q7B Parent); // generated
Q7B Q7B_QABSTRACTITEMMODEL_FLAGS(Q7B self, Q7B Index); // generated
Q7B Q7B_QABSTRACTITEMMODEL_HASCHILDREN(Q7B self, Q7B Parent); // generated
Q7B Q7B_QABSTRACTITEMMODEL_HASINDEX(Q7B self, Q7B Row, Q7B Column, Q7B Parent); // generated
Q7B Q7B_QABSTRACTITEMMODEL_HEADERDATA(Q7B self, Q7B Section, Q7B Orientation, Q7B Role); // generated
Q7B Q7B_QABSTRACTITEMMODEL_INDEX(Q7B self, Q7B Row, Q7B Column, Q7B Parent); // generated
Q7B Q7B_QABSTRACTITEMMODEL_INSERTCOLUMN(Q7B self, Q7B Column, Q7B Parent); // generated
Q7B Q7B_QABSTRACTITEMMODEL_INSERTCOLUMNS(Q7B self, Q7B Column, Q7B Count, Q7B Parent); // generated
Q7B Q7B_QABSTRACTITEMMODEL_REMOVEROW(Q7B self, Q7B Row, Q7B Parent); // generated
Q7B Q7B_QABSTRACTITEMMODEL_REMOVEROWS(Q7B self, Q7B Row, Q7B Count, Q7B Parent); // generated
void Q7B_QABSTRACTITEMMODEL_REVERT(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMMODEL_ROWCOUNT(Q7B self, Q7B Parent); // generated
Q7B Q7B_QABSTRACTITEMMODEL_SETDATA(Q7B self, Q7B Index, Q7B Value, Q7B Role); // generated
Q7B Q7B_QABSTRACTITEMMODEL_SETHEADERDATA(Q7B self, Q7B Section, Q7B Orientation, Q7B Value, Q7B Role); // generated
void Q7B_QABSTRACTITEMMODEL_SETSUPPORTEDDRAGACTIONS(Q7B self, Q7B Actions); // generated
Q7B Q7B_QABSTRACTITEMMODEL_SIBLING(Q7B self, Q7B Row, Q7B Column, Q7B Index); // generated
void Q7B_QABSTRACTITEMMODEL_SORT(Q7B self, Q7B Column, Q7B Order); // generated
Q7B Q7B_QABSTRACTITEMMODEL_SPAN(Q7B self, Q7B Index); // generated
void Q7B_QABSTRACTITEMMODEL_SUBMIT(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMMODEL_SUPPORTEDDRAGACTIONS(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMMODEL_SUPPORTEDDROPACTIONS(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_ALTERNATINGROWCOLORS(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_AUTOSCROLL(Q7B self); // generated
void Q7B_QABSTRACTITEMVIEW_AUTOSCROLL(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QABSTRACTITEMVIEW_AUTOSCROLLMARGIN(Q7B self); // generated
void Q7B_QABSTRACTITEMVIEW_CLEARSELECTION(Q7B self); // generated
void Q7B_QABSTRACTITEMVIEW_CLOSEPERSISTENTEDITOR(Q7B self, Q7B Index); // generated
Q7B Q7B_QABSTRACTITEMVIEW_CURRENTINDEX(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_DEFAULTDROPACTION(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_DRAGDROPMODE(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_DRAGDROPOVERWRITEMODE(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_DRAGENABLED(Q7B self); // generated
void Q7B_QABSTRACTITEMVIEW_EDIT(Q7B self, Q7B Index); // generated
Q7B Q7B_QABSTRACTITEMVIEW_EDITTRIGGERS(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_HASAUTOSCROLL(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_HORIZONTALSCROLLMODE(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_ICONSIZE(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_INDEXAT (Q7B self, Q7B Point); // generated
Q7B Q7B_QABSTRACTITEMVIEW_INDEXWIDGET (Q7B self, Q7B Index); // generated
void Q7B_QABSTRACTITEMVIEW_KEYBOARDSEARCH(Q7B self, Q7B Search); // generated
Q7B Q7B_QABSTRACTITEMVIEW_MODEL(Q7B self); // generated
void Q7B_QABSTRACTITEMVIEW_OPENPERSISTENTEDITOR(Q7B self, Q7B Index); // generated
void Q7B_QABSTRACTITEMVIEW_RESET(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_ROOTINDEX(Q7B self); // generated
void Q7B_QABSTRACTITEMVIEW_SCROLLTO(Q7B self, Q7B Index, Q7B Hint); // generated
void Q7B_QABSTRACTITEMVIEW_SCROLLTOBOTTOM(Q7B self); // generated
void Q7B_QABSTRACTITEMVIEW_SCROLLTOTOP(Q7B self); // generated
void Q7B_QABSTRACTITEMVIEW_SELECTALL(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_SELECTIONBEHAVIOR(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_SELECTIONMODE(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_SELECTIONMODEL(Q7B self); // generated
void Q7B_QABSTRACTITEMVIEW_SETALTERNATINGROWCOLORS(Q7B self, Q7B Enable); // generated
void Q7B_QABSTRACTITEMVIEW_SETAUTOSCROLL(Q7B self, Q7B Enable); // generated
void Q7B_QABSTRACTITEMVIEW_SETAUTOSCROLLMARGIN(Q7B self, Q7B Margin); // generated
void Q7B_QABSTRACTITEMVIEW_SETCURRENTINDEX(Q7B self, Q7B Index); // generated
void Q7B_QABSTRACTITEMVIEW_SETDEFAULTDROPACTION(Q7B self, Q7B DropAction); // generated
void Q7B_QABSTRACTITEMVIEW_SETDRAGDROPMODE(Q7B self, Q7B Behavior); // generated
void Q7B_QABSTRACTITEMVIEW_SETDRAGDROPOVERWRITEMODE(Q7B self, Q7B Overwrite); // generated
void Q7B_QABSTRACTITEMVIEW_SETDRAGENABLED(Q7B self, Q7B Enable); // generated
void Q7B_QABSTRACTITEMVIEW_SETDROPINDICATORSHOWN(Q7B self, Q7B Enable); // generated
void Q7B_QABSTRACTITEMVIEW_SETEDITTRIGGERS(Q7B self, Q7B Triggers); // generated
void Q7B_QABSTRACTITEMVIEW_SETHORIZONTALSCROLLMODE(Q7B self, Q7B Mode); // generated
void Q7B_QABSTRACTITEMVIEW_SETICONSIZE(Q7B self, Q7B Size); // generated
void Q7B_QABSTRACTITEMVIEW_SETINDEXWIDGET(Q7B self, Q7B Index, Q7B Widget); // generated
void Q7B_QABSTRACTITEMVIEW_SETMODEL(Q7B self, Q7B Model); // generated
void Q7B_QABSTRACTITEMVIEW_SETROOTINDEX(Q7B self, Q7B Index); // generated
void Q7B_QABSTRACTITEMVIEW_SETSELECTIONBEHAVIOR(Q7B self, Q7B Behavior); // generated
void Q7B_QABSTRACTITEMVIEW_SETSELECTIONMODE(Q7B self, Q7B Mode); // generated
void Q7B_QABSTRACTITEMVIEW_SETSELECTIONMODEL(Q7B self, Q7B SelectionModel); // generated
void Q7B_QABSTRACTITEMVIEW_SETTABKEYNAVIGATION(Q7B self, Q7B Enable); // generated
void Q7B_QABSTRACTITEMVIEW_SETTEXTELIDEMODE(Q7B self, Q7B Mode); // generated
void Q7B_QABSTRACTITEMVIEW_SETVERTICALSCROLLMODE(Q7B self, Q7B Mode); // generated
Q7B Q7B_QABSTRACTITEMVIEW_SHOWDROPINDICATOR(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_SIZEHINTFORCOLUMN(Q7B self, Q7B Column); // generated
Q7B Q7B_QABSTRACTITEMVIEW_SIZEHINTFORINDEX(Q7B self, Q7B Index); // generated
Q7B Q7B_QABSTRACTITEMVIEW_SIZEHINTFORROW(Q7B self, Q7B Row); // generated
Q7B Q7B_QABSTRACTITEMVIEW_TABKEYNAVIGATION(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_TEXTELIDEMODE(Q7B self); // generated
void Q7B_QABSTRACTITEMVIEW_UPDATE(Q7B self, Q7B Index); // generated
Q7B Q7B_QABSTRACTITEMVIEW_VERTICALSCROLLMODE(Q7B self); // generated
Q7B Q7B_QABSTRACTITEMVIEW_VISUALRECT(Q7B self, Q7B Index); // generated
void Q7B_QABSTRACTSCROLLAREA_ADDSCROLLBARWIDGET(Q7B self, Q7B Widget); // generated
Q7B Q7B_QABSTRACTSCROLLAREA_CORNERWIDGET(Q7B self); // generated
Q7B Q7B_QABSTRACTSCROLLAREA_HORIZONTALSCROLLBAR(Q7B self); // generated
Q7B Q7B_QABSTRACTSCROLLAREA_HORIZONTALSCROLLBARPOLICY(Q7B self); // generated
Q7B Q7B_QABSTRACTSCROLLAREA_MAXIMUMVIEWPORTSIZE(Q7B self); // generated
void Q7B_QABSTRACTSCROLLAREA_SETCORNERWIDGET(Q7B self, Q7B Widget); // generated
void Q7B_QABSTRACTSCROLLAREA_SETHORIZONTALSCROLLBAR(Q7B self, Q7B ScrollBar); // generated
void Q7B_QABSTRACTSCROLLAREA_SETHORIZONTALSCROLLBARPOLICY(Q7B self, Q7B Policy); // generated
void Q7B_QABSTRACTSCROLLAREA_SETVERTICALSCROLLBAR(Q7B self, Q7B ScrollBar); // generated
void Q7B_QABSTRACTSCROLLAREA_SETVERTICALSCROLLBARPOLICY(Q7B self, Q7B Policy); // generated
void Q7B_QABSTRACTSCROLLAREA_SETVIEWPORT(Q7B self, Q7B Widget); // generated
Q7B Q7B_QABSTRACTSCROLLAREA_VERTICALSCROLLBAR(Q7B self); // generated
Q7B Q7B_QABSTRACTSCROLLAREA_VERTICALSCROLLBARPOLICY(Q7B self); // generated
Q7B Q7B_QABSTRACTSCROLLAREA_VIEWPORT(Q7B self); // generated
void Q7B_QBITMAP_CLEAR(Q7B self); // generated
void Q7B_QBITMAP_SWAP(Q7B self, Q7B Other); // generated
Q7B Q7B_QBITMAP_TRANSFORMED(Q7B self, Q7B Matrix); // generated
Q7B Q7B_QBRUSH_COLOR(Q7B self); // generated
Q7B Q7B_QBRUSH_GRADIENT(Q7B self); // generated
Q7B Q7B_QBRUSH_ISOPAQUE(Q7B self); // generated
Q7B Q7B_QBRUSH_MATRIX(Q7B self); // generated
void Q7B_QBRUSH_SETCOLOR(Q7B self, Q7B Color); // generated
void Q7B_QBRUSH_SETMATRIX(Q7B self, Q7B Matrix); // generated
void Q7B_QBRUSH_SETSTYLE(Q7B self, Q7B Style); // generated
void Q7B_QBRUSH_SETTEXTURE(Q7B self, Q7B Pixmap); // generated
void Q7B_QBRUSH_SETTEXTUREIMAGE(Q7B self, Q7B Image); // generated
void Q7B_QBRUSH_SETTRANSFORM(Q7B self, Q7B Matrix); // generated
Q7B Q7B_QBRUSH_STYLE(Q7B self); // generated
void Q7B_QBRUSH_SWAP(Q7B self, Q7B Other); // generated
Q7B Q7B_QBRUSH_TEXTURE(Q7B self); // generated
Q7B Q7B_QBRUSH_TEXTUREIMAGE(Q7B self); // generated
Q7B Q7B_QBRUSH_TRANSFORM(Q7B self); // generated
Q7B Q7B_QFONTINFO_BOLD(Q7B self); // generated
Q7B Q7B_QFONTINFO_EXACTMATCH(Q7B self); // generated
Q7B Q7B_QFONTINFO_FAMILY(Q7B self); // generated
Q7B Q7B_QFONTINFO_FIXEDPITCH(Q7B self); // generated
Q7B Q7B_QFONTINFO_ITALIC(Q7B self); // generated
Q7B Q7B_QFONTINFO_PIXELSIZE(Q7B self); // generated
Q7B Q7B_QFONTINFO_POINTSIZE(Q7B self); // generated
Q7B Q7B_QFONTINFO_POINTSIZEF(Q7B self); // generated
Q7B Q7B_QFONTINFO_RAWMODE(Q7B self); // generated
Q7B Q7B_QFONTINFO_STYLE(Q7B self); // generated
Q7B Q7B_QFONTINFO_STYLEHINT(Q7B self); // generated
Q7B Q7B_QFONTINFO_STYLENAME(Q7B self); // generated
Q7B Q7B_QFONTINFO_WEIGHT(Q7B self); // generated
Q7B Q7B_QFONTMETRICS_ASCENT(Q7B self); // generated
Q7B Q7B_QFONTMETRICS_AVERAGECHARWIDTH(Q7B self); // generated
Q7B Q7B_QFONTMETRICS_BOUNDINGRECT(Q7B self, Q7B Text); // generated
Q7B Q7B_QFONTMETRICS_DESCENT(Q7B self); // generated
Q7B Q7B_QFONTMETRICS_ELIDEDTEXT(Q7B self, Q7B Text, Q7B Mode, Q7B Width, Q7B Flags); // generated
Q7B Q7B_QFONTMETRICS_HEIGHT(Q7B self); // generated
Q7B Q7B_QFONTMETRICS_INFONT(Q7B self, Q7B Ch); // generated
Q7B Q7B_QFONTMETRICS_LEADING(Q7B self); // generated
Q7B Q7B_QFONTMETRICS_LEFTBEARING(Q7B self, Q7B Ch); // generated
Q7B Q7B_QFONTMETRICS_LINESPACING(Q7B self); // generated
Q7B Q7B_QFONTMETRICS_LINEWIDTH(Q7B self); // generated
Q7B Q7B_QFONTMETRICS_MAXWIDTH(Q7B self); // generated
Q7B Q7B_QFONTMETRICS_MINLEFTBEARING(Q7B self); // generated
Q7B Q7B_QFONTMETRICS_MINRIGHTBEARING(Q7B self); // generated
Q7B Q7B_QFONTMETRICS_OVERLINEPOS(Q7B self); // generated
Q7B Q7B_QFONTMETRICS_RIGHTBEARING(Q7B self, Q7B Ch); // generated
Q7B Q7B_QFONTMETRICS_STRIKEOUTPOS(Q7B self); // generated
Q7B Q7B_QFONTMETRICS_TIGHTBOUNDINGRECT(Q7B self, Q7B Text); // generated
Q7B Q7B_QFONTMETRICS_UNDERLINEPOS(Q7B self); // generated
Q7B Q7B_QFONTMETRICS_WIDTH(Q7B self, Q7B Ch); // generated
Q7B Q7B_QFONTMETRICS_XHEIGHT(Q7B self); // generated
Q7B Q7B_QICON_ACTUALSIZE(Q7B self, Q7B Size, Q7B Mode); // generated
void Q7B_QICON_ADDFILE(Q7B self, Q7B FileName, Q7B Size, Q7B Mode, Q7B State); // generated
void Q7B_QICON_ADDPIXMAP(Q7B self, Q7B Pixmap, Q7B Mode, Q7B State); // generated
Q7B Q7B_QICON_AVAILABLESIZES(Q7B self, Q7B Mode, Q7B State); // generated
Q7B Q7B_QICON_CACHEKEY(Q7B self); // generated
Q7B Q7B_QICON_ISNULL(Q7B self); // generated
Q7B Q7B_QICON_NAME(Q7B self); // generated
void Q7B_QICON_PAINT(Q7B self, Q7B Painter, Q7B X, Q7B Y, Q7B W, Q7B H, Q7B Alignment, Q7B Mode, Q7B State); // generated
Q7B Q7B_QICON_PIXMAP(Q7B self, Q7B Extent, Q7B Mode, Q7B State); // generated
void Q7B_QICON_SWAP(Q7B self, Q7B Other); // generated
Q7B Q7B_QLAYOUT_ACTIVATE(Q7B self); // generated
void Q7B_QLAYOUT_ADDITEM(Q7B self, Q7B Item); // generated
void Q7B_QLAYOUT_ADDWIDGET(Q7B self, Q7B W); // generated
Q7B Q7B_QLAYOUT_CONTENTSRECT(Q7B self); // generated
void Q7B_QLAYOUT_GETCONTENTSMARGINS(Q7B self, Q7B Left, Q7B Top, Q7B Right, Q7B Bottom); // generated
Q7B Q7B_QLAYOUT_INDEXOF(Q7B self, Q7B Widget); // generated
Q7B Q7B_QLAYOUT_ISENABLED(Q7B self); // generated
Q7B Q7B_QLAYOUT_ITEMAT(Q7B self, Q7B Index); // generated
Q7B Q7B_QLAYOUT_MENUBAR(Q7B self); // generated
Q7B Q7B_QLAYOUT_PARENTWIDGET(Q7B self); // generated
void Q7B_QLAYOUT_REMOVEITEM(Q7B self, Q7B Item); // generated
void Q7B_QLAYOUT_REMOVEWIDGET(Q7B self, Q7B Widget); // generated
Q7B Q7B_QLAYOUT_SETALIGNMENT(Q7B self, Q7B L, Q7B Alignment); // generated
void Q7B_QLAYOUT_SETCONTENTSMARGINS(Q7B self, Q7B Left, Q7B Top, Q7B Right, Q7B Bottom); // generated
void Q7B_QLAYOUT_SETENABLED(Q7B self, Q7B Enable); // generated
void Q7B_QLAYOUT_SETMENUBAR(Q7B self, Q7B Widget); // generated
void Q7B_QLAYOUT_SETSIZECONSTRAINT(Q7B self, Q7B Constraint); // generated
void Q7B_QLAYOUT_SETSPACING(Q7B self, Q7B Spacing); // generated
Q7B Q7B_QLAYOUT_SIZECONSTRAINT(Q7B self); // generated
Q7B Q7B_QLAYOUT_SPACING(Q7B self); // generated
void Q7B_QLAYOUT_UPDATE(Q7B self); // generated
Q7B Q7B_QPAINTER_BACKGROUND(Q7B self); // generated
Q7B Q7B_QPAINTER_BACKGROUNDMODE(Q7B self); // generated
Q7B Q7B_QPAINTER_BEGIN(Q7B self, Q7B Device); // generated
void Q7B_QPAINTER_BEGINNATIVEPAINTING(Q7B self); // generated
Q7B Q7B_QPAINTER_BOUNDINGRECT(Q7B self, Q7B Rectangle, Q7B Flags, Q7B Text); // generated
Q7B Q7B_QPAINTER_BRUSH(Q7B self); // generated
Q7B Q7B_QPAINTER_BRUSHORIGIN(Q7B self); // generated
Q7B Q7B_QPAINTER_CLIPPATH(Q7B self); // generated
Q7B Q7B_QPAINTER_CLIPREGION(Q7B self); // generated
Q7B Q7B_QPAINTER_COMBINEDTRANSFORM(Q7B self); // generated
Q7B Q7B_QPAINTER_COMPOSITIONMODE(Q7B self); // generated
Q7B Q7B_QPAINTER_DEVICE(Q7B self); // generated
Q7B Q7B_QPAINTER_DEVICETRANSFORM(Q7B self); // generated
void Q7B_QPAINTER_DRAWARC(Q7B self, Q7B Rectangle, Q7B StartAngle, Q7B SpanAngle); // generated
void Q7B_QPAINTER_DRAWCHORD(Q7B self, Q7B Rectangle, Q7B StartAngle, Q7B SpanAngle); // generated
void Q7B_QPAINTER_DRAWCONVEXPOLYGON(Q7B self, Q7B Points); // generated
void Q7B_QPAINTER_DRAWELLIPSE(Q7B self, Q7B Center, Q7B Rx, Q7B Ry); // generated
void Q7B_QPAINTER_DRAWIMAGE(Q7B self, Q7B Rectangle, Q7B Image); // generated
void Q7B_QPAINTER_DRAWPATH(Q7B self, Q7B Path); // generated
void Q7B_QPAINTER_DRAWPICTURE(Q7B self, Q7B X, Q7B Y, Q7B Picture); // generated
void Q7B_QPAINTER_DRAWPIE(Q7B self, Q7B Rectangle, Q7B StartAngle, Q7B SpanAngle); // generated
void Q7B_QPAINTER_DRAWPIXMAP(Q7B self, Q7B Rectangle, Q7B Pixmap); // generated
void Q7B_QPAINTER_DRAWPOINT(Q7B self, Q7B X, Q7B Y); // generated
void Q7B_QPAINTER_DRAWPOINTS(Q7B self, Q7B Points); // generated
void Q7B_QPAINTER_DRAWPOLYGON(Q7B self, Q7B Polygon, Q7B FillRule); // generated
void Q7B_QPAINTER_DRAWPOLYLINE(Q7B self, Q7B Points); // generated
void Q7B_QPAINTER_DRAWRECT(Q7B self, Q7B Rectangle); // generated
void Q7B_QPAINTER_DRAWROUNDEDRECT(Q7B self, Q7B Rectangle, Q7B XRadius, Q7B YRadius, Q7B Mode); // generated
void Q7B_QPAINTER_DRAWSTATICTEXT(Q7B self, Q7B Left, Q7B Top, Q7B StaticText); // generated
void Q7B_QPAINTER_DRAWTEXT(Q7B self, Q7B X, Q7B Y, Q7B Text); // generated
void Q7B_QPAINTER_DRAWTILEDPIXMAP(Q7B self, Q7B Rectangle, Q7B Pixmap, Q7B Position); // generated
Q7B Q7B_QPAINTER_END(Q7B self); // generated
void Q7B_QPAINTER_ENDNATIVEPAINTING(Q7B self); // generated
void Q7B_QPAINTER_ERASERECT(Q7B self, Q7B Rectangle); // generated
void Q7B_QPAINTER_FILLPATH(Q7B self, Q7B Path, Q7B Brush); // generated
void Q7B_QPAINTER_FILLRECT(Q7B self, Q7B Rectangle, Q7B Color); // generated
Q7B Q7B_QPAINTER_FONT(Q7B self); // generated
Q7B Q7B_QPAINTER_FONTINFO(Q7B self); // generated
Q7B Q7B_QPAINTER_FONTMETRICS(Q7B self); // generated
Q7B Q7B_QPAINTER_HASCLIPPING(Q7B self); // generated
void Q7B_QPAINTER_INITFROM(Q7B self, Q7B Widget); // generated
Q7B Q7B_QPAINTER_ISACTIVE(Q7B self); // generated
Q7B Q7B_QPAINTER_LAYOUTDIRECTION(Q7B self); // generated
Q7B Q7B_QPAINTER_OPACITY(Q7B self); // generated
Q7B Q7B_QPAINTER_PAINTENGINE(Q7B self); // generated
Q7B Q7B_QPAINTER_PEN(Q7B self); // generated
Q7B Q7B_QPAINTER_RENDERHINTS(Q7B self); // generated
void Q7B_QPAINTER_RESETTRANSFORM(Q7B self); // generated
void Q7B_QPAINTER_RESTORE(Q7B self); // generated
void Q7B_QPAINTER_ROTATE(Q7B self, Q7B Angle); // generated
void Q7B_QPAINTER_SAVE(Q7B self); // generated
void Q7B_QPAINTER_SCALE(Q7B self, Q7B Sx, Q7B a1); // generated
void Q7B_QPAINTER_SETBACKGROUND(Q7B self, Q7B Brush); // generated
void Q7B_QPAINTER_SETBACKGROUNDMODE(Q7B self, Q7B Mode); // generated
void Q7B_QPAINTER_SETBRUSH(Q7B self, Q7B Style); // generated
void Q7B_QPAINTER_SETBRUSHORIGIN(Q7B self, Q7B X, Q7B Y); // generated
void Q7B_QPAINTER_SETCLIPPATH(Q7B self, Q7B Path, Q7B Operation); // generated
void Q7B_QPAINTER_SETCLIPRECT(Q7B self, Q7B Rectangle, Q7B Operation); // generated
void Q7B_QPAINTER_SETCLIPREGION(Q7B self, Q7B Region, Q7B Operation); // generated
void Q7B_QPAINTER_SETCLIPPING(Q7B self, Q7B Enable); // generated
void Q7B_QPAINTER_SETCOMPOSITIONMODE(Q7B self, Q7B Mode); // generated
void Q7B_QPAINTER_SETFONT(Q7B self, Q7B Font); // generated
void Q7B_QPAINTER_SETLAYOUTDIRECTION(Q7B self, Q7B Direction); // generated
void Q7B_QPAINTER_SETOPACITY(Q7B self, Q7B Opacity); // generated
void Q7B_QPAINTER_SETPEN(Q7B self, Q7B Style); // generated
void Q7B_QPAINTER_SETRENDERHINT(Q7B self, Q7B Hint); // generated
void Q7B_QPAINTER_SETRENDERHINTS(Q7B self, Q7B Hints); // generated
void Q7B_QPAINTER_SETTRANSFORM(Q7B self, Q7B Transform, Q7B Combine); // generated
void Q7B_QPAINTER_SETVIEWTRANSFORMENABLED(Q7B self, Q7B Enable); // generated
void Q7B_QPAINTER_SETVIEWPORT(Q7B self, Q7B Rectangle); // generated
void Q7B_QPAINTER_SETWINDOW(Q7B self, Q7B Rectangle); // generated
void Q7B_QPAINTER_SETWORLDMATRIXENABLED(Q7B self, Q7B Enable); // generated
void Q7B_QPAINTER_SETWORLDTRANSFORM(Q7B self, Q7B Matrix, Q7B Combine); // generated
void Q7B_QPAINTER_STROKEPATH(Q7B self, Q7B Path, Q7B Pen); // generated
Q7B Q7B_QPAINTER_TESTRENDERHINT(Q7B self, Q7B Hint); // generated
Q7B Q7B_QPAINTER_TRANSFORM(Q7B self); // generated
void Q7B_QPAINTER_TRANSLATE(Q7B self, Q7B Dx, Q7B Dy); // generated
Q7B Q7B_QPAINTER_VIEWTRANSFORMENABLED(Q7B self); // generated
Q7B Q7B_QPAINTER_VIEWPORT(Q7B self); // generated
Q7B Q7B_QPAINTER_WINDOW(Q7B self); // generated
Q7B Q7B_QPAINTER_WORLDMATRIXENABLED(Q7B self); // generated
Q7B Q7B_QPAINTER_WORLDTRANSFORM(Q7B self); // generated
Q7B Q7B_QREGION_BOUNDINGRECT(Q7B self); // generated
Q7B Q7B_QREGION_CONTAINS(Q7B self, Q7B R); // generated
Q7B Q7B_QREGION_INTERSECTED(Q7B self, Q7B Rect); // generated
Q7B Q7B_QREGION_INTERSECTS(Q7B self, Q7B Rect); // generated
Q7B Q7B_QREGION_ISEMPTY(Q7B self); // generated
Q7B Q7B_QREGION_RECTCOUNT(Q7B self); // generated
Q7B Q7B_QREGION_SUBTRACTED(Q7B self, Q7B R); // generated
void Q7B_QREGION_SWAP(Q7B self, Q7B Other); // generated
void Q7B_QREGION_TRANSLATE(Q7B self, Q7B Point); // generated
Q7B Q7B_QREGION_TRANSLATED(Q7B self, Q7B Point); // generated
Q7B Q7B_QREGION_UNITED(Q7B self, Q7B Rect); // generated
Q7B Q7B_QREGION_XORED(Q7B self, Q7B R); // generated
Q7B Q7B_QSIZE_BOUNDEDTO(Q7B self, Q7B OtherSize); // generated
Q7B Q7B_QSIZE_EXPANDEDTO(Q7B self, Q7B OtherSize); // generated
Q7B Q7B_QSIZE_HEIGHT(Q7B self); // generated
Q7B Q7B_QSIZE_ISEMPTY(Q7B self); // generated
Q7B Q7B_QSIZE_ISNULL(Q7B self); // generated
Q7B Q7B_QSIZE_ISVALID(Q7B self); // generated
Q7B Q7B_QSIZE_RHEIGHT(Q7B self); // generated
Q7B Q7B_QSIZE_RWIDTH(Q7B self); // generated
void Q7B_QSIZE_SCALE(Q7B self, Q7B Size, Q7B Mode); // generated
void Q7B_QSIZE_SETHEIGHT(Q7B self, Q7B Height); // generated
void Q7B_QSIZE_SETWIDTH(Q7B self, Q7B Width); // generated
void Q7B_QSIZE_TRANSPOSE(Q7B self); // generated
Q7B Q7B_QSIZE_WIDTH(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_ANCHOR(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_ATBLOCKEND(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_ATBLOCKSTART(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_ATENT(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_ATSTART(Q7B self); // generated
void Q7B_QTEXTCURSOR_BEGINEDITBLOCK(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_BLOCK(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_BLOCKCHARFORMAT(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_BLOCKFORMAT(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_BLOCKNUMBER(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_CHARFORMAT(Q7B self); // generated
void Q7B_QTEXTCURSOR_CLEARSELECTION(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_COLUMNNUMBER(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_CREATELIST(Q7B self, Q7B Style); // generated
Q7B Q7B_QTEXTCURSOR_CURRENTFRAME(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_CURRENTLIST(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_CURRENTTABLE(Q7B self); // generated
void Q7B_QTEXTCURSOR_DELETECHAR(Q7B self); // generated
void Q7B_QTEXTCURSOR_DELETEPREVIOUSCHAR(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_DOCUMENT(Q7B self); // generated
void Q7B_QTEXTCURSOR_ENDEDITBLOCK(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_HASCOMPLEXSELECTION(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_HASSELECTION(Q7B self); // generated
void Q7B_QTEXTCURSOR_INSERTBLOCK(Q7B self, Q7B Format, Q7B CharFormat); // generated
void Q7B_QTEXTCURSOR_INSERTFRAGMENT(Q7B self, Q7B Fragment); // generated
Q7B Q7B_QTEXTCURSOR_INSERTFRAME(Q7B self, Q7B Format); // generated
void Q7B_QTEXTCURSOR_INSERTHTML(Q7B self, Q7B Html); // generated
void Q7B_QTEXTCURSOR_INSERTIMAGE(Q7B self, Q7B Image, Q7B Name); // generated
Q7B Q7B_QTEXTCURSOR_INSERTLIST(Q7B self, Q7B Style); // generated
Q7B Q7B_QTEXTCURSOR_INSERTTABLE(Q7B self, Q7B Rows, Q7B Columns); // generated
void Q7B_QTEXTCURSOR_INSERTTEXT(Q7B self, Q7B Text, Q7B Format); // generated
Q7B Q7B_QTEXTCURSOR_ISCOPYOF(Q7B self, Q7B Other); // generated
Q7B Q7B_QTEXTCURSOR_ISNULL(Q7B self); // generated
void Q7B_QTEXTCURSOR_JOINPREVIOUSEDITBLOCK(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_KEEPPOSITIONONINSERT(Q7B self); // generated
void Q7B_QTEXTCURSOR_MERGEBLOCKCHARFORMAT(Q7B self, Q7B Modifier); // generated
void Q7B_QTEXTCURSOR_MERGEBLOCKFORMAT(Q7B self, Q7B Modifier); // generated
void Q7B_QTEXTCURSOR_MERGECHARFORMAT(Q7B self, Q7B Modifier); // generated
Q7B Q7B_QTEXTCURSOR_MOVEPOSITION(Q7B self, Q7B Operation, Q7B Move); // generated
Q7B Q7B_QTEXTCURSOR_POSITION(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_POSITIONINBLOCK(Q7B self); // generated
void Q7B_QTEXTCURSOR_REMOVESELECTEDTEXT(Q7B self); // generated
void Q7B_QTEXTCURSOR_SELECT(Q7B self, Q7B Selection); // generated
void Q7B_QTEXTCURSOR_SELECTEDTABLECELLS(Q7B self, Q7B FirstRow, Q7B NumRows, Q7B FirstColumn, Q7B NumColumns); // generated
Q7B Q7B_QTEXTCURSOR_SELECTEDTEXT(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_SELECTION(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_SELECTIONEND(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_SELECTIONSTART(Q7B self); // generated
void Q7B_QTEXTCURSOR_SETBLOCKCHARFORMAT(Q7B self, Q7B Format); // generated
void Q7B_QTEXTCURSOR_SETBLOCKFORMAT(Q7B self, Q7B Format); // generated
void Q7B_QTEXTCURSOR_SETCHARFORMAT(Q7B self, Q7B Format); // generated
void Q7B_QTEXTCURSOR_SETKEEPPOSITIONONINSERT(Q7B self, Q7B B); // generated
void Q7B_QTEXTCURSOR_SETPOSITION(Q7B self, Q7B Pos, Q7B M); // generated
void Q7B_QTEXTCURSOR_SETVERTICALMOVEMENTX(Q7B self, Q7B X); // generated
void Q7B_QTEXTCURSOR_SETVISUALNAVIGATION(Q7B self, Q7B B); // generated
Q7B Q7B_QTEXTCURSOR_VERTICALMOVEMENTX(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_VISUALNAVIGATION(Q7B self); // generated

void Q7B_QMIMEDATA_CLEAR(Q7B self); // generated
Q7B Q7B_QMIMEDATA_COLORDATA(Q7B self); // generated
Q7B Q7B_QMIMEDATA_DATA(Q7B self, Q7B MimeType); // generated
Q7B Q7B_QMIMEDATA_FORMATS(Q7B self); // generated
Q7B Q7B_QMIMEDATA_HASCOLOR(Q7B self); // generated
Q7B Q7B_QMIMEDATA_HASFORMAT(Q7B self, Q7B MimeType); // generated
Q7B Q7B_QMIMEDATA_HASHTML(Q7B self); // generated
Q7B Q7B_QMIMEDATA_HASIMAGE(Q7B self); // generated
Q7B Q7B_QMIMEDATA_HASTEXT(Q7B self); // generated
Q7B Q7B_QMIMEDATA_HASURLS(Q7B self); // generated
Q7B Q7B_QMIMEDATA_IMAGEDATA(Q7B self); // generated
void Q7B_QMIMEDATA_REMOVEFORMAT(Q7B self, Q7B MimeType); // generated
void Q7B_QMIMEDATA_SETCOLORDATA(Q7B self, Q7B Color); // generated
void Q7B_QMIMEDATA_SETDATA(Q7B self, Q7B MimeType, Q7B Data); // generated
void Q7B_QMIMEDATA_SETHTML(Q7B self, Q7B Html); // generated
void Q7B_QMIMEDATA_SETIMAGEDATA(Q7B self, Q7B Image); // generated
void Q7B_QMIMEDATA_SETTEXT(Q7B self, Q7B Text); // generated
void Q7B_QMIMEDATA_SETURLS(Q7B self, Q7B Urls); // generated
Q7B Q7B_QMIMEDATA_TEXT(Q7B self); // generated
Q7B Q7B_QMIMEDATA_URLS(Q7B self); // generated

Q7B Q7B_QOBJECT_ISWIDGETTYPE(Q7B self); // generated
Q7B Q7B_QOBJECT_PARENT(Q7B self); // generated
void Q7B_QOBJECT_KILLTIMER(Q7B self, Q7B theId); // generated
Q7B Q7B_QOBJECT_STARTTIMER(Q7B self, Q7B interval); // generated

Q7B Q7B_QICON_PIXMAP2(Q7B self, Q7B Size, Q7B Mode, Q7B State); // generated
Q7B Q7B_QICON_PIXMAP3(Q7B self, Q7B Extent, Q7B Mode, Q7B State); // generated
Q7B Q7B_QIMAGE_SCALED2(Q7B self, Q7B Width, Q7B Heigth, Q7B AspectRatioMode, Q7B TransformMode); // generated
void Q7B_QIMAGE_SETPIXEL2(Q7B self, Q7B X, Q7B Y, Q7B IndexOrRgb); // generated
Q7B Q7B_QIMAGE_TRANSFORMED2(Q7B self, Q7B Matrix, Q7B Mode); // generated
Q7B Q7B_QIMAGE_VALID2(Q7B self, Q7B X, Q7B Y); // generated
void Q7B_QLISTWIDGET_ADDITEM2(Q7B self, Q7B Item); // generated
void Q7B_QLISTWIDGET_INSERTITEM2(Q7B self, Q7B Row, Q7B theLabel); // generated
Q7B Q7B_QLISTWIDGET_ITEMAT2(Q7B self, Q7B X, Q7B Y); // generated
void Q7B_QLISTWIDGET_SETCURRENTITEM2(Q7B self, Q7B Item, Q7B Command); // generated
void Q7B_QMAINWINDOW_ADDDOCKWIDGET2(Q7B self, Q7B Area, Q7B DockWidget, Q7B Orientation); // generated
void Q7B_QMAINWINDOW_ADDTOOLBAR2(Q7B self, Q7B ToolBar); // generated
void Q7B_QPAINTER_DRAWELLIPSE2(Q7B self, Q7B Center, Q7B Rx, Q7B Ry); // generated
void Q7B_QPAINTER_DRAWIMAGE2(Q7B self, Q7B Point, Q7B Image); // generated
void Q7B_QPAINTER_DRAWLINE2(Q7B self, Q7B P1, Q7B P2); // generated
void Q7B_QPAINTER_DRAWPICTURE2(Q7B self, Q7B Point, Q7B Picture); // generated
void Q7B_QPAINTER_DRAWPIXMAP2(Q7B self, Q7B Target, Q7B Pixmap, Q7B Source); // generated
void Q7B_QPAINTER_DRAWPIXMAP3(Q7B self, Q7B Point, Q7B Pixmap, Q7B Source); // generated
void Q7B_QPAINTER_DRAWPIXMAP4(Q7B self, Q7B Rectangle, Q7B Pixmap); // generated
void Q7B_QPAINTER_DRAWPOINT2(Q7B self, Q7B Position); // generated
void Q7B_QPAINTER_DRAWTEXT2(Q7B self, Q7B Position, Q7B Text); // generated
void Q7B_QPAINTER_DRAWTEXT3(Q7B self, Q7B Rectangle, Q7B Flags, Q7B Text, Q7B BoundingRect); // generated
void Q7B_QPAINTER_FILLRECT2(Q7B self, Q7B Rectangle, Q7B Brush); // generated
void Q7B_QPAINTER_FILLRECT3(Q7B self, Q7B Rectangle, Q7B Color); // generated
void Q7B_QPAINTER_FILLRECT4(Q7B self, Q7B Rectangle, Q7B Color); // generated
void Q7B_QPAINTER_SETBRUSH2(Q7B self, Q7B Style); // generated
void Q7B_QPAINTER_SETBRUSHORIGIN2(Q7B self, Q7B Position); // generated
void Q7B_QPAINTER_SETPEN2(Q7B self, Q7B Color); // generated
void Q7B_QPAINTER_SETPEN3(Q7B self, Q7B Style); // generated
void Q7B_QPAINTER_TRANSLATE2(Q7B self, Q7B Offset); // generated
Q7B Q7B_QPEN_BRUSH(Q7B self); // generated
Q7B Q7B_QPEN_CAPSTYLE(Q7B self); // generated
Q7B Q7B_QPEN_COLOR(Q7B self); // generated
Q7B Q7B_QPEN_DASHOFFSET(Q7B self); // generated
Q7B Q7B_QPEN_ISCOSMETIC(Q7B self); // generated
Q7B Q7B_QPEN_ISSOLID(Q7B self); // generated
Q7B Q7B_QPEN_JOINSTYLE(Q7B self); // generated
Q7B Q7B_QPEN_MITERLIMIT(Q7B self); // generated
void Q7B_QPEN_SETBRUSH(Q7B self, Q7B Brush); // generated
void Q7B_QPEN_SETCAPSTYLE(Q7B self, Q7B Style); // generated
void Q7B_QPEN_SETCOLOR(Q7B self, Q7B Color); // generated
void Q7B_QPEN_SETCOSMETIC(Q7B self, Q7B Cosmetic); // generated
void Q7B_QPEN_SETDASHOFFSET(Q7B self, Q7B Offset); // generated
void Q7B_QPEN_SETJOINSTYLE(Q7B self, Q7B Style); // generated
void Q7B_QPEN_SETMITERLIMIT(Q7B self, Q7B Limit); // generated
void Q7B_QPEN_SETSTYLE(Q7B self, Q7B Style); // generated
void Q7B_QPEN_SETWIDTH(Q7B self, Q7B Width); // generated
void Q7B_QPEN_SETWIDTHF(Q7B self, Q7B Width); // generated
Q7B Q7B_QPEN_STYLE(Q7B self); // generated
void Q7B_QPEN_SWAP(Q7B self, Q7B Other); // generated
Q7B Q7B_QPEN_WIDTH(Q7B self); // generated
Q7B Q7B_QPEN_WIDTHF(Q7B self); // generated
void Q7B_QPIXMAP_SCROLL2(Q7B self, Q7B Dx, Q7B Dy, Q7B Rect, Q7B Exposed); // generated
Q7B Q7B_QPIXMAP_TRANSFORMED2(Q7B self, Q7B Matrix, Q7B Mode); // generated
void Q7B_QSIGNALMAPPER_MAP2(Q7B self, Q7B Sender); // generated
Q7B Q7B_QSIGNALMAPPER_MAPPING2(Q7B self, Q7B theId); // generated
Q7B Q7B_QSIGNALMAPPER_MAPPING3(Q7B self, Q7B theObject); // generated
void Q7B_QSIGNALMAPPER_SETMAPPING2(Q7B self, Q7B Sender, Q7B Text); // generated
void Q7B_QSIGNALMAPPER_SETMAPPING3(Q7B self, Q7B Sender, Q7B Widget); // generated
void Q7B_QSIGNALMAPPER_SETMAPPING4(Q7B self, Q7B Sender, Q7B theObject); // generated
void Q7B_QSIZE_SCALE2(Q7B self, Q7B Size, Q7B Mode); // generated
Q7B Q7B_QSYNTAXHIGHLIGHTER_CURRENTBLOCKSTATE(Q7B self); // generated
void Q7B_QSYNTAXHIGHLIGHTER_CURRENTBLOCKSTATE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QSYNTAXHIGHLIGHTER_PREVIOUSBLOCKSTATE(Q7B self); // generated
void Q7B_QSYNTAXHIGHLIGHTER_SETFORMAT(Q7B self, Q7B start, Q7B count, Q7B color); // generated
void Q7B_QSYNTAXHIGHLIGHTER_SETFORMAT2(Q7B self, Q7B start, Q7B count, Q7B font); // generated
void Q7B_QSYNTAXHIGHLIGHTER_SETFORMAT3(Q7B self, Q7B start, Q7B count, Q7B format); // generated

void Q7B_QCLIPBOARD_CLEAR(Q7B self, Q7B Mode); // generated
Q7B Q7B_QCLIPBOARD_IMAGE(Q7B self, Q7B Mode); // generated
Q7B Q7B_QCLIPBOARD_MIMEDATA(Q7B self, Q7B Mode); // generated
Q7B Q7B_QCLIPBOARD_OWNSCLIPBOARD(Q7B self); // generated
Q7B Q7B_QCLIPBOARD_OWNSFINDBUFFER(Q7B self); // generated
Q7B Q7B_QCLIPBOARD_OWNSSELECTION(Q7B self); // generated
Q7B Q7B_QCLIPBOARD_PIXMAP(Q7B self, Q7B Mode); // generated
void Q7B_QCLIPBOARD_SETIMAGE(Q7B self, Q7B Image, Q7B Mode); // generated
void Q7B_QCLIPBOARD_SETMIMEDATA(Q7B self, Q7B Src, Q7B Mode); // generated
void Q7B_QCLIPBOARD_SETPIXMAP(Q7B self, Q7B Pixmap, Q7B a1); // generated
void Q7B_QCLIPBOARD_SETTEXT(Q7B self, Q7B Text, Q7B a1); // generated
Q7B Q7B_QCLIPBOARD_SUPPORTSFINDBUFFER(Q7B self); // generated
Q7B Q7B_QCLIPBOARD_TEXT(Q7B self, Q7B Mode); // generated
Q7B Q7B_QCLIPBOARD_TEXT2(Q7B self, Q7B SubType, Q7B Mode); // generated
Q7B Q7B_QDRAG_EXEC(Q7B self, Q7B SupportedActions); // generated
Q7B Q7B_QDRAG_EXEC2(Q7B self, Q7B SupportedActions, Q7B DefaultDropAction); // generated
Q7B Q7B_QDRAG_HOTSPOT(Q7B self); // generated
Q7B Q7B_QDRAG_MIMEDATA(Q7B self); // generated
Q7B Q7B_QDRAG_PIXMAP(Q7B self); // generated
void Q7B_QDRAG_SETDRAGCURSOR(Q7B self, Q7B Cursor, Q7B Action); // generated
void Q7B_QDRAG_SETHOTSPOT(Q7B self, Q7B Hotspot); // generated
void Q7B_QDRAG_SETMIMEDATA(Q7B self, Q7B Data); // generated
void Q7B_QDRAG_SETPIXMAP(Q7B self, Q7B Pixmap); // generated
Q7B Q7B_QDRAG_SOURCE(Q7B self); // generated
Q7B Q7B_QDRAG_TARGET(Q7B self); // generated
Q7B Q7B_QFONTDATABASE_BOLD(Q7B self, Q7B Family, Q7B Style); // generated
Q7B Q7B_QFONTDATABASE_FAMILIES(Q7B self, Q7B WritingSystem); // generated
Q7B Q7B_QFONTDATABASE_FONT(Q7B self, Q7B Family, Q7B Style, Q7B PointSize); // generated
Q7B Q7B_QFONTDATABASE_ISBITMAPSCALABLE(Q7B self, Q7B Family, Q7B Style); // generated
Q7B Q7B_QFONTDATABASE_ISFIXEDPITCH(Q7B self, Q7B Family, Q7B Style); // generated
Q7B Q7B_QFONTDATABASE_ISSCALABLE(Q7B self, Q7B Family, Q7B Style); // generated
Q7B Q7B_QFONTDATABASE_ISSMOOTHLYSCALABLE(Q7B self, Q7B Family, Q7B Style); // generated
Q7B Q7B_QFONTDATABASE_ITALIC(Q7B self, Q7B Family, Q7B Style); // generated
Q7B Q7B_QFONTDATABASE_POINTSIZES(Q7B self, Q7B Family, Q7B Style); // generated
Q7B Q7B_QFONTDATABASE_SMOOTHSIZES(Q7B self, Q7B Family, Q7B Style); // generated
Q7B Q7B_QFONTDATABASE_STYLESTRING(Q7B self, Q7B Font); // generated
Q7B Q7B_QFONTDATABASE_STYLESTRING2(Q7B self, Q7B FontInfo); // generated
Q7B Q7B_QFONTDATABASE_STYLES(Q7B self, Q7B Family); // generated
Q7B Q7B_QFONTDATABASE_WEIGHT(Q7B self, Q7B Family, Q7B Style); // generated
Q7B Q7B_QFONTDATABASE_WRITINGSYSTEMS(Q7B self); // generated
Q7B Q7B_QFONTDATABASE_WRITINGSYSTEMS2(Q7B self, Q7B Family); // generated
Q7B Q7B_QFONTMETRICS_WIDTH2(Q7B self, Q7B Ch); // generated
void Q7B_QFTP_ABORT(Q7B self); // generated
Q7B Q7B_QFTP_BYTESAVAILABLE(Q7B self); // generated
Q7B Q7B_QFTP_CD(Q7B self, Q7B Dir); // generated
void Q7B_QFTP_CLEARPENDINGCOMMANDS(Q7B self); // generated
Q7B Q7B_QFTP_CLOSE(Q7B self); // generated
Q7B Q7B_QFTP_CONNECTTOHOST(Q7B self, Q7B Host, Q7B Port); // generated
Q7B Q7B_QFTP_CURRENTCOMMAND(Q7B self); // generated
Q7B Q7B_QFTP_CURRENTDEVICE(Q7B self); // generated
Q7B Q7B_QFTP_CURRENTID(Q7B self); // generated
Q7B Q7B_QFTP_ERROR(Q7B self); // generated
Q7B Q7B_QFTP_ERRORSTRING(Q7B self); // generated
Q7B Q7B_QFTP_GET(Q7B self, Q7B File, Q7B Dev, Q7B Type); // generated
Q7B Q7B_QFTP_HASPENDINGCOMMANDS(Q7B self); // generated
Q7B Q7B_QFTP_LIST(Q7B self, Q7B Dir); // generated
Q7B Q7B_QFTP_LOGIN(Q7B self, Q7B User, Q7B Password); // generated
Q7B Q7B_QFTP_MKDIR(Q7B self, Q7B Dir); // generated
Q7B Q7B_QFTP_PUT(Q7B self, Q7B Data, Q7B File, Q7B Type); // generated
Q7B Q7B_QFTP_RAWCOMMAND(Q7B self, Q7B Command); // generated
Q7B Q7B_QFTP_READ(Q7B self, Q7B Data, Q7B MaxLen); // generated
Q7B Q7B_QFTP_READALL(Q7B self); // generated
Q7B Q7B_QFTP_REMOVE(Q7B self, Q7B File); // generated
Q7B Q7B_QFTP_RENAME(Q7B self, Q7B OldName, Q7B NewName); // generated
Q7B Q7B_QFTP_RMDIR(Q7B self, Q7B Dir); // generated
Q7B Q7B_QFTP_SETPROXY(Q7B self, Q7B Host, Q7B Port); // generated
Q7B Q7B_QFTP_SETTRANSFERMODE(Q7B self, Q7B Mode); // generated
Q7B Q7B_QFTP_STATE(Q7B self); // generated
void Q7B_QHOSTADDRESS_CLEAR(Q7B self); // generated
Q7B Q7B_QHOSTADDRESS_ISINSUBNET(Q7B self, Q7B SubNet, Q7B NetMask); // generated
Q7B Q7B_QHOSTADDRESS_ISNULL(Q7B self); // generated
Q7B Q7B_QHOSTADDRESS_PROTOCOL(Q7B self); // generated
Q7B Q7B_QHOSTADDRESS_SCOPEID(Q7B self); // generated
void Q7B_QHOSTADDRESS_SETADDRESS(Q7B self, Q7B Address); // generated
void Q7B_QHOSTADDRESS_SETSCOPEID(Q7B self, Q7B Id); // generated
Q7B Q7B_QHOSTADDRESS_TOSTRING(Q7B self); // generated
Q7B Q7B_QLINE_DX(Q7B self); // generated
Q7B Q7B_QLINE_DY(Q7B self); // generated
Q7B Q7B_QLINE_ISNULL(Q7B self); // generated
Q7B Q7B_QLINE_P1(Q7B self); // generated
Q7B Q7B_QLINE_P2(Q7B self); // generated
void Q7B_QLINE_SETLINE(Q7B self, Q7B X1, Q7B Y1, Q7B X2, Q7B Y2); // generated
void Q7B_QLINE_SETP1(Q7B self, Q7B P1); // generated
void Q7B_QLINE_SETP2(Q7B self, Q7B P2); // generated
void Q7B_QLINE_SETPOINTS(Q7B self, Q7B P1, Q7B P2); // generated
void Q7B_QLINE_TRANSLATE(Q7B self, Q7B Dx, Q7B Dy); // generated
void Q7B_QLINE_TRANSLATE2(Q7B self, Q7B Offset); // generated
Q7B Q7B_QLINE_TRANSLATED(Q7B self, Q7B Dx, Q7B Dy); // generated
Q7B Q7B_QLINE_TRANSLATED2(Q7B self, Q7B Offset); // generated
Q7B Q7B_QLINE_X1(Q7B self); // generated
Q7B Q7B_QLINE_X2(Q7B self); // generated
Q7B Q7B_QLINE_Y1(Q7B self); // generated
Q7B Q7B_QLINE_Y2(Q7B self); // generated
void Q7B_QLOCALSERVER_CLOSE(Q7B self); // generated
Q7B Q7B_QLOCALSERVER_ERRORSTRING(Q7B self); // generated
Q7B Q7B_QLOCALSERVER_FULLSERVERNAME(Q7B self); // generated
Q7B Q7B_QLOCALSERVER_HASPENDINGCONNECTIONS(Q7B self); // generated
Q7B Q7B_QLOCALSERVER_ISLISTENING(Q7B self); // generated
Q7B Q7B_QLOCALSERVER_LISTEN(Q7B self, Q7B Name); // generated
Q7B Q7B_QLOCALSERVER_MAXPENDINGCONNECTIONS(Q7B self); // generated
Q7B Q7B_QLOCALSERVER_NEXTPENDINGCONNECTION(Q7B self); // generated
Q7B Q7B_QLOCALSERVER_SERVERERROR(Q7B self); // generated
Q7B Q7B_QLOCALSERVER_SERVERNAME(Q7B self); // generated
void Q7B_QLOCALSERVER_SETMAXPENDINGCONNECTIONS(Q7B self, Q7B NumConnections); // generated
Q7B Q7B_QLOCALSERVER_WAITFORNEWCONNECTION(Q7B self, Q7B MSec, Q7B TimedOut); // generated
void Q7B_QLOCALSOCKET_ABORT(Q7B self); // generated
void Q7B_QLOCALSOCKET_CONNECTTOSERVER(Q7B self, Q7B Name, Q7B OpenMode); // generated
void Q7B_QLOCALSOCKET_DISCONNECTFROMSERVER(Q7B self); // generated
Q7B Q7B_QLOCALSOCKET_FLUSH(Q7B self); // generated
Q7B Q7B_QLOCALSOCKET_FULLSERVERNAME(Q7B self); // generated
Q7B Q7B_QLOCALSOCKET_ISVALID(Q7B self); // generated
Q7B Q7B_QLOCALSOCKET_READBUFFERSIZE(Q7B self); // generated
Q7B Q7B_QLOCALSOCKET_SERVERNAME(Q7B self); // generated
void Q7B_QLOCALSOCKET_SETREADBUFFERSIZE(Q7B self, Q7B Size); // generated
Q7B Q7B_QLOCALSOCKET_SETSOCKETDESCRIPTOR(Q7B self, Q7B SocketDescriptor, Q7B SocketState, Q7B OpenMode); // generated
Q7B Q7B_QLOCALSOCKET_SOCKETDESCRIPTOR(Q7B self); // generated
Q7B Q7B_QLOCALSOCKET_STATE(Q7B self); // generated
Q7B Q7B_QLOCALSOCKET_WAITFORCONNECTED(Q7B self, Q7B MSecs); // generated
Q7B Q7B_QLOCALSOCKET_WAITFORDISCONNECTED(Q7B self, Q7B MSecs); // generated
void Q7B_QNETWORKSESSION_ACCEPT(Q7B self); // generated
Q7B Q7B_QNETWORKSESSION_ACTIVETIME(Q7B self); // generated
Q7B Q7B_QNETWORKSESSION_BYTESRECEIVED(Q7B self); // generated
Q7B Q7B_QNETWORKSESSION_BYTESWRITTEN(Q7B self); // generated
void Q7B_QNETWORKSESSION_CLOSE(Q7B self); // generated
Q7B Q7B_QNETWORKSESSION_CONFIGURATION(Q7B self); // generated
Q7B Q7B_QNETWORKSESSION_ERRORSTRING(Q7B self); // generated
void Q7B_QNETWORKSESSION_IGNORE(Q7B self); // generated
Q7B Q7B_QNETWORKSESSION_INTERFACE(Q7B self); // generated
Q7B Q7B_QNETWORKSESSION_ISOPEN(Q7B self); // generated
void Q7B_QNETWORKSESSION_MIGRATE(Q7B self); // generated
void Q7B_QNETWORKSESSION_OPEN(Q7B self); // generated
void Q7B_QNETWORKSESSION_REJECT(Q7B self); // generated
Q7B Q7B_QNETWORKSESSION_SESSIONPROPERTY(Q7B self, Q7B Key); // generated
void Q7B_QNETWORKSESSION_SETSESSIONPROPERTY(Q7B self, Q7B Key, Q7B Value); // generated
Q7B Q7B_QNETWORKSESSION_STATE(Q7B self); // generated
void Q7B_QNETWORKSESSION_STOP(Q7B self); // generated
Q7B Q7B_QNETWORKSESSION_WAITFOROPENED(Q7B self, Q7B MSecs); // generated
Q7B Q7B_QREGEXPVALIDATOR_REGEXP(Q7B self); // generated
void Q7B_QREGEXPVALIDATOR_SETREGEXP(Q7B self, Q7B Rx); // generated
Q7B Q7B_QREGION_INTERSECTED2(Q7B self, Q7B Rect); // generated
Q7B Q7B_QREGION_INTERSECTS2(Q7B self, Q7B Rect); // generated
void Q7B_QREGION_TRANSLATE2(Q7B self, Q7B Point); // generated
Q7B Q7B_QREGION_TRANSLATED2(Q7B self, Q7B Point); // generated
Q7B Q7B_QREGION_UNITED2(Q7B self, Q7B Rect); // generated
Q7B Q7B_QRESOURCE_FILENAME(Q7B self); // generated
Q7B Q7B_QRESOURCE_ISCOMPRESSED(Q7B self); // generated
Q7B Q7B_QRESOURCE_ISVALID(Q7B self); // generated
Q7B Q7B_QRESOURCE_LOCALE(Q7B self); // generated
void Q7B_QRESOURCE_SETFILENAME(Q7B self, Q7B File); // generated
void Q7B_QRESOURCE_SETLOCALE(Q7B self, Q7B Locale); // generated
Q7B Q7B_QRESOURCE_SIZE(Q7B self); // generated
void Q7B_QRUBBERBAND_MOVE(Q7B self, Q7B X, Q7B Y); // generated
void Q7B_QRUBBERBAND_MOVE2(Q7B self, Q7B P); // generated
void Q7B_QRUBBERBAND_RESIZE(Q7B self, Q7B Width, Q7B Height); // generated
void Q7B_QRUBBERBAND_RESIZE2(Q7B self, Q7B Size); // generated
void Q7B_QRUBBERBAND_SETGEOMETRY(Q7B self, Q7B X, Q7B Y, Q7B Width, Q7B Height); // generated
Q7B Q7B_QRUBBERBAND_SHAPE(Q7B self); // generated
Q7B Q7B_QSESSIONMANAGER_ALLOWSERRORINTERACTION(Q7B self); // generated
Q7B Q7B_QSESSIONMANAGER_ALLOWSINTERACTION(Q7B self); // generated
void Q7B_QSESSIONMANAGER_CANCEL(Q7B self); // generated
Q7B Q7B_QSESSIONMANAGER_DISCARDCOMMAND(Q7B self); // generated
Q7B Q7B_QSESSIONMANAGER_ISPHASE2(Q7B self); // generated
void Q7B_QSESSIONMANAGER_RELEASE(Q7B self); // generated
void Q7B_QSESSIONMANAGER_REQUESTPHASE2(Q7B self); // generated
Q7B Q7B_QSESSIONMANAGER_RESTARTCOMMAND(Q7B self); // generated
Q7B Q7B_QSESSIONMANAGER_RESTARTHINT(Q7B self); // generated
Q7B Q7B_QSESSIONMANAGER_SESSIONID(Q7B self); // generated
Q7B Q7B_QSESSIONMANAGER_SESSIONKEY(Q7B self); // generated
void Q7B_QSESSIONMANAGER_SETDISCARDCOMMAND(Q7B self, Q7B List); // generated
void Q7B_QSESSIONMANAGER_SETMANAGERPROPERTY(Q7B self, Q7B Name, Q7B Value); // generated
void Q7B_QSESSIONMANAGER_SETRESTARTCOMMAND(Q7B self, Q7B Command); // generated
void Q7B_QSESSIONMANAGER_SETRESTARTHINT(Q7B self, Q7B Hint); // generated
void Q7B_QSIZEGRIP_SETVISIBLE(Q7B self, Q7B Visible); // generated
Q7B Q7B_QSIZEGRIP_SIZEHINT(Q7B self); // generated
Q7B Q7B_QSIZEPOLICY_CONTROLTYPE(Q7B self); // generated
Q7B Q7B_QSIZEPOLICY_EXPANDINGDIRECTIONS(Q7B self); // generated
Q7B Q7B_QSIZEPOLICY_HASHEIGHTFORWIDTH(Q7B self); // generated
Q7B Q7B_QSIZEPOLICY_HASWIDTHFORHEIGHT(Q7B self); // generated
Q7B Q7B_QSIZEPOLICY_HORIZONTALPOLICY(Q7B self); // generated
Q7B Q7B_QSIZEPOLICY_HORIZONTALSTRETCH(Q7B self); // generated
void Q7B_QSIZEPOLICY_SETCONTROLTYPE(Q7B self, Q7B Type); // generated
void Q7B_QSIZEPOLICY_SETHEIGHTFORWIDTH(Q7B self, Q7B Dependent); // generated
void Q7B_QSIZEPOLICY_SETHORIZONTALPOLICY(Q7B self, Q7B Policy); // generated
void Q7B_QSIZEPOLICY_SETHORIZONTALSTRETCH(Q7B self, Q7B StretchFactor); // generated
void Q7B_QSIZEPOLICY_SETVERTICALPOLICY(Q7B self, Q7B Policy); // generated
void Q7B_QSIZEPOLICY_SETVERTICALSTRETCH(Q7B self, Q7B StretchFactor); // generated
void Q7B_QSIZEPOLICY_SETWIDTHFORHEIGHT(Q7B self, Q7B Dependent); // generated
void Q7B_QSIZEPOLICY_TRANSPOSE(Q7B self); // generated
Q7B Q7B_QSIZEPOLICY_VERTICALPOLICY(Q7B self); // generated
Q7B Q7B_QSIZEPOLICY_VERTICALSTRETCH(Q7B self); // generated
Q7B Q7B_QSOUND_FILENAME(Q7B self); // generated
Q7B Q7B_QSOUND_ISFINISHED(Q7B self); // generated
Q7B Q7B_QSOUND_LOOPS(Q7B self); // generated
Q7B Q7B_QSOUND_LOOPSREMAINING(Q7B self); // generated
void Q7B_QSOUND_PLAY(Q7B self); // generated
void Q7B_QSOUND_SETLOOPS(Q7B self, Q7B Number); // generated
void Q7B_QSOUND_STOP(Q7B self); // generated
Q7B Q7B_QSTACKEDLAYOUT_ADDWIDGET(Q7B self, Q7B Widget); // generated
Q7B Q7B_QSTACKEDLAYOUT_COUNT(Q7B self); // generated
void Q7B_QSTACKEDLAYOUT_COUNT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QSTACKEDLAYOUT_CURRENTINDEX(Q7B self); // generated
Q7B Q7B_QSTACKEDLAYOUT_CURRENTWIDGET(Q7B self); // generated
Q7B Q7B_QSTACKEDLAYOUT_INSERTWIDGET(Q7B self, Q7B Index, Q7B Widget); // generated
void Q7B_QSTACKEDLAYOUT_SETSTACKINGMODE(Q7B self, Q7B StackingMode); // generated
Q7B Q7B_QSTACKEDLAYOUT_STACKINGMODE(Q7B self); // generated
Q7B Q7B_QSTACKEDLAYOUT_WIDGET(Q7B self, Q7B Index); // generated
Q7B Q7B_QSYSTEMLOCALE_FALLBACKLOCALE(Q7B self); // generated
Q7B Q7B_QSYSTEMLOCALE_QUERY(Q7B self, Q7B Type, Q7B in); // generated
Q7B Q7B_QTEXTCURSOR_ATEND(Q7B self); // generated
Q7B Q7B_QTEXTCURSOR_CREATELIST2(Q7B self, Q7B Style); // generated
void Q7B_QTEXTCURSOR_INSERTBLOCK2(Q7B self, Q7B Format); // generated
void Q7B_QTEXTCURSOR_INSERTBLOCK3(Q7B self, Q7B Format, Q7B CharFormat); // generated
void Q7B_QTEXTCURSOR_INSERTIMAGE2(Q7B self, Q7B Image, Q7B Name); // generated
Q7B Q7B_QTEXTCURSOR_INSERTLIST2(Q7B self, Q7B Style); // generated
Q7B Q7B_QTEXTCURSOR_INSERTTABLE2(Q7B self, Q7B Rows, Q7B Columns); // generated
void Q7B_QTEXTCURSOR_INSERTTEXT2(Q7B self, Q7B Text, Q7B Format); // generated
Q7B Q7B_QTIMELINE_CURRENTFRAME(Q7B self); // generated
Q7B Q7B_QTIMELINE_CURRENTTIME(Q7B self); // generated
Q7B Q7B_QTIMELINE_CURRENTVALUE(Q7B self); // generated
Q7B Q7B_QTIMELINE_CURVESHAPE(Q7B self); // generated
Q7B Q7B_QTIMELINE_DIRECTION(Q7B self); // generated
Q7B Q7B_QTIMELINE_DURATION(Q7B self); // generated
Q7B Q7B_QTIMELINE_ENDFRAME(Q7B self); // generated
Q7B Q7B_QTIMELINE_FRAMEFORTIME(Q7B self, Q7B Msec); // generated
Q7B Q7B_QTIMELINE_LOOPCOUNT(Q7B self); // generated
void Q7B_QTIMELINE_SETCURVESHAPE(Q7B self, Q7B Shape); // generated
void Q7B_QTIMELINE_SETDIRECTION(Q7B self, Q7B Direction); // generated
void Q7B_QTIMELINE_SETDURATION(Q7B self, Q7B Duration); // generated
void Q7B_QTIMELINE_SETENDFRAME(Q7B self, Q7B Frame); // generated
void Q7B_QTIMELINE_SETFRAMERANGE(Q7B self, Q7B StartFrame, Q7B EndFrame); // generated
void Q7B_QTIMELINE_SETLOOPCOUNT(Q7B self, Q7B Count); // generated
void Q7B_QTIMELINE_SETSTARTFRAME(Q7B self, Q7B Frame); // generated
void Q7B_QTIMELINE_SETUPDATEINTERVAL(Q7B self, Q7B Interval); // generated
Q7B Q7B_QTIMELINE_STARTFRAME(Q7B self); // generated
Q7B Q7B_QTIMELINE_STATE(Q7B self); // generated
Q7B Q7B_QTIMELINE_UPDATEINTERVAL(Q7B self); // generated
Q7B Q7B_QTIMELINE_VALUEFORTIME(Q7B self, Q7B Msec); // generated

Q7B Q7B_QACCESSIBLEEVENT_CHILD(Q7B self); // generated
void Q7B_QACCESSIBLEEVENT_SETVALUE(Q7B self, Q7B Text); // generated
Q7B Q7B_QACCESSIBLEEVENT_VALUE(Q7B self); // generated
Q7B Q7B_QACTIONEVENT_ACTION(Q7B self); // generated
Q7B Q7B_QACTIONEVENT_BEFORE(Q7B self); // generated
Q7B Q7B_QBYTEARRAY_APPEND(Q7B self, Q7B Ba); // generated
Q7B Q7B_QBYTEARRAY_APPEND2(Q7B self, Q7B Str); // generated
Q7B Q7B_QBYTEARRAY_AT(Q7B self, Q7B I); // generated
Q7B Q7B_QBYTEARRAY_CAPACITY(Q7B self); // generated
void Q7B_QBYTEARRAY_CHOP(Q7B self, Q7B N); // generated
void Q7B_QBYTEARRAY_CLEAR(Q7B self); // generated
Q7B Q7B_QBYTEARRAY_CONTAINS(Q7B self, Q7B Ba); // generated
Q7B Q7B_QBYTEARRAY_CONTAINS2(Q7B self, Q7B Str); // generated
Q7B Q7B_QBYTEARRAY_COUNT(Q7B self, Q7B Ba); // generated
Q7B Q7B_QBYTEARRAY_COUNT2(Q7B self, Q7B Str); // generated
Q7B Q7B_QBYTEARRAY_COUNT3(Q7B self); // generated
Q7B Q7B_QBYTEARRAY_DATA(Q7B self); // generated
Q7B Q7B_QBYTEARRAY_ENDSWITH(Q7B self, Q7B Ba); // generated
Q7B Q7B_QBYTEARRAY_ENDSWITH2(Q7B self, Q7B Str); // generated
Q7B Q7B_QBYTEARRAY_FILL(Q7B self, Q7B Ch, Q7B Size); // generated
Q7B Q7B_QBYTEARRAY_INDEXOF(Q7B self, Q7B Str, Q7B From); // generated
Q7B Q7B_QBYTEARRAY_INSERT(Q7B self, Q7B I, Q7B Ba); // generated
Q7B Q7B_QBYTEARRAY_INSERT2(Q7B self, Q7B I, Q7B Str); // generated
Q7B Q7B_QBYTEARRAY_ISEMPTY(Q7B self); // generated
Q7B Q7B_QBYTEARRAY_ISNULL(Q7B self); // generated
Q7B Q7B_QBYTEARRAY_LASTINDEXOF(Q7B self, Q7B Ba, Q7B From); // generated
Q7B Q7B_QBYTEARRAY_LASTINDEXOF2(Q7B self, Q7B Str, Q7B From); // generated
Q7B Q7B_QBYTEARRAY_LEFT(Q7B self, Q7B Len); // generated
Q7B Q7B_QBYTEARRAY_LEFTJUSTIFIED(Q7B self, Q7B Width, Q7B Fill, Q7B Truncate); // generated
Q7B Q7B_QBYTEARRAY_LENGTH(Q7B self); // generated
Q7B Q7B_QBYTEARRAY_MID(Q7B self, Q7B Pos, Q7B Len); // generated
Q7B Q7B_QBYTEARRAY_PREPEND(Q7B self, Q7B Ba); // generated
Q7B Q7B_QBYTEARRAY_PREPEND2(Q7B self, Q7B Str); // generated
void Q7B_QBYTEARRAY_PUSH_BACK(Q7B self, Q7B Other); // generated
void Q7B_QBYTEARRAY_PUSH_BACK2(Q7B self, Q7B Str); // generated
void Q7B_QBYTEARRAY_PUSH_FRONT(Q7B self, Q7B Other); // generated
void Q7B_QBYTEARRAY_PUSH_FRONT2(Q7B self, Q7B Str); // generated
Q7B Q7B_QBYTEARRAY_REPLACE(Q7B self, Q7B Pos, Q7B Len, Q7B After); // generated
Q7B Q7B_QBYTEARRAY_REPLACE2(Q7B self, Q7B Pos, Q7B Len, Q7B a2, Q7B After, Q7B Alen); // generated
Q7B Q7B_QBYTEARRAY_REPLACE3(Q7B self, Q7B Before, Q7B After); // generated
void Q7B_QBYTEARRAY_RESERVE(Q7B self, Q7B Size); // generated
void Q7B_QBYTEARRAY_RESIZE(Q7B self, Q7B Size); // generated
Q7B Q7B_QBYTEARRAY_RIGHT(Q7B self, Q7B Len); // generated
Q7B Q7B_QBYTEARRAY_RIGHTJUSTIFIED(Q7B self, Q7B Width, Q7B Fill, Q7B Truncate); // generated
Q7B Q7B_QBYTEARRAY_SETNUM(Q7B self, Q7B N, Q7B Base); // generated
Q7B Q7B_QBYTEARRAY_SETNUM2(Q7B self, Q7B N, Q7B Base); // generated
Q7B Q7B_QBYTEARRAY_SIMPLIFIED(Q7B self); // generated
Q7B Q7B_QBYTEARRAY_SIZE(Q7B self); // generated
Q7B Q7B_QBYTEARRAY_SPLIT(Q7B self, Q7B Sep); // generated
void Q7B_QBYTEARRAY_SQUEEZE(Q7B self); // generated
Q7B Q7B_QBYTEARRAY_STARTSWITH(Q7B self, Q7B Ba); // generated
Q7B Q7B_QBYTEARRAY_STARTSWITH2(Q7B self, Q7B Str); // generated
void Q7B_QBYTEARRAY_SWAP(Q7B self, Q7B Other); // generated
Q7B Q7B_QBYTEARRAY_TOBASE64(Q7B self); // generated
Q7B Q7B_QBYTEARRAY_TOFLOAT(Q7B self, Q7B Ok); // generated
Q7B Q7B_QBYTEARRAY_TOHEX(Q7B self); // generated
Q7B Q7B_QBYTEARRAY_TOINT(Q7B self, Q7B Ok, Q7B Base); // generated
Q7B Q7B_QBYTEARRAY_TOLOWER(Q7B self); // generated
Q7B Q7B_QBYTEARRAY_TOPERCENTENCODING(Q7B self, Q7B Exclude, Q7B Include, Q7B Percent); // generated
Q7B Q7B_QBYTEARRAY_TOUPPER(Q7B self); // generated
Q7B Q7B_QBYTEARRAY_TRIMMED(Q7B self); // generated
void Q7B_QBYTEARRAY_TRUNCATE(Q7B self, Q7B Pos); // generated
Q7B Q7B_QCHILDEVENT_ADDED(Q7B self); // generated
Q7B Q7B_QCHILDEVENT_CHILD(Q7B self); // generated
Q7B Q7B_QCHILDEVENT_POLISHED(Q7B self); // generated
Q7B Q7B_QCHILDEVENT_REMOVED(Q7B self); // generated
Q7B Q7B_QDECLARATIVECONTEXT_BASEURL(Q7B self); // generated
Q7B Q7B_QDECLARATIVECONTEXT_CONTEXTOBJECT(Q7B self); // generated
Q7B Q7B_QDECLARATIVECONTEXT_CONTEXTPROPERTY(Q7B self, Q7B Name); // generated
Q7B Q7B_QDECLARATIVECONTEXT_ISVALID(Q7B self); // generated
Q7B Q7B_QDECLARATIVECONTEXT_PARENTCONTEXT(Q7B self); // generated
Q7B Q7B_QDECLARATIVECONTEXT_RESOLVEDURL(Q7B self, Q7B Src); // generated
Q7B Q7B_QDECLARATIVEVIEW_INITIALSIZE(Q7B self); // generated
Q7B Q7B_QDECLARATIVEVIEW_RESIZEMODE(Q7B self); // generated
Q7B Q7B_QDECLARATIVEVIEW_ROOTCONTEXT(Q7B self); // generated
Q7B Q7B_QDECLARATIVEVIEW_ROOTOBJECT(Q7B self); // generated
void Q7B_QDECLARATIVEVIEW_SETRESIZEMODE(Q7B self, Q7B Mode); // generated
void Q7B_QDECLARATIVEVIEW_SETSOURCE(Q7B self, Q7B Url); // generated
Q7B Q7B_QDECLARATIVEVIEW_SOURCE(Q7B self); // generated
Q7B Q7B_QDECLARATIVEVIEW_STATUS(Q7B self); // generated
void Q7B_QDROPEVENT_ACCEPTPROPOSEDACTION(Q7B self); // generated
Q7B Q7B_QDROPEVENT_DROPACTION(Q7B self); // generated
Q7B Q7B_QDROPEVENT_KEYBOARDMODIFIERS(Q7B self); // generated
Q7B Q7B_QDROPEVENT_MIMEDATA(Q7B self); // generated
Q7B Q7B_QDROPEVENT_MOUSEBUTTONS(Q7B self); // generated
Q7B Q7B_QDROPEVENT_POS(Q7B self); // generated
Q7B Q7B_QDROPEVENT_POSSIBLEACTIONS(Q7B self); // generated
Q7B Q7B_QDROPEVENT_PROPOSEDACTION(Q7B self); // generated
void Q7B_QDROPEVENT_SETDROPACTION(Q7B self, Q7B Action); // generated
Q7B Q7B_QDROPEVENT_SOURCE(Q7B self); // generated
Q7B Q7B_QDYNAMICPROPERTYCHANGEEVENT_PROPERTYNAME(Q7B self); // generated
void Q7B_QEVENT_ACCEPT(Q7B self); // generated
Q7B Q7B_QEVENT_ACCEPTED(Q7B self); // generated
void Q7B_QEVENT_ACCEPTED(Q7B self, Q7B theProperty); // generated
void Q7B_QEVENT_IGNORE(Q7B self); // generated
Q7B Q7B_QEVENT_ISACCEPTED(Q7B self); // generated
void Q7B_QEVENT_SETACCEPTED(Q7B self, Q7B Accepted); // generated
Q7B Q7B_QEVENT_SPONTANEOUS(Q7B self); // generated
Q7B Q7B_QEVENT_TYPE(Q7B self); // generated
Q7B Q7B_QFILEOPENEVENT_FILE(Q7B self); // generated
Q7B Q7B_QFILEOPENEVENT_OPENFILE(Q7B self, Q7B File, Q7B Flags); // generated
Q7B Q7B_QFILEOPENEVENT_URL(Q7B self); // generated
Q7B Q7B_QFOCUSEVENT_GOTFOCUS(Q7B self); // generated
Q7B Q7B_QFOCUSEVENT_LOSTFOCUS(Q7B self); // generated
Q7B Q7B_QFOCUSEVENT_REASON(Q7B self); // generated
Q7B Q7B_QGRAPHICSSCENEEVENT_WIDGET(Q7B self); // generated
Q7B Q7B_QHELPEVENT_GLOBALPOS(Q7B self); // generated
Q7B Q7B_QHELPEVENT_GLOBALX(Q7B self); // generated
Q7B Q7B_QHELPEVENT_GLOBALY(Q7B self); // generated
Q7B Q7B_QHELPEVENT_POS(Q7B self); // generated
Q7B Q7B_QHELPEVENT_X(Q7B self); // generated
Q7B Q7B_QHELPEVENT_Y(Q7B self); // generated
Q7B Q7B_QHOVEREVENT_OLDPOS(Q7B self); // generated
Q7B Q7B_QHOVEREVENT_POS(Q7B self); // generated
Q7B Q7B_QINPUTEVENT_MODIFIERS(Q7B self); // generated
Q7B Q7B_QINPUTMETHODEVENT_COMMITSTRING(Q7B self); // generated
Q7B Q7B_QINPUTMETHODEVENT_PREEDITSTRING(Q7B self); // generated
Q7B Q7B_QINPUTMETHODEVENT_REPLACEMENTLENGTH(Q7B self); // generated
Q7B Q7B_QINPUTMETHODEVENT_REPLACEMENTSTART(Q7B self); // generated
void Q7B_QINPUTMETHODEVENT_SETCOMMITSTRING(Q7B self, Q7B CommitString, Q7B ReplaceFrom, Q7B ReplaceLength); // generated
void Q7B_QITEMSELECTIONMODEL_CLEAR(Q7B self); // generated
void Q7B_QITEMSELECTIONMODEL_CLEARSELECTION(Q7B self); // generated
Q7B Q7B_QITEMSELECTIONMODEL_COLUMNINTERSECTSSELECTION(Q7B self, Q7B Column, Q7B Parent); // generated
Q7B Q7B_QITEMSELECTIONMODEL_CURRENTINDEX(Q7B self); // generated
Q7B Q7B_QITEMSELECTIONMODEL_HASSELECTION(Q7B self); // generated
Q7B Q7B_QITEMSELECTIONMODEL_ISCOLUMNSELECTED(Q7B self, Q7B Column, Q7B Parent); // generated
Q7B Q7B_QITEMSELECTIONMODEL_ISROWSELECTED(Q7B self, Q7B Row, Q7B Parent); // generated
Q7B Q7B_QITEMSELECTIONMODEL_ISSELECTED(Q7B self); // generated
Q7B Q7B_QITEMSELECTIONMODEL_MODEL(Q7B self); // generated
void Q7B_QITEMSELECTIONMODEL_RESET(Q7B self); // generated
Q7B Q7B_QITEMSELECTIONMODEL_ROWINTERSECTSSELECTION(Q7B self); // generated
void Q7B_QITEMSELECTIONMODEL_SELECT(Q7B self, Q7B Selection, Q7B Command); // generated
Q7B Q7B_QITEMSELECTIONMODEL_SELECTEDCOLUMNS(Q7B self, Q7B Row); // generated
Q7B Q7B_QITEMSELECTIONMODEL_SELECTEDINDEXES(Q7B self); // generated
Q7B Q7B_QITEMSELECTIONMODEL_SELECTEDROWS(Q7B self, Q7B Column); // generated
Q7B Q7B_QITEMSELECTIONMODEL_SELECTION(Q7B self); // generated
void Q7B_QITEMSELECTIONMODEL_SETCURRENTINDEX(Q7B self, Q7B Index, Q7B Command); // generated
Q7B Q7B_QKEYSEQUENCE_COUNT(Q7B self); // generated
Q7B Q7B_QKEYSEQUENCE_ISEMPTY(Q7B self); // generated
Q7B Q7B_QKEYSEQUENCE_MATCHES(Q7B self); // generated
void Q7B_QKEYSEQUENCE_SWAP(Q7B self, Q7B Other); // generated
Q7B Q7B_QKEYSEQUENCE_TOSTRING(Q7B self, Q7B Format); // generated
Q7B Q7B_QMOVEEVENT_OLDPOS(Q7B self); // generated
Q7B Q7B_QMOVEEVENT_POS(Q7B self); // generated
Q7B Q7B_QPAINTEVENT_RECT(Q7B self); // generated
Q7B Q7B_QPAINTEVENT_REGION(Q7B self); // generated
Q7B Q7B_QPOINT_ISNULL(Q7B self); // generated
Q7B Q7B_QPOINT_MANHATTANLENGTH(Q7B self); // generated
Q7B Q7B_QPOINT_RX(Q7B self); // generated
Q7B Q7B_QPOINT_RY(Q7B self); // generated
void Q7B_QPOINT_SETX(Q7B self, Q7B X); // generated
void Q7B_QPOINT_SETY(Q7B self, Q7B Y); // generated
Q7B Q7B_QPOINT_X(Q7B self); // generated
Q7B Q7B_QPOINT_Y(Q7B self); // generated
Q7B Q7B_QPOLYGON_BOUNDINGRECT(Q7B self); // generated
Q7B Q7B_QPOLYGON_CONTAINSPOINT(Q7B self, Q7B Point, Q7B FillRule); // generated
Q7B Q7B_QPOLYGON_INTERSECTED(Q7B self, Q7B R); // generated
Q7B Q7B_QPOLYGON_POINT(Q7B self, Q7B Index); // generated
void Q7B_QPOLYGON_PUTPOINTS(Q7B self, Q7B Index, Q7B NPoints, Q7B FromPolygon, Q7B FromIndex); // generated
void Q7B_QPOLYGON_SETPOINT(Q7B self, Q7B Index, Q7B Point); // generated
Q7B Q7B_QPOLYGON_SUBTRACTED(Q7B self); // generated
void Q7B_QPOLYGON_SWAP(Q7B self, Q7B Other); // generated
void Q7B_QPOLYGON_TRANSLATE(Q7B self, Q7B Offset); // generated
Q7B Q7B_QPOLYGON_TRANSLATED(Q7B self, Q7B Offset); // generated
Q7B Q7B_QPOLYGON_UNITED(Q7B self, Q7B R); // generated
void Q7B_QPRINTPREVIEWDIALOG_OPEN(Q7B self, Q7B Printer, Q7B Parent, Q7B Flags); // generated
Q7B Q7B_QPRINTPREVIEWDIALOG_PRINTER(Q7B self); // generated
Q7B Q7B_QPRINTERINFO_ISDEFAULT(Q7B self); // generated
Q7B Q7B_QPRINTERINFO_ISNULL(Q7B self); // generated
Q7B Q7B_QPRINTERINFO_PRINTERNAME(Q7B self); // generated
Q7B Q7B_QPRINTERINFO_SUPPORTEDPAPERSIZES(Q7B self); // generated
Q7B Q7B_QPRINTERINFO_AVAILABLEPRINTERS(Q7B self); // generated
Q7B Q7B_QPRINTERINFO_DEFAULTPRINTER(Q7B self); // generated
void Q7B_QRECT_ADJUST(Q7B self, Q7B Dx1, Q7B Dy1, Q7B Dx2, Q7B Dy2); // generated
Q7B Q7B_QRECT_ADJUSTED(Q7B self, Q7B Dx1, Q7B Dy1, Q7B Dx2, Q7B Dy2); // generated
Q7B Q7B_QRECT_BOTTOM(Q7B self); // generated
Q7B Q7B_QRECT_BOTTOMLEFT(Q7B self); // generated
Q7B Q7B_QRECT_BOTTOMRIGHT(Q7B self); // generated
Q7B Q7B_QRECT_CENTER(Q7B self); // generated
Q7B Q7B_QRECT_CONTAINS(Q7B self, Q7B Rectangle, Q7B Proper); // generated
void Q7B_QRECT_GETCOORDS(Q7B self, Q7B X1, Q7B Y1, Q7B X2, Q7B Y2); // generated
void Q7B_QRECT_GETRECT(Q7B self, Q7B X, Q7B Y, Q7B Width, Q7B Height); // generated
Q7B Q7B_QRECT_HEIGHT(Q7B self); // generated
Q7B Q7B_QRECT_INTERSECTED(Q7B self, Q7B Rectangle); // generated
Q7B Q7B_QRECT_INTERSECTS(Q7B self, Q7B Rectangle); // generated
Q7B Q7B_QRECT_ISEMPTY(Q7B self); // generated
Q7B Q7B_QRECT_ISNULL(Q7B self); // generated
Q7B Q7B_QRECT_ISVALID(Q7B self); // generated
Q7B Q7B_QRECT_LEFT(Q7B self); // generated
void Q7B_QRECT_MOVEBOTTOM(Q7B self, Q7B Y); // generated
void Q7B_QRECT_MOVEBOTTOMLEFT(Q7B self, Q7B Position); // generated
void Q7B_QRECT_MOVEBOTTOMRIGHT(Q7B self, Q7B Position); // generated
void Q7B_QRECT_MOVECENTER(Q7B self, Q7B Position); // generated
void Q7B_QRECT_MOVELEFT(Q7B self, Q7B X); // generated
void Q7B_QRECT_MOVERIGHT(Q7B self, Q7B X); // generated
void Q7B_QRECT_MOVETO(Q7B self, Q7B Position); // generated
void Q7B_QRECT_MOVETOP(Q7B self, Q7B Y); // generated
void Q7B_QRECT_MOVETOPLEFT(Q7B self, Q7B Position); // generated
void Q7B_QRECT_MOVETOPRIGHT(Q7B self, Q7B Position); // generated
Q7B Q7B_QRECT_NORMALIZED(Q7B self); // generated
Q7B Q7B_QRECT_RIGHT(Q7B self); // generated
void Q7B_QRECT_SETBOTTOM(Q7B self, Q7B Y); // generated
void Q7B_QRECT_SETBOTTOMLEFT(Q7B self, Q7B Position); // generated
void Q7B_QRECT_SETBOTTOMRIGHT(Q7B self, Q7B Position); // generated
void Q7B_QRECT_SETCOORDS(Q7B self, Q7B X1, Q7B Y1, Q7B X2, Q7B Y2); // generated
void Q7B_QRECT_SETHEIGHT(Q7B self, Q7B Height); // generated
void Q7B_QRECT_SETLEFT(Q7B self, Q7B X); // generated
void Q7B_QRECT_SETRECT(Q7B self, Q7B X, Q7B Y, Q7B Width, Q7B Height); // generated
void Q7B_QRECT_SETRIGHT(Q7B self, Q7B X); // generated
void Q7B_QRECT_SETSIZE(Q7B self, Q7B Size); // generated
void Q7B_QRECT_SETTOP(Q7B self, Q7B Y); // generated
void Q7B_QRECT_SETTOPLEFT(Q7B self, Q7B Position); // generated
void Q7B_QRECT_SETTOPRIGHT(Q7B self, Q7B Position); // generated
void Q7B_QRECT_SETWIDTH(Q7B self, Q7B Width); // generated
void Q7B_QRECT_SETX(Q7B self, Q7B X); // generated
void Q7B_QRECT_SETY(Q7B self, Q7B Y); // generated
Q7B Q7B_QRECT_SIZE(Q7B self); // generated
Q7B Q7B_QRECT_TOP(Q7B self); // generated
Q7B Q7B_QRECT_TOPLEFT(Q7B self); // generated
Q7B Q7B_QRECT_TOPRIGHT(Q7B self); // generated
void Q7B_QRECT_TRANSLATE(Q7B self, Q7B Offset); // generated
Q7B Q7B_QRECT_TRANSLATED(Q7B self, Q7B Offset); // generated
Q7B Q7B_QRECT_UNITED(Q7B self, Q7B Rectangle); // generated
Q7B Q7B_QRECT_WIDTH(Q7B self); // generated
Q7B Q7B_QRECT_X(Q7B self); // generated
Q7B Q7B_QRECT_Y(Q7B self); // generated
Q7B Q7B_QRESIZEEVENT_OLDSIZE(Q7B self); // generated
Q7B Q7B_QRESIZEEVENT_SIZE(Q7B self); // generated
Q7B Q7B_QSHORTCUTEVENT_ISAMBIGUOUS(Q7B self); // generated
Q7B Q7B_QSHORTCUTEVENT_KEY(Q7B self); // generated
Q7B Q7B_QSHORTCUTEVENT_SHORTCUTID(Q7B self); // generated
Q7B Q7B_QSTATUSTIPEVENT_TIP(Q7B self); // generated
Q7B Q7B_QTEXTBLOCKFORMAT_ALIGNMENT(Q7B self); // generated
Q7B Q7B_QTEXTBLOCKFORMAT_BOTTOMMARGIN(Q7B self); // generated
Q7B Q7B_QTEXTBLOCKFORMAT_INDENT(Q7B self); // generated
Q7B Q7B_QTEXTBLOCKFORMAT_ISVALID(Q7B self); // generated
Q7B Q7B_QTEXTBLOCKFORMAT_LEFTMARGIN(Q7B self); // generated
Q7B Q7B_QTEXTBLOCKFORMAT_LINEHEIGHT(Q7B self); // generated
Q7B Q7B_QTEXTBLOCKFORMAT_LINEHEIGHTTYPE(Q7B self); // generated
Q7B Q7B_QTEXTBLOCKFORMAT_NONBREAKABLELINES(Q7B self); // generated
Q7B Q7B_QTEXTBLOCKFORMAT_PAGEBREAKPOLICY(Q7B self); // generated
Q7B Q7B_QTEXTBLOCKFORMAT_RIGHTMARGIN(Q7B self); // generated
void Q7B_QTEXTBLOCKFORMAT_SETALIGNMENT(Q7B self, Q7B Alignment); // generated
void Q7B_QTEXTBLOCKFORMAT_SETBOTTOMMARGIN(Q7B self, Q7B Margin); // generated
void Q7B_QTEXTBLOCKFORMAT_SETINDENT(Q7B self, Q7B Indentation); // generated
void Q7B_QTEXTBLOCKFORMAT_SETLEFTMARGIN(Q7B self, Q7B Margin); // generated
void Q7B_QTEXTBLOCKFORMAT_SETLINEHEIGHT(Q7B self, Q7B Height, Q7B HeightType); // generated
void Q7B_QTEXTBLOCKFORMAT_SETNONBREAKABLELINES(Q7B self, Q7B B); // generated
void Q7B_QTEXTBLOCKFORMAT_SETPAGEBREAKPOLICY(Q7B self, Q7B Policy); // generated
void Q7B_QTEXTBLOCKFORMAT_SETRIGHTMARGIN(Q7B self, Q7B Margin); // generated
void Q7B_QTEXTBLOCKFORMAT_SETTABPOSITIONS(Q7B self, Q7B Tabs); // generated
void Q7B_QTEXTBLOCKFORMAT_SETTEXTINDENT(Q7B self, Q7B Indent); // generated
void Q7B_QTEXTBLOCKFORMAT_SETTOPMARGIN(Q7B self, Q7B Margin); // generated
Q7B Q7B_QTEXTBLOCKFORMAT_TABPOSITIONS(Q7B self); // generated
Q7B Q7B_QTEXTBLOCKFORMAT_TEXTINDENT(Q7B self); // generated
Q7B Q7B_QTEXTBLOCKFORMAT_TOPMARGIN(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_ANCHORHREF(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_ANCHORNAMES(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_FONT(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_FONTCAPITALIZATION(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_FONTFAMILY(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_FONTFIXEDPITCH(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_FONTHINTINGPREFERENCE(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_FONTITALIC(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_FONTLETTERSPACING(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_FONTOVERLINE(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_FONTPOINTSIZE(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_FONTSTRIKEOUT(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_FONTSTYLEHINT(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_FONTSTYLESTRATEGY(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_FONTUNDERLINE(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_FONTWEIGHT(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_FONTWORDSPACING(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_ISANCHOR(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_ISVALID(Q7B self); // generated
void Q7B_QTEXTCHARFORMAT_SETANCHOR(Q7B self, Q7B Anchor); // generated
void Q7B_QTEXTCHARFORMAT_SETANCHORHREF(Q7B self, Q7B Value); // generated
void Q7B_QTEXTCHARFORMAT_SETANCHORNAMES(Q7B self, Q7B Names); // generated
void Q7B_QTEXTCHARFORMAT_SETFONT(Q7B self, Q7B Font); // generated
void Q7B_QTEXTCHARFORMAT_SETFONTCAPITALIZATION(Q7B self, Q7B Capitalization); // generated
void Q7B_QTEXTCHARFORMAT_SETFONTFAMILY(Q7B self, Q7B Family); // generated
void Q7B_QTEXTCHARFORMAT_SETFONTFIXEDPITCH(Q7B self, Q7B FixedPitch); // generated
void Q7B_QTEXTCHARFORMAT_SETFONTHINTINGPREFERENCE(Q7B self, Q7B HintingPreference); // generated
void Q7B_QTEXTCHARFORMAT_SETFONTITALIC(Q7B self, Q7B Italic); // generated
void Q7B_QTEXTCHARFORMAT_SETFONTLETTERSPACING(Q7B self, Q7B Spacing); // generated
void Q7B_QTEXTCHARFORMAT_SETFONTOVERLINE(Q7B self, Q7B Overline); // generated
void Q7B_QTEXTCHARFORMAT_SETFONTPOINTSIZE(Q7B self, Q7B Size); // generated
void Q7B_QTEXTCHARFORMAT_SETFONTSTRIKEOUT(Q7B self, Q7B StrikeOut); // generated
void Q7B_QTEXTCHARFORMAT_SETFONTSTYLEHINT(Q7B self, Q7B Hint, Q7B Strategy); // generated
void Q7B_QTEXTCHARFORMAT_SETFONTSTYLESTRATEGY(Q7B self, Q7B Strategy); // generated
void Q7B_QTEXTCHARFORMAT_SETFONTUNDERLINE(Q7B self, Q7B UnderLine); // generated
void Q7B_QTEXTCHARFORMAT_SETFONTWEIGHT(Q7B self, Q7B Weight); // generated
void Q7B_QTEXTCHARFORMAT_SETFONTWORDSPACING(Q7B self, Q7B Spacing); // generated
void Q7B_QTEXTCHARFORMAT_SETTEXTOUTLINE(Q7B self, Q7B Pen); // generated
void Q7B_QTEXTCHARFORMAT_SETTOOLTIP(Q7B self, Q7B Text); // generated
void Q7B_QTEXTCHARFORMAT_SETUNDERLINECOLOR(Q7B self, Q7B Color); // generated
void Q7B_QTEXTCHARFORMAT_SETUNDERLINESTYLE(Q7B self, Q7B Style); // generated
void Q7B_QTEXTCHARFORMAT_SETVERTICALALIGNMENT(Q7B self, Q7B Alignment); // generated
Q7B Q7B_QTEXTCHARFORMAT_TEXTOUTLINE(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_TOOLTIP(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_UNDERLINECOLOR(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_UNDERLINESTYLE(Q7B self); // generated
Q7B Q7B_QTEXTCHARFORMAT_VERTICALALIGNMENT(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENTFRAGMENT_ISEMPTY(Q7B self, Q7B Encoding); // generated
Q7B Q7B_QTEXTDOCUMENTFRAGMENT_TOHTML(Q7B self); // generated
Q7B Q7B_QTEXTDOCUMENTFRAGMENT_TOPLAINTEXT(Q7B self); // generated
Q7B Q7B_QTIMEREVENT_TIMERID(Q7B self); // generated
Q7B Q7B_QWHATSTHISCLICKEDEVENT_HREF(Q7B self); // generated
Q7B Q7B_QWINDOWSTATECHANGEEVENT_OLDSTATE(Q7B self); // generated


Q7B Q7B_QDATETIMEEDIT_CALENDARPOPUP(Q7B self); // generated
void Q7B_QDATETIMEEDIT_CALENDARPOPUP(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDATETIMEEDIT_CALENDARWIDGET(Q7B self); // generated
void Q7B_QDATETIMEEDIT_CLEARMAXIMUMDATE(Q7B self); // generated
void Q7B_QDATETIMEEDIT_CLEARMAXIMUMDATETIME(Q7B self); // generated
void Q7B_QDATETIMEEDIT_CLEARMAXIMUMTIME(Q7B self); // generated
void Q7B_QDATETIMEEDIT_CLEARMINIMUMDATE(Q7B self); // generated
void Q7B_QDATETIMEEDIT_CLEARMINIMUMDATETIME(Q7B self); // generated
void Q7B_QDATETIMEEDIT_CLEARMINIMUMTIME(Q7B self); // generated
Q7B Q7B_QDATETIMEEDIT_CURRENTSECTION(Q7B self); // generated
void Q7B_QDATETIMEEDIT_CURRENTSECTION(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDATETIMEEDIT_CURRENTSECTIONINDEX(Q7B self); // generated
void Q7B_QDATETIMEEDIT_CURRENTSECTIONINDEX(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDATETIMEEDIT_DATE(Q7B self); // generated
void Q7B_QDATETIMEEDIT_DATE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDATETIMEEDIT_DATETIME(Q7B self); // generated
void Q7B_QDATETIMEEDIT_DATETIME(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDATETIMEEDIT_DISPLAYFORMAT(Q7B self); // generated
void Q7B_QDATETIMEEDIT_DISPLAYFORMAT(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDATETIMEEDIT_DISPLAYEDSECTIONS(Q7B self); // generated
void Q7B_QDATETIMEEDIT_DISPLAYEDSECTIONS(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDATETIMEEDIT_MAXIMUMDATE(Q7B self); // generated
void Q7B_QDATETIMEEDIT_MAXIMUMDATE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDATETIMEEDIT_MAXIMUMDATETIME(Q7B self); // generated
void Q7B_QDATETIMEEDIT_MAXIMUMDATETIME(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDATETIMEEDIT_MAXIMUMTIME(Q7B self); // generated
void Q7B_QDATETIMEEDIT_MAXIMUMTIME(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDATETIMEEDIT_MINIMUMDATE(Q7B self); // generated
void Q7B_QDATETIMEEDIT_MINIMUMDATE(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDATETIMEEDIT_MINIMUMDATETIME(Q7B self); // generated
void Q7B_QDATETIMEEDIT_MINIMUMDATETIME(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDATETIMEEDIT_MINIMUMTIME(Q7B self); // generated
void Q7B_QDATETIMEEDIT_MINIMUMTIME(Q7B self, Q7B theProperty); // generated
Q7B Q7B_QDATETIMEEDIT_SECTIONAT(Q7B self, Q7B Index); // generated
Q7B Q7B_QDATETIMEEDIT_SECTIONCOUNT(Q7B self); // generated
Q7B Q7B_QDATETIMEEDIT_SECTIONTEXT(Q7B self, Q7B Section); // generated
void Q7B_QDATETIMEEDIT_SETCALENDARPOPUP(Q7B self, Q7B Enable); // generated
void Q7B_QDATETIMEEDIT_SETCALENDARWIDGET(Q7B self, Q7B CalendarWidget); // generated
void Q7B_QDATETIMEEDIT_SETDATE(Q7B self, Q7B Date); // generated
void Q7B_QDATETIMEEDIT_SETDATERANGE(Q7B self, Q7B Minimum, Q7B Maximum); // generated
void Q7B_QDATETIMEEDIT_SETDATETIME(Q7B self, Q7B DateTime); // generated
void Q7B_QDATETIMEEDIT_SETDATETIMERANGE(Q7B self, Q7B Minimum, Q7B Maximum); // generated
void Q7B_QDATETIMEEDIT_SETSELECTEDSECTION(Q7B self, Q7B Section); // generated
void Q7B_QDATETIMEEDIT_SETTIME(Q7B self, Q7B Time); // generated
void Q7B_QDATETIMEEDIT_SETTIMERANGE(Q7B self, Q7B Minimum, Q7B Maximum); // generated
Q7B Q7B_QDATETIMEEDIT_TIME(Q7B self); // generated
void Q7B_QLISTQSTRINGLIST_APPEND(Q7B self, Q7B s); // generated
Q7B Q7B_QLISTQSTRINGLIST_AT(Q7B self, Q7B Index); // generated
Q7B Q7B_QLISTQSTRINGLIST_COUNT(Q7B self); // generated

#define _bytecodes QList<QVariant>
Q7B Q7B_VM_RUN(QString sFileName, QString sProcedureName, _bytecodes _Q7B_VM_bytecode, Q7B me, QMap<QString, Q7B> args, QMap<QString, Q7B> *statics, QMap<QString, Q7B> me_vars/*, QList<Q7B> global_vars*/);



#endif



