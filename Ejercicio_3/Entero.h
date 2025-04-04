#pragma once

#include "Numero.h"

class Entero : public Numero{
private:
    int entero;
public:
    Entero(int entero) : entero(entero) {}
    string toString() const override;
    int SacarValor() const;
    unique_ptr<Numero> sum(Numero& numero ) const override;
    unique_ptr<Numero> resta(Numero& numero) const override;
    unique_ptr<Numero> multiplicacion(Numero& numero) const override;
};
