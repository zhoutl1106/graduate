#include "dialogsettings.h"
#include "ui_dialogsettings.h"
#include <QMessageBox>
#include <QPainter>
#include <stdio.h>

DialogSettings::DialogSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSettings)
{
    ui->setupUi(this);
    this->setWindowTitle("Settings");
}

DialogSettings::~DialogSettings()
{
    delete ui;

    m_samplingRate = 1000000;
}

void DialogSettings::paintEvent(QPaintEvent *event)
{
    //if(ui->tabWidget->currentIndex() == 2)
    {
        QPainter p(this);
        p.setRenderHint(QPainter::Antialiasing, true);
        p.fillRect(this->size().width()*6/7,this->size().height()/6,30,90,QColor(ui->horizontalSliderR->value(),ui->horizontalSliderG->value(),ui->horizontalSliderB->value()));
    }
}

void DialogSettings::on_buttonBox_accepted()
{
    QMessageBox::warning(this,"Max Frequency Waring","The Maximum Frequency of your signal could NOT over "
                         + QString::number(m_samplingRate/ui->spinBoxTimes->value()) + " Hz");
    this->close();
    emit setSamplingRateAndMaxFreqAndDivisor(m_samplingRate,m_samplingRate/ui->spinBoxTimes->value(),ui->horizontalSliderFs->value()*2);
    printf("DialogSettings:Fs = %d\n",ui->horizontalSliderFs->value());
    emit setColor(ui->horizontalSliderR->value(),ui->horizontalSliderG->value(),ui->horizontalSliderB->value());
    emit setPeroids(ui->spinBoxPeroids->value());
    emit setPointsPerPixel(ui->spinBoxPointsPerPixel->value());
}

void DialogSettings::on_buttonBox_rejected()
{
    this->close();
}

void DialogSettings::on_horizontalSliderR_valueChanged(int value)
{
    update();
}

void DialogSettings::on_horizontalSliderG_valueChanged(int value)
{
    update();
}

void DialogSettings::on_horizontalSliderB_valueChanged(int value)
{
    update();
}

void DialogSettings::on_pushButton_clicked()
{
    ui->horizontalSliderFs->setValue(ui->horizontalSliderFs->value() - 1);
}

void DialogSettings::on_pushButton_2_clicked()
{
    ui->horizontalSliderFs->setValue(ui->horizontalSliderFs->value() + 1);
}

void DialogSettings::on_horizontalSliderFs_valueChanged(int value)
{
    m_samplingRate = 5000000/ui->horizontalSliderFs->value();
    ui->labelFs->setText(QString::number(m_samplingRate/1000));
    ui->labeli->setText("i = "+QString::number(ui->horizontalSliderFs->value()*2));
}
