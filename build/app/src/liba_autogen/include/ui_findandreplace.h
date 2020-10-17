/********************************************************************************
** Form generated from reading UI file 'findandreplace.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDANDREPLACE_H
#define UI_FINDANDREPLACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_FindAndReplace
{
public:
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *textEdit_3;
    QLabel *label_4;

    void setupUi(QDialog *FindAndReplace)
    {
        if (FindAndReplace->objectName().isEmpty())
            FindAndReplace->setObjectName(QString::fromUtf8("FindAndReplace"));
        FindAndReplace->resize(400, 250);
        textEdit = new QTextEdit(FindAndReplace);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(90, 20, 300, 30));
        textEdit_2 = new QTextEdit(FindAndReplace);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(90, 110, 300, 30));
        label_2 = new QLabel(FindAndReplace);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 60, 30));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(FindAndReplace);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 150, 80, 30));
        label_3->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(FindAndReplace);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 60, 100, 30));
        pushButton_2 = new QPushButton(FindAndReplace);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 200, 100, 30));
        textEdit_3 = new QTextEdit(FindAndReplace);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(90, 150, 300, 30));
        label_4 = new QLabel(FindAndReplace);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 110, 80, 30));
        label_4->setAlignment(Qt::AlignCenter);

        retranslateUi(FindAndReplace);

        QMetaObject::connectSlotsByName(FindAndReplace);
    } // setupUi

    void retranslateUi(QDialog *FindAndReplace)
    {
        FindAndReplace->setWindowTitle(QCoreApplication::translate("FindAndReplace", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("FindAndReplace", "Find", nullptr));
        label_3->setText(QCoreApplication::translate("FindAndReplace", "Replace on", nullptr));
        pushButton->setText(QCoreApplication::translate("FindAndReplace", "Find", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FindAndReplace", "Replace", nullptr));
        label_4->setText(QCoreApplication::translate("FindAndReplace", "Find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindAndReplace: public Ui_FindAndReplace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDANDREPLACE_H
