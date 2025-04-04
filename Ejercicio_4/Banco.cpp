#include "Banco.h"

class Banco{
protected:
    double balance;
    string titularCuenta;
public:
    virtual void depositar(int cantidad) = 0;
    virtual void retirar(int retirar) = 0;
    virtual void mostrarinfo() = 0;
};
