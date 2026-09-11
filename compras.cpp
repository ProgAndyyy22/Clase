// Andy Araque


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string nombreProducto;
    float precioUnitario;
    bool esImportado, esIndustrial, esBasico;
    int unidades;

    cout << "Ingrese el nombre del producto: ";
    getline(cin, nombreProducto);

    cout << "Ingrese el precio unitario: ";
    cin >> precioUnitario;

    cout << "Es un producto de importacion? (1 = Si, 0 = No): ";
    cin >> esImportado;

    cout << "Es un producto industrial? (1 = Si, 0 = No): ";
    cin >> esIndustrial;

    cout << "Es un producto basico? (1 = Si, 0 = No): ";
    cin >> esBasico;

    cout << "Ingrese las unidades compradas: ";
    cin >> unidades;

    float valorBase = precioUnitario * unidades;

    // --- Determinar el IVA, evaluando las condiciones en el orden indicado ---
    bool aplicaIVA;
    float porcentajeIVA;

    if (esBasico) {
        aplicaIVA = false;
        porcentajeIVA = 0;
    } else if (esIndustrial && unidades > 15) {
        aplicaIVA = true;
        porcentajeIVA = 10;
    } else {
        aplicaIVA = true;
        porcentajeIVA = 15;
    }

    // --- Determinar el ICE, evaluando las condiciones en el orden indicado ---
    bool aplicaICE;
    float porcentajeICE;

    if (esBasico) {
        aplicaICE = false;
        porcentajeICE = 0;
    } else if (!esIndustrial && !esImportado) {
        aplicaICE = false;
        porcentajeICE = 0;
    } else if (esIndustrial && unidades > 15) {
        aplicaICE = true;
        porcentajeICE = 5;
    } else {
        aplicaICE = true;
        porcentajeICE = 10;
    }

    float valorIVA = aplicaIVA ? valorBase * porcentajeIVA / 100 : 0;
    float valorICE = aplicaICE ? valorBase * porcentajeICE / 100 : 0;
    float total = valorBase + valorIVA + valorICE;

    cout << fixed << setprecision(2);

    cout << "\nProducto: " << nombreProducto << endl;
    cout << "Precio unitario: " << precioUnitario << endl;
    cout << "Importado: " << (esImportado ? "Si" : "No") << endl;
    cout << "Industrial: " << (esIndustrial ? "Si" : "No") << endl;
    cout << "Basico: " << (esBasico ? "Si" : "No") << endl;
    cout << "Unidades: " << unidades << endl;
    cout << "Subtotal: " << valorBase << endl;

    if (aplicaIVA)
        cout << "IVA (" << (int)porcentajeIVA << "%): " << valorIVA << endl;
    else
        cout << "IVA: no aplica" << endl;

    if (aplicaICE)
        cout << "ICE (" << (int)porcentajeICE << "%): " << valorICE << endl;
    else
        cout << "ICE: no aplica" << endl;

    cout << "Total: " << total << endl;

    return 0;
}

// 
