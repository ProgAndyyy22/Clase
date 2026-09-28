// Autor: Andy Araque 
// Fecha: 28 de septiembre 
#include <iostream>
using namespace std;

int main() {

    int n;
    int factorial = 1;

    cout << "Ingrese un numero entero no negativo: ";
    cin >> n;

    while (n > 1) {
        factorial = factorial * n;
        n = n - 1;
    }

    cout << "El factorial es: " << factorial << endl;

    return 0;
}
