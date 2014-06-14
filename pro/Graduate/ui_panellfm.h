/********************************************************************************
** Form generated from reading UI file 'panellfm.ui'
**
** Created: Wed Jun 13 20:30:53 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANELLFM_H
#define UI_PANELLFM_H

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

class Ui_PanelLFM
{
public:
    QLabel *labelFormula;
    QLabel *label_11;
    QLabel *labelFreqHigh;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinFreqLow;
    QToolButton *toolButtonFreqLow;
    QLabel *label_2;
    QLabel *label_10;
    QSpinBox *spinK;
    QToolButton *toolButtonK;
    QLabel *label_13;
    QLabel *label_3;
    QSpinBox *spinAmp;
    QToolButton *toolButtonAmp;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *spinTau;
    QToolButton *toolButtonTau;
    QLabel *label_6;

    void setupUi(QWidget *PanelLFM)
    {
        if (PanelLFM->objectName().isEmpty())
            PanelLFM->setObjectName(QString::fromUtf8("PanelLFM"));
        PanelLFM->resize(300, 300);
        labelFormula = new QLabel(PanelLFM);
        labelFormula->setObjectName(QString::fromUtf8("labelFormula"));
        labelFormula->setGeometry(QRect(49, 11, 211, 51));
        label_11 = new QLabel(PanelLFM);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(49, -1, 241, 16));
        labelFreqHigh = new QLabel(PanelLFM);
        labelFreqHigh->setObjectName(QString::fromUtf8("labelFreqHigh"));
        labelFreqHigh->setGeometry(QRect(90, 220, 211, 31));
        layoutWidget = new QWidget(PanelLFM);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 56, 298, 167));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinFreqLow = new QSpinBox(layoutWidget);
        spinFreqLow->setObjectName(QString::fromUtf8("spinFreqLow"));
        spinFreqLow->setMinimum(1);
        spinFreqLow->setMaximum(9999999);
        spinFreqLow->setValue(10000);

        gridLayout->addWidget(spinFreqLow, 0, 1, 1, 1);

        toolButtonFreqLow = new QToolButton(layoutWidget);
        toolButtonFreqLow->setObjectName(QString::fromUtf8("toolButtonFreqLow"));

        gridLayout->addWidget(toolButtonFreqLow, 0, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 1, 0, 1, 1);

        spinK = new QSpinBox(layoutWidget);
        spinK->setObjectName(QString::fromUtf8("spinK"));
        spinK->setMinimum(1);
        spinK->setMaximum(999999999);
        spinK->setValue(100000);

        gridLayout->addWidget(spinK, 1, 1, 1, 1);

        toolButtonK = new QToolButton(layoutWidget);
        toolButtonK->setObjectName(QString::fromUtf8("toolButtonK"));

        gridLayout->addWidget(toolButtonK, 1, 2, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 1, 3, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        spinAmp = new QSpinBox(layoutWidget);
        spinAmp->setObjectName(QString::fromUtf8("spinAmp"));
        spinAmp->setMinimum(1);
        spinAmp->setMaximum(2500000);
        spinAmp->setValue(1000000);

        gridLayout->addWidget(spinAmp, 2, 1, 1, 1);

        toolButtonAmp = new QToolButton(layoutWidget);
        toolButtonAmp->setObjectName(QString::fromUtf8("toolButtonAmp"));

        gridLayout->addWidget(toolButtonAmp, 2, 2, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 3, 1, 1);

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


        retranslateUi(PanelLFM);

        QMetaObject::connectSlotsByName(PanelLFM);
    } // setupUi

    void retranslateUi(QWidget *PanelLFM)
    {
        PanelLFM->setWindowTitle(QApplication::translate("PanelLFM", "Form", 0, QApplication::UnicodeUTF8));
        labelFormula->setText(QApplication::translate("PanelLFM", "formula", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("PanelLFM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:12pt; color:#0000ff;\">Parameters Panel of LFM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelFreqHigh->setText(QApplication::translate("PanelLFM", "K", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PanelLFM", "Freq Low:", 0, QApplication::UnicodeUTF8));
        toolButtonFreqLow->setText(QApplication::translate("PanelLFM", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PanelLFM", "Hz", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("PanelLFM", "K:", 0, QApplication::UnicodeUTF8));
        toolButtonK->setText(QApplication::translate("PanelLFM", "...", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("PanelLFM", "Hz/ms", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PanelLFM", "Amplitude:    ", 0, QApplication::UnicodeUTF8));
        toolButtonAmp->setText(QApplication::translate("PanelLFM", "...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PanelLFM", "uV", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PanelLFM", "Pulse Width: ", 0, QApplication::UnicodeUTF8));
        toolButtonTau->setText(QApplication::translate("PanelLFM", "...", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PanelLFM", "us", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PanelLFM: public Ui_PanelLFM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANELLFM_H
