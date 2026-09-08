#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

// Función que divide un texto largo en líneas de ancho coherente
void imprimirTextoFormateado(const string& texto, int anchoMaximo) {
    stringstream ss(texto);
    string palabra;
    string lineaActual = "";

    while (ss >> palabra) {
        // Si añadir la palabra supera el ancho máximo, imprimimos la línea actual
        if (lineaActual.length() + palabra.length() + 1 > anchoMaximo) {
            cout << lineaActual << endl;
            lineaActual = palabra; // Iniciamos la nueva línea con la palabra actual
        } else {
            if (!lineaActual.empty()) {
                lineaActual += " ";
            }
            lineaActual += palabra;
        }
    }
    
    // Imprimir la última línea remanente
    if (!lineaActual.empty()) {
        cout << lineaActual << endl;
    }
}

int main() {
    int anchoCaja = 60;
    string decoracion(anchoCaja, '*');

    string presentacion = "Hola, soy Andy Araque y esta es mi carta de presentacion oficial "
                          "para la Universidad San Francisco de Quito. Estoy muy emocionado "
                          "de automatizar y diseñar este formato usando C++.";

    // Imprimir diseño con saltos de línea coherentes
    cout << decoracion << endl;
    cout << "* Universidad San Francisco de Quito *" << endl;
    cout << decoracion << endl;
    
    // Llamamos a la función para el texto largo
    imprimirTextoFormateado(presentacion, anchoCaja);
    
    cout << decoracion << endl;

    return 0;
}
