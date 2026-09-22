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
bool DosAncianos= false;
bool VanAlCine=true;
if( (esAnciano1 && esAnciano2)||(esAnciano1 && esAnciano3)||(esAnciano2 && esAnciano2) && !(esAnciano1&&esAnciano2&&esAnciano3)){ DosAncianos= true;}
float BoletosAncianos{0}, BoletosAdultos{0}, BoletosMenores{0};

if (EntraPersona1Sala && EntraPersona2Sala && EntraPersona3Sala ) {
cout << "Las tres personas solo pueden ir a la sala de entretenimiento (son menores de edad), no tiene sentido ir al cine." << endl;
VanAlCine=false;}
else if ((EntraPersona1Sala && EntraPersona2Sala)||(EntraPersona1Sala && EntraPersona3Sala)||(EntraPersona2Sala && EntraPersona3Sala)) {
cout << "Hay dos menores de edad, y un adulto tiene que acompañarlos a la sala de entretenimiento, no tiene sentido ir al cine." << endl;
VanAlCine=false;}
else if (EntraPersona1Sala || EntraPersona2Sala || EntraPersona3Sala) {

cout << "Hay un menor de edad, y un adulto tiene que acompañarlos a la sala de entretenimiento." << endl;
    BoletosMenores=1;
    BoletosAdultos=0;
    if (DosAncianos){cout<< "Hay dos mayores de edad con prioridad para ver la pelicula, y un menor sin cuidar, el menor no va a entrar"<< endl;
    BoletosMenores=0; BoletosAncianos=2;}
    else if (esAnciano1){cout << "La primera persona (mayor de 65) tiene prioridad de ver la pelicula. "<< endl;
    BoletosMenores=2; BoletosAncianos=1;}
    else if (esAnciano2){cout << "La segunda persona (mayor de 65) tiene prioridad de ver la pelicula. "<<endl;
    BoletosMenores=2; BoletosAncianos=1;}
    else if (esAnciano3){cout << "La tercera persona (mayor de 65) tiene prioridad de ver la pelicula. "<<endl; 
    BoletosMenores=2; BoletosAncianos=1;}
    else{cout << "Una de las dos personas adultas debe ir obligatoriamente con el menor de edad (dos boletos a la sala de entretenimiento) "<< endl;
        BoletosMenores=2;
        BoletosAdultos=1;}
}
else{
if(esAnciano1){BoletosAncianos+=1;}else{BoletosAdultos+=1;};
if(esAnciano2){BoletosAncianos+=1;}else{BoletosAdultos+=1;};
if(esAnciano3){BoletosAncianos+=1;}else{BoletosAdultos+=1;};
}


cout << "\n Van a entrar: "<< BoletosAdultos+BoletosAncianos+BoletosMenores<< endl;
cout << "Van a la sala de entreteniemiento: "<< BoletosMenores<< endl;
cout << "Van a la sala de cine: "<< BoletosAncianos+BoletosAdultos<< endl;
    //





}