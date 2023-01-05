//
// Created by Diego on 04/01/2023.
//

#ifndef EJERCICIOSEEDD_INSECTO_H
#define EJERCICIOSEEDD_INSECTO_H

#include "string"

using namespace std;
class Insecto {
public:
    Insecto();
    Insecto(const string &nombreEspecie, const string &nombreSubEspecie, const string &imagen);

    const string &getNombreEspecie() const;

    const string &getNombreSubEspecie() const;

    const string &getImagen() const;

private:
    string nombreEspecie;
    string nombreSubEspecie;
    string imagen;
};


#endif //EJERCICIOSEEDD_INSECTO_H
