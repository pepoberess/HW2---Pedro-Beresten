#include "Tiempo.h"

    void Horario :: HacerHorario(int HHh, int MMm, int SSs, string p) {  
        if (HHh >= 0 && HHh <= 12) horas = HHh;
        else {
            cout << "Error: La hora debe estar entre 0 y 12. Se asignará 0hs.";
            horas = 0;
        }

        if (MMm >= 0 && MMm <= 59) minutos = MMm;
        else {
            cout << "Error: Los minutos deben estar entre 0 y 59. Se asignará 0mins.";
            minutos = 0;
        }

        if (SSs >= 0 && SSs <= 59) segundos = SSs;
        else {
            cout << "Error: Los segundos deben estar entre 0 y 59. Se asignará 0secs.";
            segundos = 0;
        }

        if (p == "a.m." || p == "p.m.") periodo = p;
        else {
            cout << "Error: El período debe ser 'a.m.' o 'p.m.'. Se asignará 'a.m.'.";
            periodo = "a.m.";
        }
    }

    Horario :: Horario() { HacerHorario(0, 0, 0, "a.m."); }
    Horario :: Horario(int HHh) { HacerHorario(HHh, 0, 0, "a.m."); }
    Horario :: Horario(int HHh, int MMm) { HacerHorario(HHh, MMm, 0, "a.m."); } 
    Horario :: Horario(int HHh, int MMm, int SSs) { HacerHorario(HHh, MMm, SSs, "a.m."); }
    Horario :: Horario(int HHh, int MMm, int SSs, string p) { HacerHorario(HHh, MMm, SSs, p); }

    int Horario :: SacarHora() { return horas; }
    int Horario :: SacarMinuto() { return minutos; }
    int Horario :: SacarSegundo() { return segundos; }
    string Horario :: SacarPeriodo() { return periodo; }
    
    void Horario :: CambiarHora(int HHh) { HacerHorario(HHh, minutos, segundos, periodo); }
    void Horario :: CambiarMinuto(int MMm) { HacerHorario(horas, MMm, segundos, periodo); }
    void Horario :: CambiarSegundo(int SSs) { HacerHorario(horas, minutos, SSs, periodo); }
    void Horario :: CambiarPeriodo(string p) { HacerHorario(horas, minutos, segundos, p); }
    
    void Horario :: MostrarHorario() { cout << setw(2) << setfill('0') << horas << "h, " << setw(2) << setfill('0') << minutos << "m, " << setw(2) << setfill('0') << segundos << "s " << periodo << endl; }
    void Horario :: MostrarHorario24hs() {
        int h24 = horas;

        if (periodo == "p.m." && horas != 12) h24 += 12;  // Convertir a formato 24hs
        else if (periodo == "a.m." && horas == 12) h24 = 0;  // Medianoche es 00:00

        cout << setw(2) << setfill('0') << h24 << ":" << setw(2) << setfill('0') << minutos << ":" << setw(2) << setfill('0') << segundos << " hs" << endl;
    }
