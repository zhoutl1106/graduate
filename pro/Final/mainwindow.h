#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "curve.h"

#include "sinpanel.h"
#include "cwpanel.h"
#include "lfmpanel.h"
#include "hfmpanel.h"
#include "noisepanel.h"
#include "custompanel.h"

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

signals:
    void parameterChanged(int, int*);

private:
    void m_createActions();
    void m_createToolbars();
    void m_dataGenerate(int);
    void m_loadFile(QString fileName);

    Ui::MainWindow *ui;
    Curve *m_curve;
    sinPanel *m_sinPanel;
    cwPanel *m_cwPanel;
    lfmPanel *m_lfmPanel;
    hfmPanel *m_hfmPanel;
    noisePanel *m_noisePanel;
    customPanel *m_customPanel;

    QAction *m_openAction;

    QAction *m_sinAction;
    QAction *m_cwAction;
    QAction *m_lfmAction;
    QAction *m_hfmAction;
    QAction *m_noiseAction;
    QAction *m_customAction;

    bool m_output;

    int m_length;
    int *m_data;
    int m_form;
    double *m_doubleData;
    QString fileName;

    QStackedWidget *m_stackedWidget;

private
    slots:
    int openFile();
    void valueChanged();

    void sinSelected();
    void cwSelected();
    void lfmSelected();
    void hfmSelected();
    void noiseSelected();
    void customSelected();

    void on_outputButton_clicked();
};

#endif // MAINWINDOW_H
