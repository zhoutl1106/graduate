#ifndef PANELCUSTOM_H
#define PANELCUSTOM_H

#include <QWidget>
#include <QString>

namespace Ui {
    class PanelCustom;
}

class PanelCustom : public QWidget
{
    Q_OBJECT

public:
    explicit PanelCustom(QWidget *parent = 0);
    ~PanelCustom();
    void setPathText(QString str);
    void setSamplings(int x);

private:
    Ui::PanelCustom *ui;
};

#endif // PANELCUSTOM_H
