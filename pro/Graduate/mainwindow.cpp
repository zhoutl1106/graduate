#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColor>
#include <cmath>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include "firwin.h"

#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*************************************************************
      Initialize members
      ************************************************************/
    m_curve = new Curve;
    m_dialogSettings = new DialogSettings;
    m_panelSin = new PanelSin;
    m_panelCW = new PanelCW;
    m_panelLFM = new PanelLFM;
    m_panelHFM = new PanelHFM;
    m_panelNoise = new PanelNoise;
    m_panelCustom = new PanelCustom;
    m_da = new DA;
    m_da->daInit();

    m_keyboardLength = new Keyboard;
    m_keyboardLength->setWindowTitle("Keyboard of Signal Length");

    m_output = 0;
    m_form = 1;
    m_length = 7500;
    m_samplingRate = 1000000;
    m_maxFreq = 187500;
    m_divisor = 40;
    m_data = new int[m_length];
    m_doubleData = new double[m_length];

    /*************************************************************
      Initialize Display
      ************************************************************/

    //curve
    QVBoxLayout *layout = new QVBoxLayout;
    layout->maximumSize();
    layout->addWidget(m_curve);
    ui->curveWidget->setLayout(layout);
    //parameters panels
    m_stackedWidget = new QStackedWidget;
    m_stackedWidget->addWidget(m_panelSin);
    m_stackedWidget->addWidget(m_panelCW);
    m_stackedWidget->addWidget(m_panelLFM);
    m_stackedWidget->addWidget(m_panelHFM);
    m_stackedWidget->addWidget(m_panelNoise);
    m_stackedWidget->addWidget(m_panelCustom);

    QVBoxLayout *layout1 = new QVBoxLayout;
    layout1->maximumSize();
    layout1->addWidget(m_stackedWidget);
    ui->parameterPanelWidget->setLayout(layout1);

    ui->outputButton->setIcon(QIcon("/images/outputOff.png"));
    ui->logoLabel->setPixmap(QPixmap("/images/ss.png").scaled(ui->logoLabel->size().width(),ui->logoLabel->size().height()));
    ui->labelSamplingRateAndMaxFreq->setText("The Sampling Rate is:        "
                                             + QString::number(m_samplingRate)
                                             + "\nThe Maximum Frequency is: "
                                             + QString::number(m_maxFreq));

    /*************************************************************
      Initialize Actions & Toolbars
      ************************************************************/
    m_createActions();
    m_createToolbars();
    ui->mainToolBar->setOrientation(Qt::Vertical);
    this->addToolBar(Qt::LeftToolBarArea,ui->mainToolBar);
    ui->mainToolBar->setFloatable(false);


    /*************************************************************
      Connect signals & slots
      ************************************************************/

    //curve
    connect(this,SIGNAL(parameterChanged(int,int*)),this->m_curve,SLOT(setParameters(int,int*)));
    connect(this,SIGNAL(ampDevideChanged(int)),this->m_curve,SLOT(setAmpDevide(int)));
    connect(this,SIGNAL(ampOffsetChanged(int)),this->m_curve,SLOT(setAmpOffset(int)));
    connect(this,SIGNAL(timeDevideChanged(int)),this->m_curve,SLOT(setTimeDevide(int)));
    connect(this,SIGNAL(timeOffsetChanged(int)),this->m_curve,SLOT(setTimeOffset(int)));
    //settings dialog
    connect(this->m_dialogSettings,SIGNAL(setSamplingRateAndMaxFreqAndDivisor(int,int,int)),this,SLOT(settingsChanged(int,int,int)));
    connect(this->m_keyboardLength,SIGNAL(finishEdit(int)),this,SLOT(setLength(int)));
    connect(this->m_dialogSettings,SIGNAL(setColor(int,int,int)),this->m_curve,SLOT(setColor(int,int,int)));
    connect(this->m_dialogSettings,SIGNAL(setPeroids(int)),this->m_curve,SLOT(setPeroids(int)));
    connect(this->m_dialogSettings,SIGNAL(setPointsPerPixel(int)),this->m_curve,SLOT(setPointsPerPixel(int)));
    //panels
    connect(this->m_panelSin,SIGNAL(parametersChanged()),this,SLOT(valueChanged()));
    connect(this->m_panelCW,SIGNAL(parametersChanged()),this,SLOT(valueChanged()));
    connect(this->m_panelLFM,SIGNAL(parametersChanged()),this,SLOT(valueChanged()));
    connect(this->m_panelHFM,SIGNAL(parametersChanged()),this,SLOT(valueChanged()));
    connect(this->m_panelNoise,SIGNAL(parametersChanged()),this,SLOT(valueChanged()));

    //first Generation --clear data array
    m_dataGenerate(0);
}

MainWindow::~MainWindow()
{
    delete ui;
    m_da->daClose();
}

void MainWindow::m_createActions()
{
    m_openAction = new QAction(tr("Open"),this);
    m_openAction->setIcon(QIcon("/images/open.png"));
    m_openAction->setToolTip(tr("Open a waveform file generated by MATLAB"));
    connect(m_openAction,SIGNAL(triggered()),this,SLOT(openFile()));

    m_settingAction = new QAction(tr("Settings"),this);
    m_settingAction->setIcon(QIcon("/images/settings.png"));
    m_settingAction->setToolTip(tr("Open Settings"));
    connect(m_settingAction,SIGNAL(triggered()),this,SLOT(openSettings()));

    m_sinAction = new QAction(tr("Sin"),this);
    m_sinAction->setIcon(QIcon("/images/sin.png"));
    m_sinAction->setToolTip(tr("Sine Wavefome"));
    connect(m_sinAction,SIGNAL(triggered()),this,SLOT(sinSelected()));

    m_cwAction = new QAction(tr("CW"),this);
    m_cwAction->setIcon(QIcon("/images/cw.png"));
    m_cwAction->setToolTip(tr("CW Pulse"));
    connect(m_cwAction,SIGNAL(triggered()),this,SLOT(cwSelected()));

    m_lfmAction = new QAction(tr("LFM"),this);
    m_lfmAction->setIcon(QIcon("/images/lfm.png"));
    m_lfmAction->setToolTip(tr("LFM Wavefome"));
    connect(m_lfmAction,SIGNAL(triggered()),this,SLOT(lfmSelected()));

    m_hfmAction = new QAction(tr("HFM"),this);
    m_hfmAction->setIcon(QIcon("/images/hfm.png"));
    m_hfmAction->setToolTip(tr("HFM Wavefome"));
    connect(m_hfmAction,SIGNAL(triggered()),this,SLOT(hfmSelected()));

    m_noiseAction = new QAction(tr("Noise"),this);
    m_noiseAction->setIcon(QIcon("/images/noise.png"));
    m_noiseAction->setToolTip(tr("Noise"));
    connect(m_noiseAction,SIGNAL(triggered()),this,SLOT(noiseSelected()));

    m_customAction = new QAction(tr("Custom"),this);
    m_customAction->setIcon(QIcon("/images/custom.png"));
    m_customAction->setToolTip(tr("Custom Wavefome"));
    connect(m_customAction,SIGNAL(triggered()),this,SLOT(customSelected()));
}

void MainWindow::m_createToolbars()
{
    ui->mainToolBar->addAction(m_openAction);
    ui->mainToolBar->addAction(m_settingAction);
    ui->mainToolBar->addAction(m_sinAction);
    ui->mainToolBar->addAction(m_cwAction);
    ui->mainToolBar->addAction(m_lfmAction);
    ui->mainToolBar->addAction(m_hfmAction);
    ui->mainToolBar->addAction(m_noiseAction);
    ui->mainToolBar->addAction(m_customAction);
}

int MainWindow::openFile()
{

    fileName = QFileDialog::getOpenFileName(this,tr("Select a waveform file generated by MATLAB")
                                                    ,".",tr("MATLAB Data files(*.*)"));
    if(fileName.isEmpty())
        return -1;
    else
    {
        m_form = 6;
        m_stackedWidget->setCurrentIndex(5);
        ui->spinBoxLength->setEnabled(false);
        ui->toolButtonLength->setEnabled(false);
        m_output = 0;
        ui->outputButton->setIcon(QIcon("/images/outputOff.png"));m_loadFile(fileName);
        ui->statusBar->showMessage("File " + fileName + " loaded" , 2000);
        m_panelCustom->setPathText("The waveform file you have loaded is :\n\n" + fileName);
        m_form = 6;
    }

    return 0;
}

void MainWindow::m_loadFile(QString fileName)
{
    QFile file(fileName);
    file.open(QIODevice::ReadOnly);
    QTextStream *in;
    in = new QTextStream(&file);
    int tempLength = 0;

    while(!in->atEnd())
    {
        in->readLine();
        tempLength ++;
    }
    m_length = tempLength;
    m_panelCustom->setSamplings(m_length);
    ui->spinBoxLength->setValue(m_length*1000/m_samplingRate);
    m_doubleData = new double[tempLength];
    m_data = new int[tempLength];

    delete in;
    file.close();

    file.open(QIODevice::ReadOnly);
    in = new QTextStream(&file);

    for(int i = 0; i < tempLength; i++)
    {
        m_doubleData[i] = in->readLine().toDouble()/2;
        m_data[i] = int(m_doubleData[i]);
    }

    delete in;
    file.close();
}

void MainWindow::openSettings()
{
    m_dialogSettings->show();
}

void MainWindow::on_outputButton_clicked()
{
    m_output = !m_output;
    m_dataGenerate(m_form);
    if(m_output)
    {
        ui->outputButton->setIcon(QIcon("/images/outputOn.png"));
        m_da->daCS0();
        m_da->daSendFrameHeader();
        m_da->daSend((unsigned char)(m_length/256),(unsigned char)(m_length%256));
        m_da->daSend((unsigned char)(m_divisor/256),(unsigned char)(m_divisor%256));
        printf("m_divisor = %d %X %X\n",m_divisor,(unsigned char)(m_divisor/256),(unsigned char)(m_divisor%256));
        for(int i = 0; i < m_length; i++)
        {
            unsigned char temph,templ;
            temph = (unsigned char)((int)(m_data[i]*2042.0/2048000.0+2053)/256);
            temph &= 0x0f;
            temph |= 0x40;
            templ = (unsigned char)((int)(m_data[i]*2042.0/2048000.0+2053)%256);
            m_da->daSend(temph,templ);
        }
        m_da->daCS1();
        m_da->daSend(0xaa,0x55);
        printf("Length: %d\n",m_length);
    }
    else
    {
        ui->outputButton->setIcon(QIcon("/images/outputOff.png"));
        m_da->daCS0();
    }
}
\
void MainWindow::valueChanged()
{
    if(m_output)
        QMessageBox::warning(this,"Warning","You MUST Disable Output before Change the parameters");
}

void MainWindow::m_dataGenerate(int form)
{
    if(m_data != NULL)
        delete [] m_data;
    m_data = new int[m_length];
    if(m_output)
    {
        switch(form)
        {
        case 1:
            generateSin();
            break;
        case 2:
            generateCW();
            break;
        case 3:
            generateLFM();
            break;
        case 4:
            generateHFM();
            break;
        case 5:
            generateNoise();
            break;
        case 6:
            generateCustom();
            break;
        }
    }
    else
    {
        for(int i = 0; i<m_length; i++)
            m_data[i] = 0;
        m_da->daCS0();
    }
    emit parameterChanged(m_length, m_data);
}

void MainWindow::generateSin()
{
    if(m_panelSin->getAmp() > 2500000)
        QMessageBox::warning(this,"Warning","The Amplitude could NOT over 2.5V!");
    else if(m_panelSin->getFreq() > m_maxFreq)
        QMessageBox::warning(this,"Warning","The Frequency could NOT over " + QString::number(m_maxFreq) + " Hz!");
    else
    for(int i=0; i<m_length;i++)
    {
        m_data[i]=int(m_panelSin->getAmp() * sin(
                          (m_panelSin->getFreq())*6.2831852*i/m_samplingRate  +
                          + m_panelSin->getPhase()*3.1415926/180)
                      + m_panelSin->getOffset());
    }
}


void MainWindow::generateCW()
{
    if(m_panelCW->getAmp() > 2500000)
        QMessageBox::warning(this,"Warning","The Amplitude could NOT over 2.5V!");
    else if(m_panelCW->getFreq() > m_maxFreq)
        QMessageBox::warning(this,"Warning","The Frequency could NOT over " + QString::number(m_maxFreq) + " Hz!");
    else if(m_panelCW->getTau() > m_length * 1000)
        QMessageBox::warning(this,"Warning","The Pulse Width must LESS than the Length!");
    else
    {
        for(int i=0; i<m_panelCW->getTau()*m_samplingRate/1000000;i++)
        {
            m_data[i] = int(m_panelCW->getAmp() * cos(
                              (m_panelCW->getFreq())*6.2831852 * i/m_samplingRate +
                              + m_panelCW->getPhase()*3.1415926/180));
        }
        for(int i=m_panelCW->getTau()*m_samplingRate/1000000;i<m_length ;i++)
            m_data[i] = 0;
    }
}

void MainWindow::generateLFM()
{
    if(m_panelLFM->getAmp() > 2500000)
        QMessageBox::warning(this,"Warning","The Amplitude could NOT over 2.5V!");
    else if(m_panelLFM->getFreqHigh() > m_maxFreq)
        QMessageBox::warning(this,"Warning","The Frequency could NOT over " + QString::number(m_maxFreq) + " Hz!");
    else if(m_panelLFM->getTau() > m_length * 1000)
        QMessageBox::warning(this,"Warning","The Pulse Width must LESS than the Length!");
    else
    {
        for(int i=0; i<m_panelLFM->getTau()*m_samplingRate/1000000;i++)
        {
            m_data[i] = int(m_panelLFM->getAmp() * cos(
                              (m_panelLFM->getFreqLow())*6.2831852 * i/m_samplingRate +
                               3.1415926*m_panelLFM->getK()*1000*i*i/m_samplingRate/m_samplingRate));
        }
        for(int i=m_panelLFM->getTau()*m_samplingRate/1000000;i<m_length ;i++)
            m_data[i] = 0;
    }
}

void MainWindow::generateHFM()
{
    if(m_panelHFM->getAmp() > 2500000)
        QMessageBox::warning(this,"Warning","The Amplitude could NOT over 2.5V!");
    else if(m_panelHFM->getFreqHigh() > m_maxFreq)
        QMessageBox::warning(this,"Warning","The Frequency could NOT over " + QString::number(m_maxFreq) + " Hz!");
    else if(m_panelHFM->getTau() > m_length * 1000)
        QMessageBox::warning(this,"Warning","The Pulse Width must LESS than the Length!");
    else
    {

        for(int i=0; i<m_panelHFM->getTau()*m_samplingRate/1000000;i++)
        {
            m_data[i] = int(m_panelHFM->getAmp() * cos(
                                (m_panelHFM->getFreqLow()*m_panelHFM->getFreqLow())*6.2831852/m_panelHFM->getM() *
                                log(1 - m_panelHFM->getM()*1000.0*i/m_samplingRate/m_panelHFM->getFreqLow())
                                )
                            );
        }
        for(int i=m_panelHFM->getTau()*m_samplingRate/1000000;i<m_length ;i++)
            m_data[i] = 0;
    }
}

void MainWindow::generateNoise()
{
    if(m_panelNoise->getAmp() > 2500000)
        QMessageBox::warning(this,"Warning","The Amplitude could NOT over 2.5V!");
    else if(m_panelNoise->getFreqHigh() <= m_panelNoise->getFreqLow())
        QMessageBox::warning(this,"Warning","The Frequency High MUST HIGHER than Frequency Low!");
    else if(m_panelNoise->getFreqHigh() > m_maxFreq)
        QMessageBox::warning(this,"Warning","The Frequency could NOT over " + QString::number(m_maxFreq) + " Hz!");
    else
    {
        int i;
        double fl,fh;

        double h[m_panelNoise->getN()];
        fl = m_panelNoise->getFreqLow();
        fh = m_panelNoise->getFreqHigh();
        fl = fl/m_samplingRate;
        fh = fh/m_samplingRate;

        firwin(m_panelNoise->getN(), 3, fl, fh, m_panelNoise->getWindow(), h);

        double noise[m_length+m_panelNoise->getN()];
        double hh[m_length+m_panelNoise->getN()];
        double noiseafter[m_length+m_panelNoise->getN()];

        for(i = 0;i<m_panelNoise->getN()+1;i++)
        {
            hh[i] = h[i];
        }
        for(i = m_panelNoise->getN()+1;i<m_length+m_panelNoise->getN();i++)
            hh[i] = 0.0;

        for(i = 0; i< m_length; i++)
        {
            noise[i] =rand()*m_panelNoise->getAmp()*2/RAND_MAX - m_panelNoise->getAmp();
        }
        for(i = m_length;i<m_length+m_panelNoise->getN();i++)
            noise[i] = 0.0;

        i = convol(noise,hh,noiseafter,m_length,m_panelNoise->getN()+1,m_length+m_panelNoise->getN());
        for(i = m_panelNoise->getN()/2;i<m_panelNoise->getN()/2+m_length;i++)
            m_data[i-m_panelNoise->getN()/2] = noiseafter[i];
    }
}

void MainWindow::generateCustom()
{
    m_loadFile(fileName);
}

void MainWindow::sinSelected()
{
    m_form = 1;
    m_stackedWidget->setCurrentIndex(0);
    m_output = 0;
    ui->spinBoxLength->setEnabled(true);
    ui->toolButtonLength->setEnabled(true);
    ui->outputButton->setIcon(QIcon("/images/outputOff.png"));
    m_dataGenerate(m_form);
}

void MainWindow::cwSelected()
{
    m_form = 2;
    m_stackedWidget->setCurrentIndex(1);
    m_output = 0;
    ui->spinBoxLength->setEnabled(true);
    ui->toolButtonLength->setEnabled(true);
    ui->outputButton->setIcon(QIcon("/images/outputOff.png"));
    m_dataGenerate(m_form);
}

void MainWindow::lfmSelected()
{
    m_form = 3;
    m_stackedWidget->setCurrentIndex(2);
    m_output = 0;
    ui->spinBoxLength->setEnabled(true);
    ui->toolButtonLength->setEnabled(true);
    ui->outputButton->setIcon(QIcon("/images/outputOff.png"));
    m_dataGenerate(m_form);
}

void MainWindow::hfmSelected()
{
    m_form = 4;
    m_stackedWidget->setCurrentIndex(3);
    m_output = 0;
    ui->spinBoxLength->setEnabled(true);
    ui->toolButtonLength->setEnabled(true);
    ui->outputButton->setIcon(QIcon("/images/outputOff.png"));
    m_dataGenerate(m_form);
}

void MainWindow::noiseSelected()
{
    m_form = 5;
    m_stackedWidget->setCurrentIndex(4);
    m_output = 0;
    ui->spinBoxLength->setEnabled(true);
    ui->toolButtonLength->setEnabled(true);
    ui->outputButton->setIcon(QIcon("/images/outputOff.png"));
    m_dataGenerate(m_form);
}

void MainWindow::customSelected()
{
    m_form = 6;
    m_stackedWidget->setCurrentIndex(5);
    ui->spinBoxLength->setEnabled(false);
    ui->toolButtonLength->setEnabled(false);
    m_output = 0;
    ui->outputButton->setIcon(QIcon("/images/outputOff.png"));
    m_dataGenerate(m_form);
}

void MainWindow::on_dialAmp_valueChanged(int value)
{
    switch(value)
    {
    case 0:
        emit ampDevideChanged(1);
        break;
    case 1:
        emit ampDevideChanged(2);
        break;
    case 2:
        emit ampDevideChanged(5);
        break;
    case 3:
        emit ampDevideChanged(10);
        break;
    case 4:
        emit ampDevideChanged(20);
        break;
    case 5:
        emit ampDevideChanged(50);
        break;
    case 6:
        emit ampDevideChanged(100);
        break;
    case 7:
        emit ampDevideChanged(200);
        break;
    case 8:
        emit ampDevideChanged(500);
        break;
    case 9:
        emit ampDevideChanged(1000);
        break;
    case 10:
        emit ampDevideChanged(2000);
        break;
    case 11:
        emit ampDevideChanged(5000);
        break;
    case 12:
        emit ampDevideChanged(10000);
        break;
    case 13:
        emit ampDevideChanged(20000);
        break;
    case 14:
        emit ampDevideChanged(50000);
        break;
    case 15:
        emit ampDevideChanged(100000);
        break;
    }
}

void MainWindow::on_verticalSliderAmpOffset_valueChanged(int value)
{
    emit ampOffsetChanged(value);
}

void MainWindow::on_dialTime_valueChanged(int value)
{
    switch(value)
    {
    case 0:
        emit timeDevideChanged(1);
        break;
    case 1:
        emit timeDevideChanged(2);
        break;
    case 2:
        emit timeDevideChanged(5);
        break;
    case 3:
        emit timeDevideChanged(10);
        break;
    case 4:
        emit timeDevideChanged(20);
        break;
    case 5:
        emit timeDevideChanged(50);
        break;
    case 6:
        emit timeDevideChanged(100);
        break;
    case 7:
        emit timeDevideChanged(200);
        break;
    case 8:
        emit timeDevideChanged(500);
        break;
    case 9:
        emit timeDevideChanged(1000);
        break;
    case 10:
        emit timeDevideChanged(2000);
        break;
    case 11:
        emit timeDevideChanged(5000);
        break;
    case 12:
        emit timeDevideChanged(10000);
        break;
    case 13:
        emit timeDevideChanged(20000);
        break;
    case 14:
        emit timeDevideChanged(50000);
        break;
    case 15:
        emit timeDevideChanged(100000);
        break;
    case 16:
        emit timeDevideChanged(200000);
        break;
    case 17:
        emit timeDevideChanged(500000);
        break;
    }
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    emit timeOffsetChanged(value);
}

void MainWindow::on_pushButtonHSliderMinus_clicked()
{
    ui->horizontalSlider->setValue(ui->horizontalSlider->value() - 1);
}

void MainWindow::on_pushButtonHSliderPlus_clicked()
{
    ui->horizontalSlider->setValue(ui->horizontalSlider->value() + 1);
}

void MainWindow::settingsChanged(int samplingRate, int maxFreq, int divisor)
{
    m_samplingRate = samplingRate;
    m_maxFreq = maxFreq;
    m_divisor = divisor;
    m_curve->setSamplingRate(m_samplingRate);
    ui->labelSamplingRateAndMaxFreq->setText("The Sampling Rate is:        "
                                             + QString::number(m_samplingRate)
                                             + "\nThe Maximum Frequency is: "
                                             + QString::number(m_maxFreq));
    m_dataGenerate(m_form);
}

void MainWindow::setMaxFreq(int maxFreq)
{
    m_maxFreq = maxFreq;
}

void MainWindow::on_toolButtonLength_clicked()
{
    m_keyboardLength->show();
}

void MainWindow::setLength(int length)
{
    ui->spinBoxLength->setValue(length);
}

void MainWindow::on_spinBoxLength_valueChanged(int arg1)
{
    if(ui->spinBoxLength->value() * m_samplingRate /1000 > 20000)
        QMessageBox::warning(this,"Warning!","There are too many Samples!\n(Samples MUST LESS than 20000");
    else
    {
        m_length = ui->spinBoxLength->value() * m_samplingRate /1000;
        m_dataGenerate(m_form);
    }
}

void MainWindow::on_pushButtonQuit_clicked()
{
    this->close();
}
