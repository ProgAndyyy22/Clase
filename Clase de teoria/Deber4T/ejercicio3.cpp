// Autor: Andy Araque
// Fecha 28 de septiembre

#include <iostream>
using namespace std;

int main() {

    int n;
    int cont = 1;
    double suma = 0;

    cout << "n: ";
    cin >> n;

    while (cont <= n) {

        int siguiente = cont + 1;
        int potencia = 1;

        while (siguiente / potencia >= 10) {
            potencia = potencia * 10;
        }

        double termino = cont + (double)siguiente / (potencia * 10);

        suma = suma + termino;

        cout << termino;

        if (cont < n)
            cout << " + ";

        cont++;
    }

    cout << " = " << suma << endl;

    return 0;
}
