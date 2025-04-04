#include "Tiempo.h"

int main(){
    int horas;
    int minutos;
    int segundos;
    string periodo;
    string respuesta;

    do{
        cout << "Ingrese la hora deseada: ";
        cin >> horas;
        if (horas < 0 || horas > 12) {
            cout << "La hora debe estar entre 0 y 12. Por favor reingrese una hora";
            cout << "Desea salir del programa?  si / no" << endl;
            cin >> respuesta;
            if (respuesta == "si") return 0;
        }
    }while (horas < 0 || horas > 12);

    do{
        cout << "Ingrese los minutos deseados: ";
        cin >> minutos;
        if (minutos < 0 || minutos > 59) {
            cout << "Los minutos deben estar entre 0 y 59. Por favor reingrese los minutos";
            cout << "Desea salir del programa?  si / no" << endl;
            cin >> respuesta;
            if (respuesta == "si") return 0;
        }
    }while (segundos < 0 || segundos > 59);

    do{
        cout << "Ingrese los segundos deseados: ";
        cin >> segundos;
        if (segundos < 0 || segundos > 59) {
            cout << "Los segundos deben estar entre 0 y 59. Por favor reingrese los segundos";
            cout << "Desea salir del programa?  si / no" << endl;
            cin >> respuesta;
            if (respuesta == "si") return 0;
        }
    }while (segundos < 0 || segundos > 59);

    do{
        cout << "Ingrese el período deseado a.m. / p.m.: ";
        cin >> periodo;
        if (periodo != "a.m." && periodo != "p.m.") {
            cout << "El período debe ser a.m. o p.m. Por favor reingrese el período";
            cout << "Desea salir del programa?  si / no" << endl;
            cin >> respuesta;
            if (respuesta == "si") return 0;
        }
    }while (periodo != "a.m." && periodo != "p.m.");

    Horario Tiempo(horas, minutos, segundos, periodo);
    Tiempo.MostrarHorario();
    Tiempo.MostrarHorario24hs();
}