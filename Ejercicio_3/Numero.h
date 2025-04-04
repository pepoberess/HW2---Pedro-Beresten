# pragma once

#include <iostream>
#include <memory>

using namespace std;

class Numero {
public:
    virtual unique_ptr<Numero> sum(Numero& numero) const = 0;
    virtual unique_ptr<Numero> resta(Numero& numero) const = 0;
    virtual unique_ptr<Numero> multiplicacion(Numero& numero) const = 0;
    virtual string toString() const = 0;
    virtual ~Numero() = default;
};