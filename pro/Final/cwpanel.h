#ifndef CWPANEL_H
#define CWPANEL_H

#include <QWidget>

namespace Ui {
    class cwPanel;
}

class cwPanel : public QWidget
{
    Q_OBJECT

public:
    explicit cwPanel(QWidget *parent = 0);
    ~cwPanel();

private:
    Ui::cwPanel *ui;
};

#endif // CWPANEL_H
