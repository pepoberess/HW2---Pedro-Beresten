#pragma once

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

class Estudiante {
private:
    string nombre;
    int legajo;
    vector<pair<string, float>> notas;
    
public:
    Estudiante(string n, int l) : nombre(n), legajo(l) {}
    string darnombre();
    int darlegajo();
    float darpromedio();

    bool operator<(const Estudiante& otro) const;
    friend ostream& operator<<(ostream& salida, const Estudiante& otro);
};