#include "Curso.h"

int main(){
    string nombre;
    int legajo;
    int opcion;
    vector <Estudiante*> estudiantes;
    Curso curso(estudiantes);
    
    do {
        cout << "\n1. Inscribir estudiante" << endl;
        cout << "2. Desinscribir estudiante" << endl;
        cout << "3. Ver si estudiante está inscripto" << endl;
        cout << "4. Ver si el curso está completo" << endl;
        cout << "5. Imprimir estudiantes en orden alfabetico" << endl;
        cout << "6. Copiar curso" << endl;
        cout << "7. Promedio general de un estudiante" << endl;
        cout << "8. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1: {
                cout << "Ingrese nombre: ";
                cin >> nombre;
                cout << "Ingrese legajo: ";
                cin >> legajo;               
                Estudiante* nuevo = new Estudiante(nombre, legajo);
                curso.inscribir(nuevo);
                cout << "Se ha inscripto correctamente" << endl;
                break;
            }
            case 2: {
                cout << "Ingrese el legajo del estudiante a desinscribir: ";
                cin >> legajo;
                curso.desinscribir(legajo);
                break;
            }
            case 3: {
                cout << "Ingrese legajo del estudiante: ";
                cin >> legajo;
                if (curso.esta_inscripto(legajo))
                    cout << "El estudiante está inscripto." << endl;
                else
                    cout << "El estudiante no está inscripto." << endl;
                break;
            }
            case 4: {
                if (curso.esta_completo())
                    cout << "El curso está completo." << endl;
                else
                    cout << "El curso NO está completo." << endl;
                break;
            }
            case 5: {
                cout << "ESTUDIANTES ORDENADOS" << endl;
                curso.estudiantes_alfabetico();
                break;
            }
            case 6: {
                Curso copia(curso);
                cout << "Curso copiado exitosamente";
                break;
            }
            case 7: {
                cout << "Ingrese el nombre del estudiante: ";
                cin >> nombre;
                cout << "Ingrese legajo del estudiante: ";
                cin >> legajo;
                
                if (!curso.esta_inscripto(legajo)) {
                    cout << "El estudiante no está en el curso" << endl;
                } else {
                    Estudiante estudiante(nombre, legajo);
                    cout << "El promedio general de: " << nombre << "es" << estudiante.darpromedio() << endl;
                }
                break;
            }
            case 8: {
                cout << "Saliendo del programa";
                break;
            }
            default: {
                cout << "Opcion invalida. Intente nuevamente.\n";
                break;
            }
        }
    } while(opcion != 8);

    // libero memoria
    for(unsigned long int i; i < estudiantes.size(); i++) {
        delete estudiantes.at(i);
    }

    return 0;
}
