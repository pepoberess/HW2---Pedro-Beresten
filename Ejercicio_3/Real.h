#pragma once

#include "Numero.h"

class Real : public Numero{
private:
    double real;
public:
    Real(double real) : real(real) {}
    string toString() const override;
    double SacarValor() const;
    unique_ptr<Numero> sum(Numero& numero ) const override;
    unique_ptr<Numero> resta(Numero& numero) const override;
    unique_ptr<Numero> multiplicacion(Numero& numero) const override;
};