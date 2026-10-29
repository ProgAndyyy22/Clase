#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

const vector<string> sabores = {"chocolate", "vainilla", "fresa"};

void menu(vector<vector<int>> &ventas);
void registrarVenta(vector<vector<int>> &v, int s, int l, int cantidad);
void mostrarResumen(vector<vector<int>> v);
vector<int> totalesSabor(vector<vector<int>> v);
vector<int> totalesLocal(vector<vector<int>> v);

void registrarVenta(vector<vector<int>> &v, int s, int l, int cantidad) {
   
    v[s - 1][l - 1] += cantidad;
}

vector<int> totalesSabor(vector<vector<int>> v) {
    vector<int> totales(v.size(), 0);

    for (int s = 0; s < v.size(); s++) {
        for (int l = 0; l < v[s].size(); l++) {
            totales[s] += v[s][l];
        }
    }

    return totales;
}

vector<int> totalesLocal(vector<vector<int>> v) {
    vector<int> totales(v[0].size(), 0);

    for (int s = 0; s < v.size(); s++) {
        for (int l = 0; l < v[s].size(); l++) {
            totales[l] += v[s][l];
        }
    }

    return totales;
}

void mostrarResumen(vector<vector<int>> v) {
    vector<int> porSabor = totalesSabor(v);
    vector<int> porLocal = totalesLocal(v);
    int total = 0;

    cout << "\nHelados vendidos por sabor:\n";
    for (int s = 0; s < porSabor.size(); s++) {
        cout << sabores[s] << ": " << porSabor[s] << '\n';
        total += porSabor[s];
    }

    cout << "\nHelados vendidos por local:\n";
    for (int l = 0; l < porLocal.size(); l++) {
        cout << "Local " << l + 1 << ": " << porLocal[l] << '\n';
    }

    cout << "\nTotal de helados vendidos: " << total << '\n';
}

void menu(vector<vector<int>> &ventas) {
    int opcion;

    cout << "\n1. Registrar venta\n";
    cout << "2. Salir\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        int sabor, local, cantidad;

        cout << "Numero del sabor (1-3): ";
        cin >> sabor;
        cout << "Numero del local (1-4): ";
        cin >> local;
        cout << "Cantidad vendida: ";
        cin >> cantidad;

        registrarVenta(ventas, sabor, local, cantidad);
        menu(ventas);  
    } else if (opcion == 2) {
        mostrarResumen(ventas);
    } else {
        cout << "Opcion no valida.\n";
        menu(ventas);  
    }
}

int main() {
    vector<vector<int>> ventas(3, vector<int>(4, 0));
    menu(ventas);
    return 0;
}