
#ifndef PROYECTO2PROGRA3_NODO_H
#define PROYECTO2PROGRA3_NODO_H


struct Nodo{
    int valor;
    Nodo *sig;
    Nodo *ant;
    Nodo(){
        sig =0;
        ant=0;
    }
};

void imprimirLista(Nodo **);
void insertarNodo(Nodo *&, Nodo *);

#endif //PROYECTO2PROGRA3_NODO_H
