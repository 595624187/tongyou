#ifndef VISITWINDOW_H
#define VISITWINDOW_H

#include <QMainWindow>

namespace Ui {
class visitWindow;
}

class visitWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit visitWindow(QWidget *parent = 0);
    ~visitWindow();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::visitWindow *ui;
};

#endif // VISITWINDOW_H
