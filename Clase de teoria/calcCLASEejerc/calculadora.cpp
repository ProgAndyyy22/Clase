//Para completar las implementaciones/logica de cada protipo de función
//Se debe importar igualmente el .h 
//no es necesario pero es buena práctica para que la estructura del prototipo y la implementación sean iguales.

//INCORRECTO
// const float PI = 3.141592;
// //Equivocación con los tipos de datos en la función. Si no se importa el .h no indica ningún error
// double areaElipse(float a, int b){
//     return PI*a*b;
// }

//CORRECTO
#include "calculadora.h"
float areaElipse(float a, float b){
    return PI*a*b;
}
double volumenCilindro(double r, double h)
{
    return PI*r*r*h;
}