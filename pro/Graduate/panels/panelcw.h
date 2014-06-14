#ifndef PANELCW_H
#define PANELCW_H

#include <QWidget>
#include "../keyboard.h"

namespace Ui {
    class PanelCW;
}

class PanelCW : public QWidget
{
    Q_OBJECT

public:
    explicit PanelCW(QWidget *parent = 0);
    ~PanelCW();
    double getFreq();
    double getAmp();
    double getPhase();
    double getTau();

signals:
    void parametersChanged();

private slots:
    void on_toolButtonFreq_clicked();

    void on_toolButtonAmp_clicked();

    void on_toolButtonPhase_clicked();

    void on_toolButtonTau_clicked();

    void on_spinFreq_valueChanged(int arg1);
    void on_spinAmp_valueChanged(int arg1);
    void on_spinPhase_valueChanged(int arg1);
    void on_spinTau_valueChanged(int arg1);

private:
    Ui::PanelCW *ui;
    Keyboard* m_keyboardFreq;
    Keyboard* m_keyboardAmp;
    Keyboard* m_keyboardPhase;
    Keyboard* m_keyboardTau;
};


#endif // PANELCW_H
