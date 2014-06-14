#include "sinpanel.h"
#include "ui_sinpanel.h"

sinPanel::sinPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sinPanel)
{
    ui->setupUi(this);
    m_keyboardFreq = new keyboard();
    m_keyboardFreq->setWindowTitle("Keyboard of Freqency");
    m_keyboardAmp = new keyboard();
    m_keyboardAmp->setWindowTitle("Keyboard of Amplify");
    m_keyboardPhase = new keyboard();
    m_keyboardPhase->setWindowTitle("Keyboard of Phase");
    m_keyboardShift = new keyboard();
    m_keyboardShift->setWindowTitle("Keyboard of Shift");

    connect(m_keyboardFreq,SIGNAL(finishEdit(int)),ui->spinFreq,SLOT(setValue(int)));
    connect(m_keyboardAmp,SIGNAL(finishEdit(int)),ui->spinAmp,SLOT(setValue(int)));
    connect(m_keyboardPhase,SIGNAL(finishEdit(int)),ui->spinPhase,SLOT(setValue(int)));
    connect(m_keyboardShift,SIGNAL(finishEdit(int)),ui->spinShift,SLOT(setValue(int)));
}

sinPanel::~sinPanel()
{
    delete ui;
}

void sinPanel::on_toolButtonFreq_clicked()
{
    m_keyboardFreq->show();
}

void sinPanel::on_toolButtonAmp_clicked()
{
    m_keyboardAmp->show();
}

void sinPanel::on_toolButtonPhase_clicked()
{
    m_keyboardPhase->show();
}

void sinPanel::on_toolButtonShift_clicked()
{
    m_keyboardShift->show();
}

double sinPanel::getFreq()
{
    return ui->spinFreq->text().toDouble();
}

double sinPanel::getAmp()
{
    return ui->spinAmp->text().toDouble();
}

double sinPanel::getPhase()
{
    return ui->spinPhase->text().toDouble();
}

double sinPanel::getShift()
{
    return ui->spinShift->text().toDouble();
}

void sinPanel::on_spinFreq_valueChanged(int arg1)
{
    emit parametersChanged();
}

void sinPanel::on_spinAmp_valueChanged(int arg1)
{
    emit parametersChanged();
}

void sinPanel::on_spinPhase_valueChanged(int arg1)
{
    emit parametersChanged();
}

void sinPanel::on_spinShift_valueChanged(int arg1)
{
    emit parametersChanged();
}
