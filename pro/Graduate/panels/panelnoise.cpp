#include "panelnoise.h"
#include "ui_panelnoise.h"

PanelNoise::PanelNoise(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PanelNoise)
{
    ui->setupUi(this);
    m_keyboardFreqLow = new Keyboard();
    m_keyboardFreqLow->setWindowTitle("Keyboard of Freqency Low");
    m_keyboardFreqHigh = new Keyboard();
    m_keyboardFreqHigh->setWindowTitle("Keyboard of Freqency High");
    m_keyboardAmp = new Keyboard();
    m_keyboardAmp->setWindowTitle("Keyboard of Amplify");
    m_keyboardN = new Keyboard();
    m_keyboardN->setWindowTitle("Keyboard of Orders");

    connect(m_keyboardFreqLow,SIGNAL(finishEdit(int)),ui->spinFreqLow,SLOT(setValue(int)));
    connect(m_keyboardFreqHigh,SIGNAL(finishEdit(int)),ui->spinFreqHigh,SLOT(setValue(int)));
    connect(m_keyboardAmp,SIGNAL(finishEdit(int)),ui->spinAmp,SLOT(setValue(int)));
    connect(m_keyboardN,SIGNAL(finishEdit(int)),ui->spinN,SLOT(setValue(int)));
}

PanelNoise::~PanelNoise()
{
    delete ui;
}

double PanelNoise::getAmp()
{
    return ui->spinAmp->value();
}

double PanelNoise::getFreqLow()
{
    return ui->spinFreqLow->value();
}

double PanelNoise::getFreqHigh()
{
    return ui->spinFreqHigh->value();
}

int PanelNoise::getN()
{
    return ui->spinN->value();
}

int PanelNoise::getWindow()
{
    return ui->comboBoxWindow->currentIndex()+1;
}

void PanelNoise::on_toolButtonFreqLow_clicked()
{
    m_keyboardFreqLow->show();
}

void PanelNoise::on_toolButtonFreqHigh_clicked()
{
    m_keyboardFreqHigh->show();
}

void PanelNoise::on_toolButtonAmp_clicked()
{
    m_keyboardAmp->show();
}

void PanelNoise::on_toolButtonN_clicked()
{
    m_keyboardN->show();
}

void PanelNoise::on_spinFreqLow_valueChanged(int arg1)
{
    emit parametersChanged();
}

void PanelNoise::on_spinFreqHigh_valueChanged(int arg1)
{
    emit parametersChanged();
}

void PanelNoise::on_spinAmp_valueChanged(int arg1)
{
    emit parametersChanged();
}

void PanelNoise::on_spinN_valueChanged(int arg1)
{
    emit parametersChanged();
}

void PanelNoise::on_comboBoxWindow_currentIndexChanged(int index)
{
    emit parametersChanged();
}
