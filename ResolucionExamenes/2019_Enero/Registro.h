//
// Created by Diego on 04/01/2023.
//

#ifndef EJERCICIOSEEDD_REGISTRO_H
#define EJERCICIOSEEDD_REGISTRO_H


#include "UTM.h"
#include "Fecha.h"
#include "Insecto.h"
#include "AmigoAmazonas.h"

enum TipoEstado{faltaComprobacion,nuecaEspecie,especieRevisada};


class Registro {

private:
public:
    Registro(int id, const Fecha &fecha, const UTM &pos, AmigoAmazonas *registradoPor, const string &imagen,
             const Insecto &especieInsecto);

public:
    Registro(int id, const Fecha &fecha, const UTM &pos, const string &nombreEspecie, AmigoAmazonas *registradoPor,
             const string &imagen);

private:
    int id;
    Fecha fecha;
    UTM pos;
    string nombreEspecie;
    bool desconocido;
    AmigoAmazonas *registradoPor;
    TipoEstado estado;
    string imagen;

    Insecto especieInsecto; //esto seria la subespecie
public:


    void cambiarEspecie(Insecto ins);
    AmigoAmazonas *getUsuario();
    void cambiarEstado(TipoEstado est);

    int getId() const;

    TipoEstado getEstado() const;

    bool isDesconocido() const;

};



#endif //EJERCICIOSEEDD_REGISTRO_H
