/********************************************************************************
** Form generated from reading UI file 'lfmpanel.ui'
**
** Created: Wed Mar 14 14:12:46 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LFMPANEL_H
#define UI_LFMPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lfmPanel
{
public:
    QLabel *label_10;

    void setupUi(QWidget *lfmPanel)
    {
        if (lfmPanel->objectName().isEmpty())
            lfmPanel->setObjectName(QString::fromUtf8("lfmPanel"));
        lfmPanel->resize(350, 350);
        label_10 = new QLabel(lfmPanel);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(90, 10, 221, 16));

        retranslateUi(lfmPanel);

        QMetaObject::connectSlotsByName(lfmPanel);
    } // setupUi

    void retranslateUi(QWidget *lfmPanel)
    {
        lfmPanel->setWindowTitle(QApplication::translate("lfmPanel", "Form", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("lfmPanel", "Parameters Panel of LFM", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class lfmPanel: public Ui_lfmPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LFMPANEL_H
