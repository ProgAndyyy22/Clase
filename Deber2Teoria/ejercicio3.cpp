#include <iostream>
using namespace std;
#include <string>

int main( ) {
    
    int NumeroInvitados = 0;
    float PrecioDeEntrada= 0;
    float CostoDelPaquete=0;
    int TerceraEdad=0;
    int Medicos=0;
    int PG=0;
    
    /*  siempre llega un 35%
de personas de la tercera edad, 25% de médicos pertenecientes al Colegio de Médicos y el resto es público
en general. Como es bien sabido, las personas de la tercera edad tienen un descuento del 50% sobre el
precio de la entrada y no pagan IVA, y que los miembros del Colegio de Médicos reciben un 10% de
descuento. */


    cout << "__________________________________________________________ \n" << endl;
    cout << "Bienvenido al sistema" << endl;
    cout << "Ingrese el número de invitados: " << endl;
    cin >> NumeroInvitados;

    cout << "Ingrese el precio de entrada: " << endl;
    cin >> PrecioDeEntrada;

    cout << "Ingrese el costo del paquete de entrada (producto gratis y refrigerio): \n" << endl;
    cin >> CostoDelPaquete;



    TerceraEdad= NumeroInvitados*35/100;
    Medicos= NumeroInvitados*25/100;
    PG= NumeroInvitados*40/100;
    float IVA=1.15;
    /* Cuantos asistentes de la 3ra edad, cuantos médicos y cuanto público adicional,
• el total de ingresos por venta de entradas,
• el IVA que se debe pagar,
• el costo (gasto) total y
• el valor que la empresa ganó o perdió en la realización del evento.*/

    float TotalVentas= (PrecioDeEntrada/2)*TerceraEdad+(PrecioDeEntrada*0.9)*1.15*Medicos+(PrecioDeEntrada)*1.15*PG;
    IVA= (PrecioDeEntrada*0.9)*0.15*Medicos+(PrecioDeEntrada)*0.15*PG; 

//Aunque los de la tercera Edad no paguen IVA el dueño debe cubrir ese gasto??

    float GastoTotal= NumeroInvitados*CostoDelPaquete;

    float Ganancia = TotalVentas-IVA-GastoTotal;

    cout << "__________________________________________________________" << endl;
    cout << "__________________________________________________________ \n" << endl;
cout << "* Asistieron " << TerceraEdad << " personas de la tercera edad, "<<Medicos<< " medicos y "<< PG<< " personas del publico general" << " \n*" << endl ;
cout << "* El total de ingresos generados por ventas de entradas es: "<<TotalVentas  << " \n*" << endl;
cout << "* El IVA que se debe pagar es: "<< IVA  << " \n*" << endl;
cout << "* El gasto total para atender a todos los invitados es: " << GastoTotal << " \n*" << endl;

if(Ganancia >= 0){
    cout<< "* La empresa obtuvo una utilidad de: " << Ganancia << endl;
}
else{cout<< "* La empresa obtuvo una perdida de: " << Ganancia << endl;}

    cout << "__________________________________________________________" << endl;
    cout << "__________________________________________________________ \n" << endl;


}
