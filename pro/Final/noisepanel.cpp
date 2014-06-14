#include "noisepanel.h"
#include "ui_noisepanel.h"

noisePanel::noisePanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::noisePanel)
{
    ui->setupUi(this);
}

noisePanel::~noisePanel()
{
    delete ui;
}
