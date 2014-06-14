/********************************************************************************
** Form generated from reading UI file 'keyboard.ui'
**
** Created: Wed Mar 14 14:12:46 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARD_H
#define UI_KEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_keyboard
{
public:
    QLCDNumber *lcdNumber;
    QDialogButtonBox *buttonBox;
    QPushButton *pushButtonC;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonNum7;
    QPushButton *pushButtonNum8;
    QPushButton *pushButtonNum9;
    QPushButton *pushButtonNum4;
    QPushButton *pushButtonNum5;
    QPushButton *pushButtonNum6;
    QPushButton *pushButtonNum1;
    QPushButton *pushButtonNum2;
    QPushButton *pushButtonNum3;
    QPushButton *pushButtonNumBack;
    QPushButton *pushButtonNum0;
    QPushButton *pushButtonNum000;

    void setupUi(QWidget *keyboard)
    {
        if (keyboard->objectName().isEmpty())
            keyboard->setObjectName(QString::fromUtf8("keyboard"));
        keyboard->resize(300, 300);
        lcdNumber = new QLCDNumber(keyboard);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 10, 281, 71));
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setNumDigits(7);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);
        buttonBox = new QDialogButtonBox(keyboard);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(160, 265, 138, 32));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        pushButtonC = new QPushButton(keyboard);
        pushButtonC->setObjectName(QString::fromUtf8("pushButtonC"));
        pushButtonC->setGeometry(QRect(10, 265, 114, 32));
        widget = new QWidget(keyboard);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 90, 281, 171));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonNum7 = new QPushButton(widget);
        pushButtonNum7->setObjectName(QString::fromUtf8("pushButtonNum7"));

        gridLayout->addWidget(pushButtonNum7, 0, 0, 1, 1);

        pushButtonNum8 = new QPushButton(widget);
        pushButtonNum8->setObjectName(QString::fromUtf8("pushButtonNum8"));

        gridLayout->addWidget(pushButtonNum8, 0, 1, 1, 1);

        pushButtonNum9 = new QPushButton(widget);
        pushButtonNum9->setObjectName(QString::fromUtf8("pushButtonNum9"));

        gridLayout->addWidget(pushButtonNum9, 0, 2, 1, 1);

        pushButtonNum4 = new QPushButton(widget);
        pushButtonNum4->setObjectName(QString::fromUtf8("pushButtonNum4"));

        gridLayout->addWidget(pushButtonNum4, 1, 0, 1, 1);

        pushButtonNum5 = new QPushButton(widget);
        pushButtonNum5->setObjectName(QString::fromUtf8("pushButtonNum5"));

        gridLayout->addWidget(pushButtonNum5, 1, 1, 1, 1);

        pushButtonNum6 = new QPushButton(widget);
        pushButtonNum6->setObjectName(QString::fromUtf8("pushButtonNum6"));

        gridLayout->addWidget(pushButtonNum6, 1, 2, 1, 1);

        pushButtonNum1 = new QPushButton(widget);
        pushButtonNum1->setObjectName(QString::fromUtf8("pushButtonNum1"));

        gridLayout->addWidget(pushButtonNum1, 2, 0, 1, 1);

        pushButtonNum2 = new QPushButton(widget);
        pushButtonNum2->setObjectName(QString::fromUtf8("pushButtonNum2"));

        gridLayout->addWidget(pushButtonNum2, 2, 1, 1, 1);

        pushButtonNum3 = new QPushButton(widget);
        pushButtonNum3->setObjectName(QString::fromUtf8("pushButtonNum3"));

        gridLayout->addWidget(pushButtonNum3, 2, 2, 1, 1);

        pushButtonNumBack = new QPushButton(widget);
        pushButtonNumBack->setObjectName(QString::fromUtf8("pushButtonNumBack"));

        gridLayout->addWidget(pushButtonNumBack, 3, 0, 1, 1);

        pushButtonNum0 = new QPushButton(widget);
        pushButtonNum0->setObjectName(QString::fromUtf8("pushButtonNum0"));

        gridLayout->addWidget(pushButtonNum0, 3, 1, 1, 1);

        pushButtonNum000 = new QPushButton(widget);
        pushButtonNum000->setObjectName(QString::fromUtf8("pushButtonNum000"));

        gridLayout->addWidget(pushButtonNum000, 3, 2, 1, 1);


        retranslateUi(keyboard);

        QMetaObject::connectSlotsByName(keyboard);
    } // setupUi

    void retranslateUi(QWidget *keyboard)
    {
        keyboard->setWindowTitle(QApplication::translate("keyboard", "Form", 0, QApplication::UnicodeUTF8));
        pushButtonC->setText(QApplication::translate("keyboard", "C", 0, QApplication::UnicodeUTF8));
        pushButtonNum7->setText(QApplication::translate("keyboard", "7", 0, QApplication::UnicodeUTF8));
        pushButtonNum8->setText(QApplication::translate("keyboard", "8", 0, QApplication::UnicodeUTF8));
        pushButtonNum9->setText(QApplication::translate("keyboard", "9", 0, QApplication::UnicodeUTF8));
        pushButtonNum4->setText(QApplication::translate("keyboard", "4", 0, QApplication::UnicodeUTF8));
        pushButtonNum5->setText(QApplication::translate("keyboard", "5", 0, QApplication::UnicodeUTF8));
        pushButtonNum6->setText(QApplication::translate("keyboard", "6", 0, QApplication::UnicodeUTF8));
        pushButtonNum1->setText(QApplication::translate("keyboard", "1", 0, QApplication::UnicodeUTF8));
        pushButtonNum2->setText(QApplication::translate("keyboard", "2", 0, QApplication::UnicodeUTF8));
        pushButtonNum3->setText(QApplication::translate("keyboard", "3", 0, QApplication::UnicodeUTF8));
        pushButtonNumBack->setText(QApplication::translate("keyboard", "<-", 0, QApplication::UnicodeUTF8));
        pushButtonNum0->setText(QApplication::translate("keyboard", "0", 0, QApplication::UnicodeUTF8));
        pushButtonNum000->setText(QApplication::translate("keyboard", "000", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class keyboard: public Ui_keyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARD_H
