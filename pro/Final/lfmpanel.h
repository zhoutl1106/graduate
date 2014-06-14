#ifndef LFMPANEL_H
#define LFMPANEL_H

#include <QWidget>

namespace Ui {
    class lfmPanel;
}

class lfmPanel : public QWidget
{
    Q_OBJECT

public:
    explicit lfmPanel(QWidget *parent = 0);
    ~lfmPanel();

private:
    Ui::lfmPanel *ui;
};

#endif // LFMPANEL_H
