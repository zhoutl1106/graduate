#include "panelcw.h"
#include "ui_panelcw.h"

PanelCW::PanelCW(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PanelCW)
{
    ui->setupUi(this);
    m_keyboardFreq = new Keyboard();
    m_keyboardFreq->setWindowTitle("Keyboard of Freqency");
    m_keyboardAmp = new Keyboard();
    m_keyboardAmp->setWindowTitle("Keyboard of Amplify");
    m_keyboardPhase = new Keyboard();
    m_keyboardPhase->setWindowTitle("Keyboard of Phase");
    m_keyboardTau = new Keyboard();
    m_keyboardTau->setWindowTitle("Keyboard of Pulse Width");

     ui->labelFormula->setPixmap(QPixmap("/images/cwFormula.png").scaled(ui->labelFormula->size().width(),ui->labelFormula->size().height()));

    connect(m_keyboardFreq,SIGNAL(finishEdit(int)),ui->spinFreq,SLOT(setValue(int)));
    connect(m_keyboardAmp,SIGNAL(finishEdit(int)),ui->spinAmp,SLOT(setValue(int)));
    connect(m_keyboardPhase,SIGNAL(finishEdit(int)),ui->spinPhase,SLOT(setValue(int)));
    connect(m_keyboardTau,SIGNAL(finishEdit(int)),ui->spinTau,SLOT(setValue(int)));
}

PanelCW::~PanelCW()
{
    delete ui;
}

double PanelCW::getAmp()
{
    return ui->spinAmp->value();
}

double PanelCW::getFreq()
{
    return ui->spinFreq->value();
}

double PanelCW::getPhase()
{
    return ui->spinPhase->value();
}

double PanelCW::getTau()
{
    return ui->spinTau->value();
}

void PanelCW::on_toolButtonFreq_clicked()
{
    m_keyboardFreq->show();
}

void PanelCW::on_toolButtonAmp_clicked()
{
    m_keyboardAmp->show();
}

void PanelCW::on_toolButtonPhase_clicked()
{
    m_keyboardPhase->show();
}

void PanelCW::on_toolButtonTau_clicked()
{
    m_keyboardTau->show();
}

void PanelCW::on_spinFreq_valueChanged(int arg1)
{
    emit parametersChanged();
}

void PanelCW::on_spinAmp_valueChanged(int arg1)
{
    emit parametersChanged();
}

void PanelCW::on_spinPhase_valueChanged(int arg1)
{
    emit parametersChanged();
}

void PanelCW::on_spinTau_valueChanged(int arg1)
{
    emit parametersChanged();
}
