// Nombre: Andy Araque
#include <iostream>
#include <iomanip>
using namespace std;

void leer(double* v, int n) {
    double* p = v;

    for (int i = 0; i < n; i++) {
        cout << "Temperatura " << i + 1 << ": ";
        cin >> *p;
        p++;
    }
}

void mostrar(double* v, int n) {
    double* p = v;

    cout << "\nPosicion\tDireccion\t\tValor" << endl;
    for (int i = 0; i < n; i++) {
        cout << i << "\t\t" << p << "\t"
             << fixed << setprecision(1) << *p << endl;
        p++;
    }
}

void estadisticas(double* v, int n, double& mayor,
                  double& menor, double& promedio) {
    double* p = v;
    double suma = 0;

    mayor = *p;
    menor = *p;

    for (int i = 0; i < n; i++) {
        if (*p > mayor) {
            mayor = *p;
        }

        if (*p < menor) {
            menor = *p;
        }

        suma = suma + *p;
        p++;
    }

    promedio = suma / n;
}

int main() {
    int n;
    double mayor, menor, promedio;

    cout << "Cantidad de temperaturas: ";
    cin >> n;

    while (n < 1) {
        cout << "La cantidad debe ser mayor o igual a 1" << endl;
        cout << "Cantidad de temperaturas: ";
        cin >> n;
    }

    double* temperaturas = new double[n];

    leer(temperaturas, n);
    mostrar(temperaturas, n);

    estadisticas(temperaturas, n, mayor, menor, promedio);

    cout << "\nMaxima: " << fixed << setprecision(1) << mayor << endl;
    cout << "Minima: " << menor << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Bytes reservados: " << sizeof(double) * n << endl;

    delete[] temperaturas;
    temperaturas = nullptr;

    cout << "Memoria liberada" << endl;

    return 0;
}

// Aprendizaje: Aprendi a reservar memoria dinamica con new y liberarla con delete[].
// Tambien aprendi a recorrer un arreglo usando punteros y aritmetica de punteros,
// y a enviar resultados a una funcion mediante parametros por referencia.
