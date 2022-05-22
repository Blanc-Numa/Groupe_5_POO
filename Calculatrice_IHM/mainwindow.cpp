#include "include/mainwindow.h"

#include <iostream>

#include "include/user_input_ihm/UserInputWindow.h"


#include "include/Constante.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    replaceCentralWidget(new UserInputWindow(this));
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::replaceCentralWidget(QWidget *newOne){
    QWidget* curWidget = centralWidget();
    setCentralWidget(newOne);
    curWidget->deleteLater();
}

void MainWindow::newWindow(QWidget *newOne){
    newOne->setParent(nullptr);
    newOne->show();
}
