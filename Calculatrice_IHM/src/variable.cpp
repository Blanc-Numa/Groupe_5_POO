#include "include/variable.h"
#include <iostream>
#include <string>

/* [Equipe integration ] */
/* Fichiers ajoutes en figure de reference mais non fonctionnels en l'etat. */

Variable::~Variable(){}

Variable::Variable(std::string n, float f){
    _nom = n;
    _valeur = f;
}

std::string Variable::toString() const{
    return _nom;
}

std::string Variable::toStringNpi() const{
    return _nom;
}

Expression* Variable::simplifier(){
    return this;
}
