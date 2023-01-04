//
// Created by Diego on 04/01/2023.
//

#ifndef RESOLUCIONEXAMENES_REGISTROACCESO_H
#define RESOLUCIONEXAMENES_REGISTROACCESO_H
#include "string"

struct Fecha;
using namespace std;
class RegistroAcceso {
    int idTerjeta;
    string dni;
    Fecha hora;
    bool permitido;

};


#endif //RESOLUCIONEXAMENES_REGISTROACCESO_H
