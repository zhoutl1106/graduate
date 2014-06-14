#include "keyboard.h"
#include "ui_keyboard.h"
#include <QMessageBox>

keyboard::keyboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::keyboard)
{
    ui->setupUi(this);
    number = 0;
}

keyboard::~keyboard()
{
    delete ui;
}

void keyboard::on_buttonBox_accepted()
{
    emit finishEdit(number);
    this->close();
    number = 0;
    ui->lcdNumber->display(number);
}

void keyboard::on_buttonBox_rejected()
{
    this->close();
}

void keyboard::on_pushButtonNumBack_clicked()
{
    number /= 10;
    ui->lcdNumber->display(number);
}

void keyboard::on_pushButtonNum0_clicked()
{
    number = number * 10;
    checkNumAndDisplay();
}

void keyboard::on_pushButtonNum1_clicked()
{
    number = number * 10 + 1;
    checkNumAndDisplay();
}

void keyboard::on_pushButtonNum2_clicked()
{
    number = number * 10 + 2;
    checkNumAndDisplay();
}

void keyboard::on_pushButtonNum3_clicked()
{
    number = number * 10 + 3;
    checkNumAndDisplay();
}

void keyboard::on_pushButtonNum4_clicked()
{
    number = number * 10 + 4;
    checkNumAndDisplay();
}

void keyboard::on_pushButtonNum5_clicked()
{
    number = number * 10 + 5;
    checkNumAndDisplay();
}

void keyboard::on_pushButtonNum6_clicked()
{
    number = number * 10 + 6;
    checkNumAndDisplay();
}

void keyboard::on_pushButtonNum7_clicked()
{
    number = number * 10 + 7;
    checkNumAndDisplay();
}

void keyboard::on_pushButtonNum8_clicked()
{
    number = number * 10 + 8;
    checkNumAndDisplay();
}

void keyboard::on_pushButtonNum9_clicked()
{
    number = number * 10 + 9;
    checkNumAndDisplay();
}

void keyboard::on_pushButtonNum000_clicked()
{
    number = number * 1000;
    checkNumAndDisplay();
}

void keyboard::on_pushButtonC_clicked()
{
    number = 0;
    ui->lcdNumber->display(number);
}

void keyboard::checkNumAndDisplay()
{
    if(number > 9999999)
    {
       number = 0;
       QMessageBox::warning(this,"Warning","Out of Range!\n\n(Input should between 0 and 9999999)");
    }
    ui->lcdNumber->display(number);
}
