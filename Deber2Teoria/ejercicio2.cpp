#include <iostream>
using namespace std;
#include <string>

int main( ) {
    
    
float Diametro, Altura, Peso;
float Poliestiero=0.5; // g/cm3
int NumeroLatas=0;
float VolumenLata, VolumenCaja;

cout << "Ingrese el diametro, altura y peso de las latas (cm, cm, g): "<< endl;
cout << "Diametro: ";
cin >> Diametro;
cout << "Altura: ";
cin >> Altura;
cout << "Peso: ";
cin >> Peso;

VolumenLata= 3.1416*(Diametro/2)*(Diametro/2)*Altura;

cout << "Ingrese el largo ancho y alto de la caja (cm, cm, cm): "<< endl;
float Largo, Ancho, Alto;
cout << "Largo: ";
cin >> Largo;
cout << "Ancho: ";  
cin >> Ancho;
cout << "Alto: ";
cin >> Alto;

VolumenCaja= Largo*Ancho*Alto;
int Largo1= Largo/Diametro;
int Ancho1= Ancho/Diametro;
int Alto1= Alto/Altura;

NumeroLatas= Largo1*Ancho1*Alto1;

cout << "\n \n" << R"(-----------------------------------------)" << "\n" << endl;

cout << "En la caja caben " << NumeroLatas << " latas \n" << endl;



VolumenCaja= VolumenCaja-VolumenLata*NumeroLatas;
cout << "El volumen de bolitas de poliestireno para llenar la caja es: " << VolumenCaja << " cm3 \n" << endl;


Peso= VolumenCaja*Poliestiero+Peso*NumeroLatas;
cout << "El peso total de la caja (Latas +Poliestireno) es: " << Peso << " g \n" << endl; 

cout <<R"(-----------------------------------------)" << "\n" << endl;

}