#ifndef DIALOGSETTINGS_H
#define DIALOGSETTINGS_H

#include <QDialog>

namespace Ui {
    class DialogSettings;
}

class DialogSettings : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSettings(QWidget *parent = 0);
    ~DialogSettings();
    void paintEvent(QPaintEvent *);

signals:
    void setSamplingRateAndMaxFreqAndDivisor(int samplingRate,int maxFreq, int devisor);
    void setColor(int r,int g, int b);
    void setPeroids(int n);
    void setPointsPerPixel(int);

private slots:

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_horizontalSliderR_valueChanged(int value);

    void on_horizontalSliderG_valueChanged(int value);

    void on_horizontalSliderB_valueChanged(int value);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_horizontalSliderFs_valueChanged(int value);

private:
    Ui::DialogSettings *ui;

    int m_samplingRate;
};

#endif // DIALOGSETTINGS_H
