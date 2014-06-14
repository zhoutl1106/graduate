/********************************************************************************
** Form generated from reading UI file 'noisepanel.ui'
**
** Created: Wed Mar 14 14:12:46 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOISEPANEL_H
#define UI_NOISEPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_noisePanel
{
public:
    QLabel *label_10;

    void setupUi(QWidget *noisePanel)
    {
        if (noisePanel->objectName().isEmpty())
            noisePanel->setObjectName(QString::fromUtf8("noisePanel"));
        noisePanel->resize(350, 350);
        label_10 = new QLabel(noisePanel);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(90, 10, 221, 16));

        retranslateUi(noisePanel);

        QMetaObject::connectSlotsByName(noisePanel);
    } // setupUi

    void retranslateUi(QWidget *noisePanel)
    {
        noisePanel->setWindowTitle(QApplication::translate("noisePanel", "Form", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("noisePanel", "Parameters Panel of Noise", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class noisePanel: public Ui_noisePanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOISEPANEL_H
