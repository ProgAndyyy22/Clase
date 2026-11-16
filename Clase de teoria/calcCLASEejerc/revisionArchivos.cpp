//Este es mi archivo que contiene el main
#include <iostream>
#include "calculadora.h"//Como aqui ya están las "cedulas" o huellas digitales el programa asume que existen esas "personas"/funciones.
#include <iomanip>
using namespace std;


int main(){
    cout << setprecision(20);
    float a = {1};
    float b = {2};
    double r = 2;
    double h = 3; 
    //Voy a llamar a dos funciones y a la constante global
    cout << "Mi valor de PI con el que trabajo es " << PI << endl;
    //Area de una elipse
    cout << "Mi area con a " << a <<" y b " << b << " es " << areaElipse(a,b) << endl;
    //Volumen de un cilindro
    cout << "Mi volumen con r " << r <<" y h " << h << " es " << volumenCilindro(r,h) << endl;
    string temp;
    cin >> temp;
}