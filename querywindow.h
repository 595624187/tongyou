#ifndef QUERYWINDOW_H
#define QUERYWINDOW_H

#include <QMainWindow>

namespace Ui {
class queryWindow;
}

class queryWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit queryWindow(QWidget *parent = 0);
    ~queryWindow();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::queryWindow *ui;
};

#endif // QUERYWINDOW_H
