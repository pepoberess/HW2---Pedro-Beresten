#pragma once

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Horario {
private:
    int horas;
    int minutos;
    int segundos;
    string periodo;  // "a.m." o "p.m."

    void HacerHorario(int HHh, int MMm, int SSs, string p);

public:
    // Constructores
    Horario();
    Horario(int HHh);
    Horario(int HHh, int MMm);
    Horario(int HHh, int MMm, int SSs);
    Horario(int HHh, int MMm, int SSs, string p);

    // Métodos de acceso
    int SacarHora();
    int SacarMinuto();
    int SacarSegundo();
    string SacarPeriodo();

    // Métodos de modificación
    void CambiarHora(int HHh);
    void CambiarMinuto(int MMm);
    void CambiarSegundo(int SSs);
    void CambiarPeriodo(string p);

    // Métodos de salida
    void MostrarHorario();
    void MostrarHorario24hs();
};