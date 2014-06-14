/********************************************************************************
** Form generated from reading UI file 'panelnoise.ui'
**
** Created: Wed Jun 13 20:30:53 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANELNOISE_H
#define UI_PANELNOISE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PanelNoise
{
public:
    QLabel *label_11;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QSpinBox *spinN;
    QToolButton *toolButtonN;
    QLabel *label_6;
    QComboBox *comboBoxWindow;
    QLabel *label;
    QSpinBox *spinFreqLow;
    QToolButton *toolButtonFreqLow;
    QLabel *label_2;
    QLabel *label_10;
    QSpinBox *spinFreqHigh;
    QToolButton *toolButtonFreqHigh;
    QLabel *label_13;
    QLabel *label_3;
    QSpinBox *spinAmp;
    QToolButton *toolButtonAmp;
    QLabel *label_4;

    void setupUi(QWidget *PanelNoise)
    {
        if (PanelNoise->objectName().isEmpty())
            PanelNoise->setObjectName(QString::fromUtf8("PanelNoise"));
        PanelNoise->resize(300, 300);
        label_11 = new QLabel(PanelNoise);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 0, 241, 16));
        layoutWidget = new QWidget(PanelNoise);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 40, 299, 162));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        spinN = new QSpinBox(layoutWidget);
        spinN->setObjectName(QString::fromUtf8("spinN"));
        spinN->setMinimum(1);
        spinN->setMaximum(9999999);
        spinN->setValue(80);

        gridLayout->addWidget(spinN, 0, 1, 1, 1);

        toolButtonN = new QToolButton(layoutWidget);
        toolButtonN->setObjectName(QString::fromUtf8("toolButtonN"));

        gridLayout->addWidget(toolButtonN, 0, 2, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        comboBoxWindow = new QComboBox(layoutWidget);
        comboBoxWindow->setObjectName(QString::fromUtf8("comboBoxWindow"));

        gridLayout->addWidget(comboBoxWindow, 1, 1, 1, 2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        spinFreqLow = new QSpinBox(layoutWidget);
        spinFreqLow->setObjectName(QString::fromUtf8("spinFreqLow"));
        spinFreqLow->setMinimum(1);
        spinFreqLow->setMaximum(9999999);
        spinFreqLow->setValue(10000);

        gridLayout->addWidget(spinFreqLow, 2, 1, 1, 1);

        toolButtonFreqLow = new QToolButton(layoutWidget);
        toolButtonFreqLow->setObjectName(QString::fromUtf8("toolButtonFreqLow"));

        gridLayout->addWidget(toolButtonFreqLow, 2, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 3, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 3, 0, 1, 1);

        spinFreqHigh = new QSpinBox(layoutWidget);
        spinFreqHigh->setObjectName(QString::fromUtf8("spinFreqHigh"));
        spinFreqHigh->setMinimum(1);
        spinFreqHigh->setMaximum(9999999);
        spinFreqHigh->setValue(15000);

        gridLayout->addWidget(spinFreqHigh, 3, 1, 1, 1);

        toolButtonFreqHigh = new QToolButton(layoutWidget);
        toolButtonFreqHigh->setObjectName(QString::fromUtf8("toolButtonFreqHigh"));

        gridLayout->addWidget(toolButtonFreqHigh, 3, 2, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 3, 3, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        spinAmp = new QSpinBox(layoutWidget);
        spinAmp->setObjectName(QString::fromUtf8("spinAmp"));
        spinAmp->setMinimum(1);
        spinAmp->setMaximum(2500000);
        spinAmp->setValue(1000000);

        gridLayout->addWidget(spinAmp, 4, 1, 1, 1);

        toolButtonAmp = new QToolButton(layoutWidget);
        toolButtonAmp->setObjectName(QString::fromUtf8("toolButtonAmp"));

        gridLayout->addWidget(toolButtonAmp, 4, 2, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 3, 1, 1);


        retranslateUi(PanelNoise);

        comboBoxWindow->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(PanelNoise);
    } // setupUi

    void retranslateUi(QWidget *PanelNoise)
    {
        PanelNoise->setWindowTitle(QApplication::translate("PanelNoise", "Form", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("PanelNoise", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:12pt; color:#0000ff;\">Parameters Panel of Noise</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PanelNoise", "Orders:", 0, QApplication::UnicodeUTF8));
        toolButtonN->setText(QApplication::translate("PanelNoise", "...", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PanelNoise", "Window:", 0, QApplication::UnicodeUTF8));
        comboBoxWindow->clear();
        comboBoxWindow->insertItems(0, QStringList()
         << QApplication::translate("PanelNoise", "Rectangular", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PanelNoise", "Tapered rectangular", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PanelNoise", "Triangular", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PanelNoise", "Hanning", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PanelNoise", "Hamming", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PanelNoise", "Blackman", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("PanelNoise", "Freq Low:", 0, QApplication::UnicodeUTF8));
        toolButtonFreqLow->setText(QApplication::translate("PanelNoise", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PanelNoise", "Hz", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("PanelNoise", "Freq High:", 0, QApplication::UnicodeUTF8));
        toolButtonFreqHigh->setText(QApplication::translate("PanelNoise", "...", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("PanelNoise", "Hz", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PanelNoise", "Amplitude:    ", 0, QApplication::UnicodeUTF8));
        toolButtonAmp->setText(QApplication::translate("PanelNoise", "...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PanelNoise", "uV", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PanelNoise: public Ui_PanelNoise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANELNOISE_H
