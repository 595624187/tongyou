#include "userwindow.h"
#include "ui_userwindow.h"

userWindow::userWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::userWindow)
{
    ui->setupUi(this);
}

userWindow::~userWindow()
{
    delete ui;
}

void userWindow::on_pushButton_clicked()
{
    this->close();
}
