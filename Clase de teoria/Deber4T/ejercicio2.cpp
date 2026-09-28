// Autor Andy Araque 
// Fecha: 28 de septiembre 


#include <iostream>
using namespace std;

int main() {

    int num;
    int div = 2;

    cout << "n: ";
    cin >> num;

    while (num > 1) {

        div = 2;

        while (div * div <= num) {

            if (num % div == 0) {
                cout << div << endl;
                num = num / div;
                break;
            }

            div++;
        }

        if (div * div > num) {
            cout << num << endl;
            num = 1;
        }
    }

    return 0;
}
