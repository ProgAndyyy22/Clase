// Andy Araque

#include <iostream>
using namespace std;

int main() {
    int profundidad;
    char simboloSuperior, simboloInferior;

    // Se repite la peticion hasta que la profundidad sea un entero positivo distinto de 0
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

    // Parte superior del rombo (con el simbolo 1), de menor a mayor ancho
    for (int i = 1; i <= profundidad; i++) {
        for (int espacio = 0; espacio < profundidad - i; espacio++) {
            cout << " ";
        }
        for (int s = 0; s < 2 * i - 1; s++) {
            cout << simboloSuperior;
        }
        cout << endl;
    }

    // Parte inferior del rombo (con el simbolo 2), de mayor a menor ancho
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

// Aprendizaje adquirido: practique el uso de bucles anidados (un for dentro de otro for)
// para construir figuras en consola, separando en cada linea el control del numero de
// espacios de indentacion del control del numero de simbolos a imprimir, y usando un
// bucle do-while para repetir la validacion de entrada hasta que el dato sea correcto.

