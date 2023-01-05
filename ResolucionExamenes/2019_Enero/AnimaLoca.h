//
// Created by Diego on 04/01/2023.
//

#ifndef EJERCICIOSEEDD_ANIMALOCA_H
#define EJERCICIOSEEDD_ANIMALOCA_H


#include <map>
#include "Insecto.h"
#include "AmigoAmazonas.h"

class AnimaLoca {
    int ultimoid;
    multimap<string ,Insecto> insectos;
    map<string ,AmigoAmazonas> amigos; //ni para amigos ni insectos  podriamos hacerlo con un vector porque como existen punteros en registros qu apuntas a el se verian afectados
    map<int,Registro> registrosUsuarios;


public:
    void enviarMensajeUsuario(Registro r);
    int getNuevoId();
    AmigoAmazonas login(string user,string clave);
    AmigoAmazonas logout(string user);
    Registro verRegistro(int id);
    Registro verSiguienteRegistro();
    void modificarRegistro(Registro r,TipoEstado est);
    void modificarRegistro(Registro r,Insecto ins);
    void nuevoInsecto(string especie, string subespecie , string Imagen);
    Insecto *buscarEspecie(string basicString);
    Insecto buscarSubespecie(string especie, string subespecie);

};


#endif //EJERCICIOSEEDD_ANIMALOCA_H
