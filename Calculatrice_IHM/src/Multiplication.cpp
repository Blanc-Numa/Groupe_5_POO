#include <iostream>

#include "include/Multiplication.h"
#include "include/variable.h"

Multiplication::Multiplication(Expression *gauche, Expression *droite) : Operation(gauche, droite){}

std::string Multiplication::toString() const
{
    return getGauche()->toString() + "*" + getDroite()->toString();
}

std::string Multiplication::toStringNpi() const
{
    return getGauche()->toStringNpi() + " " + getDroite()->toStringNpi() + " *";
}

float Multiplication::calculer() const
{
    return getGauche()->calculer() * getDroite()->calculer();
}

Expression* Multiplication::simplifier() {
    float a = getGauche()->calculer();
    float b = getDroite()->calculer();

    return new Multiplication(new Constante(a), new Constante(b));
}
