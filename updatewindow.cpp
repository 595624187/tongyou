#include "updatewindow.h"
#include "ui_updatewindow.h"

updateWindow::updateWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::updateWindow)
{
    ui->setupUi(this);
}

updateWindow::~updateWindow()
{
    delete ui;
}

void updateWindow::on_pushButton_3_clicked()
{
    this->close();
}
