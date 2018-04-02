


#ifndef PROYECTO2PROGRA3_MATRIZ_H
#define PROYECTO2PROGRA3_MATRIZ_H

#include <iostream>
#include "Nodo.h"
using namespace std;

class Matriz{
    public:
        static void  sumaMatriz(Nodo *listaA ,string, Nodo *listaB, string, int);
        static void  restaMatriz(Nodo *listaA ,string, Nodo *listaB, string, int);
        static void consultarMatriz(string, Nodo *lista);
        static void imprimir(int,Nodo *lista, string nombre);
       static int Determinante( Nodo *Lista, string, int);
    static int determinanteMatriz(Nodo *lista, string , int);
    static int dMatriz(Nodo *lista, string , int);
    static void multiplicatMatriz(Nodo* listaA ,string, Nodo * listaB, string,int);
    };

#endif //PROYECTO2PROGRA3_MATRIZ_H
