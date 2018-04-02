#include <iostream>
#include "Matriz.h"
#include "Nodo.h"
using namespace std;

int main() {
    int opc = 0;
    string a,b;
    Nodo *listaA=0,*listaB=0,*listaMA=0,*listaMB=0,*listaD=0,*listaDD=0;
    do {
        cout << "*** O P E R A C I O N E S  C O N  M A T R I C E S ***" << endl;
        cout << "1. Suma de matrices" << endl;
        cout << "2. Resta de matrices" << endl;
        cout << "3. Multiplicacion de matrices" << endl;
        cout << "4. Determinante de la matrices" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opc;
        if (opc > 5 || opc < 1)
            cout << "Opcion no valida" << endl;


        switch (opc) {
            case 1:
                while (a != "matrizA.dat") {
                    cout << "Ingrese el nombre del archivo de la Matriz A: ";
                    cin >> a;
                    Matriz::consultarMatriz(a, listaA);
                    Matriz::imprimir(3, listaA, a);
                }
                while (b != "matrizB.dat") {
                    cout << endl << "Ingrese el nombre del arhivo de la Matriz B: ";
                    cin >> b;
                    Matriz::consultarMatriz(b, listaB);
                    Matriz::imprimir(3, listaB, b);
                }
                cout << endl << "*** R E S P U E S T A ***" << endl;
                Matriz::sumaMatriz(listaA, a, listaB, b, 3);
                cout << endl;
                break;
            case 2:
                while (a != "matrizA.dat") {
                    cout << "Ingrese el nombre del archivo de la Matriz A: ";
                    cin >> a;
                    Matriz::consultarMatriz(a, listaA);
                    Matriz::imprimir(3, listaA, a);
                }
                while (b != "matrizB.dat") {
                    cout << endl << "Ingrese el nombre del arhivo de la Matriz B: ";
                    cin >> b;
                    Matriz::consultarMatriz(b, listaB);
                    Matriz::imprimir(3, listaB, b);
                }
                cout << endl << "*** R E S P U E S T A ***" << endl;
                Matriz::restaMatriz(listaA, a, listaB, b, 3);
                cout << endl;
                break;
            case 3:
                while (a != "matrizMA.dat") {
                    cout << "Ingrese el nombre del archivo de la Matriz A: ";
                    cin >> a;
                    Matriz::consultarMatriz(a, listaMA);
                    Matriz::imprimir(2, listaMA, a);
                    cout << endl;
                }
                while (b != "matrizMB.dat") {
                    cout << endl << "Ingrese el nombre del arhivo de la Matriz B: ";
                    cin >> b;
                    Matriz::consultarMatriz(a, listaMB);
                    Matriz::imprimir(3, listaMB, a);
                    cout << endl;
                }

                cout << endl << "*** R E S P U E S T A ***" << endl;
                cout<< "ESTAMOS EN MANTENIMIENTO; disculpe las molestias."<<endl<<endl;
                break;
            case 4:
                int opc;
                cout << "Que tipo matriz desea encontrar la determinante: " << endl;
                cout << "1. 2X2: " << endl;
                cout << "2. 3x3: " << endl;
                cin >> opc;
                if (opc == 1) {
                    while (a != "matrizD.dat") {
                        cout << "Ingrese el nombre del archivo de la Matriz D: ";
                        cin >> a;
                        Matriz::consultarMatriz(a, listaA);
                        Matriz::imprimir(2, listaMB, a);
                    }
                    cout << endl << "*** R E S P U E S T A ***" << endl;
                    cout<<"Determinante: "<<Matriz::determinanteMatriz(listaD,a,2)<<endl<<endl;
                } else if (opc == 2) {
                    while (a != "matrizDD.dat") {
                        cout << "Ingrese el nombre del archivo de la Matriz DD : ";
                        cin >> a;
                        Matriz::consultarMatriz(a, listaA);
                        Matriz::imprimir(3, listaMB, a);
                    }
                    cout << endl << "*** R E S P U E S T A ***" << endl;
                    cout<<"Determinante: "<<Matriz::Determinante(listaDD,a,3)<<endl<<endl;
                }

                break;
        }
        } while (opc != 5);
    }
