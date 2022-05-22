#ifndef SOUSTRACTION_H
#define SOUSTRACTION_H

#include "Operation.h"

class Soustraction : public Operation
{
    public:
        Soustraction(Expression *gauche, Expression *droite);

        std::string toString() const;
        std::string toStringNpi() const;
        float calculer() const;

        Expression* simplifier() override;
};

#endif // SOUSTRACTION_H
