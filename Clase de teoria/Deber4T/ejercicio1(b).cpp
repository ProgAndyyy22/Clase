// Autor Andy Araque 
// Fecha: 28 de septiembre 

#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    double factorial = 1;
    double e = 1;

    cout << "Ingrese la cantidad de terminos: ";
    cin >> n;

    while (i < n) {
        factorial = factorial * i;
        e = e + 1.0 / factorial;
        i++;
    }

    cout << "e = " << e << endl;

    return 0;
}
