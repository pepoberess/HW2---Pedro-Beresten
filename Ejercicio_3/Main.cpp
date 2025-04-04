#include "Numero.h"
#include "Entero.h"
#include "Real.h"
#include "Complejo.h"

using namespace std;

void probarOperaciones(Numero& a, Numero& b) {
    cout << "Operaciones con " << a.toString() << " y " << b.toString() << endl;
    
    // Suma
    auto suma = a.sum(b);
    cout << a.toString() << " + " << b.toString() << " = " << suma->toString() << endl;
    
    // Resta
    auto resta = a.resta(b);
    cout << a.toString() << " - " << b.toString() << " = " << resta->toString() << endl;
    
    // Multiplicación
    auto mult = a.multiplicacion(b);
    cout << a.toString() << " * " << b.toString() << " = " << mult->toString() << endl;
    
    cout << "----------------------------------" << endl;
}

int main() {
    // Crear números de prueba
    Entero e1(5), e2(2);
    Real r1(3.5), r2(1.2);
    Complejo c1(1.0, 2.0), c2(3.0, 4.0);

    // Probar operaciones con Enteros
    probarOperaciones(e1, e2);
    
    // Probar operaciones con Reales
    probarOperaciones(r1, r2);
    
    // Probar operaciones con Complejos
    probarOperaciones(c1, c2);

    return 0;
}