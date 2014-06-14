#ifndef PANELNOISE_H
#define PANELNOISE_H

#include <QWidget>
#include "../keyboard.h"

namespace Ui {
    class PanelNoise;
}

class PanelNoise : public QWidget
{
    Q_OBJECT

public:
    explicit PanelNoise(QWidget *parent = 0);
    ~PanelNoise();
    double getFreqLow();
    double getFreqHigh();
    double getAmp();
    int getN();
    int getWindow();

signals:
    void parametersChanged();

private slots:
    void on_toolButtonFreqLow_clicked();

    void on_toolButtonFreqHigh_clicked();

    void on_toolButtonAmp_clicked();

    void on_toolButtonN_clicked();

    void on_spinFreqLow_valueChanged(int arg1);
    void on_spinFreqHigh_valueChanged(int arg1);
    void on_spinAmp_valueChanged(int arg1);
    void on_spinN_valueChanged(int arg1);


    void on_comboBoxWindow_currentIndexChanged(int index);

private:
    Ui::PanelNoise *ui;
    Keyboard* m_keyboardFreqLow;
    Keyboard* m_keyboardFreqHigh;
    Keyboard* m_keyboardAmp;
    Keyboard* m_keyboardN;
};

#endif // PANELNOISE_H
