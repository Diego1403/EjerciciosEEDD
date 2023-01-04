//
// Created by Diego on 04/01/2023.
//

#ifndef EJERCICIOSEEDD_REGISTRO_H
#define EJERCICIOSEEDD_REGISTRO_H


#include "UTM.h"
#include "Fecha.h"

class Registro {
int id;
Fecha fecha;
UTM pos;
bool desconocido;
TipoEstado estado;

};


#endif //EJERCICIOSEEDD_REGISTRO_H
