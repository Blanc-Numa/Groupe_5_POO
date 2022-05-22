#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>
#include <iostream>

class Expression
{
    public:
        virtual std::string toString() const = 0;
        virtual std::string toStringNpi() const = 0;
        Expression* _exp = nullptr;

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
        virtual void afficher() const { std::cout << toString(); }
        virtual void afficherNpi() const { std::cout << toStringNpi(); }
        virtual float calculer() const = 0;

        virtual Expression* simplifier(){return 0;}

        virtual ~Expression(){}

};

#endif // EXPRESSION_H


