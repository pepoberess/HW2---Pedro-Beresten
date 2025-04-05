#include "Banco.h"

void Cuenta :: depositar(double cantidad){
    balance += cantidad;
    cout << "se han depositado a tu cuenta: " << cantidad << "pesos";
}
