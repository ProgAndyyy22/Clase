// Andy Araque

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> nombres;
    vector<int> prioridades;

    vector<string> atendidos;
    vector<int> prioridadesAtendidos;

    char opcion;

    while (true) {

        cout << endl;
        cout << "A. Ingresar nuevo paciente" << endl;
        cout << "B. Atender proximo paciente" << endl;
        cout << "C. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 'A' || opcion == 'a') {

            string nombre;
            int prioridad;

            cin.ignore();

            cout << "Nombre completo: ";
            getline(cin, nombre);

            cout << "Prioritario (1/0): ";
            cin >> prioridad;

            nombres.push_back(nombre);
            prioridades.push_back(prioridad);

        }
        else if (opcion == 'B' || opcion == 'b') {

            if (nombres.size() == 0) {

                cout << "No hay pacientes en la cola." << endl;

            }
            else {

                int posicion = 0;

                for (int i = 0; i < prioridades.size(); i++) {

                    if (prioridades[i] == 1) {
                        posicion = i;
                        break;
                    }
                }

                cout << "Paciente atendido: " << nombres[posicion] << endl;
                cout << "Prioridad: " << prioridades[posicion] << endl;

                atendidos.push_back(nombres[posicion]);
                prioridadesAtendidos.push_back(prioridades[posicion]);

                for (int i = posicion; i < nombres.size() - 1; i++) {

                    nombres[i] = nombres[i + 1];
                    prioridades[i] = prioridades[i + 1];
                }

                nombres.pop_back();
                prioridades.pop_back();
            }
        }
        else if (opcion == 'C' || opcion == 'c') {

            break;

        }
        else {

            cout << "Opcion no valida." << endl;
        }
    }

    cout << endl;
    cout << "Resumen de pacientes atendidos:" << endl;

    for (int i = 0; i < atendidos.size(); i++) {

        cout << atendidos[i] << " - Prioridad: "
             << prioridadesAtendidos[i] << endl;
    }

    cout << endl;
    cout << "Pacientes que faltaron por atenderse:" << endl;

    for (int i = 0; i < nombres.size(); i++) {

        cout << nombres[i] << " - Prioridad: "
             << prioridades[i] << endl;
    }

    return 0;
}

// Aprendi a manipular vectores, a usar ciclos for y while, a usar condicionales if y else, y a crear un menu de opciones para el usuario.
// Reconozco que los arreglos y vectores son estructuras de datos muy utiles para almacenar informacion, y que es importante tener en cuenta la prioridad de los pacientes al momento de atenderlos.