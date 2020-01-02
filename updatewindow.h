#ifndef UPDATEWINDOW_H
#define UPDATEWINDOW_H

#include <QMainWindow>

namespace Ui {
class updateWindow;
}

class updateWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit updateWindow(QWidget *parent = 0);
    ~updateWindow();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::updateWindow *ui;
};

#endif // UPDATEWINDOW_H
