// Nombre: Andy Araque
#include <iostream>
using namespace std;

void duplicarValor(int n) {
    n = n * 2;
    cout << "En duplicarValor: n = " << n
         << ", direccion de n: " << &n << endl;
}

void duplicarReferencia(int& n) {
    n = n * 2;
    cout << "En duplicarReferencia: n = " << n
         << ", direccion de n: " << &n << endl;
}

void intercambiar(int& x, int& y) {
    int aux = x;
    x = y;
    y = aux;
}

void sumaYProducto(int x, int y, int& suma, int& producto) {
    suma = x + y;
    producto = x * y;
}

int main() {
    int a, b;
    int suma, producto;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "\nVariable  Valor  Direccion  Bytes" << endl;
    cout << "a         " << a << "      " << &a << "  " << sizeof(a) << endl;
    cout << "b         " << b << "      " << &b << "  " << sizeof(b) << endl;

    cout << "\nduplicarValor(a):" << endl;
    duplicarValor(a);
    cout << "En main: a = " << a << endl;

    cout << "\nduplicarReferencia(a):" << endl;
    duplicarReferencia(a);
    cout << "En main: a = " << a << endl;

    intercambiar(a, b);
    cout << "\nDespues de intercambiar: a = " << a
         << ", b = " << b << endl;

    sumaYProducto(a, b, suma, producto);
    cout << "Suma: " << suma << endl;
    cout << "Producto: " << producto << endl;

    return 0;
}

// Aprendizaje: La diferencia entre pasar una variable por valor y por referencia.
// Por valor se trabaja con una copia; por referencia se modifica la variable original.
// Tambien aprendi a consultar direcciones de memoria con & y tamanos con sizeof.