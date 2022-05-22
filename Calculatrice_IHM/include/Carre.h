#ifndef CARRE_H
#define CARRE_H


#include "Constante.h"


class Carre: public Expression
{
    private:
    Expression *_toSquare;

    public:
        Carre(Expression * exp);

        std::string toString() const;
        std::string toStringNpi() const;
        float calculer() const;

        Expression* simplifier() override;
};

#endif // CARRE_H
