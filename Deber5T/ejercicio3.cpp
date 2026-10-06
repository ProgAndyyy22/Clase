#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            for (int k = 0; k < n; k++) {

                for (int l = 0; l < n; l++) {

                    if (j == i || j == n - i - 1) {
                        cout << "X";
                    }
                    else {
                        cout << ".";
                    }
                }
            }

            cout << endl;
        }
    }

    return 0;
}