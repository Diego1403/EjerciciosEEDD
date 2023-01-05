//
// Created by Diego on 04/01/2023.
//

#include "Insecto.h"

const string &Insecto::getNombreEspecie() const {
    return nombreEspecie;
}

const string &Insecto::getNombreSubEspecie() const {
    return nombreSubEspecie;
}

const string &Insecto::getImagen() const {
    return imagen;
}

Insecto::Insecto(const string &nombreEspecie, const string &nombreSubEspecie, const string &imagen) : nombreEspecie(
        nombreEspecie), nombreSubEspecie(nombreSubEspecie), imagen(imagen) {}

Insecto::Insecto() {


}
