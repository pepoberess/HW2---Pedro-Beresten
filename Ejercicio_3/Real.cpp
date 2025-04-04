#include "Real.h"

    string Real :: toString() const{return to_string(real);}
    double Real :: SacarValor() const{
        return real;
    }
    unique_ptr<Numero> Real :: sum(Numero& numero) const{
        try{
            Real& casteado = dynamic_cast<Real&>(numero);
            return make_unique<Real>(this->real + casteado.SacarValor());
        }
        catch(std :: bad_cast& error) {
            cerr << "Error, el número debe ser un entero" << error.what();
            return NULL;
        }
    }
    unique_ptr<Numero> Real :: resta(Numero& numero) const{
        try{
            Real& casteado = dynamic_cast<Real&>(numero);
            return make_unique<Real>(this->real - casteado.SacarValor());
        }
        catch(std :: bad_cast& error) {
            cerr << "Error, el número debe ser un entero" << error.what();
            return NULL;
        }
    }
    unique_ptr<Numero> Real :: multiplicacion(Numero& numero) const{
        try{
            Real& casteado = dynamic_cast<Real&>(numero);
            return make_unique<Real>(this->real * casteado.SacarValor());
        }
        catch(std :: bad_cast& error) {
            cerr << "Error, el número debe ser un entero" << error.what();
            return NULL;
        }
    }
