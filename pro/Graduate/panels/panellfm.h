#ifndef PANELLFM_H
#define PANELLFM_H

#include <QWidget>
#include "../keyboard.h"

namespace Ui {
    class PanelLFM;
}

class PanelLFM : public QWidget
{
    Q_OBJECT

public:
    explicit PanelLFM(QWidget *parent = 0);
    ~PanelLFM();
    double getFreqLow();
    double getFreqHigh();
    double getAmp();
    double getTau();
    double getK();

signals:
    void parametersChanged();

private slots:
    void on_toolButtonFreqLow_clicked();

    void on_toolButtonK_clicked();

    void on_toolButtonAmp_clicked();

    void on_toolButtonTau_clicked();

    void on_spinFreqLow_valueChanged(int arg1);
    void on_spinK_valueChanged(int arg1);
    void on_spinAmp_valueChanged(int arg1);
    void on_spinTau_valueChanged(int arg1);

private:
    Ui::PanelLFM *ui;
    Keyboard* m_keyboardFreqLow;
    Keyboard* m_keyboardK;
    Keyboard* m_keyboardAmp;
    Keyboard* m_keyboardTau;
};

#endif // PANELLFM_H
