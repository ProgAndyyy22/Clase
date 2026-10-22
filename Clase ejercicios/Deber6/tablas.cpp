//Andy Araque
#include <iostream>
using namespace std;

void tabla(int n, int i, int limite);
int sumaTabla(int n, int i, int limite);

int main() {
    int n, limite;

    cout << "Ingrese el numero para la tabla: ";
    cin >> n;

    cout << "Ingrese el limite: ";
    cin >> limite;

    while (limite < 1) {
        cout << "El limite debe ser mayor o igual a 1." << endl;
        cout << "Ingrese nuevamente el limite: ";
        cin >> limite;
    }

    tabla(n, 1, limite);

    cout << "La suma es: " << sumaTabla(n, 1, limite) << endl;

    return 0;
}

void tabla(int n, int i, int limite) {
    if (i > limite) {
        return;
    }

    cout << n << " x " << i << " = " << n * i << endl;

    tabla(n, i + 1, limite);
}

int sumaTabla(int n, int i, int limite) {
    if (i > limite) {
        return 0;
    }

    return n * i + sumaTabla(n, i + 1, limite);
}

// Aprendizaje adquirido: uso de funciones y recursividad
// para mostrar una tabla de multiplicar y sumar sus resultados.
