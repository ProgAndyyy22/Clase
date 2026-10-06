//Andy Araque

 #include <iostream>
using namespace std;

int main() {
    int a, b, c;


    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;

    int altura_maxima = a;
    if (b > altura_maxima) {
        altura_maxima = b;
    }
    if (c > altura_maxima) {
        altura_maxima = c;
    }

    for (int h = altura_maxima; h >= 1; h--) {
        // columna a


        if (a >= h) {
            cout << "***";
        } else {
            cout << "   ";
        }
        cout << " ";

        // columna b
        if (b >= h) {
            cout << "***";
        } else {
            cout << "   ";
        }
        cout << " "; 

        // columna c
        if (c >= h) {
            cout << "***";
        } else {
            cout << "   ";
        }
        cout << endl;
    }


    cout << "===========" << endl;

    cout << " a   b   c " << endl;

    return 0;
} 



