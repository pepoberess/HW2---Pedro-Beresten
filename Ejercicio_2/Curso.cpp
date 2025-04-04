#include "Curso.h"

void Curso :: inscribir(Estudiante* nuevo) {if (!esta_inscripto(nuevo->darlegajo())) estudiantes.push_back(nuevo);}
int Curso :: desinscribir(const int legajo) {
    if (!esta_inscripto(legajo)){
        cout << "El estudiante no está en el curso";\
        return 0;
    }

    for (long unsigned int i = 0; i < estudiantes.size(); i++) {
        if (estudiantes.at(i)->darlegajo() == legajo) {
            estudiantes.erase(estudiantes.begin() + i);
            break;
        }
    }
    cout << "Se desinscribió correctamente" << endl;
    return 0;
}

bool Curso :: esta_inscripto(const int legajo) {
    for (long unsigned int i = 0; i < estudiantes.size(); i++) {
        if (estudiantes.at(i)->darlegajo() == legajo) return true;
    }
    return false;
}
bool Curso :: esta_completo() {if (estudiantes.size() < 20) return false; else return true;}

void Curso :: estudiantes_alfabetico() {
    sort(estudiantes.begin(), estudiantes.end());
    for (long unsigned int i = 0; i < estudiantes.size(); i++){
        cout << estudiantes.at(i)->darnombre() << endl;
    }
}
/*
Para copiar el curso utilizaré el copy constructor shallow copy ya que los estudiantes son independientes a sus cursos.
Al ser borrado el puntero de un curso hacia un estudiante, no se elimina el estudiante ni se elimina ese estudiante de otro curso. 
Esto se debe a que los punteros de los cursos apuntan hacia los estudiantes y por ende al desinscribir no se elimina el objeto si no el puntero.
*/

    Curso HacerCopia(Curso clase){
        Curso clase2 = clase;
        return clase2;
    }

/*
La relación entre el curso y los estudiantes es de agregación, siendo el whole el curso y los estudiantes las parts.
*/
