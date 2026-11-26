//Andy Araque
//24 Noviembre 
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int numeros[31];
    int aux, buscar;
    int inicio, fin, medio;
    int intento = 1;
    int encontrado = -1;


    for(int i = 0; i < 31; i++) {
        numeros[i] = 10 + rand() % 90;
    }


    for(int i = 0; i < 30; i++) {
        for(int j = 0; j < 30 - i; j++) {

            if(numeros[j] > numeros[j+1]) {

                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;

            }
        }
    }


    cout << "Indices:" << endl;

    for(int i = 0; i < 31; i++) {
        cout << right << setw(3) << i ;
    }

    cout << endl;

  
    cout << "Numeros:" << endl;

    for(int i = 0; i < 31; i++) {
        cout << right << setw(3) <<numeros[i] ;
    }

    cout << endl << endl;

    cout << "Buscar x: ";
    cin >> buscar;

    inicio = 0;
    fin = 30;

    // Busqueda binaria
    while(inicio <= fin) {

        cout << "Intento " << intento << " [ "
             << inicio << " <-> " << fin << " ]" << endl;

        medio = (inicio + fin) / 2;

        if(numeros[medio] == buscar) {

            encontrado = medio;
            break;

        }
        else if(buscar < numeros[medio]) {

            fin = medio - 1;

        }
        else {

            inicio = medio + 1;

        }

        intento++;
    }

    // Mostrar resultado
    if(encontrado != -1) {
        cout << "Encontrado en: " << encontrado << endl;
    }
    else {
        cout << "No existe " << buscar << endl;
    }

    return 0;
}
