#include "querywindow.h"
#include "ui_querywindow.h"

queryWindow::queryWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::queryWindow)
{
    ui->setupUi(this);
}

queryWindow::~queryWindow()
{
    delete ui;
}

void queryWindow::on_pushButton_4_clicked()
{
    this->close();
}
