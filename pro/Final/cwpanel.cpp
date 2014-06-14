#include "cwpanel.h"
#include "ui_cwpanel.h"

cwPanel::cwPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cwPanel)
{
    ui->setupUi(this);
}

cwPanel::~cwPanel()
{
    delete ui;
}
