#ifndef PANELSIN_H
#define PANELSIN_H

#include <QWidget>
#include "../keyboard.h"

namespace Ui {
    class PanelSin;
}

class PanelSin : public QWidget
{
    Q_OBJECT

public:
    explicit PanelSin(QWidget *parent = 0);
    ~PanelSin();

    double getFreq();
    double getAmp();
    double getPhase();
    double getOffset();

signals:
    void parametersChanged();

private slots:

    void on_toolButtonFreq_clicked();

    void on_toolButtonAmp_clicked();

    void on_toolButtonPhase_clicked();

    void on_toolButtonOffset_clicked();

    void on_spinFreq_valueChanged(int arg1);

    void on_spinAmp_valueChanged(int arg1);

    void on_spinPhase_valueChanged(int arg1);

    void on_spinOffset_valueChanged(int arg1);

private:
    Ui::PanelSin *ui;
    Keyboard* m_keyboardFreq;
    Keyboard* m_keyboardAmp;
    Keyboard* m_keyboardPhase;
    Keyboard* m_keyboardOffset;
};

#endif // PANELSIN_H
