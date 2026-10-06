// Andy Araque 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n: ";
    cin >> n;
    cout << "\n";

    int dimension_total = n * n;
    for (int f = 0; f < dimension_total; f++) {
        for (int c = 0; c < dimension_total; c++) {
            
            int bloque_fila = f / n;
            int bloque_columna = c / n;

        
            if ((bloque_fila + bloque_columna) % 2 == 0) {
                cout << "X ";
            } else {
                cout << ". ";
            }
        }
        cout << '\n';
    }

    return 0;
}
