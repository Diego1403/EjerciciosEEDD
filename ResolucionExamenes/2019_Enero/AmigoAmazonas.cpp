//
// Created by Diego on 04/01/2023.
//

#include "AmigoAmazonas.h"

Insecto *AmigoAmazonas::buscarEspecie(string especie) {
    return conectado->buscarEspecie(especie);
}

void AmigoAmazonas::conectar(AnimaLoca *pLoca) {
    conectado=pLoca;
}

void AmigoAmazonas::desconectar() {
    conectado= nullptr;
}

Insecto AmigoAmazonas::buscarSubespecie(string especie, string subespecie) {
    return conectado->buscarSubespecie(especie,subespecie);
}

void AmigoAmazonas::nuevoRegistro(int id, Insecto ins, string imagen, Fecha f, UTM pos) {
}
