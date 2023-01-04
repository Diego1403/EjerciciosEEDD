//
// Created by Diego on 04/01/2023.
//

#ifndef RESOLUCIONEXAMENES_GASOLINERASAUT_H
#define RESOLUCIONEXAMENES_GASOLINERASAUT_H

#include "string"
#include "Cliente.h"
using namespace std;
class GasolinerasAut {
private:
    int id;
    UTM posicion ;
public:
    void avisoCentral(string combustible);
    void rellenarDepositoGasolinera(string Combustible , double litros);
    void repostarVehiculo(Cliente c,string combustible, double litros);
};


#endif //RESOLUCIONEXAMENES_GASOLINERASAUT_H
