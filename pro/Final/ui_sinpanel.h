/********************************************************************************
** Form generated from reading UI file 'sinpanel.ui'
**
** Created: Wed Mar 14 14:12:46 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINPANEL_H
#define UI_SINPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sinPanel
{
public:
    QLabel *label_10;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinFreq;
    QToolButton *toolButtonFreq;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinAmp;
    QToolButton *toolButtonAmp;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *spinPhase;
    QToolButton *toolButtonPhase;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *spinShift;
    QToolButton *toolButtonShift;
    QLabel *label_8;

    void setupUi(QWidget *sinPanel)
    {
        if (sinPanel->objectName().isEmpty())
            sinPanel->setObjectName(QString::fromUtf8("sinPanel"));
        sinPanel->resize(350, 350);
        label_10 = new QLabel(sinPanel);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(90, 10, 221, 16));
        widget = new QWidget(sinPanel);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 60, 258, 132));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinFreq = new QSpinBox(widget);
        spinFreq->setObjectName(QString::fromUtf8("spinFreq"));
        spinFreq->setMaximum(9999999);

        gridLayout->addWidget(spinFreq, 0, 1, 1, 1);

        toolButtonFreq = new QToolButton(widget);
        toolButtonFreq->setObjectName(QString::fromUtf8("toolButtonFreq"));

        gridLayout->addWidget(toolButtonFreq, 0, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        spinAmp = new QSpinBox(widget);
        spinAmp->setObjectName(QString::fromUtf8("spinAmp"));
        spinAmp->setMaximum(9999999);

        gridLayout->addWidget(spinAmp, 1, 1, 1, 1);

        toolButtonAmp = new QToolButton(widget);
        toolButtonAmp->setObjectName(QString::fromUtf8("toolButtonAmp"));

        gridLayout->addWidget(toolButtonAmp, 1, 2, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 3, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        spinPhase = new QSpinBox(widget);
        spinPhase->setObjectName(QString::fromUtf8("spinPhase"));
        spinPhase->setMaximum(9999999);

        gridLayout->addWidget(spinPhase, 2, 1, 1, 1);

        toolButtonPhase = new QToolButton(widget);
        toolButtonPhase->setObjectName(QString::fromUtf8("toolButtonPhase"));

        gridLayout->addWidget(toolButtonPhase, 2, 2, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 3, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        spinShift = new QSpinBox(widget);
        spinShift->setObjectName(QString::fromUtf8("spinShift"));
        spinShift->setMaximum(9999999);

        gridLayout->addWidget(spinShift, 3, 1, 1, 1);

        toolButtonShift = new QToolButton(widget);
        toolButtonShift->setObjectName(QString::fromUtf8("toolButtonShift"));

        gridLayout->addWidget(toolButtonShift, 3, 2, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 3, 1, 1);


        retranslateUi(sinPanel);

        QMetaObject::connectSlotsByName(sinPanel);
    } // setupUi

    void retranslateUi(QWidget *sinPanel)
    {
        sinPanel->setWindowTitle(QApplication::translate("sinPanel", "Form", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("sinPanel", "Parameters Panel of Sine", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("sinPanel", "Freqency:", 0, QApplication::UnicodeUTF8));
        toolButtonFreq->setText(QApplication::translate("sinPanel", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("sinPanel", "Hz", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("sinPanel", "Amplify:    ", 0, QApplication::UnicodeUTF8));
        toolButtonAmp->setText(QApplication::translate("sinPanel", "...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("sinPanel", "V", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("sinPanel", "Phase:       ", 0, QApplication::UnicodeUTF8));
        toolButtonPhase->setText(QApplication::translate("sinPanel", "...", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("sinPanel", "Degree", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("sinPanel", "Shift:         ", 0, QApplication::UnicodeUTF8));
        toolButtonShift->setText(QApplication::translate("sinPanel", "...", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("sinPanel", "V", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class sinPanel: public Ui_sinPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINPANEL_H
