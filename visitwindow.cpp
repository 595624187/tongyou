#include "visitwindow.h"
#include "ui_visitwindow.h"

visitWindow::visitWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::visitWindow)
{
    ui->setupUi(this);
}

visitWindow::~visitWindow()
{
    delete ui;
}

void visitWindow::on_pushButton_3_clicked()
{
    this->close();
}
