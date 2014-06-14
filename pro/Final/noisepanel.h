#ifndef NOISEPANEL_H
#define NOISEPANEL_H

#include <QWidget>

namespace Ui {
    class noisePanel;
}

class noisePanel : public QWidget
{
    Q_OBJECT

public:
    explicit noisePanel(QWidget *parent = 0);
    ~noisePanel();

private:
    Ui::noisePanel *ui;
};

#endif // NOISEPANEL_H
