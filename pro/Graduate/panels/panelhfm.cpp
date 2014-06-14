#include "panelhfm.h"
#include "ui_panelhfm.h"

PanelHFM::PanelHFM(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PanelHFM)
{
    ui->setupUi(this);
    m_keyboardFreqLow = new Keyboard();
    m_keyboardFreqLow->setWindowTitle("Keyboard of Freqency Low");
    m_keyboardM = new Keyboard();
    m_keyboardM->setWindowTitle("Keyboard of M");
    m_keyboardAmp = new Keyboard();
    m_keyboardAmp->setWindowTitle("Keyboard of Amplify");
    m_keyboardTau = new Keyboard();
    m_keyboardTau->setWindowTitle("Keyboard of Pulse Width");

    ui->labelFormula->setPixmap(QPixmap("/images/HFMFormula.png").scaled(ui->labelFormula->size().width(),ui->labelFormula->size().height()));

    connect(m_keyboardFreqLow,SIGNAL(finishEdit(int)),ui->spinFreqLow,SLOT(setValue(int)));
    connect(m_keyboardM,SIGNAL(finishEdit(int)),ui->spinM,SLOT(setValue(int)));
    connect(m_keyboardAmp,SIGNAL(finishEdit(int)),ui->spinAmp,SLOT(setValue(int)));
    connect(m_keyboardTau,SIGNAL(finishEdit(int)),ui->spinTau,SLOT(setValue(int)));
}

PanelHFM::~PanelHFM()
{
    delete ui;
}

double PanelHFM::getAmp()
{
    return ui->spinAmp->value();
}

double PanelHFM::getFreqLow()
{
    return ui->spinFreqLow->value();
}

double PanelHFM::getFreqHigh()
{
    return ui->spinFreqLow->value() + ui->spinM->value()*ui->spinTau->value()/1000000.0;
}

double PanelHFM::getTau()
{
    return ui->spinTau->value();
}

double PanelHFM::getM()
{
    return ui->spinM->value();
}

void PanelHFM::on_toolButtonFreqLow_clicked()
{
    m_keyboardFreqLow->show();
}

void PanelHFM::on_toolButtonM_clicked()
{
    m_keyboardM->show();
}

void PanelHFM::on_toolButtonAmp_clicked()
{
    m_keyboardAmp->show();
}

void PanelHFM::on_toolButtonTau_clicked()
{
    m_keyboardTau->show();
}

void PanelHFM::on_spinFreqLow_valueChanged(int arg1)
{
    emit parametersChanged();
    ui->labelFreqHigh->setText("Freq High = " + QString::number(ui->spinFreqLow->value() + ui->spinM->value()*ui->spinTau->value()/1000.0) + " Hz");
}

void PanelHFM::on_spinM_valueChanged(int arg1)
{
    emit parametersChanged();
    ui->labelFreqHigh->setText("Freq High = " + QString::number(ui->spinFreqLow->value() + ui->spinM->value()*ui->spinTau->value()/1000.0) + " Hz");
}

void PanelHFM::on_spinAmp_valueChanged(int arg1)
{
    emit parametersChanged();
}

void PanelHFM::on_spinTau_valueChanged(int arg1)
{
    emit parametersChanged();
    ui->labelFreqHigh->setText("Freq High = " + QString::number(ui->spinFreqLow->value() + ui->spinM->value()*ui->spinTau->value()/1000.0) + " Hz");
}
