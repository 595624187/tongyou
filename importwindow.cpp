#include "importwindow.h"
#include "ui_importwindow.h"

importWindow::importWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::importWindow)
{
    ui->setupUi(this);
}

importWindow::~importWindow()
{
    delete ui;
}

void importWindow::on_pushButton_3_clicked()
{
    this->close();
}
