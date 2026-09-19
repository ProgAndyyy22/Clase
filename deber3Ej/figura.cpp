// Andy Araque

#include <iostream>
using namespace std;

int main() {
    int profundidad;
    char simboloSuperior, simboloInferior;


    do {
        cout << "profundidad: ";
        cin >> profundidad;
        if (profundidad <= 0) {
            cout << "La profundidad debe ser un entero positivo distinto de 0. Intenta de nuevo." << endl;
        }
    } while (profundidad <= 0);

    cout << "simbolo 1: ";
    cin >> simboloSuperior;
    cout << "simbolo 2: ";
    cin >> simboloInferior;

    for (int i = 1; i <= profundidad; i++) {
        for (int espacio = 0; espacio < profundidad - i; espacio++) {
            cout << " ";
        }
        for (int s = 0; s < 2 * i - 1; s++) {
            cout << simboloSuperior;
        }
        cout << endl;
    }

    for (int i = profundidad; i >= 1; i--) {
        for (int espacio = 0; espacio < profundidad - i; espacio++) {
            cout << " ";
        }
        for (int s = 0; s < 2 * i - 1; s++) {
            cout << simboloInferior;
        }
        cout << endl;
    }

    return 0;
}

// practique el uso de bucles anidados (un for dentro de otro for)
// pude hacer que se impriman figuras en consola, separando en cada linea el control del numero de
// espacios de indentacion del control del numero de simbolos a imprimir, y usando un
// bucle do-while para repetir la validacion de entrada hasta que el dato sea correcto.

