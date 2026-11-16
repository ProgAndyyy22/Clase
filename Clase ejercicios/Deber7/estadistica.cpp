//Andy Araque

#include <cmath>
#include <string>
#include "estadistica.h"

using namespace std;

bool notaValida(double n) {
    return n >= 0 && n <= 10;
}

double promedio(double n1, double n2, double n3) {
    return (n1 + n2 + n3) / 3;
}

double desviacion(double n1, double n2, double n3) {
    double p = promedio(n1, n2, n3);
    double suma = pow(n1 - p, 2) + pow(n2 - p, 2) + pow(n3 - p, 2);
    return sqrt(suma / 3);
}

string estado(double prom) {
    if (prom >= NOTA_MINIMA) {
        return "Aprobado";
    }
    return "Reprobado";
}


// Aprendi que es bueno utilizar un flujo ordenado para programar, separando las funciones en diferentes archivos y el codigo
// Tambien a utilizar codigo para manejar archivos de texto, para leer, editar y extraer texto
