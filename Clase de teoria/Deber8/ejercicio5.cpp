//Andy Araque
//24 Noviembre 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX = 100;

void mostrarArreglo(int arreglo[], int n) {
    cout << "{ ";
    for(int i = 0; i < n; i++) {
        cout << arreglo[i];
        if(i < n-1) {
            cout << ", ";
        }
    }
    cout << " }" << endl;
}

int contarMenores(int arreglo[], int n) {
    int cont = 0;

    for(int i = 0; i < n; i++) {
        if(arreglo[i] >= 7 && arreglo[i] <= 17) {
            cont++;
        }
    }

    return cont;
}

int main() {
    srand(time(0));

    int edades[MAX];
    int menores[MAX];
    int adultos[MAX];

    int n, cantMenores, cantAdultos;
    int posMenores = 0;
    int posAdultos = 0;

    cout << "Ingrese el numero de personas (par): ";
    cin >> n;

    while(n < 2 || n > MAX || n % 2 != 0) {
        cout << "Ingrese un numero par entre 2 y 100: ";
        cin >> n;
    }

    // Generar las edades aleatoriamente

    for(int i = 0; i < n; i++) {
        int tipo = rand() % 3;

        if(tipo == 0) {
            edades[i] = 7 + rand() % 11;
        }
        else if(tipo == 1) {
            edades[i] = 18 + rand() % 47;
        }
        else {
            edades[i] = 65 + rand() % 16;
        }
    }

    cout << "\nFila inicial:" << endl;
    mostrarArreglo(edades, n);

    // Contar menores y adultos

    cantMenores = contarMenores(edades, n);
    cantAdultos = n - cantMenores;

    // Equilibrar las cantidades

    if(cantAdultos > cantMenores) {
        for(int i = 0; i < n && cantAdultos > cantMenores; i++) {
            if(edades[i] >= 18) {
                edades[i] = 7 + rand() % 11;
                cantMenores++;
                cantAdultos--;
            }
        }
    }
    else if(cantMenores > cantAdultos) {
        for(int i = 0; i < n && cantMenores > cantAdultos; i++) {
            if(edades[i] <= 17) {
                edades[i] = 18 + rand() % 47;
                cantMenores--;
                cantAdultos++;
            }
        }
    }

    cout << "\nFila despues de equilibrar:" << endl;
    mostrarArreglo(edades, n);

    cout << "\nCantidad de menores: " << cantMenores << endl;
    cout << "Cantidad de adultos: " << cantAdultos << endl;

    // Crear las dos colas

    for(int i = 0; i < n; i++) {

        if(edades[i] <= 17) {
            menores[posMenores] = edades[i];
            posMenores++;
        }
        else {
            if(edades[i] >= 65) {

                for(int j = posAdultos; j > 0; j--) {
                    adultos[j] = adultos[j-1];
                }

                adultos[0] = edades[i];
                posAdultos++;
            }
            else {
                adultos[posAdultos] = edades[i];
                posAdultos++;
            }
        }
    }

    cout << "\nCola de menores:" << endl;
    mostrarArreglo(menores, posMenores);

    cout << "\nCola de adultos:" << endl;
    mostrarArreglo(adultos, posAdultos);

    return 0;
}