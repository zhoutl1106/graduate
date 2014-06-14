#include "curve.h"
#include <QPainter>
#include <iostream>
using namespace std;

Curve::Curve(QWidget *parent) :
    QWidget(parent)
{
    m_length = 0;
    m_data = NULL;
    m_samplingRate = 588000;
    m_ampDevide = 1;
    m_timeDevide = 1;
    m_ampOffset = 0;
    m_timeOffset = 0;
    r = 255; g = 0; b = 0;
    m_periods = 1;
    m_pointsPerPixel = 5;
}

void Curve::paintEvent(QPaintEvent *event)
{

    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing, true);
    p.drawRect(0,0,this->size().width(),this->size().height());
    int subwidth = this->size().width()/10;
    int subheight = this->size().height()/8;

/***********     Drow Grid       ************/
    p.setPen(QPen(QBrush(Qt::black),3));
    p.drawLine(0,this->size().height()/2,this->size().width(),this->size().height()/2);
    p.setPen(QPen(QBrush(Qt::black),1,Qt::DashLine));
    float temp = m_length*m_periods*m_timeOffset/15.0/m_timeDevide;//offset in x axis
    for(int i = 0;i<8;i++)
        p.drawLine(0, subheight * i, this->size().width(), subheight * i);
    for(int i = 0;i< m_length / subwidth ;i++)
        if(subwidth * i - temp > 0 && subwidth * i - temp < this->size().width())
        p.drawLine(subwidth * i - temp, 0,
                   subwidth * i - temp, this->size().height());

/***********     Drow Curve       ************/
    int count = 0;
    if(m_length > 0)
    {
        QPainterPath path;
        path.moveTo(0 - temp/m_periods,m_data[0]+this->size().height()/2);
        for(int j = 0; j< m_periods; j++)
        {
            float temp2 = 2.0*subwidth/m_samplingRate * 500000/m_timeDevide;//length per pixel
            int previousXAxis = 0;
            for(int i=m_length * j + 1;i<m_length * (j + 1);i++)
            {
                float tempX = temp2 * i - temp;
                if(tempX - previousXAxis > 1.0/m_pointsPerPixel)
                {
                    if(tempX >= 0)
                        path.lineTo(tempX,
                                 this->size().height()/2 - m_data[i-m_length*j]*subheight/10.0/m_ampDevide - m_ampOffset);
                    previousXAxis = tempX;
                    count ++;
                }
                if(tempX > this->size().width())
                    break;
            }
        }
        p.setPen(QColor(r,g,b));
        p.drawPath(path);
    }
}

void Curve::setParameters(int length, int *data)
{
    m_length = length;
    m_data = data;
    update();
}

void Curve::setAmpDevide(int ampDevide)
{
    m_ampDevide = ampDevide;
    update();
}

void Curve::setTimeDevide(int timeDevide)
{
    m_timeDevide = timeDevide;
    update();
}

void Curve::setAmpOffset(int ampOffset)
{
    m_ampOffset = ampOffset;
    update();
}

void Curve::setTimeOffset(int timeOffset)
{
    m_timeOffset = timeOffset;
    update();
}

void Curve::setSamplingRate(int samplingRate)
{
    m_samplingRate = samplingRate;
}

void Curve::setColor(int rr, int gg, int bb)
{
    r = rr;
    g = gg;
    b = bb;
    update();
}

void Curve::setPeroids(int n)
{
    m_periods = n;
    update();
}

void Curve::setPointsPerPixel(int points)
{
    m_pointsPerPixel = points;
}
