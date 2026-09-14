#include <iostream>
using namespace std;
#include <string>

int main( ) {

/* “Estoy muriendo, el tesoro será para mis tres hijos, la mitad para mi hijo
mayor Juan, la tercera parte para mi hijo Pedro y la novena parte para el menor de mis hijos
Manuel”.*/


float PesoPolvoOro=0;
int CantidadMonedasOro=0;
int Opcion=0;


cout << "__________________________________________________________ \n" << endl;
cout << "Bienvenido al programa de cálculo del tesoro" << endl;
cout << "Elija que va a ingresar que unidad de oro había en el barril originalmente: (Escriba 1 o 2) " << endl;
cout << "1. Peso de polvo de oro" << endl;
cout << "2. Cantidad de monedas de oro" << endl;
cin >> Opcion; 

if (Opcion == 1) {
    float PesoPolvoOro=0;
    float Juan=0;
    float Pedro=0;
    float Manuel=0;
    cout << "Ingrese el peso de polvo de oro al momento de encontrar el barril: " << endl;
    cin >> PesoPolvoOro;

    float PorcionHijoMayor= PesoPolvoOro/2;
    float PorcionHijoMediano= PesoPolvoOro/3;
    float PorcionHijoMenor= PesoPolvoOro/9;

    Manuel = PorcionHijoMenor;

    PesoPolvoOro= PorcionHijoMayor+PorcionHijoMediano;

    PorcionHijoMayor= PesoPolvoOro/2;
    PorcionHijoMediano= PesoPolvoOro/3;
    PorcionHijoMenor= PesoPolvoOro/9;

    Pedro = PorcionHijoMediano;

    PesoPolvoOro= PorcionHijoMayor+PorcionHijoMenor;

    PorcionHijoMayor= PesoPolvoOro/2;
    PorcionHijoMediano= PesoPolvoOro/3;
    PorcionHijoMenor= PesoPolvoOro/9;

    Juan = PorcionHijoMayor;
    
    PesoPolvoOro= PorcionHijoMediano+PorcionHijoMenor;

    PorcionHijoMayor= PesoPolvoOro/2;
    PorcionHijoMediano= PesoPolvoOro/3;
    PorcionHijoMenor= PesoPolvoOro/9;

    Manuel += PorcionHijoMenor;
    Pedro += PorcionHijoMediano;
    Juan += PorcionHijoMayor;



}
else if (Opcion == 2) {


    float CantidadMonedasOro=0;
    cout << "Ingrese la cantidad de monedas de oro al momento de encontrar el barril: " << endl;
cin >> CantidadMonedasOro;
}

}