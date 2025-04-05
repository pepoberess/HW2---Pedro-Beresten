#include "CajaDeAhorro.h"

bool Caja_Ahorro :: retirar(double cantidad){
    if (cantidad <= balance) {
        balance -= cantidad;
        return true;
    }
    else {
        cout << "No tienes suficiente balance" << endl;
        return false;
    }
}

void Caja_Ahorro :: mostrarinfo() {
    contador += 1;
    if (contador > 2) {
        balance -= 20;
        cout << "cargo de 20 pesos por consulta" << endl;
    }
    cout << "El dueño de la cuenta es " << titularCuenta << " y dispone de " << balance << " pesos" << endl;
}