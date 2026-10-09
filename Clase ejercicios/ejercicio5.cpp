/*
Escribir un código agenda.cpp que:
• Presente un menú inicial con las siguientes opciones, que permita ingresar una opción
y se indique si se ingresa una opción no válida:
1. Agendar reserva
2. Ver resumen semanal (compacto)
3. Ver agenda semanal completa
4. Salir
• Las reservas son por horas exactas (de 9:00 a 10:00, de 14:00 a 15:00).
• Opción 1: pide el día, la hora y el nombre. Registra la reserva o explica por qué la
rechaza (hora reservada, día u hora fuera de horario).
• Opción 2: muestra solo las horas ocupadas de cada día, el total de reservas y la hora
más agendada en la semana.
• Opción 3: muestra la tabla completa por hora y por día desde 08:00 hasta las 17:00.
• Los horarios para agendar reserva van de las 08:00 hasta las 17:00 (incluyendo 17:00)
de lunes a viernes y de las 10:00 hasta las 13:00 (incluyendo 13:00) los sábados.
• Nota: SE DEBEN UTILIZAR VECTORES Y LA LIBRERÍA <vector> PARA ESTE EJERCICIO.
*/
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{

while(true){
cout << "============== Sala de reuniones ==============" << endl;
cout << "1. Agendar reserva"<< endl;
cout << "2. Ver resumen semanal (compacto)"<< endl;
cout << "3. Ver agenda semanal completa "<< endl;
cout << "4. Salir "<< endl;
int a;
cout << "Ingrese una opcion: "; cin >> a;

vector<int> HorasValidasLV={8,9,10,11,12,13,14,15,16,17};
vector<int> HorasValidasS={10,11,12,13};
vector<int> Dias={1,2,3,4,5,6};
vector<int> Reserva(2,0);
string nombre;

bool hora_valida, dia_valido;

if(a==1)
{
do{
cout << "Ingrese el dia de la semana (Lunes: 1, Martes: 2, Miércoles: 3, Jueves: 4, Viernes: 5, Sábado: 6, Domingo: 7): ";
cin >> Reserva[0];
cout << "Ingrese la hora (8:00-17:00): ";
cin >> Reserva[1];
cout << "Ingrese el nombre de la reserva: ";
cin >> nombre;

for(auto& num : Dias){

    if(num==Reserva[0]){
        dia_valido=true;
        break;
    }
    else{
        dia_valido=false;
    }}

if(Reserva[0]==6){
    for(auto& num : HorasValidasS){

    if(num==Reserva[1]){
        hora_valida=true;
        break;
    }
    else{
        hora_valida=false;
    }}
}
else if(dia_valido==true){
for(auto& num : HorasValidasLV){

    if(num==Reserva[1]){
        hora_valida=true;
        break;
    }
    else{
        hora_valida=false;
    }}
} }while (dia_valido && hora_valida==false);
}

vector<string> Encabezado ={"Hora", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
vector<string> Ocho ={"08:00", "-", "-", "-", "-", "-", " "};
vector<string> Nueve ={"09:00", "-", "-", "-", "-", "-", " "};
vector<string> Diez ={"10:00", "-", "-", "-", "-", "-", "-"};
vector<string> Once ={"11:00", "-", "-", "-", "-", "-", "-"};
vector<string> Doce ={"12:00", "-", "-", "-", "-", "-", "-"};
vector<string> Trece ={"13:00", "-", "-", "-", "-", "-", "-"};
vector<string> Catorce ={"14:00", "-", "-", "-", "-", "-", " "};
vector<string> Quince ={"15:00", "-", "-", "-", "-", "-", " "};
vector<string> Dieciseis ={"16:00", "-", "-", "-", "-", "-", " "};
vector<string> Diecisiete ={"17:00", "-", "-", "-", "-", "-", " "};

if(((dia_valido && hora_valida)==true)&& (a==1)){
    cout << "Reserva agendada para el dia: " << Reserva[0] << " a las: " << Reserva[1] << " con el nombre: " << nombre << endl;

    switch(Reserva[1]){
        case 8:
            Ocho[Reserva[0]-1] = nombre;
            break;
        case 9:
            Nueve[Reserva[0]-1] = nombre;
            break;
        case 10:
            Diez[Reserva[0]-1] = nombre;
            break;
        case 11:
            Once[Reserva[0]-1] = nombre;
            break;
        case 12:
            Doce[Reserva[0]-1] = nombre;
            break;
        case 13:
            Trece[Reserva[0]-1] = nombre;
            break;
        case 14:
            Catorce[Reserva[0]-1] = nombre;
            break;
        case 15:
            Quince[Reserva[0]-1] = nombre;
            break;
        case 16:
            Dieciseis[Reserva[0]-1] = nombre;
            break;
        case 17:
            Diecisiete[Reserva[0]-1] = nombre;
            break;

    }


}
else if((dia_valido==false)&& (a==1)){
    cout << "Dia no valido" << endl;}
else if((hora_valida==false)&& (a==1)){
    cout << "Hora no valida" << endl;}


// opcion 2
vector<string> DiasString={"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
vector<bool> DiasBool={false, false, false, false, false, false};

if(a==2){

vector<vector<string>> agenda = {Ocho, Nueve, Diez, Once, Doce, Trece, Catorce, Quince, Dieciseis, Diecisiete};
for (int j=1; j <= 6; j++){

cout << left << setw(12) << DiasString[j-1];

for( auto& m : agenda){

        if((m[j]!="-")&& (m[j]!=" ")){
            cout << " tiene reserva a las: " << left << setw(10) << m[0] << " con el nombre: " << m[j] << endl;
            DiasBool[j-1]=true;}
    
    }

    if (DiasBool[j-1]==false){cout << " no tiene reservas" << endl;}
}
}






// opcion 2 
if(a==3){   
for (auto& m : Encabezado){
cout << setw(12) << m;}

cout << endl;

for (auto& m : Ocho){
cout <<left << setw(12) << m;}

cout << endl;

for (auto& m : Nueve){
cout <<left << setw(12) << m;}

cout << endl;

for (auto& m : Diez){
cout <<left << setw(12) << m;}

cout << endl;

for (auto& m : Once){
cout <<left << setw(12) << m;}

cout << endl;

for (auto& m : Doce){
cout <<left << setw(12) << m;}

cout << endl;

for (auto& m : Trece){
cout <<left << setw(12) << m;}

cout << endl;

for (auto& m : Catorce){
cout <<left << setw(12) << m;}

cout << endl;

for (auto& m : Quince){
cout <<left << setw(12) << m;}

cout << endl;

for (auto& m : Dieciseis){
cout << left << setw(12) << m;}

cout << endl;

for (auto& m : Diecisiete){
cout << left <<setw(12) << m;}

cout << endl;
}
}

}






