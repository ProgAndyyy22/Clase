// Autor: Andy Araque
// Fecha: 28 de septiembre 

#include <iostream>
using namespace std;

int main() {

    int n;
    int potencia = 1;

    cout << "n: ";
    cin >> n;

    int temp = n;

    // Encontrar la potencia de 10 del primer digito
    while (temp >= 10) {
        temp = temp / 10;
        potencia = potencia * 10;
    }

    cout << "Izquierda a derecha:" << endl;

    // de izquierda a derecha
    int aux = n;
    int pot = potencia;

    while (pot > 0) {
        cout << aux / pot << endl;
        aux = aux % pot;
        pot = pot / 10;
    }

    cout << "----------------" << endl;

    cout << "Derecha a izquierda:" << endl;

    // de derecha a izquierda
    aux = n;

    while (aux > 0) {
        cout << aux % 10 << endl;
        aux = aux / 10;
    }

    return 0;
}
