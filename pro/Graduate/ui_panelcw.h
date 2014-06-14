/********************************************************************************
** Form generated from reading UI file 'panelcw.ui'
**
** Created: Wed Jun 13 20:30:53 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANELCW_H
#define UI_PANELCW_H

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

class Ui_PanelCW
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinFreq;
    QToolButton *toolButtonFreq;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinAmp;
    QToolButton *toolButtonAmp;
    QLabel *label_4;
    QLabel *label_9;
    QSpinBox *spinPhase;
    QToolButton *toolButtonPhase;
    QLabel *label_10;
    QLabel *label_5;
    QSpinBox *spinTau;
    QToolButton *toolButtonTau;
    QLabel *label_6;
    QLabel *label_11;
    QLabel *labelFormula;

    void setupUi(QWidget *PanelCW)
    {
        if (PanelCW->objectName().isEmpty())
            PanelCW->setObjectName(QString::fromUtf8("PanelCW"));
        PanelCW->resize(300, 300);
        layoutWidget = new QWidget(PanelCW);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(2, 60, 291, 167));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinFreq = new QSpinBox(layoutWidget);
        spinFreq->setObjectName(QString::fromUtf8("spinFreq"));
        spinFreq->setMinimum(1);
        spinFreq->setMaximum(9999999);
        spinFreq->setValue(10000);

        gridLayout->addWidget(spinFreq, 0, 1, 1, 1);

        toolButtonFreq = new QToolButton(layoutWidget);
        toolButtonFreq->setObjectName(QString::fromUtf8("toolButtonFreq"));

        gridLayout->addWidget(toolButtonFreq, 0, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        spinAmp = new QSpinBox(layoutWidget);
        spinAmp->setObjectName(QString::fromUtf8("spinAmp"));
        spinAmp->setMinimum(1);
        spinAmp->setMaximum(2500000);
        spinAmp->setValue(1000000);

        gridLayout->addWidget(spinAmp, 1, 1, 1, 1);

        toolButtonAmp = new QToolButton(layoutWidget);
        toolButtonAmp->setObjectName(QString::fromUtf8("toolButtonAmp"));

        gridLayout->addWidget(toolButtonAmp, 1, 2, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 3, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        spinPhase = new QSpinBox(layoutWidget);
        spinPhase->setObjectName(QString::fromUtf8("spinPhase"));
        spinPhase->setMaximum(359);

        gridLayout->addWidget(spinPhase, 2, 1, 1, 1);

        toolButtonPhase = new QToolButton(layoutWidget);
        toolButtonPhase->setObjectName(QString::fromUtf8("toolButtonPhase"));

        gridLayout->addWidget(toolButtonPhase, 2, 2, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 2, 3, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        spinTau = new QSpinBox(layoutWidget);
        spinTau->setObjectName(QString::fromUtf8("spinTau"));
        spinTau->setMinimum(1);
        spinTau->setMaximum(9999999);
        spinTau->setValue(1000);

        gridLayout->addWidget(spinTau, 3, 1, 1, 1);

        toolButtonTau = new QToolButton(layoutWidget);
        toolButtonTau->setObjectName(QString::fromUtf8("toolButtonTau"));

        gridLayout->addWidget(toolButtonTau, 3, 2, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 3, 1, 1);

        label_11 = new QLabel(PanelCW);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(34, 0, 241, 21));
        labelFormula = new QLabel(PanelCW);
        labelFormula->setObjectName(QString::fromUtf8("labelFormula"));
        labelFormula->setGeometry(QRect(40, 22, 211, 41));

        retranslateUi(PanelCW);

        QMetaObject::connectSlotsByName(PanelCW);
    } // setupUi

    void retranslateUi(QWidget *PanelCW)
    {
        PanelCW->setWindowTitle(QApplication::translate("PanelCW", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PanelCW", "Freqeuncy:", 0, QApplication::UnicodeUTF8));
        toolButtonFreq->setText(QApplication::translate("PanelCW", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PanelCW", "Hz", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PanelCW", "Amplitude:    ", 0, QApplication::UnicodeUTF8));
        toolButtonAmp->setText(QApplication::translate("PanelCW", "...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PanelCW", "uV", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("PanelCW", "Phase:       ", 0, QApplication::UnicodeUTF8));
        toolButtonPhase->setText(QApplication::translate("PanelCW", "...", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("PanelCW", "Degree", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PanelCW", "Pulse Width:       ", 0, QApplication::UnicodeUTF8));
        toolButtonTau->setText(QApplication::translate("PanelCW", "...", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PanelCW", "us", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("PanelCW", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:12pt; color:#0000ff;\">Parameters Panel of CW Pulse</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelFormula->setText(QApplication::translate("PanelCW", "formula", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PanelCW: public Ui_PanelCW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANELCW_H
