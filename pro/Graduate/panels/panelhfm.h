#ifndef PANELHFM_H
#define PANELHFM_H

#include <QWidget>
#include "../keyboard.h"

namespace Ui {
    class PanelHFM;
}

class PanelHFM : public QWidget
{
    Q_OBJECT

public:
    explicit PanelHFM(QWidget *parent = 0);
    ~PanelHFM();
    double getFreqLow();
    double getFreqHigh();
    double getAmp();
    double getTau();
    double getM();

signals:
    void parametersChanged();

private slots:
    void on_toolButtonFreqLow_clicked();

    void on_toolButtonM_clicked();

    void on_toolButtonAmp_clicked();

    void on_toolButtonTau_clicked();

    void on_spinFreqLow_valueChanged(int arg1);
    void on_spinM_valueChanged(int arg1);
    void on_spinAmp_valueChanged(int arg1);
    void on_spinTau_valueChanged(int arg1);

private:
    Ui::PanelHFM *ui;
    Keyboard* m_keyboardFreqLow;
    Keyboard* m_keyboardM;
    Keyboard* m_keyboardAmp;
    Keyboard* m_keyboardTau;
};
#endif // PANELHFM_H
