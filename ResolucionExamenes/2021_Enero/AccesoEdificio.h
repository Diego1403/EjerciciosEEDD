//
// Created by Diego on 04/01/2023.
//

#ifndef RESOLUCIONEXAMENES_ACCESOEDIFICIO_H
#define RESOLUCIONEXAMENES_ACCESOEDIFICIO_H


#include "Tarjeta.h"
#include "Fecha.h"

class AccesoEdificio {
    Tarjeta solicitadoAcceso(Puerta p,Tarjeta id);
   void darAccesoGeneral();
   void darAccesoDependencia(string nif , int idpuerta);
   void quitarAcceso(string nif , int idPuerta);
   void listadoAccesos(int idPuerta,Fecha inicio , Fecha fin);
};


#endif //RESOLUCIONEXAMENES_ACCESOEDIFICIO_H
