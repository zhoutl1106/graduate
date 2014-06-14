#ifndef SINPANEL_H
#define SINPANEL_H

#include <QWidget>
#include "keyboard.h"

namespace Ui {
    class sinPanel;
}

class sinPanel : public QWidget
{
    Q_OBJECT

public:
    explicit sinPanel(QWidget *parent = 0);
    ~sinPanel();

    double getFreq();
    double getAmp();
    double getPhase();
    double getShift();

signals:
    void parametersChanged();

private slots:

    void on_toolButtonFreq_clicked();

    void on_toolButtonAmp_clicked();

    void on_toolButtonPhase_clicked();

    void on_toolButtonShift_clicked();

    void on_spinFreq_valueChanged(int arg1);

    void on_spinAmp_valueChanged(int arg1);

    void on_spinPhase_valueChanged(int arg1);

    void on_spinShift_valueChanged(int arg1);

private:
    Ui::sinPanel *ui;
    keyboard* m_keyboardFreq;
    keyboard* m_keyboardAmp;
    keyboard* m_keyboardPhase;
    keyboard* m_keyboardShift;
};

#endif // SINPANEL_H
