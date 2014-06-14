#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QWidget>

namespace Ui {
    class keyboard;
}

class keyboard : public QWidget
{
    Q_OBJECT

public:
    explicit keyboard(QWidget *parent = 0);
    ~keyboard();

signals:
    void finishEdit(int num);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_pushButtonNumBack_clicked();

    void on_pushButtonNum0_clicked();
    void on_pushButtonNum1_clicked();
    void on_pushButtonNum2_clicked();
    void on_pushButtonNum3_clicked();
    void on_pushButtonNum4_clicked();
    void on_pushButtonNum5_clicked();
    void on_pushButtonNum6_clicked();
    void on_pushButtonNum7_clicked();
    void on_pushButtonNum8_clicked();
    void on_pushButtonNum9_clicked();
    void on_pushButtonNum000_clicked();
    void on_pushButtonC_clicked();


private:
    void checkNumAndDisplay();
    Ui::keyboard *ui;
    int number;
};

#endif // KEYBOARD_H
