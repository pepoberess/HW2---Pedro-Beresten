#include "Entero.h"

    string Entero :: toString() const{return to_string(entero);}
    int Entero :: SacarValor() const{
        return entero;
    }
    unique_ptr<Numero> Entero :: sum(Numero& numero) const{
        try{
            Entero& casteado = dynamic_cast<Entero&>(numero);
            return make_unique<Entero>(this->entero + casteado.SacarValor());
        }
        catch(std :: bad_cast& error) {
            cerr << "Error, el número debe ser un entero" << error.what();
            return NULL;
        }
    }
    unique_ptr<Numero> Entero :: resta(Numero& numero) const{
        try{
            Entero& casteado = dynamic_cast<Entero&>(numero);
            return make_unique<Entero>(this->entero - casteado.SacarValor());
        }
        catch(std :: bad_cast& error) {
            cerr << "Error, el número debe ser un entero" << error.what();
            return NULL;
        }
    }
    unique_ptr<Numero> Entero :: multiplicacion(Numero& numero) const{
        try{
            Entero& casteado = dynamic_cast<Entero&>(numero);
            return make_unique<Entero>(this->entero * casteado.SacarValor());
        }
        catch(std :: bad_cast& error) {
            cerr << "Error, el número debe ser un entero" << error.what();
            return NULL;
        }
    }
