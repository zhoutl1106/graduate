#ifndef HFMPANEL_H
#define HFMPANEL_H

#include <QWidget>

namespace Ui {
    class hfmPanel;
}

class hfmPanel : public QWidget
{
    Q_OBJECT

public:
    explicit hfmPanel(QWidget *parent = 0);
    ~hfmPanel();

private:
    Ui::hfmPanel *ui;
};

#endif // HFMPANEL_H
