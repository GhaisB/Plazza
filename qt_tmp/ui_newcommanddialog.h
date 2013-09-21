/********************************************************************************
** Form generated from reading UI file 'newcommanddialog.ui'
**
** Created: Sat Sep 21 21:31:08 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCOMMANDDIALOG_H
#define UI_NEWCOMMANDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_NewCommandDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QSpinBox *spinBox;
    QLabel *label_4;

    void setupUi(QDialog *NewCommandDialog)
    {
        if (NewCommandDialog->objectName().isEmpty())
            NewCommandDialog->setObjectName(QString::fromUtf8("NewCommandDialog"));
        NewCommandDialog->resize(421, 209);
        buttonBox = new QDialogButtonBox(NewCommandDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(70, 170, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(NewCommandDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 121, 16));
        comboBox = new QComboBox(NewCommandDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 60, 181, 31));
        label_2 = new QLabel(NewCommandDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 101, 16));
        label_3 = new QLabel(NewCommandDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 40, 81, 16));
        comboBox_2 = new QComboBox(NewCommandDialog);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(230, 60, 181, 31));
        spinBox = new QSpinBox(NewCommandDialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(10, 120, 61, 31));
        label_4 = new QLabel(NewCommandDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 100, 81, 16));

        retranslateUi(NewCommandDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewCommandDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewCommandDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewCommandDialog);
    } // setupUi

    void retranslateUi(QDialog *NewCommandDialog)
    {
        NewCommandDialog->setWindowTitle(QApplication::translate("NewCommandDialog", "Pizza Order", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NewCommandDialog", "New pizza order :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NewCommandDialog", "Pizza Name :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NewCommandDialog", "Pizza size :", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("NewCommandDialog", "S", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewCommandDialog", "M", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewCommandDialog", "L", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewCommandDialog", "XL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NewCommandDialog", "XXL", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("NewCommandDialog", "Quantity :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewCommandDialog: public Ui_NewCommandDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCOMMANDDIALOG_H
