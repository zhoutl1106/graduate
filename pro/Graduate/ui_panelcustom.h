/********************************************************************************
** Form generated from reading UI file 'panelcustom.ui'
**
** Created: Wed Jun 13 20:30:53 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANELCUSTOM_H
#define UI_PANELCUSTOM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PanelCustom
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *labelPath;
    QLabel *label_3;
    QLabel *labelPoints;

    void setupUi(QWidget *PanelCustom)
    {
        if (PanelCustom->objectName().isEmpty())
            PanelCustom->setObjectName(QString::fromUtf8("PanelCustom"));
        PanelCustom->resize(300, 300);
        widget = new QWidget(PanelCustom);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 30, 291, 101));
        QFont font;
        font.setPointSize(14);
        widget->setFont(font);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        labelPath = new QLabel(widget);
        labelPath->setObjectName(QString::fromUtf8("labelPath"));
        labelPath->setFont(font);

        gridLayout->addWidget(labelPath, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        labelPoints = new QLabel(widget);
        labelPoints->setObjectName(QString::fromUtf8("labelPoints"));
        labelPoints->setFont(font);

        gridLayout->addWidget(labelPoints, 1, 1, 1, 1);


        retranslateUi(PanelCustom);

        QMetaObject::connectSlotsByName(PanelCustom);
    } // setupUi

    void retranslateUi(QWidget *PanelCustom)
    {
        PanelCustom->setWindowTitle(QApplication::translate("PanelCustom", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PanelCustom", "File Path:", 0, QApplication::UnicodeUTF8));
        labelPath->setText(QString());
        label_3->setText(QApplication::translate("PanelCustom", "Samples:", 0, QApplication::UnicodeUTF8));
        labelPoints->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PanelCustom: public Ui_PanelCustom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANELCUSTOM_H
