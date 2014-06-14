#include "panelcustom.h"
#include "ui_panelcustom.h"

PanelCustom::PanelCustom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PanelCustom)
{
    ui->setupUi(this);
}

PanelCustom::~PanelCustom()
{
    delete ui;
}

void PanelCustom::setPathText(QString str)
{
    ui->labelPath->setText(str);
}

void PanelCustom::setSamplings(int x)
{
    ui->labelPoints->setText(QString::number(x));
}
