#ifndef VARIABLE_H
#define VARIABLE_H

#include "Constante.h"
#include <string>

class Variable: public Constante
{
private:
    std::string _nom;
public:
    Variable();

    Variable(std::string n, float f = 0.0f);

    std::string toString() const override;
    std::string toStringNpi() const override;

    virtual ~Variable();

     Expression* simplifier() override;
};

#endif // VARIABLE_H
