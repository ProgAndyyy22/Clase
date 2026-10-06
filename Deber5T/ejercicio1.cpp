// Andy Araque

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Ingrese el numero de lineas: ";
    cin >> n;

    cout << "Figura A:" << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Figura B:" << endl;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Figura C:" << endl;

    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;

    cout << "Figura D:" << endl;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;

    cout << "Extra Credit:" << endl;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        for (int j = 1; j <= 2 * (n - i) + 4; j++) {
            cout << " ";
        }

        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }

        for (int j = 1; j <= 2 * i + 4; j++) {
            cout << " ";
        }

        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }

        for (int j = 1; j <= 2 * (n - i) + 4; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}