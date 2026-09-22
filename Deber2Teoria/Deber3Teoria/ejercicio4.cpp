#include <iostream>
using namespace std;
#include <string>

int main( ) {
int edad1, edad2, edad3;
float precioBoleto;
cout << "Ingrese la edad de la primera persona: ";
cin >> edad1;
cout << "Ingrese la edad de la segunda persona: ";
cin >> edad2;
cout << "Ingrese la edad de la tercera persona: ";
cin >> edad3;

cout << "Ingrese el precio del boleto de cine: ";
cin >> precioBoleto;



bool EntraPersona1Sala = (edad1 >= 8 && edad1 <18);
bool EntraPersona2Sala = (edad2 >= 8 && edad2 <18);
bool EntraPersona3Sala = (edad3 >= 8 && edad3 <18);

bool EntraCine1 = (edad1 >= 18);
bool EntraCine2 = (edad2 >= 18);
bool EntraCine3 = (edad3 >= 18);

bool esAnciano1 = (edad1 >= 65);
bool esAnciano2 = (edad2 >= 65);
bool esAnciano3 = (edad3 >= 65);

int i=1;
float BoletosAncianos{0}, BoletosAdultos{0}, BoletosMenores{0};

if (EntraPersona1Sala && EntraPersona2Sala && EntraPersona3Sala ) {
cout << "Las tres personas solo pueden ir a la sala de entretenimiento, no tiene sentido ir al cine." << endl;}
else if ((EntraPersona1Sala && EntraPersona2Sala)||(EntraPersona1Sala && EntraPersona3Sala)||(EntraPersona2Sala && EntraPersona3Sala)) {
cout << "Hay dos menores de edad, y un adulto tiene que acompañarlos a la sala de entretenimiento, no tiene sentido ir al cine." << endl;}
else if (EntraPersona1Sala || EntraPersona2Sala || EntraPersona3Sala) {

cout << "Hay un menor de edad, y un adulto tiene que acompañarlos a la sala de entretenimiento." << endl;
    if (esAnciano1){cout << "La primera persona (mayor de 65) tiene prioridad de ver la pelicula. "<< endl;}
    else if (esAnciano2){cout << "La segunda persona (mayor de 65) tiene prioridad de ver la pelicula. "<<endl;}
    else if (esAnciano3){cout << "La tercera persona (mayor de 65) tiene prioridad de ver la pelicula. "<<endl; }
    else{cout << "Una de las dos personas adultas debe ir obligatoriamente con el menor de edad (dos boletos a la sala de entretenimiento) "<< endl;}
}
else{}


    //





}