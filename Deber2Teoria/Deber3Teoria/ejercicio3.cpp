#include <iostream>
using namespace std;
#include <string>

int main( ) {

/*En los partidos de cuartos de final de la Copa Sudamericana, se deben enfrentar LDU de
Quito y Fluminense de Rio de Janeiro de Brasil. Se debe
jugar dos partidos, el primero en Rio y el segundo en Quito.
El equipo que clasifica es aquel que tenga más puntos. Se
asignan 3 puntos por partido ganado, 1 punto por partido
empatado y 0 por partido perdido.

*/
cout << "Ingrese los goles ganados por LDU en el primer partido (en Rio): ";
int golesLDU1, golesFluminense1;
cin >> golesLDU1;

cout << "Ingrese los goles ganados por Fluminense en el primer partido (en Rio): ";
cin >> golesFluminense1;

cout << "Ingrese los goles ganados por LDU en el segundo partido (en Quito): ";
int golesLDU2, golesFluminense2;
cin >> golesLDU2;
cout << "Ingrese los goles ganados por Fluminense en el segundo partido (en Quito): ";
cin >> golesFluminense2;

/*Tomar en cuenta que los penales
son máximo 5 goles. El programa deberá calcular cual es el equipo que clasifica.
Al final el programa debe mostrar en la pantalla los puntos logrados, goles a favor, goles en
contra, gol de diferencia, goles convertidos como visitante para cada equipo1
, y lo más
importante, cuál es el equipo que clasifica, si es que hay un equipo clasificado*/
int puntosLDU = 0;
int puntosFluminense = 0;
if(golesLDU1 > golesFluminense1) {
    puntosLDU += 3;
} else if (golesLDU1 < golesFluminense1) {
    puntosFluminense += 3;
} else {
    puntosLDU += 1;
    puntosFluminense += 1;
}
if(golesLDU2 > golesFluminense2) {
    puntosLDU += 3;
} else if (golesLDU2 < golesFluminense2) {
    puntosFluminense += 3;
} else {
    puntosLDU += 1;
    puntosFluminense += 1;
}


if(puntosLDU> puntosFluminense) {
    cout << "El equipo que clasifica es: LDU de Quito" << endl;
    }
else if(puntosFluminense> puntosLDU){
    cout << "El equipo que clasifica es: Fluminense de Rio de Janeiro" << endl;
    }


cout << "Puntos LDU: " << puntosLDU << endl;
cout << "Puntos Fluminense: " << puntosFluminense << endl;
cout << "Goles a favor LDU: " << golesLDU1 + golesLDU2 << endl;
cout << "Goles a favor Fluminense: " << golesFluminense1 + golesFluminense2 << endl;
cout << "Goles en contra LDU: " << golesFluminense1 + golesFluminense2 << endl;
cout << "Goles en contra Fluminense: "<< golesLDU1 + golesLDU2 << endl;
cout << "Gol de diferencia LDU: " << (golesLDU1 + golesLDU2) - (golesFluminense1 + golesFluminense2) << endl;
cout << "Gol de diferencia Fluminense: " << (golesFluminense1 + golesFluminense2) - (golesLDU1 + golesLDU2) << endl;

bool HuboPenales= false;
if(puntosLDU == puntosFluminense) {



int golesDiferencia1 = golesLDU1 - golesFluminense1;
int golesDiferencia2 = golesLDU2 - golesFluminense2;

if (golesDiferencia1 + golesDiferencia2 > 0) {
    cout << "El equipo que clasifica es: LDU de Quito" << endl;
} else if (golesDiferencia1 + golesDiferencia2 < 0) {
    cout << "El equipo que clasifica es: Fluminense de Rio de Janeiro" << endl;
} else if (golesLDU1>golesFluminense2) {
    cout << "El equipo que clasifica es: LDU de Quito por más goles como visitante" << endl;
} else if (golesFluminense2>golesLDU1) {
    cout << "El equipo que clasifica es: Fluminense de Rio de Janeiro por más goles como visitante" << endl;
}
else {
    HuboPenales = true;
    cout << "Hubo empate en puntos y goles, se debe definir por penales." << endl;

    cout << "Ingrese los goles de LDU en penales: "; cin >> golesLDU1;
    cout << "Ingrese los goles de Fluminense en penales: "; cin >> golesFluminense1;

    if(HuboPenales && (golesLDU1>5 || golesFluminense1>5)){
        cout << "Los goles de penales no pueden ser mayores a 5." << endl;
    } else {
        if(golesLDU1 > golesFluminense1) {
            cout << "El equipo que clasifica es: LDU de Quito" << endl;
        } else if (golesLDU1 < golesFluminense1) {
            cout << "El equipo que clasifica es: Fluminense de Rio de Janeiro (Ganador por penales)" << endl;
        } else {
            cout << "Hubo empate en penales, ningun equipo clasifica." << endl;
        }
}

}}
return 0;    
}