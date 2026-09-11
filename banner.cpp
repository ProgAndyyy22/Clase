// Andy Araque

#include <iostream>

using namespace std;

int main() {
    int codigoBanner;
    cout << "Ingrese el codigo banner (cantidad de dinero en la cuenta): ";
    cin >> codigoBanner;


    int restante = codigoBanner;

    int billetes105 = restante / 105;
    restante = restante % 105;

    int billetes70 = restante / 70;
    restante = restante % 70;

    int billetes32 = restante / 32;
    restante = restante % 32;

    int billetes15 = restante / 15;
    restante = restante % 15;

    int billetes7 = restante / 7;
    restante = restante % 7;

    int billetes3 = restante / 3;
    restante = restante % 3;

    int billetes1 = restante / 1;
    restante = restante % 1;

    // Solo se muestran las denominaciones cuya cantidad es mayor a 0
    if (billetes105 > 0) cout << billetes105 << " billete(s) de 105 dolares" << endl;
    if (billetes70 > 0)  cout << billetes70  << " billete(s) de 70 dolares"  << endl;
    if (billetes32 > 0)  cout << billetes32  << " billete(s) de 32 dolares"  << endl;
    if (billetes15 > 0)  cout << billetes15  << " billete(s) de 15 dolares"  << endl;
    if (billetes7 > 0)   cout << billetes7   << " billete(s) de 7 dolares"   << endl;
    if (billetes3 > 0)   cout << billetes3   << " billete(s) de 3 dolares"   << endl;
    if (billetes1 > 0)   cout << billetes1   << " billete(s) de 1 dolar"     << endl;

    return 0;
}

// Este programa me enseño como integrar un problema de descomponer el dinero en billetes de diferentes denominaciones con programación.
// El uso de modulos y divisiones son indispensables para el objetivo y se puede desarrollar esa logica en C++
// Tambien aprendí que en C++ hay que tomar en cuenta nuestras variables y como pueden cambiar dependiendo del proposito que se tenga 