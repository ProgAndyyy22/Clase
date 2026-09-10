// Nombre: [Completa tu nombre completo aqui]
// Deber 2 - Ejercicio 2: banner.cpp
// Tema: operadores, entrada y salida de datos, comparaciones y condicionales

#include <iostream>

using namespace std;

int main() {
    int codigoBanner;
    cout << "Ingrese el codigo banner (cantidad de dinero en la cuenta): ";
    cin >> codigoBanner;

    // Se va descomponiendo el monto de mayor a menor denominacion usando / y %
    int restante = codigoBanner;

    int billetes105 = restante / 105;
    restante = restante % 105;

    int billetes70 = restante / 70;
    restante = restante % 70;

    int billetes32 = restante / 32;
    restante = restante % 32;

    int billetes15 = restante / 15;
    restante = restante % 15;

    int billetes7 = restante / 7;
    restante = restante % 7;

    int billetes3 = restante / 3;
    restante = restante % 3;

    int billetes1 = restante / 1;
    restante = restante % 1;

    // Solo se muestran las denominaciones cuya cantidad es mayor a 0
    if (billetes105 > 0) cout << billetes105 << " billete(s) de 105 dolares" << endl;
    if (billetes70 > 0)  cout << billetes70  << " billete(s) de 70 dolares"  << endl;
    if (billetes32 > 0)  cout << billetes32  << " billete(s) de 32 dolares"  << endl;
    if (billetes15 > 0)  cout << billetes15  << " billete(s) de 15 dolares"  << endl;
    if (billetes7 > 0)   cout << billetes7   << " billete(s) de 7 dolares"   << endl;
    if (billetes3 > 0)   cout << billetes3   << " billete(s) de 3 dolares"   << endl;
    if (billetes1 > 0)   cout << billetes1   << " billete(s) de 1 dolar"     << endl;

    return 0;
}

// Aprendizaje: [completa aqui con tus propias palabras lo que aprendiste: como la division
// entera (/) y el modulo (%) permiten descomponer una cantidad en partes de mayor a menor
// valor, y por que el orden de las denominaciones importa para que el resultado sea correcto]
