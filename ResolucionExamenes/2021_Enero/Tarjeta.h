//
// Created by Diego on 04/01/2023.
//

#ifndef RESOLUCIONEXAMENES_TARJETA_H
#define RESOLUCIONEXAMENES_TARJETA_H
#include "Usuario.h"
#include "Puerta.h"

class Tarjeta {
    int id;

public:
    void addAcessoDependencia(Puerta p);
    void anulaAcessoDependenica(int idPuerta);
    Usuario getUsuario;
};


#endif //RESOLUCIONEXAMENES_TARJETA_H
