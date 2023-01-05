//
// Created by Diego on 04/01/2023.
//

#include <vector>
#include "AnimaLoca.h"

int AnimaLoca::getNuevoId() {
    return ++ultimoid;
}

void AnimaLoca::nuevoInsecto(string especie, string subespecie, string Imagen) {

    Insecto ins(especie,subespecie,Imagen);
    insectos.insert(pair<string,Insecto>(especie,ins));
}

Insecto *AnimaLoca::buscarEspecie(string especie) {
    multimap<string,Insecto>::iterator i = insectos.lower_bound(especie);
    multimap<string,Insecto>::iterator j = insectos.upper_bound(especie);
    vector<Insecto> ins;
    do{
       ins.push_back(i->second);
       i++;
    }while(i!=j);

int tam = ins.size();
    Insecto aux[tam];

    for (int k = 0;k<ins.size();k++){
        aux[i]=ins[i];
    }

return aux;


}

Registro AnimaLoca::verRegistro(int id) {
    return registrosUsuarios[id];
}



Registro AnimaLoca::verSiguienteRegistro() {
    for (auto reg : registrosUsuarios){
        if(reg.second.getEstado == TipoEstado.faltaComprobacion ){
            return reg.second;
        }

    }
}

AmigoAmazonas AnimaLoca::login(string user, string clave) {
    amigos[user].conectar(this);
}

AmigoAmazonas AnimaLoca::logout(string user) {
    amigos[user].desconectar();
}

void AnimaLoca::modificarRegistro(Registro r, TipoEstado est) {
    registrosUsuarios[r.getId()].cambiarEstado(est);
    enviarMensajeUsuario( r);
}

void AnimaLoca::modificarRegistro(Registro r, Insecto ins) {
    registrosUsuarios[r.getId()].cambiarEspecie(ins);
    enviarMensajeUsuario( r);
}

void AnimaLoca::enviarMensajeUsuario(Registro r) {
    if (r.isDesconocido()){
        r.getUsuario()->recibirMensaje("su catalogacion no fue correcta");

    }else {
        r.getUsuario()->recibirMensaje("su catalogacion fue correcta");

    }

}

Insecto AnimaLoca::buscarSubespecie(string especie, string subespecie) {
    multimap<string,Insecto>::iterator i = insectos.lower_bound(especie);
    multimap<string,Insecto>::iterator j = insectos.upper_bound(especie);
    vector<Insecto> ins;
    do{
        if(i->second.getNombreSubEspecie()==subespecie){
            return i->second;
        }
    }while(i!=j);

}

