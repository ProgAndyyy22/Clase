//Andy Araque
//24 Noviembre 
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {

    int numeros[20] = {
        15, 18, 27, 28, 32,
        34, 35, 42, 44, 45,
        46, 50, 51, 51, 57,
        58, 61, 62, 62, 67
    };

    int aux;

    for(int i = 0; i < 19; i++) {

        for(int j = 0; j < 19 - i; j++) {

            if(numeros[j] > numeros[j+1]) {

                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;

            }
        }
    }

    cout << "Numeros ordenados:" << endl;

    for(int i = 0; i < 20; i++) {
        cout << numeros[i] << " | ";
    }

    cout << endl;

    return 0;
}
