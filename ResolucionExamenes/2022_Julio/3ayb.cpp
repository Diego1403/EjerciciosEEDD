
T maximoPriv(Nodo<T> *n  ){
	if(n->izq==n->der==nullptr){
		return n->dato;
	}else{
		if(n->izq>n){
			return maximoPriv(n->izq);
		}
		if(n->der>n){
			return maximoPriv(n->der)
		}
	}
}

T maximo(){
	maximoPriv(raiz);
}




void ListaDEnlazada<T>::insertaOrdenado (T &ndato){

nodo<T> *p = Nodo<T>(ndato);
nodo<T> *i = cabeza;
bool encontrado=false;

if(ndato<cabeza->dato){
	p->sig = cabeza;
	cabeza->ant = p;
	cabeza = p;
	encontrado = true
}
if(ndato>cola->dato){
	p->ant = cola;
	cola->sig= p;
	cola=p;
	encontrado=true;
}


while(p!=cola && !encontrado){
	i=i->sig;

	if(ndato>i->ant->dato && ndato<i ){
		p->sig=i;
		p->ant=i->ant;
		i->ant->sig=p;
		i->ant=p
	}

	if(i->ant->dato > i->dato){
		throw errornosecuantos;
	}

}


}