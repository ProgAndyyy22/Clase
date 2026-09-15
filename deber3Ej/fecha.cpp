// Andy Araque

#include <iostream>
using namespace std;

int main() {
    int dia, mes, anio;

    cout << "Ingrese el dia: ";
    cin >> dia;
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el anio: ";
    cin >> anio;

    bool anioValido = (anio > 0);
    bool mesValido = false;
    bool diaValido = false;
    bool esBisiesto = false;
    int diasDelMes = 0;

    // Solo se comprueba el mes si el anio ya es valido (comprobacion secuencial)
    if (anioValido) {
        mesValido = (mes >= 1 && mes <= 12);
    }

    // Solo se comprueba el dia si el anio y el mes ya son validos
    if (anioValido && mesValido) {
        // Determinar si el anio es bisiesto
        if (anio % 4 != 0) {
            esBisiesto = false;
        } else if (anio % 100 != 0) {
            esBisiesto = true;
        } else if (anio % 400 != 0) {
            esBisiesto = false;
        } else {
            esBisiesto = true;
        }

        // Determinar cuantos dias tiene el mes
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            diasDelMes = 30;
        } else if (mes == 2) {
            diasDelMes = esBisiesto ? 29 : 28;
        } else {
            diasDelMes = 31;
        }

        diaValido = (dia >= 1 && dia <= diasDelMes);
    }

    cout << endl;

    if (anioValido && mesValido && diaValido) {
        cout << "La fecha " << dia << "/" << mes << "/" << anio << " es valida." << endl;
        if (esBisiesto) {
            cout << anio << " es un anio bisiesto, asi que febrero tiene 29 dias." << endl;
        } else {
            cout << anio << " no es un anio bisiesto, asi que febrero tiene 28 dias." << endl;
        }
        cout << "El mes " << mes << " tiene " << diasDelMes << " dias." << endl;
    } else {
        cout << "La fecha " << dia << "/" << mes << "/" << anio << " es invalida." << endl;
        if (!anioValido) {
            cout << "El anio debe ser mayor que cero." << endl;
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

// Aprendizaje adquirido: practique el uso de condicionales secuenciales (donde cada
// comprobacion solo se evalua si la anterior fue exitosa) para validar una fecha por
// partes, y reforce el uso del operador modulo (%) para aplicar las cuatro reglas del
// calendario gregoriano que determinan si un anio es bisiesto.

