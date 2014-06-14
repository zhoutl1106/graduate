#include "hfmpanel.h"
#include "ui_hfmpanel.h"

hfmPanel::hfmPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hfmPanel)
{
    ui->setupUi(this);
}

hfmPanel::~hfmPanel()
{
    delete ui;
}
