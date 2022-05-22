#include <iostream>

#include "include/Soustraction.h"
#include "include/variable.h"

Soustraction::Soustraction(Expression *gauche, Expression *droite) : Operation(gauche, droite) {}

std::string Soustraction::toString() const
{
    return "(" + getGauche()->toString() + "-" + getDroite()->toStringNpi() + ")";
}

std::string Soustraction::toStringNpi() const
{
    return "(" + getGauche()->toStringNpi() + " " + getDroite()->toStringNpi() + " -)";
}

float Soustraction::calculer() const
{
    return getGauche()->calculer() - getDroite()->calculer();
}

Expression* Soustraction::simplifier() {
    float a = getGauche()->calculer();
    float b = getDroite()->calculer();

    return new Soustraction(new Constante(a), new Constante(b));
}
