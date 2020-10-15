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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
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
    QWidget *centralWidget;
    QSplitter *splitter;
    QTreeView *treeView;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *TextEdit;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOpen;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1572, 1000);
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
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(0, 0, 1561, 851));
        splitter->setOrientation(Qt::Horizontal);
        treeView = new QTreeView(splitter);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy2);
        treeView->setMinimumSize(QSize(150, 0));
        treeView->setMaximumSize(QSize(300, 16777215));
        treeView->setAcceptDrops(false);
        splitter->addWidget(treeView);
        horizontalLayoutWidget = new QWidget(splitter);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        TextEdit = new QTextEdit(horizontalLayoutWidget);
        TextEdit->setObjectName(QString::fromUtf8("TextEdit"));

        horizontalLayout->addWidget(TextEdit);

        splitter->addWidget(horizontalLayoutWidget);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1572, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOpen = new QMenu(menuFile);
        menuOpen->setObjectName(QString::fromUtf8("menuOpen"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(menuOpen->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuOpen->addAction(actionOpen_Folder);
        menuOpen->addSeparator();
        menuOpen->addAction(actionOpen_File);

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
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
        actionOpen_Folder->setText(QCoreApplication::translate("MainWindow", "Open Folder", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuOpen->setTitle(QCoreApplication::translate("MainWindow", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
