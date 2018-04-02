#include "Nodo.h"
#include "Matriz.h"
#include <fstream>
using namespace std;

void Matriz::consultarMatriz(string nombre, Nodo * lista) {
    ifstream archivoMatriz(nombre, ios::in);
    if (archivoMatriz.fail()) {
        if(nombre!= nombre+".dat"){
            cerr <<"Formato Inexistente (debe ser (.dat))"<<endl;
        }
        cerr << "Error al abrir el archivo  " << nombre << endl;
        return;
    }


    Nodo *nuevo= new Nodo;
    int valor;
    while (!archivoMatriz.eof()) {
        while(archivoMatriz>>valor){
            nuevo->valor=valor;
            insertarNodo(lista,nuevo);
        }
    }
    archivoMatriz.close();
    }

void Matriz::imprimir(int tam, Nodo *lista, string nombre) {
    ifstream archivosIn(nombre,ios::in);
    int valor;
    if (!archivosIn){
        cerr<<"Error; Al abrir archivo"<<endl;
        return;
    }
    int cont=0;
    while(archivosIn>>valor){
        if(cont!=tam){
            if(valor==0){
                continue;
            }
            cont ++;
            cout<<valor<<" ";
        }else {
            cont=0;
            cout<<endl<<valor<<" ";
            cont++;
        }
    }
    cout<<endl;
    archivosIn.close();
}

void Matriz::sumaMatriz(Nodo *listaA , string nombreA , Nodo *listaB ,string nombreB , int tam)  {
    ofstream archivosuma("matrizSuma.dat");
    ifstream archivosA(nombreA,ios::in);
    ifstream archivosB(nombreB,ios::in);
    if(archivosuma.fail()){
        cerr <<"Error al intentar abrir el archivo matrizSuma.dat"<<endl;
        return;
    }

    int valor1,valor2;
    if (archivosA.fail() && archivosB.fail()){
        cerr<<"Error; Al abrir archivo"<<endl;
        return;
    }
    int cont=0, getline=0;
    while(archivosA>>valor1 && archivosB>>valor2){
        if(cont!=tam){
            if(valor1==0 && valor2==0){
                continue;
            }
            cont ++;
            cout<<(valor1+valor2)<<" ";
            if(getline==3) {
                archivosuma<<'\n';
                getline=0;
            }
            archivosuma<<valor1+valor2<<' ';
            getline++;
        }else {
            cont=0;
            cout<<endl<<(valor1+valor2)<<" ";
            if(getline==3) {
                archivosuma<<'\n';
                getline=0;
            }
            getline++;
            archivosuma<<valor1+valor2<<' ';
            cont++;
        }
    }
    cout<<endl;
    archivosA.close();
    archivosB.close();
    archivosuma.close();
}

void Matriz::restaMatriz(Nodo *listaA , string nombreA , Nodo *listaB ,string nombreB , int tam)  {
    ofstream archivoresta("matrizResta.dat");
    ifstream archivosA(nombreA,ios::in);
    ifstream archivosB(nombreB,ios::in);
    if(archivoresta.fail()){
        cerr <<"Error al intentar abrir el archivo archivosuma.dat"<<endl;
        return;
    }

    int valor1,valor2;
    if (archivosA.fail() && archivosB.fail()){
        cerr<<"Error; Al abrir archivo"<<endl;
        return;
    }
    int cont=0, getline=0;
    while(archivosA>>valor1 && archivosB>>valor2){
        if(cont!=tam){
            if(valor1==0 && valor2==0){
                continue;
            }
            cont ++;
            cout<<(valor1-valor2)<<" ";
            if(getline==3) {
                archivoresta<<'\n';
                getline=0;
            }
            archivoresta<<valor1-valor2<<' ';
            getline++;
        }else {
            cont=0;
            cout<<endl<<(valor1-valor2)<<" ";
            if(getline==3) {
                archivoresta<<'\n';
                getline=0;
            }
            getline++;
            archivoresta<<valor1-valor2<<' ';
            cont++;
        }
    }
    cout<<endl;
    archivosA.close();
    archivosB.close();
    archivoresta.close();
}

int Matriz::determinanteMatriz(Nodo *lista, string nombreA, int tam) {
    ofstream matrizD("matrizDeterminante.dat");
    ifstream matrizDeter(nombreA, ios::in);
    if (matrizDeter.fail()) {
        cerr << "Error al abrir el archivo " << endl;
        return -1;
    }
    int v;
    int cont=0;
    int total=0;
    if (tam==2){
        int arr[4];

        while(matrizDeter>>v){
            arr[cont]=v;
            cont++;

        }
        total=((arr[0]*arr[3])-(arr[1]*arr[2]));
        matrizD  <<total;
        return total;
    }
    matrizDeter.close();
}

int Matriz::Determinante(Nodo *Lista, string nombreA, int tam) {
    ofstream matrizD("matrizDeterminante.dat");
    ifstream matrizDeter(nombreA, ios::in);
    if (matrizDeter.fail()) {
        cerr << "Error al abrir el archivo " << endl;
        return -1;
    }
    int v;
    int cont=0;
    int total=0;
    if (tam==3){
        int arr[9];
        while (matrizDeter>>v){
            arr[cont]=v;
            cont++;
        }
        total=(((arr[0])*(arr[4]*arr[8])-(arr[5]*arr[7]))-((arr[1])*(arr[3]*arr[8])-(arr[5]*arr[6]))+
               ((arr[2])*(arr[3]*arr[7])-(arr[4]*arr[6])));
        matrizD  <<total;
        return total;
    }
    matrizDeter.close();
}

void Matriz::multiplicatMatriz(Nodo *listaA, string nombreA, Nodo *listaB, string nombreB, int tam) {
    ofstream archivoMulti("matrizMulti.dat");
    if(archivoMulti.fail()){
        cerr <<"Error al intentar abrir el archivo "<<endl;
        return;
    }

}

int Matriz::dMatriz(Nodo *Lista, string nombreA, int tam) {
    ofstream matrizD("matrizDeterminante.dat");
    ifstream matrizDeter(nombreA, ios::in);
    if (matrizDeter.fail()) {
        cerr << "Error al abrir el archivo " << endl;
        return -1;
    }
    int valor;
    int cont=0;
    int total=0;
    if (tam==1){
        int arr[0];
        while (matrizDeter>>valor){
            arr[cont]=valor;
            cont++;
        }
        total=arr[0];
        matrizD  <<total;
        return total;
    }
    matrizDeter.close();
}
