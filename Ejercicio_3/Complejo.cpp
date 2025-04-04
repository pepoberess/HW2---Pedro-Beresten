#include "Complejo.h"

string Complejo :: toString() const{
    string string_real = to_string(real);
    string string_imaginaria = to_string(imaginaria);
    return string_real + (imaginaria >= 0 ? " + " : " - ") + to_string(abs(imaginaria)) + "i";;
}

double Complejo :: SacarParteReal(){
    return real;
}
double Complejo :: SacarParteImaginaria(){
    return imaginaria;
}
unique_ptr<Numero> Complejo :: sum(Numero& numero) const{
    try{
        Complejo& casteado = dynamic_cast<Complejo&>(numero);
        return make_unique<Complejo>(this->real + casteado.SacarParteReal(), this->imaginaria + casteado.SacarParteImaginaria());
    }
    catch(std :: bad_cast& error) {
        cerr << "Error, el número debe ser un complejo" << error.what();
        return NULL;
    }
}
unique_ptr<Numero> Complejo :: resta(Numero& numero) const{
    try{
        Complejo& casteado = dynamic_cast<Complejo&>(numero);
        return make_unique<Complejo>(this->real - casteado.SacarParteReal(), this->imaginaria - casteado.SacarParteImaginaria());
    }
    catch(std :: bad_cast& error) {
        cerr << "Error, el número debe ser un complejo" << error.what();
        return NULL;
    }
}
unique_ptr<Numero> Complejo :: multiplicacion(Numero& numero) const{
    try{
        Complejo& casteado = dynamic_cast<Complejo&>(numero);
        double nueva_real = (this->real * casteado.SacarParteReal()) - (this->imaginaria * casteado.SacarParteImaginaria());
        double nueva_imaginaria = (this->real * casteado.SacarParteImaginaria()) + (this->imaginaria * casteado.SacarParteReal());
        return make_unique<Complejo>(nueva_real, nueva_imaginaria);
    }
    catch(std :: bad_cast& error) { 
        cerr << "Error, el número debe ser un complejo" << error.what();
        return NULL;
    }
}