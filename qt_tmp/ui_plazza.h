/********************************************************************************
** Form generated from reading UI file 'plazza.ui'
**
** Created: Sat Sep 21 21:31:08 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAZZA_H
#define UI_PLAZZA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Plazza
{
public:
    QAction *actionAbout;
    QAction *actionQuit;
    QAction *actionNew_command;
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QLabel *label_3;
    QLabel *kitchenName;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QFrame *line_2;
    QListWidget *kitchenList;
    QListWidget *awaitingOrdersList;
    QListWidget *processingOrdersList;
    QListWidget *finishedOrdersList;
    QLabel *label_4;
    QTableWidget *cooksTable;
    QTableWidget *ingredientsTable;
    QLabel *totalAwaiting;
    QLabel *totalProcessing;
    QLabel *totalFinished;
    QMenuBar *menuBar;
    QMenu *menuPlazza;
    QMenu *menuNew_command;

    void setupUi(QMainWindow *Plazza)
    {
        if (Plazza->objectName().isEmpty())
            Plazza->setObjectName(QString::fromUtf8("Plazza"));
        Plazza->resize(1050, 700);
        actionAbout = new QAction(Plazza);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionQuit = new QAction(Plazza);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionNew_command = new QAction(Plazza);
        actionNew_command->setObjectName(QString::fromUtf8("actionNew_command"));
        centralWidget = new QWidget(Plazza);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 81, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 450, 59, 15));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(230, 20, 20, 641));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(250, 30, 111, 16));
        kitchenName = new QLabel(centralWidget);
        kitchenName->setObjectName(QString::fromUtf8("kitchenName"));
        kitchenName->setGeometry(QRect(360, 30, 271, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(250, 70, 121, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(520, 70, 131, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(790, 70, 131, 16));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(250, 50, 791, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        kitchenList = new QListWidget(centralWidget);
        kitchenList->setObjectName(QString::fromUtf8("kitchenList"));
        kitchenList->setGeometry(QRect(10, 30, 221, 631));
        awaitingOrdersList = new QListWidget(centralWidget);
        awaitingOrdersList->setObjectName(QString::fromUtf8("awaitingOrdersList"));
        awaitingOrdersList->setGeometry(QRect(250, 90, 251, 351));
        processingOrdersList = new QListWidget(centralWidget);
        processingOrdersList->setObjectName(QString::fromUtf8("processingOrdersList"));
        processingOrdersList->setGeometry(QRect(520, 90, 251, 351));
        finishedOrdersList = new QListWidget(centralWidget);
        finishedOrdersList->setObjectName(QString::fromUtf8("finishedOrdersList"));
        finishedOrdersList->setGeometry(QRect(790, 90, 251, 351));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(660, 450, 131, 21));
        cooksTable = new QTableWidget(centralWidget);
        cooksTable->setObjectName(QString::fromUtf8("cooksTable"));
        cooksTable->setGeometry(QRect(250, 470, 381, 192));
        ingredientsTable = new QTableWidget(centralWidget);
        ingredientsTable->setObjectName(QString::fromUtf8("ingredientsTable"));
        ingredientsTable->setGeometry(QRect(660, 470, 381, 192));
        totalAwaiting = new QLabel(centralWidget);
        totalAwaiting->setObjectName(QString::fromUtf8("totalAwaiting"));
        totalAwaiting->setGeometry(QRect(398, 70, 101, 20));
        totalAwaiting->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        totalProcessing = new QLabel(centralWidget);
        totalProcessing->setObjectName(QString::fromUtf8("totalProcessing"));
        totalProcessing->setGeometry(QRect(670, 70, 101, 20));
        totalProcessing->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        totalFinished = new QLabel(centralWidget);
        totalFinished->setObjectName(QString::fromUtf8("totalFinished"));
        totalFinished->setGeometry(QRect(940, 70, 101, 20));
        totalFinished->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Plazza->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Plazza);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1050, 25));
        menuPlazza = new QMenu(menuBar);
        menuPlazza->setObjectName(QString::fromUtf8("menuPlazza"));
        menuNew_command = new QMenu(menuBar);
        menuNew_command->setObjectName(QString::fromUtf8("menuNew_command"));
        Plazza->setMenuBar(menuBar);

        menuBar->addAction(menuNew_command->menuAction());
        menuBar->addAction(menuPlazza->menuAction());
        menuPlazza->addAction(actionQuit);
        menuNew_command->addAction(actionNew_command);

        retranslateUi(Plazza);

        QMetaObject::connectSlotsByName(Plazza);
    } // setupUi

    void retranslateUi(QMainWindow *Plazza)
    {
        Plazza->setWindowTitle(QApplication::translate("Plazza", "Plazza", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("Plazza", "About", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("Plazza", "Quit", 0, QApplication::UnicodeUTF8));
        actionNew_command->setText(QApplication::translate("Plazza", "New command", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Plazza", "Kitchens :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Plazza", "Cooks :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Plazza", "Kitchen Name : ", 0, QApplication::UnicodeUTF8));
        kitchenName->setText(QApplication::translate("Plazza", "Undefined", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Plazza", "Awaiting orders :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Plazza", "Processing orders :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Plazza", "Finished orders :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Plazza", "Ingredients :", 0, QApplication::UnicodeUTF8));
        totalAwaiting->setText(QString());
        totalProcessing->setText(QString());
        totalFinished->setText(QString());
        menuPlazza->setTitle(QApplication::translate("Plazza", "Plazza", 0, QApplication::UnicodeUTF8));
        menuNew_command->setTitle(QApplication::translate("Plazza", "Commands", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Plazza: public Ui_Plazza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAZZA_H
