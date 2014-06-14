/********************************************************************************
** Form generated from reading UI file 'panelsin.ui'
**
** Created: Wed Jun 13 20:30:53 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANELSIN_H
#define UI_PANELSIN_H

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

class Ui_PanelSin
{
public:
    QLabel *labelFormula;
    QLabel *label_10;
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
    QLabel *label_5;
    QSpinBox *spinPhase;
    QToolButton *toolButtonPhase;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *spinOffset;
    QToolButton *toolButtonOffset;
    QLabel *label_8;

    void setupUi(QWidget *PanelSin)
    {
        if (PanelSin->objectName().isEmpty())
            PanelSin->setObjectName(QString::fromUtf8("PanelSin"));
        PanelSin->resize(300, 300);
        labelFormula = new QLabel(PanelSin);
        labelFormula->setObjectName(QString::fromUtf8("labelFormula"));
        labelFormula->setGeometry(QRect(6, 30, 290, 40));
        label_10 = new QLabel(PanelSin);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(50, 10, 221, 16));
        layoutWidget = new QWidget(PanelSin);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(13, 76, 274, 132));
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
        spinFreq->setValue(1000);

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

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        spinPhase = new QSpinBox(layoutWidget);
        spinPhase->setObjectName(QString::fromUtf8("spinPhase"));
        spinPhase->setMaximum(359);

        gridLayout->addWidget(spinPhase, 2, 1, 1, 1);

        toolButtonPhase = new QToolButton(layoutWidget);
        toolButtonPhase->setObjectName(QString::fromUtf8("toolButtonPhase"));

        gridLayout->addWidget(toolButtonPhase, 2, 2, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 3, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        spinOffset = new QSpinBox(layoutWidget);
        spinOffset->setObjectName(QString::fromUtf8("spinOffset"));
        spinOffset->setMaximum(3300);

        gridLayout->addWidget(spinOffset, 3, 1, 1, 1);

        toolButtonOffset = new QToolButton(layoutWidget);
        toolButtonOffset->setObjectName(QString::fromUtf8("toolButtonOffset"));

        gridLayout->addWidget(toolButtonOffset, 3, 2, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 3, 1, 1);


        retranslateUi(PanelSin);

        QMetaObject::connectSlotsByName(PanelSin);
    } // setupUi

    void retranslateUi(QWidget *PanelSin)
    {
        PanelSin->setWindowTitle(QApplication::translate("PanelSin", "Form", 0, QApplication::UnicodeUTF8));
        labelFormula->setText(QApplication::translate("PanelSin", "formula", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("PanelSin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:12pt; color:#0000ff;\">Parameters Panel of Sine</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PanelSin", "Freqeuncy:", 0, QApplication::UnicodeUTF8));
        toolButtonFreq->setText(QApplication::translate("PanelSin", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PanelSin", "Hz", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PanelSin", "Amplitude:    ", 0, QApplication::UnicodeUTF8));
        toolButtonAmp->setText(QApplication::translate("PanelSin", "...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PanelSin", "uV", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PanelSin", "Phase:       ", 0, QApplication::UnicodeUTF8));
        toolButtonPhase->setText(QApplication::translate("PanelSin", "...", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PanelSin", "Degree", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("PanelSin", "Offset:         ", 0, QApplication::UnicodeUTF8));
        toolButtonOffset->setText(QApplication::translate("PanelSin", "...", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("PanelSin", "mV", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PanelSin: public Ui_PanelSin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANELSIN_H
