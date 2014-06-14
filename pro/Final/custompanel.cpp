#include "custompanel.h"
#include "ui_custompanel.h"

customPanel::customPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::customPanel)
{
    ui->setupUi(this);
}

customPanel::~customPanel()
{
    delete ui;
}

void customPanel::setPathText(QString str)
{
    ui->labelPath->setText(str);
}
