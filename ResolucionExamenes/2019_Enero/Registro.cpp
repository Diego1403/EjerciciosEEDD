//
// Created by Diego on 04/01/2023.
//

#include "Registro.h"


void Registro::cambiarEspecie(Insecto ins) {
    especieInsecto=ins;
    nombreEspecie=ins.getNombreEspecie();
}

Registro::Registro(int id, const Fecha &fecha, const UTM &pos, const string &nombreEspecie,
                   AmigoAmazonas *registradoPor, const string &imagen) : id(id), fecha(fecha), pos(pos),
                                                                         nombreEspecie(nombreEspecie),
                                                                         registradoPor(registradoPor), imagen(imagen) {
    estado=faltaComprobacion;
    desconocido=true;
}

Registro::Registro(int id, const Fecha &fecha, const UTM &pos, AmigoAmazonas *registradoPor, const string &imagen,
                   const Insecto &especieInsecto) : id(id), fecha(fecha), pos(pos), registradoPor(registradoPor),
                                                    imagen(imagen), especieInsecto(especieInsecto) {
    estado=faltaComprobacion;
    desconocido= false;
    nombreEspecie=especieInsecto.getNombreEspecie();


}

AmigoAmazonas *Registro::getUsuario() {
    return registradoPor;
}

void Registro::cambiarEstado(TipoEstado est) {
    estado=est;
}

int Registro::getId() const {
    return id;
}

TipoEstado Registro::getEstado() const {
    return estado;
}

bool Registro::isDesconocido() const {
    return desconocido;
}
