//
// Created by Diego on 04/01/2023.
//

#ifndef RESOLUCIONEXAMENES_DEPOSITO_H
#define RESOLUCIONEXAMENES_DEPOSITO_H

#include "string"
#include "Cliente.h"
using namespace std;
class Deposito {
    string nombreCombustible;
    double litrosStock;
    double precioLitro;

    void rellenarDepositos(double  litros);
    void repostarVehiculo(Cliente c , double litros)

};


#endif //RESOLUCIONEXAMENES_DEPOSITO_H
