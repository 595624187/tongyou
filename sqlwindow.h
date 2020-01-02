#ifndef SQLWINDOW_H
#define SQLWINDOW_H

#include <QMainWindow>

namespace Ui {
class sqlWindow;
}

class sqlWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit sqlWindow(QWidget *parent = 0);
    ~sqlWindow();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::sqlWindow *ui;
};

#endif // SQLWINDOW_H
