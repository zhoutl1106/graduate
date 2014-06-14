#include "panellfm.h"
#include "ui_panellfm.h"

PanelLFM::PanelLFM(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PanelLFM)
{
    ui->setupUi(this);
    m_keyboardFreqLow = new Keyboard();
    m_keyboardFreqLow->setWindowTitle("Keyboard of Freqency Low");
    m_keyboardK = new Keyboard();
    m_keyboardK->setWindowTitle("Keyboard of K");
    m_keyboardAmp = new Keyboard();
    m_keyboardAmp->setWindowTitle("Keyboard of Amplify");
    m_keyboardTau = new Keyboard();
    m_keyboardTau->setWindowTitle("Keyboard of Pulse Width");

    ui->labelFormula->setPixmap(QPixmap("/images/lfmFormula.png").scaled(ui->labelFormula->size().width(),ui->labelFormula->size().height()));

    connect(m_keyboardFreqLow,SIGNAL(finishEdit(int)),ui->spinFreqLow,SLOT(setValue(int)));
    connect(m_keyboardK,SIGNAL(finishEdit(int)),ui->spinK,SLOT(setValue(int)));
    connect(m_keyboardAmp,SIGNAL(finishEdit(int)),ui->spinAmp,SLOT(setValue(int)));
    connect(m_keyboardTau,SIGNAL(finishEdit(int)),ui->spinTau,SLOT(setValue(int)));
}

PanelLFM::~PanelLFM()
{
    delete ui;
}

double PanelLFM::getAmp()
{
    return ui->spinAmp->value();
}

double PanelLFM::getFreqLow()
{
    return ui->spinFreqLow->value();
}

double PanelLFM::getFreqHigh()
{
    return ui->spinFreqLow->value() + ui->spinK->value()*ui->spinTau->value()/1000000.0;
}

double PanelLFM::getTau()
{
    return ui->spinTau->value();
}

double PanelLFM::getK()
{
    return ui->spinK->value();
}

void PanelLFM::on_toolButtonFreqLow_clicked()
{
    m_keyboardFreqLow->show();
}

void PanelLFM::on_toolButtonK_clicked()
{
    m_keyboardK->show();
}

void PanelLFM::on_toolButtonAmp_clicked()
{
    m_keyboardAmp->show();
}

void PanelLFM::on_toolButtonTau_clicked()
{
    m_keyboardTau->show();
}

void PanelLFM::on_spinFreqLow_valueChanged(int arg1)
{
    emit parametersChanged();
    ui->labelFreqHigh->setText("Freq High = " + QString::number(ui->spinFreqLow->value() + ui->spinK->value()*ui->spinTau->value()/1000.0) + " Hz");
}

void PanelLFM::on_spinK_valueChanged(int arg1)
{
    emit parametersChanged();
    ui->labelFreqHigh->setText("Freq High = " + QString::number(ui->spinFreqLow->value() + ui->spinK->value()*ui->spinTau->value()/1000.0) + " Hz");
}

void PanelLFM::on_spinAmp_valueChanged(int arg1)
{
    emit parametersChanged();
}

void PanelLFM::on_spinTau_valueChanged(int arg1)
{
    emit parametersChanged();
    ui->labelFreqHigh->setText("Freq High = " + QString::number(ui->spinFreqLow->value() + ui->spinK->value()*ui->spinTau->value()/1000.0) + " Hz");
}
