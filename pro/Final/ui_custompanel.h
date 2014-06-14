/********************************************************************************
** Form generated from reading UI file 'custompanel.ui'
**
** Created: Wed Mar 14 14:12:46 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMPANEL_H
#define UI_CUSTOMPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customPanel
{
public:
    QLabel *label_10;
    QLabel *labelPath;

    void setupUi(QWidget *customPanel)
    {
        if (customPanel->objectName().isEmpty())
            customPanel->setObjectName(QString::fromUtf8("customPanel"));
        customPanel->resize(350, 350);
        label_10 = new QLabel(customPanel);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(80, 10, 221, 16));
        labelPath = new QLabel(customPanel);
        labelPath->setObjectName(QString::fromUtf8("labelPath"));
        labelPath->setGeometry(QRect(25, 50, 300, 100));

        retranslateUi(customPanel);

        QMetaObject::connectSlotsByName(customPanel);
    } // setupUi

    void retranslateUi(QWidget *customPanel)
    {
        customPanel->setWindowTitle(QApplication::translate("customPanel", "Form", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("customPanel", "Parameters Panel of Custom", 0, QApplication::UnicodeUTF8));
        labelPath->setText(QApplication::translate("customPanel", "You haven't load any waveform file!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class customPanel: public Ui_customPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMPANEL_H
