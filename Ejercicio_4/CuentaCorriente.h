#pragma once

#include "Banco.h"
#include "CajaDeAhorro.h"

/*
fondos -> private -> El puntero a la caja de ahorro es parte interna de la implementación, no debería ser accesible desde afuera.
Métodos -> public -> Porque son para interactuar con cualquier tipo de cuenta.
*/

class CuentaCorriente : public Cuenta{
private:
    unique_ptr<Caja_Ahorro> fondos;
public:
    CuentaCorriente(string tc, double b, unique_ptr<Caja_Ahorro> fondos) : Cuenta(tc, b), fondos(move(fondos)){}
    bool retirar(double cantidad) override;
    void mostrarinfo() override;
};
