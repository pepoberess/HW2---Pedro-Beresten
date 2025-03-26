#include <iostream>
#include <iomanip>

using namespace std;

class Horario {
private:
    int horas;
    int minutos;
    int segundos;
    string periodo;  // "a.m." o "p.m."

    void setTiempo(int HHh, int MMm, int SSs, string p) {  
        if (HHh >= 0 && HHh <= 12) horas = HHh;
        else {
            cout << "Error: La hora debe estar entre 0 y 12. Se asignará 0hs." << endl;
            horas = 0;
        }

        if (MMm >= 0 && MMm <= 59) minutos = MMm;
        else {
            cout << "Error: Los minutos deben estar entre 0 y 59. Se asignará 0mins." << endl;
            minutos = 0;
        }

        if (SSs >= 0 && SSs <= 59) segundos = SSs;
        else {
            cout << "Error: Los segundos deben estar entre 0 y 59. Se asignará 0secs." << endl;
            segundos = 0;
        }

        if (p == "a.m." || p == "p.m.") periodo = p;
        else {
            cout << "Error: El período debe ser 'a.m.' o 'p.m.'. Se asignará 'a.m.'." << endl;
            periodo = "a.m.";
        }
    }

public:
    Horario() { setTiempo(0, 0, 0, "a.m."); }
    Horario(int HHh) { setTiempo(HHh, 0, 0, "a.m."); }
    Horario(int HHh, int MMm) { setTiempo(HHh, MMm, 0, "a.m."); } 
    Horario(int HHh, int MMm, int SSs) { setTiempo(HHh, MMm, SSs, "a.m."); }
    Horario(int HHh, int MMm, int SSs, string p) { setTiempo(HHh, MMm, SSs, p); }

    int getHora() { return horas; }
    int getMinuto() { return minutos; }
    int getSegundo() { return segundos; }
    string getPeriodo() { return periodo; }

    void setHora(int HHh) { setTiempo(HHh, minutos, segundos, periodo); }
    void setMinuto(int MMm) { setTiempo(horas, MMm, segundos, periodo); }
    void setSegundo(int SSs) { setTiempo(horas, minutos, SSs, periodo); }
    void setPeriodo(string p) { setTiempo(horas, minutos, segundos, p); }
    
    void mostrarTiempo() { cout << setw(2) << setfill('0') << horas << "h, " << setw(2) << setfill('0') << minutos << "m, " << setw(2) << setfill('0') << segundos << "s " << periodo << endl; }
    void mostrarTiempo24hs() {
        int h24 = horas;

        if (periodo == "p.m." && horas != 12) h24 += 12;  // Convertir a formato 24h
        else if (periodo == "a.m." && horas == 12) h24 = 0;  // Medianoche es 00:00

        cout << setw(2) << setfill('0') << h24 << ":" << setw(2) << setfill('0') << minutos << ":" << setw(2) << setfill('0') << segundos << " hs" << endl;
    }
};