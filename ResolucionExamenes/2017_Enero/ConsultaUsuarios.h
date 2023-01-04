//
// Created by Diego on 04/01/2023.
//

#ifndef RESOLUCIONEXAMENES_CONSULTAUSUARIOS_H
#define RESOLUCIONEXAMENES_CONSULTAUSUARIOS_H

class ConsultaUsuarios {
private:
    int distancia(string loc1 , string loc2); //Asumimos que lo dan implementada

public:
    map<string,Usuario> usuariosPorNombre;
    multimap<string,Usuario> usuariosPorFecha;
    void anadirUsuario(Usuario us){
        usuariosPorNombre[us->getNombre]=us;
        usuariosPorFecha[us->getFecha]=us;
    }
     vector<Usuario> usuarios(){
         vector<usuario> aux;
         for(auto usu : usuariosPorNombre){
                 aux.anadirUsuario(usu);
         }
         return aux;

    }
     Usuario usuario(string nombre);

     ConsultaUsuarios localidadEs(string localidad){
      ConsultaUsuarios aux;
         for(auto usu : usuariosPorNombre){
             if(usu.second.getlocalidad() == localidad){
                 aux.anadirUsuario(usu);
             }
         }
         return aux;
     }

     ConsultaUsuarios localidadCercana(string localidad , int km)   {
             ConsultaUsuarios aux;
             for(auto usu : usuariosPorFecha){
                 if(usu.first < fecha){
                     aux.anadirUsuario(usu.second);
                 }
             }
             return aux;
         }

     ConsultaUsuarios ultimoAccesoAntesDe(long fecha){
         ConsultaUsuarios aux;
         for(auto usu : usuariosPorFecha){
             if(usu.first < fecha){
                 aux.anadirUsuario(usu.second);
             }
         }
         return aux;
     }
     ConsultaUsuarios ultimoAccesoDespuesDe(long fecha){
         ConsultaUsuarios aux;
         for(auto usu : usuariosPorFecha){
             if(usu.first > fecha){
                 aux.anadirUsuario(usu.second);
             }
         }
         return aux;
     }
     ConsultaUsuarios haCompradoMasDe(int nProductos){
         for(auto usu : usuariosPorNombre){
             if(usu.second.getProductosComprados.size() >= nProductos){
                 aux.anadirUsuario(usu);
             }
         }
         return aux;
     }


     ConsultaUsuarios haComprado(Producto p)   {
         for(auto usu : usuariosPorNombre){
             list<Productos> productos =usu.second.getProductosComprados;
             for(auto producto : productos){
                 if(producto == p){
                     aux.anadirUsuario(usu);
                     break;
                 }
             }

         }
     }
    return aux;
     ConsultaUsuarios haGastadoMasDe(int importe)  {
         int gasto ;
         for(auto usu : usuariosPorNombre){
             list<Productos> productos =usu.second.getProductosComprados;
             gasto=0;
             for(auto producto : productos){
                 gasto+= producto.precio
             }
             if(gasto > importe){
                 aux.anadirUsuario(usu);
             }
         }
     }


};


#endif //RESOLUCIONEXAMENES_CONSULTAUSUARIOS_H
