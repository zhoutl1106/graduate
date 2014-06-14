/********************************************************************************
** Form generated from reading UI file 'hfmpanel.ui'
**
** Created: Wed Mar 14 14:12:46 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HFMPANEL_H
#define UI_HFMPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hfmPanel
{
public:
    QLabel *label_10;

    void setupUi(QWidget *hfmPanel)
    {
        if (hfmPanel->objectName().isEmpty())
            hfmPanel->setObjectName(QString::fromUtf8("hfmPanel"));
        hfmPanel->resize(350, 350);
        label_10 = new QLabel(hfmPanel);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(90, 10, 221, 16));

        retranslateUi(hfmPanel);

        QMetaObject::connectSlotsByName(hfmPanel);
    } // setupUi

    void retranslateUi(QWidget *hfmPanel)
    {
        hfmPanel->setWindowTitle(QApplication::translate("hfmPanel", "Form", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("hfmPanel", "Parameters Panel of HFM", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class hfmPanel: public Ui_hfmPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFMPANEL_H
