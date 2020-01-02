#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>

namespace Ui {
class userWindow;
}

class userWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit userWindow(QWidget *parent = 0);
    ~userWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::userWindow *ui;
};

#endif // USERWINDOW_H
