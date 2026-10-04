// Andy Araque

#include <iostream>
using namespace std;

int main() {

    char abecedario[26] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g',
        'h', 'i', 'j', 'k', 'l', 'm', 'n',
        'o', 'p', 'q', 'r', 's', 't', 'u',
        'v', 'w', 'x', 'y', 'z'
    };

    char palabra[5];

    palabra[0] = abecedario[7];
    palabra[1] = abecedario[14];
    palabra[2] = abecedario[11];
    palabra[3] = abecedario[0];
    palabra[4] = abecedario[18];

    cout << "Abecedario: ";

    for (int i = 0; i < 26; i++) {
        cout << abecedario[i];
    }

    cout << endl;

    cout << "Palabra: ";

    for (int i = 0; i < 5; i++) {
        cout << palabra[i];
    }

    cout << endl;

    int inicio = 0;
    int fin = 25;

    while (inicio < fin) {
        char temporal = abecedario[inicio];
        abecedario[inicio] = abecedario[fin];
        abecedario[fin] = temporal;

        inicio++;
        fin--;
    }

    inicio = 0;
    fin = 4;

    while (inicio < fin) {
        char temporal = palabra[inicio];
        palabra[inicio] = palabra[fin];
        palabra[fin] = temporal;

        inicio++;
        fin--;
    }

    cout << "Abecedario al reves: ";

    for (int i = 0; i < 26; i++) {
        cout << abecedario[i];
    }

    cout << endl;

    cout << "Palabra al reves: ";

    for (int i = 0; i < 5; i++) {
        cout << palabra[i];
    }

    cout << endl;

    return 0;
}


//  Aprendi a crear arreglos de caracteres, e incluso a usar la idea de que 
// hay variables locales que pueden almacenar valores de otras variables, y a usar ciclos while para invertir arreglos.