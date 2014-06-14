/********************************************************************************
** Form generated from reading UI file 'cwpanel.ui'
**
** Created: Wed Mar 14 14:12:46 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CWPANEL_H
#define UI_CWPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cwPanel
{
public:
    QLabel *label_10;

    void setupUi(QWidget *cwPanel)
    {
        if (cwPanel->objectName().isEmpty())
            cwPanel->setObjectName(QString::fromUtf8("cwPanel"));
        cwPanel->resize(350, 350);
        label_10 = new QLabel(cwPanel);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(80, 10, 221, 16));

        retranslateUi(cwPanel);

        QMetaObject::connectSlotsByName(cwPanel);
    } // setupUi

    void retranslateUi(QWidget *cwPanel)
    {
        cwPanel->setWindowTitle(QApplication::translate("cwPanel", "Form", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("cwPanel", "Parameters Panel of CW Pulse", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class cwPanel: public Ui_cwPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CWPANEL_H
