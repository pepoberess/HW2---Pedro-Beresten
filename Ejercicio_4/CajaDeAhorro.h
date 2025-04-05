#pragma once

#include "Banco.h"

/*
contador -> private	-> No debería ser visible ni accesible desde afuera.
Métodos -> public -> Porque son para interactuar con cualquier tipo de cuenta.
*/

class Cuenta_Corriente;

class Caja_Ahorro : public Cuenta{
friend class Cuenta_Corriente;
private:
    int contador = 0;
public:
    Caja_Ahorro(string tc, double b) : Cuenta(tc, b) {}
    bool retirar(double cantidad) override;
    void mostrarinfo() override;
};
