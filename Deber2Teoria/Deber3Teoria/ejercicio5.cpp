#include <iostream>
using namespace std;
#include <string>

int main( ) {



float PromedioConsultas{0};
float NotaFinal{0};
float factor=0.5;
float nota1{0.5}, nota2{0.5}, nota3{0.5}, nota4{0.5};
bool existe1{false}, existe2{false}, existe3{false}, existe4{false};
cout << "Ingrese la nota de la primera consulta"<< endl; cin>>nota1;
cout << "Ingrese la nota de la segunda consulta"<< endl; cin>> nota2;
cout << "Ingrese la nota del trabajo de medio semestre"<< endl; cin>> nota3;
cout << "Ingrese la nota del proyecto final"<< endl; cin>> nota4;

int i{2}; 
for(i<=20; i++;){
if(factor*i==nota1){existe1=true; cout<< "Consulta 1: "<< nota1;}
if(factor*i==nota2){existe2=true; cout<< "Consulta 2: "<< nota2;}
if(factor*i==nota3){existe3=true; cout<< "Trabajo de medio semestre: "<< nota3;}
if(factor*i==nota4){existe4=true; cout<< "Proyecto final: "<< nota4;}
}
if(existe1==false){cout << "La nota de la primera consulta no se ingreso correctamente"<< endl;}
if(existe2==false){cout << "La nota de la segunda consulta no se ingreso correctamente"<< endl;}
if(existe3==false){cout << "La nota del trabajo de medio semestre no se ingreso correctamente"<< endl;}
if(existe3==false){cout << "La nota del proyecto final no se ingreso correctamente"<< endl;}
if(existe1 && existe2 && existe3 && existe4){
    PromedioConsultas=((nota1+nota2)/2.0);
    NotaFinal=PromedioConsultas*30.0/100.00+ nota3*30.0/100.0+ nota4*60.0/100.0;

    if((91.0<=NotaFinal)){
    cout << "La nota final es: "<< "A, sobresaliente";}
    else if((81.0<=NotaFinal)&&(NotaFinal<91.0)){
    cout << "La nota final es: "<< "B, bueno";}
    else if((71.0<=NotaFinal)&&(NotaFinal<81.0)){
    cout << "La nota final es: "<< "C, Regular";}
    else if((61.0<=NotaFinal)&&(NotaFinal<71.0)){
    cout << "La nota final es: "<< "D, Deficiente";}
    else if((61.0>NotaFinal)){
    cout << "La nota final es: "<< "F, No aprueba el curso";}

}




}