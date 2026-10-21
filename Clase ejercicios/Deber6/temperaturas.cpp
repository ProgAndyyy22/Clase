// Andy Araque

#include <iostream>
#include <iomanip>
using namespace std;


void mostrarMenu();
double celsiusAFahrenheit(double c);
double fahrenheitACelsius(double f);
double celsiusAKelvin(double c);
bool esValida(double grados, int opcion);

int main() {
    int opcion;
    int conversiones = 0;
    double grados, resultado;

    do {
        mostrarMenu();
        cin >> opcion;

        if (opcion == 1) {
            cout << "Ingrese la temperatura en Celsius: ";
            cin >> grados;

            if (esValida(grados, opcion)) {
                resultado = celsiusAFahrenheit(grados);
                cout << fixed << setprecision(2);
                cout << "Temperatura en Fahrenheit: " << resultado << endl;
                conversiones++;
            } else {
                cout << "Temperatura inferior al cero absoluto." << endl;
            }
        } else if (opcion == 2) {
            cout << "Ingrese la temperatura en Fahrenheit: ";
            cin >> grados;

            if (esValida(grados, opcion)) {
                resultado = fahrenheitACelsius(grados);
                cout << fixed << setprecision(2);
                cout << "Temperatura en Celsius: " << resultado << endl;
                conversiones++;
            } else {
                cout << "Temperatura inferior al cero absoluto." << endl;
            }
        } else if (opcion == 3) {
            cout << "Ingrese la temperatura en Celsius: ";
            cin >> grados;

            if (esValida(grados, opcion)) {
                resultado = celsiusAKelvin(grados);
                cout << fixed << setprecision(2);
                cout << "Temperatura en Kelvin: " << resultado << endl;
                conversiones++;
            } else {
                cout << "Temperatura inferior al cero absoluto." << endl;
            }
        } else if (opcion == 4) {
            cout << "Conversiones realizadas: " << conversiones << endl;
        } else {
            cout << "Opcion no valida. Intente nuevamente." << endl;
        }

    } while (opcion != 4);

    return 0;
}

void mostrarMenu() {
    cout << "\n--- CONVERSION DE TEMPERATURAS ---" << endl;
    cout << "1. Celsius a Fahrenheit" << endl;
    cout << "2. Fahrenheit a Celsius" << endl;
    cout << "3. Celsius a Kelvin" << endl;
    cout << "4. Salir" << endl;
    cout << "Ingrese una opcion: ";
}

double celsiusAFahrenheit(double c) {
    return c * 9 / 5 + 32;
}

double fahrenheitACelsius(double f) {
    return (f - 32) * 5 / 9;
}

double celsiusAKelvin(double c) {
    return c + 273.15;
}

bool esValida(double grados, int opcion) {
    if (opcion == 1 || opcion == 3) {
        if (grados < -273.15) {
            return false;
        }
    }

    if (opcion == 2) {
        if (grados < -459.67) {
            return false;
        }
    }

    return true;
}

// Aprendizaje adquirido: uso de funciones, validaciones,
// menus repetitivos y conversiones de temperatura.
