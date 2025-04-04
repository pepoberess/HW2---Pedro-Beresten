#pragma once

#include "Numero.h"

class Complejo : public Numero{
private:
    double real;
    double imaginaria;
public:
    Complejo(double real, double imaginaria) : real(real), imaginaria(imaginaria) {}
    string toString() const override;
    double SacarParteReal();
    double SacarParteImaginaria();
    unique_ptr<Numero> sum(Numero& numero)const override;
    unique_ptr<Numero> resta(Numero& numero)const override;
    unique_ptr<Numero> multiplicacion(Numero& numero)const override;
};