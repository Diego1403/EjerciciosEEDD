//
// Created by Diego on 04/01/2023.
//

#ifndef EJERCICIOSEEDD_AMIGOAMAZONAS_H
#define EJERCICIOSEEDD_AMIGOAMAZONAS_H


#include <list>
#include "UTM.h"
#include "Registro.h"
#include "AnimaLoca.h"

class AmigoAmazonas {
        string alias;
        string pass;
        string tfno;
        list<Registro> misRegistros;
        AnimaLoca *conectado;
        UTM getUTM();
        Fecha getFecha();

        Insecto* buscarEspecie(string especie);
        Insecto buscarSubespecie(string especie ,string subespecie);
        void nuevoRegistro(int id, Insecto ins , string imagen ,Fecha f, UTM pos); //falta;
        void nuevoRegistro(int id, string especie , string imagen ,Fecha f, UTM pos); //falta;
        void recibirMensaje(string mensaje);


public:
    void conectar(AnimaLoca *pLoca);

    void desconectar();
};


#endif //EJERCICIOSEEDD_AMIGOAMAZONAS_H
