#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int generarFigura() {
    return rand() % 3 + 1;
}




void escribirFigura(int figura, int fila) {
    const char* figuras[4][3] = {
        {"   ", "   ", "   "},
        {"X X", " X ", "X X"},
        {" O ", "O O", " O "},
        {"###", "# #", "###"}
    };
    cout << figuras[figura][fila];
}

void mostrarFiguras(int figura1, int figura2, int figura3) {
    cout << '\n';
    for (int fila = 0; fila < 3; fila++) {
        cout << "| ";
        escribirFigura(figura1, fila);
        cout << " | ";
        escribirFigura(figura2, fila);
        cout << " | ";
        escribirFigura(figura3, fila);
        cout << " |\n";
    }
}

double calcularGanado(int figura1, int figura2, int figura3, double apuesta) {
    if (figura1 == figura2 && figura2 == figura3) {
        return apuesta * 10;
    }

    if (figura1 != figura2 && figura1 != figura3 && figura2 != figura3) {
        return apuesta * 3;
    }

    return 0;
}

int main() {
    double saldo;
    cout << "Ingrese el saldo inicial: $";
    if (!(cin >> saldo)) {
        cerr << "Error: debe ingresar un monto valido.\n";
        return 1;
    }
    if (saldo <= 0) {
        cerr << "Error: el saldo inicial debe ser mayor que cero.\n";
        return 1;
    }

    srand(time(0));
    char continuar = 's';

    while (continuar == 's' && saldo > 0) {
        double apuesta;
        do {
            cout << "Ingrese el valor de la apuesta (saldo disponible: $"
                 << saldo << "): $";
            if (!(cin >> apuesta)) {
                cerr << "Error: debe ingresar un monto valido.\n";
                return 1;
            }
            if (apuesta <= 0 || apuesta > saldo) {
                cout << "La apuesta debe ser mayor que cero y no superar el saldo.\n";
            }
        } while (apuesta <= 0 || apuesta > saldo);

        int figura1 = generarFigura();
        int figura2 = generarFigura();
        int figura3 = generarFigura();
        mostrarFiguras(figura1, figura2, figura3);

        double ganado = calcularGanado(figura1, figura2, figura3, apuesta);
        saldo -= apuesta;
        saldo += ganado;

        if (ganado > 0) {
            cout << "Ganaste $" << ganado << ".\n";
        } else {
            cout << "No ganaste en esta jugada.\n";
        }
        cout << "Saldo actual: $" << saldo << '\n';

        if (saldo <= 0) {
            cout << "Se acabo el dinero.\n";
            break;
        }

        cout << "Desea seguir jugando? (s/n): ";
        if (!(cin >> continuar)) {
            cerr << "Error: no se pudo leer la respuesta.\n";
            return 1;
        }
        if (continuar == 'S') {
            continuar = 's';
        } else if (continuar == 'N') {
            continuar = 'n';
        }
        while (continuar != 's' && continuar != 'n') {
            cout << "Ingrese 's' para seguir o 'n' para terminar: ";
            if (!(cin >> continuar)) {
                cerr << "Error: no se pudo leer la respuesta.\n";
                return 1;
            }
            if (continuar == 'S') {
                continuar = 's';
            } else if (continuar == 'N') {
                continuar = 'n';
            }
        }
    }

    cout << "Saldo restante: $" << saldo << '\n';
    return 0;
}
