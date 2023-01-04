//
// Created by Diego on 04/01/2023.
//

#ifndef RESOLUCIONEXAMENES_PUERTA_H
#define RESOLUCIONEXAMENES_PUERTA_H

#include "Tarjeta.h"

enum Depedencias{Despacho=1 , banoH=2, banoM=3 , Entrada=4 , Salajuntas=5,Laboratorio=6 };
class Puerta {
    int id;
    Depedencias TipoDependencia;
public:
    void abrir();
    void denegar();
    Tarjeta tarjetaInsertada(int idTarjeta);
    void addRegistro(string dni , bool permiso);
};


#endif //RESOLUCIONEXAMENES_PUERTA_H
