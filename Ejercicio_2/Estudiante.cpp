#include "Estudiante.h"

string Estudiante :: darnombre() {return nombre;}
int Estudiante :: darlegajo() {return legajo;}

float Estudiante :: darpromedio() {
    int contador = 0;
    for (long unsigned int i = 0;  i < notas.size(); i++){
        contador += notas[i].second;
    }
    return contador/notas.size();
}

bool Estudiante :: operator<(const Estudiante& otro) const {
    return this->nombre < otro.nombre;
}

ostream & operator<<(ostream& salida, const Estudiante& otro){
    salida << "Nombre: " << otro.nombre << ", Legajo: " << otro.legajo;
    return salida;
}