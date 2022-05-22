#include <iostream>

#include "include/Constante.h"

Constante::Constante(float f) : _valeur(f){}

std::string Constante::toString() const
{
    std::string tmp = std::to_string(getValeur());
    tmp.erase(tmp.find_last_not_of('0') + 1, std::string::npos);
    tmp.erase(tmp.find_last_not_of('.') + 1, std::string::npos);

    return tmp;
}

std::string Constante::toStringNpi() const
{
    return toString();
}

float Constante::calculer() const
{
    return getValeur();
}

Constante::~Constante(){}

Expression* Constante::simplifier(){
    return this;
}
