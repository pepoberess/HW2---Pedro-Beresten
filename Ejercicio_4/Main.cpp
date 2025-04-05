#include "Banco.h"
#include "CajaDeAhorro.h"
#include "CuentaCorriente.h"

int main() {
    
    Caja_Ahorro bere("Pedro Beresten", 250);
    
    cout << "Prueba de Caja de Ahorro" << endl;
    bere.mostrarinfo(); // Primera consulta (sin descuento)
    bere.mostrarinfo(); // Segunda consulta (sin descuento)
    bere.mostrarinfo(); // Tercera consulta (aplica descuento)

    cout << "Intentando retirar 300 pesos" << endl;
    bere.retirar(300); 

    cout << "Intentando retirar 100 pesos" << endl;
    bere.retirar(100);
    bere.mostrarinfo();

    unique_ptr<Caja_Ahorro> cda = make_unique<Caja_Ahorro>("Pedro Beresten", 1000);
    CuentaCorriente cuentaCorriente("Pedro Beresten", 200, move(cda));

    cout << "Prueba de Cuenta Corriente" << endl;
    cuentaCorriente.mostrarinfo();

    cout << "Intentando retirar 150 pesos desde la cuenta corriente" << endl;
    cuentaCorriente.retirar(150);
    cuentaCorriente.mostrarinfo();

    cout << "Intentando retirar 100 pesos (requiere fondos de la caja de ahorro)" << endl;
    cuentaCorriente.retirar(100);
    cuentaCorriente.mostrarinfo();

    cout << "Intentando retirar 500 pesos (más de lo disponible)..." << endl;
    cuentaCorriente.retirar(1000);

    return 0;
}
