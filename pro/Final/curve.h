#ifndef CURVE_H
#define CURVE_H

#include <QWidget>

class Curve : public QWidget
{
    Q_OBJECT
public:
    explicit Curve(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
signals:

public slots:
    void setParameters(int length, int* data);

private:
    int m_length;
    int* m_data;

};

#endif // CURVE_H
