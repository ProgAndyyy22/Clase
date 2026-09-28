#include <iostream>
using namespace std;

int main() {
    int x, n;
    int i = 1;
    double factorial = 1;
    double potencia = 1;
    double ex = 1;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "Ingrese la cantidad de terminos: ";
    cin >> n;

    while (i < n) {
        factorial = factorial * i;
        potencia = potencia * x;
        ex = ex + potencia / factorial;
        i++;
    }

    cout << "e^" << x << " = " << ex << endl;

    return 0;
}
