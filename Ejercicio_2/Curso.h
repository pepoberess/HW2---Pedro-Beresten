#pragma once

#include "Estudiante.h"
#include <algorithm>

using namespace std;


class Curso {
    private:
        vector<Estudiante*> estudiantes;
    
    public:
        // Constructor por defecto
        Curso() = default;
    
        // Inscripción de estudiantes
        void inscribir(Estudiante* nuevo);
    
        // Desinscripción
        int desinscribir(const int legajo);
    
        // Verifica si un estudiante está inscripto
        bool esta_inscripto(const int legajo);
    
        // Verifica si el curso está completo (20 estudiantes)
        bool esta_completo();
    
        // Imprime los estudiantes ordenados alfabéticamente
        void estudiantes_alfabetico();
    };
    
// Hace una copia del curso
Curso HacerCopia(Curso clase);