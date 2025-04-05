#include "CuentaCorriente.h"

bool CuentaCorriente :: retirar(double cantidad) {
    if (cantidad <= balance) {
        balance -= cantidad;
        return true;
    } 
    else if (fondos && (balance + fondos->balance) >= cantidad) {
        double faltante = cantidad - balance;
        balance = 0;
        fondos->balance -= faltante;
        return true;
    } 
    else {
        std::cout << "Fondos insuficientes en ambas cuentas" << std::endl;
        return false;
    }
}

void CuentaCorriente :: mostrarinfo() {
    cout << "El dueño de la cuenta es " << titularCuenta << " y dispone de " << balance << " pesos en la cuenta corriente." << endl;
    if (fondos) {
        cout << "Cuenta de ahorro asociada: " << fondos->balance << " pesos." << endl;
    }
}