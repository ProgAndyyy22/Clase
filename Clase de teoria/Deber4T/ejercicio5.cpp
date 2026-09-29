// Autor: Andy Araque
// Fecha: 29 septiembre

#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    cout << "Coeficiente a: ";
    cin >> a;

    cout << "Coeficiente b: ";
    cin >> b;

    cout << "Coeficiente c: ";
    cin >> c;

    while (a < -9 || a > 9 || a == 0 ||
           b < -9 || b > 9 ||
           c < -9 || c > 9) {

        cout << "Los coeficientes deben ser enteros de un digito y a no puede ser 0." << endl;

        cout << "Coeficiente a: ";
        cin >> a;

        cout << "Coeficiente b: ";
        cin >> b;

        cout << "Coeficiente c: ";
        cin >> c;
    }

    double x = -10.0;
    double anterior = a * x * x + b * x + c;

    bool solucion = false;

    while (x <= 10.0) {

        x = x + 0.0001;

        double actual = a * x * x + b * x + c;

        // Cambio de signo: encontramos una solucion
        if ((anterior < 0 && actual > 0) ||
            (anterior > 0 && actual < 0)) {

            cout << "x: " << x << endl;
            solucion = true;
        }

        // La funcion dio exactamente 0
        if (actual == 0) {
            cout << "x: " << x << endl;
            solucion = true;
        }

        anterior = actual;
    }

    if (!solucion) {
        cout << "No existen soluciones" << endl;
    }

    return 0;
}
