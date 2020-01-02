#include "workwindow.h"
#include "ui_workwindow.h"
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QDebug>
#include "userwindow.h"
#include <QMessageBox>
#include "updatewindow.h"
#include "querywindow.h"
#include "sqlwindow.h"
#include "importwindow.h"
#include "visitwindow.h"

workWindow::workWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::workWindow)
{
    ui->setupUi(this);

    connect(ui->action_1, SIGNAL(triggered()), this, SLOT(slot_ClickAction1()));
    connect(ui->action_2, SIGNAL(triggered()), this, SLOT(slot_ClickAction2()));
    connect(ui->action_3, SIGNAL(triggered()), this, SLOT(slot_ClickAction3()));
    connect(ui->action_4, SIGNAL(triggered()), this, SLOT(slot_ClickAction4()));
    connect(ui->action_5, SIGNAL(triggered()), this, SLOT(slot_ClickAction5()));
    connect(ui->action_6, SIGNAL(triggered()), this, SLOT(slot_ClickAction6()));
    connect(ui->action_7, SIGNAL(triggered()), this, SLOT(slot_ClickAction7()));
}

void workWindow::slot_ClickAction1(){
    userWindow *u = new userWindow;
    u->show();
}

void workWindow::slot_ClickAction2(){
    importWindow *i = new importWindow;
    i->show();
}

void workWindow::slot_ClickAction3(){
    updateWindow *up = new updateWindow;
    up->show();
}


void workWindow::slot_ClickAction4(){
    queryWindow *q = new queryWindow;
    q->show();
}

void workWindow::slot_ClickAction5(){
    visitWindow *v = new visitWindow();
    v->show();
}

void workWindow::slot_ClickAction6(){
    sqlWindow *s = new sqlWindow();
    s->show();
}

void workWindow::slot_ClickAction7(){
    exit(1);
}



workWindow::~workWindow()
{
    delete ui;
}







