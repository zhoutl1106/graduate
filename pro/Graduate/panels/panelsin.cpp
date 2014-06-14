#include "panelsin.h"
#include "ui_panelsin.h"

PanelSin::PanelSin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PanelSin)
{
    ui->setupUi(this);
    m_keyboardFreq = new Keyboard();
    m_keyboardFreq->setWindowTitle("Keyboard of Freqency");
    m_keyboardAmp = new Keyboard();
    m_keyboardAmp->setWindowTitle("Keyboard of Amplify");
    m_keyboardPhase = new Keyboard();
    m_keyboardPhase->setWindowTitle("Keyboard of Phase");
    m_keyboardOffset = new Keyboard();
    m_keyboardOffset->setWindowTitle("Keyboard of Offset");

     ui->labelFormula->setPixmap(QPixmap("/images/sinFormula.png").scaled(ui->labelFormula->size().width(),ui->labelFormula->size().height()));

    connect(m_keyboardFreq,SIGNAL(finishEdit(int)),ui->spinFreq,SLOT(setValue(int)));
    connect(m_keyboardAmp,SIGNAL(finishEdit(int)),ui->spinAmp,SLOT(setValue(int)));
    connect(m_keyboardPhase,SIGNAL(finishEdit(int)),ui->spinPhase,SLOT(setValue(int)));
    connect(m_keyboardOffset,SIGNAL(finishEdit(int)),ui->spinOffset,SLOT(setValue(int)));
}

PanelSin::~PanelSin()
{
    delete ui;
}

void PanelSin::on_toolButtonFreq_clicked()
{
    m_keyboardFreq->show();
}

void PanelSin::on_toolButtonAmp_clicked()
{
    m_keyboardAmp->show();
}

void PanelSin::on_toolButtonPhase_clicked()
{
    m_keyboardPhase->show();
}

void PanelSin::on_toolButtonOffset_clicked()
{
    m_keyboardOffset->show();
}

double PanelSin::getFreq()
{
    return ui->spinFreq->value();
}

double PanelSin::getAmp()
{
    return ui->spinAmp->value();
}

double PanelSin::getPhase()
{
    return ui->spinPhase->value();
}

double PanelSin::getOffset()
{
    return ui->spinOffset->value();
}

void PanelSin::on_spinFreq_valueChanged(int arg1)
{
    emit parametersChanged();
}

void PanelSin::on_spinAmp_valueChanged(int arg1)
{
    emit parametersChanged();
}

void PanelSin::on_spinPhase_valueChanged(int arg1)
{
    emit parametersChanged();
}

void PanelSin::on_spinOffset_valueChanged(int arg1)
{
    emit parametersChanged();
}
