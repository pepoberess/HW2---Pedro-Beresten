#pragma once

#include <iostream>
#include <memory>

using namespace std;


/*
balance y titularCuenta	-> protected -> Es necesario para que las clases Caja_Ahorro y CuentaCorriente puedan modificarlo directamente, sin hacerlo público.
Métodos -> public -> Porque son para interactuar con cualquier tipo de cuenta.
*/

class Caja_Ahorro;
class CuentaCorriente;

class Cuenta{
friend class Caja_Ahorro;
friend class CuentaCorriente;
protected:
    string titularCuenta;
    double balance;
public:
    Cuenta(string tc, double b) : titularCuenta(tc), balance(b) {}
    void depositar(double cantidad);
    virtual bool retirar(double cantidad) = 0;
    virtual void mostrarinfo() = 0;
    virtual ~Cuenta() = default;
};
