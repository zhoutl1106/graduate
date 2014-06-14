#ifndef CUSTOMPANEL_H
#define CUSTOMPANEL_H

#include <QWidget>

namespace Ui {
    class customPanel;
}

class customPanel : public QWidget
{
    Q_OBJECT

public:
    explicit customPanel(QWidget *parent = 0);
    ~customPanel();
    void setPathText(QString str);

private:
    Ui::customPanel *ui;
};

#endif // CUSTOMPANEL_H
