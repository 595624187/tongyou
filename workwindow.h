#ifndef WORKWINDOW_H
#define WORKWINDOW_H

#include <QMainWindow>

namespace Ui {
class workWindow;
}

class workWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit workWindow(QWidget *parent = 0);
    ~workWindow();


private:
    Ui::workWindow *ui;

private slots:
    void slot_ClickAction1();
    void slot_ClickAction2();
    void slot_ClickAction3();
    void slot_ClickAction4();
    void slot_ClickAction5();
    void slot_ClickAction6();
    void slot_ClickAction7();

};

#endif // WORKWINDOW_H
