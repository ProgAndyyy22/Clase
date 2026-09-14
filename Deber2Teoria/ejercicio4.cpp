#include <iostream>
using namespace std;
#include <string>

int main( ) {

/* “Estoy muriendo, el tesoro será para mis tres hijos, la mitad para mi hijo
mayor Juan, la tercera parte para mi hijo Pedro y la novena parte para el menor de mis hijos
Manuel”.*/



int Opcion=0;


cout << "__________________________________________________________ \n" << endl;
cout << "Bienvenido al programa de cálculo del tesoro" << endl;
cout << "Elija que va a ingresar que unidad de oro había en el barril originalmente: (Escriba 1 o 2) " << endl;
cout << "1. Peso de polvo de oro" << endl;
cout << "2. Cantidad de monedas de oro" << endl;
cin >> Opcion; 

if (Opcion == 1) {
    float Oro=0;
    float Juan=0;
    float Pedro=0;
    float Manuel=0;
    float Desperdicio=0; 
    cout << "Ingrese el peso de polvo de oro al momento de encontrar el barril: " << endl;
    cin >> Oro;

    float OroInicial=Oro;
    float PorcionHijoMayor= Oro/2;
    float PorcionHijoMediano= Oro/3;
    float PorcionHijoMenor= Oro/9;
    Desperdicio += Oro/18;
    Manuel = PorcionHijoMenor;

    Oro= PorcionHijoMayor+PorcionHijoMediano;

    PorcionHijoMayor= Oro/2;
    PorcionHijoMediano= Oro/3;
    PorcionHijoMenor= Oro/9;
    Desperdicio += Oro/18;
    Pedro = PorcionHijoMediano;

    Oro= PorcionHijoMayor+PorcionHijoMenor;

    PorcionHijoMayor= Oro/2;
    PorcionHijoMediano= Oro/3;
    PorcionHijoMenor= Oro/9;
    Desperdicio += Oro/18;
    Juan = PorcionHijoMayor;
    Oro= PorcionHijoMediano+PorcionHijoMenor;

    PorcionHijoMayor= Oro/2;
    PorcionHijoMediano= Oro/3;
    PorcionHijoMenor= Oro/9;

  
    Manuel += PorcionHijoMenor;
    Pedro += PorcionHijoMediano;
    Juan += PorcionHijoMayor;
    float Iglesia= Oro/18;

    float porcentajeJuan = (Juan * 100.0)/ OroInicial;
    float porcentajePedro = (Pedro * 100.0) / OroInicial;
    float porcentajeManuel = (Manuel * 100.0) / OroInicial;
    float porcentajeDesperdicio = (Desperdicio * 100.0) / OroInicial;
    float porcentajeIglesia = (Iglesia * 100.0) / OroInicial;
    cout << "Polvo de oro para Juan: " << Juan << ". Representa el " << porcentajeJuan << "%" << endl;
    cout << "Polvo de oro para Pedro: " << Pedro << ". Representa el " << porcentajePedro << "%" << endl;
    cout << "Polvo de oro para Manuel: " << Manuel << ". Representa el " << porcentajeManuel << "%" << endl;
    cout << "Polvo de oro desperdiciado: " << Desperdicio << ". Representa el " << porcentajeDesperdicio << "%" << endl;
    cout << "Polvo de oro para la Iglesia: " << Iglesia << ". Representa el " << porcentajeIglesia << "%" << endl;


}
else if (Opcion == 2) {


    int Oro=0;


    cout << "Ingrese la cantidad de monedas de oro al momento de encontrar el barril: " << endl;
    cin >> Oro;
    
    int OroInicial=Oro;
    int Juan=0;
    int Pedro=0;
    int Manuel=0;
    int Desperdicio=0; 

    int PorcionHijoMayor= Oro/2;
    int PorcionHijoMediano= Oro/3;
    int PorcionHijoMenor= Oro/9;
    Desperdicio += Oro-PorcionHijoMayor-PorcionHijoMediano-PorcionHijoMenor;
    Manuel = PorcionHijoMenor;

    Oro= PorcionHijoMayor+PorcionHijoMediano;

    PorcionHijoMayor= Oro/2;
    PorcionHijoMediano= Oro/3;
    PorcionHijoMenor= Oro/9;
    Desperdicio += Oro-PorcionHijoMayor-PorcionHijoMediano-PorcionHijoMenor;
    Pedro = PorcionHijoMediano;

    Oro= PorcionHijoMayor+PorcionHijoMenor;

    PorcionHijoMayor= Oro/2;
    PorcionHijoMediano= Oro/3;
    PorcionHijoMenor= Oro/9;
    Desperdicio += Oro-PorcionHijoMayor-PorcionHijoMediano-PorcionHijoMenor;
    Juan = PorcionHijoMayor;
    Oro= PorcionHijoMediano+PorcionHijoMenor;

    PorcionHijoMayor= Oro/2;
    PorcionHijoMediano= Oro/3;
    PorcionHijoMenor= Oro/9;

  
    Manuel += PorcionHijoMenor;
    Pedro += PorcionHijoMediano;
    Juan += PorcionHijoMayor;
    int Iglesia= Oro-PorcionHijoMayor-PorcionHijoMediano-PorcionHijoMenor;

    float porcentajeJuan = (Juan * 100.0)/ OroInicial;
    float porcentajePedro = (Pedro * 100.0) / OroInicial;
    float porcentajeManuel = (Manuel * 100.0) / OroInicial;
    float porcentajeDesperdicio = (Desperdicio * 100.0) / OroInicial;
    float porcentajeIglesia = (Iglesia * 100.0) / OroInicial;

    cout << "Cantidad de monedas de oro para Juan: " << Juan << ". Representa el "<< porcentajeJuan << "%" << endl;
    cout << "Cantidad de monedas de oro para Pedro: " << Pedro << ". Representa el "<< porcentajePedro << "%" << endl;
    cout << "Cantidad de monedas de oro para Manuel: " << Manuel << ". Representa el "<< porcentajeManuel << "%" << endl;
    cout << "Cantidad de monedas de oro desperdiciado: " << Desperdicio << ". Representa el "<< porcentajeDesperdicio << "%" << endl;
    cout << "Cantidad de monedas de oro para la Iglesia: " << Iglesia << ". Representa el "<< porcentajeIglesia << "%" << endl;


} 

}