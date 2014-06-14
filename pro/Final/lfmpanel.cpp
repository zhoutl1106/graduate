#include "lfmpanel.h"
#include "ui_lfmpanel.h"

lfmPanel::lfmPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lfmPanel)
{
    ui->setupUi(this);
}

lfmPanel::~lfmPanel()
{
    delete ui;
}
