#ifndef IMPORTWINDOW_H
#define IMPORTWINDOW_H

#include <QMainWindow>

namespace Ui {
class importWindow;
}

class importWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit importWindow(QWidget *parent = 0);
    ~importWindow();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::importWindow *ui;
};

#endif // IMPORTWINDOW_H
