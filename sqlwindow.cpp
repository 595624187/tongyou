#include "sqlwindow.h"
#include "ui_sqlwindow.h"

sqlWindow::sqlWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sqlWindow)
{
    ui->setupUi(this);
}

sqlWindow::~sqlWindow()
{
    delete ui;
}

void sqlWindow::on_pushButton_3_clicked()
{
    this->close();
}
