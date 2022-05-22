#include <iostream>

#include "include/Division.h"
#include "include/variable.h"

Division::Division(Expression *gauche, Expression *droite) : Operation(gauche, droite){}

std::string Division::toString() const
{
    return getGauche()->toString() + "/" + getDroite()->toString();
}

std::string Division::toStringNpi() const
{
    return getGauche()->toStringNpi() + " " + getDroite()->toStringNpi() + " /";
}

float Division::calculer() const
{
    return getGauche()->calculer() / getDroite()->calculer();
}

Expression* Division::simplifier() {
    float a = getGauche()->calculer();
    float b = getDroite()->calculer();

    if(a == 0.0f && b == 0.0f){
        return this;
    }
    else if(a == 0.0f){
         return new Division(getGauche(), new Constante(b));

    }
    else if(b == 0.0f){
        return new Division(new Constante(a), getDroite());
    }

    return new Division(new Constante(a), new Constante(b));
}
