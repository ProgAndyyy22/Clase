// Andy Araque

#include <iostream>
using namespace std;

int main() {
    int dia, mes, año;

    cout << "Ingrese el dia: ";
    cin >> dia;
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el año: ";
    cin >> año;

    bool añoValido =false;
    bool mesValido =false;
    bool diaValido =false;
    bool esBisiesto =false;
    int diasDelMes = 0;

    if (añoValido) {
        mesValido = (mes >= 1 && mes <= 12);
    }

    if (añoValido && mesValido) {
        if (año % 4 != 0) {
            esBisiesto = false;
        } else if (año % 100 != 0) {
            esBisiesto = true;
        } else if (año % 400 != 0) {
            esBisiesto = false;
        } else {
            esBisiesto = true;
        }

        if (mes== 4 || mes== 6 || mes== 9 || mes== 11){
            diasDelMes = 30;
        } else if(mes == 2) {
            diasDelMes =(esBisiesto) ? 29 : 28;
        } else{
            diasDelMes = 31;
        }

        diaValido =(dia >= 1 && dia <= diasDelMes);
    }

    cout << endl;

    if (añoValido && mesValido && diaValido) {
        cout << "La fecha " << dia << "/" << mes << "/" << año << " es valida." << endl;
        if (esBisiesto) {
            cout << año << " es un año bisiesto, asi que febrero tiene 29 dias." << endl;
        } else {
            cout << año << " no es un año bisiesto, asi que febrero tiene 28 dias." << endl;
        }
        cout << "El mes " << mes << " tiene " << diasDelMes << " dias." << endl;
    } else {
        cout << "La fecha " << dia << "/" << mes << "/" << año << " es invalida." << endl;
        if (!añoValido) {
            cout << "El año debe ser mayor que cero." << endl;
        } else if (!mesValido) {
            cout << "El mes esta fuera del rango 1 a 12." << endl;
        } else if (!diaValido) {
            if (dia < 1) {
                cout << "El dia debe ser mayor o igual a 1." << endl;
            } else {
                cout << "El mes " << mes << " tiene " << diasDelMes
                     << " dias, por lo que el dia " << dia << " no es valido." << endl;
            }
        }
    }

    return 0;
}

// practique el uso de condicionales (donde cada
// comprobacion solo se evalua si la anterior fue exitosa) para validar una fecha por
// partes, y reforce el uso del operador modulo (%) para aplicar las reglas del
// calendario que determinan si un año es bisiesto.

