//

// Created by Diego on 04/01/2023.
//

#ifndef RESOLUCIONEXAMENES_CLIENTE_H
#define RESOLUCIONEXAMENES_CLIENTE_H


#include "GasolinerasAut.h"

class Cliente {
    string dni;
    int puntos;
    UTM posicion;

    UTM getUtm();
    GasolinerasAut solicitarRepostaje(string combustible);
    double echarCarburante(GasolinerasAut g ,string combustible , double litros);

};


#endif //RESOLUCIONEXAMENES_CLIENTE_H
