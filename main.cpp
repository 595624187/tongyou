#include "mainwindow.h"
#include <QApplication>
#include "workwindow.h"
#include "querywindow.h"
#include "updatewindow.h"
#include "visitwindow.h"
#include "importwindow.h"
#include "sqlwindow.h"
#include <QDebug>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    cout<<"aaa"<<endl;
    return a.exec();
}
