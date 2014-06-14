#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "curve.h"

#include "dialogs/dialogsettings.h"
#include "panels/panelsin.h"
#include "panels/panelcw.h"
#include "panels/panellfm.h"
#include "panels/panelhfm.h"
#include "panels/panelnoise.h"
#include "panels/panelcustom.h"
#include "da.h"

#include <QAction>
#include <QFile>
#include <QVBoxLayout>
#include <QStackedWidget>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void settingsChanged(int samplingRate,int maxFreq, int divisor);
    void setMaxFreq(int maxFreq);

signals:
    void parameterChanged(int, int*);
    void ampDevideChanged(int);
    void timeDevideChanged(int);
    void ampOffsetChanged(int);
    void timeOffsetChanged(int);

private:
    void m_createActions();
    void m_createToolbars();
    void m_dataGenerate(int);
    void m_loadFile(QString fileName);

    Ui::MainWindow *ui;
    Curve *m_curve;
    DialogSettings *m_dialogSettings;
    PanelSin *m_panelSin;
    PanelCW *m_panelCW;
    PanelLFM *m_panelLFM;
    PanelHFM *m_panelHFM;
    PanelNoise *m_panelNoise;
    PanelCustom *m_panelCustom;
    DA *m_da;

    QAction *m_openAction;
    QAction *m_settingAction;

    QAction *m_sinAction;
    QAction *m_cwAction;
    QAction *m_lfmAction;
    QAction *m_hfmAction;
    QAction *m_noiseAction;
    QAction *m_customAction;

    Keyboard *m_keyboardLength;

    bool m_output;

    int m_length;
    int *m_data;
    int m_form;
    int m_samplingRate;
    int m_maxFreq;
    int m_divisor;
    double *m_doubleData;
    QString fileName;

    QStackedWidget *m_stackedWidget;

private
    slots:
    int openFile();
    void openSettings();
    void valueChanged();
    void setLength(int length);

    void sinSelected();
    void cwSelected();
    void lfmSelected();
    void hfmSelected();
    void noiseSelected();
    void customSelected();

    void generateSin();
    void generateCW();
    void generateLFM();
    void generateHFM();
    void generateNoise();
    void generateCustom();

    void on_outputButton_clicked();
    void on_dialAmp_valueChanged(int value);
    void on_verticalSliderAmpOffset_valueChanged(int value);
    void on_dialTime_valueChanged(int value);
    void on_horizontalSlider_valueChanged(int value);
    void on_pushButtonHSliderMinus_clicked();
    void on_pushButtonHSliderPlus_clicked();
    void on_toolButtonLength_clicked();
    void on_spinBoxLength_valueChanged(int arg1);
    void on_pushButtonQuit_clicked();
};

#endif // MAINWINDOW_H
