

#include <iostream>
#include "Nodo.h"


void imprimirLista(Nodo **actual){
    if(*actual==0)
        return;
    else{
        std::cout<<(*actual)->valor<<" ";
        imprimirLista(&(*actual)->sig);

    }
}

void insertarNodo(Nodo *&lista, Nodo * nodo) {
    Nodo *nuevo;
    nuevo = nodo;
    Nodo *temp = lista;
    Nodo *temp2;
    while ((temp != NULL)) {
        temp2 = temp;
        temp = temp->sig;
    }
    if (lista == temp) {
        lista = nuevo;
    } else {
        temp2->sig = nuevo;
    }
    nuevo->sig = temp;
}


