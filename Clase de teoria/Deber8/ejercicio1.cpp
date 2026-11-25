// Andy Araque
// 24 Noviembre

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int favorecidos[7];
    int cartilla[5];

    int num, repetido;
    int aciertos = 0;
    int premio = 0;


    for(int i = 0; i < 7; i++) {

        repetido = 0;

        do {
            num = 1 + rand() % 15;
            repetido = 0;

            for(int j = 0; j < i; j++) {
                if(favorecidos[j] == num) {
                    repetido = 1;
                }
            }

        } while(repetido == 1);

        favorecidos[i] = num;
    }

  
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6 - i; j++) {

            if(favorecidos[j] > favorecidos[j+1]) {

                int aux = favorecidos[j];
                favorecidos[j] = favorecidos[j+1];
                favorecidos[j+1] = aux;

            }
        }
    }

    // Generar la cartilla
    for(int i = 0; i < 5; i++) {

        repetido = 0;

        do {
            num = 1 + rand() % 15;
            repetido = 0;

            for(int j = 0; j < i; j++) {
                if(cartilla[j] == num) {
                    repetido = 1;
                }
            }

        } while(repetido == 1);

        cartilla[i] = num;
    }

    // Contar los aciertos
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 7; j++) {

            if(cartilla[i] == favorecidos[j]) {
                aciertos++;
            }

        }
    }

  
    if(aciertos == 1) {
        premio = 10;
    }
    else if(aciertos == 2) {
        premio = 100;
    }
    else if(aciertos == 3) {
        premio = 1000;
    }
    else if(aciertos == 4) {
        premio = 10000;
    }
    else if(aciertos == 5) {
        premio = 100000;
    }

  
    cout << "NUMEROS FAVORECIDOS" << endl;

    for(int i = 0; i < 7; i++) {
        cout << favorecidos[i] << " | ";
    }

    cout << endl << endl;

    cout << "CARTILLA" << endl;

    for(int i = 0; i < 5; i++) {
        cout << cartilla[i] << " | ";
    }

    cout << endl << endl;

    cout << "Aciertos: " << aciertos << endl;
    cout << "Ganas $$$: " << premio << endl;

    return 0;
}