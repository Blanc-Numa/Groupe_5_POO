#ifndef OPERATION_H
#define OPERATION_H

#include "Expression.h"

class Operation: public Expression
{
    private:
        Expression *_gauche;
        Expression *_droite;
    public:
        Operation(Expression *gauche, Expression *droite): _gauche(gauche), _droite(droite){}

        Expression *getGauche() const { return _gauche; }
        Expression *getDroite() const { return _droite; }

        std::string toString() const = 0;
        std::string toStringNpi() const = 0;

        virtual float calculer() const = 0;
        virtual Expression* simplifier(){return 0;}

};

#endif // OPERATION_H
