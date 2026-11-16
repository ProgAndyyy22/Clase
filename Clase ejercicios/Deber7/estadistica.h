// Andy Araque

#ifndef ESTADISTICA_H
#define ESTADISTICA_H

#include <string>

const double NOTA_MINIMA = 7;

bool notaValida(double n);
double promedio(double n1, double n2, double n3);
double desviacion(double n1, double n2, double n3);
string estado(double prom);

#endif

// Aprendi que es bueno utilizar un flujo ordenado para programar, separando las funciones en diferentes archivos y el codigo
// Tambien a utilizar codigo para manejar archivos de texto, para leer, editar y extraer texto
