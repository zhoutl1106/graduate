#include "curve.h"
#include <QPainter>
#include <iostream>
using namespace std;

Curve::Curve(QWidget *parent) :
    QWidget(parent)
{
    m_length = 0;
    m_data = NULL;
}

void Curve::paintEvent(QPaintEvent *event)
{

    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing, true);
    p.drawRect(0,0,this->size().width(),this->size().height());
    p.drawLine(0,this->size().height()/2,this->size().width(),this->size().height()/2);

    if(m_length > 0)
    {
        QPainterPath path;
        path.moveTo(0,m_data[0]+this->size().height()/2);
        for(int i=1;i<m_length;i++)
            path.lineTo(i*this->size().width()/m_length,this->size().height()/2 - m_data[i]);

        p.setPen(QColor(255,0,0));
        p.drawPath(path);
    }
}

void Curve::setParameters(int length, int *data)
{
    m_length = length;
    m_data = data;
    update();
}
