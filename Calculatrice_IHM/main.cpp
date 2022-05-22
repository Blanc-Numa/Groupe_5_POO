#include <QApplication>
#include <iostream>

#include "include/Constante.h"
#include "include/variable.h"

#include "include/Addition.h"
#include "include/Soustraction.h"
#include "include/Division.h"
#include "include/Multiplication.h"



#include "include/mainwindow.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Constante c(2.0f);

    MainWindow w;
    w.show();

    
    Constante c1(5.0f);
    Constante c2(3.0f);

    //Création d'une expression avec variable
    Variable v("x",3.0f);
    Multiplication m(&c1, &v);
    Constante result(m.calculer());

    return a.exec();
}
