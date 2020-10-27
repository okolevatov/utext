/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNormal_Mode;
    QAction *actionHealth_Care_Mode;
    QAction *actionHard_Mode;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionOpen_Folder;
    QAction *actionOpen_File;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionFind_and_replace;
    QAction *actionNew_file;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QTreeView *treeView;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOpen;
    QMenu *menuSearch;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1500, 900);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(650, 300));
        MainWindow->setAcceptDrops(false);
        actionNormal_Mode = new QAction(MainWindow);
        actionNormal_Mode->setObjectName(QString::fromUtf8("actionNormal_Mode"));
        actionHealth_Care_Mode = new QAction(MainWindow);
        actionHealth_Care_Mode->setObjectName(QString::fromUtf8("actionHealth_Care_Mode"));
        actionHard_Mode = new QAction(MainWindow);
        actionHard_Mode->setObjectName(QString::fromUtf8("actionHard_Mode"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionOpen_Folder = new QAction(MainWindow);
        actionOpen_Folder->setObjectName(QString::fromUtf8("actionOpen_Folder"));
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QString::fromUtf8("actionOpen_File"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionFind_and_replace = new QAction(MainWindow);
        actionFind_and_replace->setObjectName(QString::fromUtf8("actionFind_and_replace"));
        actionNew_file = new QAction(MainWindow);
        actionNew_file->setObjectName(QString::fromUtf8("actionNew_file"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(153, 153, 153, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(37, 37, 37, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        centralWidget->setPalette(palette);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        centralWidget->setFont(font);
        centralWidget->setAutoFillBackground(true);
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        horizontalLayoutWidget = new QWidget(splitter);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(horizontalLayoutWidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        sizePolicy1.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy1);
        treeView->setMinimumSize(QSize(0, 0));
        QPalette palette1;
        QBrush brush3(QColor(204, 204, 204, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        QBrush brush4(QColor(0, 247, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        treeView->setPalette(palette1);

        horizontalLayout_2->addWidget(treeView);

        splitter->addWidget(horizontalLayoutWidget);
        horizontalLayoutWidget_2 = new QWidget(splitter);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter->addWidget(horizontalLayoutWidget_2);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1500, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOpen = new QMenu(menuFile);
        menuOpen->setObjectName(QString::fromUtf8("menuOpen"));
        menuSearch = new QMenu(menuBar);
        menuSearch->setObjectName(QString::fromUtf8("menuSearch"));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSearch->menuAction());
        menuFile->addAction(menuOpen->menuAction());
        menuFile->addAction(actionNew_file);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuOpen->addAction(actionOpen_Folder);
        menuOpen->addSeparator();
        menuOpen->addAction(actionOpen_File);
        menuSearch->addAction(actionFind_and_replace);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addSeparator();
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionCopy);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addSeparator();
        toolBar->addAction(actionPaste);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "utext", nullptr));
        actionNormal_Mode->setText(QCoreApplication::translate("MainWindow", "Normal Mode", nullptr));
        actionHealth_Care_Mode->setText(QCoreApplication::translate("MainWindow", "Health Care", nullptr));
        actionHard_Mode->setText(QCoreApplication::translate("MainWindow", "Hard Mode", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen_Folder->setText(QCoreApplication::translate("MainWindow", "Open Folder", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen_Folder->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen_File->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind_and_replace->setText(QCoreApplication::translate("MainWindow", "Find and replace", nullptr));
#if QT_CONFIG(shortcut)
        actionFind_and_replace->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew_file->setText(QCoreApplication::translate("MainWindow", "New file...", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuOpen->setTitle(QCoreApplication::translate("MainWindow", "Open", nullptr));
        menuSearch->setTitle(QCoreApplication::translate("MainWindow", "Search", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
