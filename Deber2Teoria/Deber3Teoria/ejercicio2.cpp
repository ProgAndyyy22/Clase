#include <iostream>
using namespace std;
#include <string>

int main( ) {
/* a) La hora que sería al cabo de una hora. Ej: 15:23:45 ➔ 16:23:45
b) La hora que sería al cabo de un minuto. Ej: 15:23:45 ➔ 15:24:45
c) La hora que sería al cabo de un segundo. Ej: 15:23:45 ➔ 15:23:46 */

cout << "Ingrese la hora en formato 24 horas (HH:MM:SS)"<< endl;
int hora, minuto, segundo;
char separador1, separador2;
cin >> hora >> separador1 >> minuto >> separador2 >> segundo;

if (hora < 0 || hora > 23 || minuto < 0 || minuto > 59 || segundo < 0 || segundo > 59) {
    cout << "Hora inválida. Por favor, ingrese una hora válida en formato HH:MM:SS." << endl;
    return 1;
}
else{ 
hora+=1; hora%=24;
cout << "La hora al cabo de una hora es: " << hora << ":" << minuto << ":" << segundo << endl; 
hora=hora-1; hora=(hora+24)%24;

minuto+=1; int AñadirHora=minuto / 60; hora+=AñadirHora; hora%=24; minuto%=60;
cout << "La hora al cabo de un minuto es: " << hora << ":" << minuto << ":" << segundo << endl; 
minuto-=1; hora-=AñadirHora; minuto=(minuto+60)%60; hora=(hora+24)%24;

segundo+=1; int AñadirMinuto=segundo / 60; minuto+=AñadirMinuto; AñadirHora=minuto/60; hora+=AñadirHora; hora%=24; minuto%=60; segundo%=60;
cout << "La hora al cabo de un segundo es: " << hora << ":" << minuto << ":" << segundo << endl; 
}

return 0;
}