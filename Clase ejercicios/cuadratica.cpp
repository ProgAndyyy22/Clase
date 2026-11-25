#include <iostream>
#include <cmath>
using namespace std;

void imprimirResultado(double a, double b, double c, int numRaices, double x1, double x2) {
    cout << endl << "-----------------" << endl;
    cout << "Ecuación: " << a << "x^2 + (" << b << ")x + (" << c << ") = 0" << endl;
    if (numRaices == 2) {
        cout << "Dos raíces reales distintas" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (numRaices == 1) {
        cout << "Una raíz real doble" << endl;
        cout << "x = " << x1 << endl;
    } else if (numRaices == 0) {
        cout << "No tiene raíces reales" << endl;
    } else {
        cout << "No es una ecuación cuadrática (a = 0)" << endl;
    }
    cout << "-----------------" << endl;
}

void resolverCuadratica(double a, double b, double c, int& numRaices, double& x1, double& x2) {
    // Implementación aquí
    // 1. Si a es igual a 0, asignar numRaices = -1 y terminar la función (no es cuadrática)

    if (a == 0) {
        numRaices = -1;
        return;
    }
    // 2. Calcular el discriminante: d = b * b - 4 * a * c
    double discriminante = b * b - 4 * a * c;
    // 3. Calcular numRaices, x1 y x2 según el discriminante
    if (discriminante > 0) {
        numRaices = 2;
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
    } else if (discriminante == 0) {
        numRaices = 1;
        x1 = -b / (2 * a);
    } else {
        numRaices = 0;
    }
    // 4. Los resultados se devuelven a través de los parámetros por referencia (&)
    return;



}

int main() {
    int numRaices;
    double x1 = 0, x2 = 0;

    resolverCuadratica(2, 3, -2, numRaices, x1, x2);
    imprimirResultado(2, 3, -2, numRaices, x1, x2);

    resolverCuadratica(1, -4, 4, numRaices, x1, x2);
    imprimirResultado(1, -4, 4, numRaices, x1, x2);

    resolverCuadratica(1, 2, 5, numRaices, x1, x2);
    imprimirResultado(1, 2, 5, numRaices, x1, x2);

    resolverCuadratica(0, 3, 1, numRaices, x1, x2);
    imprimirResultado(0, 3, 1, numRaices, x1, x2);

    return 0;
}