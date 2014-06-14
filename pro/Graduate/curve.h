#ifndef CURVE_H
#define CURVE_H

#include <QWidget>
#include <QColor>

class Curve : public QWidget
{
    Q_OBJECT
public:
    explicit Curve(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void setSamplingRate(int samplingRate);

signals:

public slots:
    void setParameters(int length, int* data);
    void setAmpDevide(int ampDevide);
    void setTimeDevide(int timeDevide);
    void setAmpOffset(int ampOffset);
    void setTimeOffset(int timeOffset);
    void setColor(int rr, int gg, int bb);
    void setPeroids(int n);
    void setPointsPerPixel(int points);


private:
    int m_samplingRate;
    int m_length;
    int* m_data;
    int m_ampDevide;
    int m_timeDevide;
    int m_ampOffset;
    int m_timeOffset;
    int m_periods;
    int m_pointsPerPixel;

    int r;
    int g;
    int b;

};

#endif // CURVE_H
