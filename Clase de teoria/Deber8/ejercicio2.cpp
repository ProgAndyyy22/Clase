//Andy Araque
//24 Noviembre 
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    
    int n, posicion;
    
    cout << "Numero de pruebas: ";
    cin >> n;

    float notas[n], ajustadas[n];
    float suma = 0, promedio, promedio2;
    float menor;

    

    


    for(int i = 0; i < n; i++) {

        cout << "Prueba " << i + 1 << ": ";
        cin >> notas[i];

        while(notas[i] < 1 || notas[i] > 10) {
            cout << "Nota invalida. Ingrese nuevamente: ";
            cin >> notas[i];
        }

        suma = suma + notas[i];
    }

    
    promedio = suma / n;

    menor = notas[0];
    posicion = 0;

    for(int i = 1; i < n - 1; i++) {

        if(notas[i] < menor) {
            menor = notas[i];
            posicion = i;
        }
    }

    for(int i = 0; i < n; i++) {
        ajustadas[i] = notas[i];
    }

    ajustadas[posicion] = notas[n - 1];

    suma = 0;

    for(int i = 0; i < n; i++) {
        suma = suma + ajustadas[i];
    }

    promedio2 = suma / n;

    
    cout << fixed << setprecision(2);

    cout << "\n";
    cout << left << setw(25) << "Informe Inicial";

    if(promedio2 > promedio) {
        cout << left << setw(25) << "Informe Ajustado";
    }

    cout << endl;

    for(int i = 0; i < n; i++) {

        cout << left << setw(25);

        if(i == n - 1) {
            cout << "Final: " << notas[i];
        }
        else {
            cout << "Prueba " << i + 1 << ": " << notas[i];
        }

        if(promedio2 > promedio) {

            cout << left << setw(25);

            if(i == posicion) {
                cout << "Prueba " << i + 1 << ": " << ajustadas[i];
            }
            else if(i == n - 1) {
                cout << "Final: " << ajustadas[i];
            }
            else {
                cout << "Prueba " << i + 1 << ": " << ajustadas[i];
            }
        }

        cout << endl;
    }

    cout << left << setw(25) << "Promedio: " << promedio;

    if(promedio2 > promedio) {
        cout << left << setw(25) << promedio2;
    }

    cout << endl;

    
    char letra1, letra2;

    if(promedio >= 9) letra1 = 'A';
    else if(promedio >= 7.5) letra1 = 'B';
    else if(promedio >= 6.5) letra1 = 'C';
    else if(promedio >= 5.5) letra1 = 'D';
    else letra1 = 'F';

    if(promedio2 >= 9) letra2 = 'A';
    else if(promedio2 >= 7.5) letra2 = 'B';
    else if(promedio2 >= 6.5) letra2 = 'C';
    else if(promedio2 >= 5.5) letra2 = 'D';
    else letra2 = 'F';

    cout << left << setw(25) << "Nota: " << letra1;

    if(promedio2 > promedio) {
        cout << left << setw(25) << letra2;
    }

    cout << endl;

    return 0;
}
