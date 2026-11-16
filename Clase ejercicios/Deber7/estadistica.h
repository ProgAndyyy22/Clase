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

// Aprendizaje adquirido: ...