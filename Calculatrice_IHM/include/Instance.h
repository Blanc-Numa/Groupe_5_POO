#ifndef INSTANCE_H
#define INSTANCE_H


#include "include/Expression.h"
#include <iostream>

class Instance
{
private:
    Expression* _exp = nullptr; //L'expression statique

public:
    //Accesseur instance global
    static Instance& instance()
    {
        //Approche modernisee du Lazy Init (C++11  s'assure qu'il n'existe qu'une seule variable statique)
         static Instance * instance = new Instance();
         return *instance;
    }

    //Definition de l'expression
    void set(Expression * exp){
        _exp = exp;
    }

    //Accesseur pour l'expression
    Expression * get() {
        if(_exp == nullptr){
            std::cout << "Attention ! Vous recuperez une expression non definie (Expression du Singleton null)" << std::endl;
        }
        return _exp;
    }

private:
    Instance(){}
};

#endif // ROOTEXPRESSIONSINGLETON_H
