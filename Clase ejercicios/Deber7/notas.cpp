#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "estadistica.h"

using namespace std;

void agregarEstudiante() {
    string nombre;
    double n1, n2, n3;

    cout << "Nombre: ";
    cin >> nombre;

    cout << "Nota 1: ";
    cin >> n1;
    if (!notaValida(n1)) {
        cout << "Las notas deben estar entre 0 y 10" << endl;
        return;
    }

    cout << "Nota 2: ";
    cin >> n2;
    if (!notaValida(n2)) {
        cout << "Las notas deben estar entre 0 y 10" << endl;
        return;
    }

    cout << "Nota 3: ";
    cin >> n3;
    if (!notaValida(n3)) {
        cout << "Las notas deben estar entre 0 y 10" << endl;
        return;
    }

    ofstream archivo("notas.txt", ios::app);
    archivo << nombre << " " << n1 << " " << n2 << " " << n3 << endl;
    archivo.close();

    cout << "Estudiante agregado a notas.txt" << endl;
}

void verYGuardarReporte() {
    ifstream archivo("notas.txt");
    if (!archivo.is_open()) {
        cout << "No se pudo abrir notas.txt" << endl;
        return;
    }

    ofstream reporte("reporte.txt");
    cout << fixed << setprecision(2);
    reporte << fixed << setprecision(2);

    cout << endl;
    cout << left << setw(12) << "Nombre" << right << setw(10) << "Promedio"
         << setw(12) << "Desviacion" << " Estado" << endl;
    reporte << left << setw(12) << "Nombre" << right << setw(10) << "Promedio"
            << setw(12) << "Desviacion" << " Estado" << endl;

    string nombre, mejorNombre;
    double n1, n2, n3;
    double suma = 0;
    double mejor = 0;
    int cantidad = 0;
    int aprobados = 0;

    while (archivo >> nombre >> n1 >> n2 >> n3) {
        double prom = promedio(n1, n2, n3);
        double desv = desviacion(n1, n2, n3);
        string est = estado(prom);

        cout << left << setw(12) << nombre << right << setw(10) << prom
             << setw(12) << desv << " " << est << endl;
        reporte << left << setw(12) << nombre << right << setw(10) << prom
                << setw(12) << desv << " " << est << endl;

        cantidad++;
        suma = suma + prom;
        if (est == "Aprobado") {
            aprobados++;
        }
        if (prom > mejor) {
            mejor = prom;
            mejorNombre = nombre;
        }
    }
    archivo.close();

    double promedioCurso = suma / cantidad;

    cout << endl;
    cout << "Estudiantes: " << cantidad << endl;
    cout << "Aprobados: " << aprobados << endl;
    cout << "Promedio del curso: " << promedioCurso << endl;
    cout << "Mejor promedio: " << mejorNombre << " (" << mejor << ")" << endl;

    reporte << endl;
    reporte << "Promedio del curso: " << promedioCurso << endl;
    reporte.close();

    cout << "Reporte guardado en reporte.txt" << endl;
}

int main() {
    int opcion = 0;

    while (opcion != 3) {
        cout << "\n===== Registro de notas =====" << endl;
        cout << "1. Agregar estudiante" << endl;
        cout << "2. Ver y guardar reporte" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            agregarEstudiante();
        } else if (opcion == 2) {
            verYGuardarReporte();
        } else if (opcion == 3) {
            cout << "Fin del programa" << endl;
        } else {
            cout << "Opcion no valida" << endl;
        }
    }

    return 0;
}
