//Andy Araque
//25 de octubre de 2026

#include <iostream>
using namespace std;

bool es_primo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}


void suma_goldbach(int n){
    if (n <= 2 || n % 2 != 0) {
        cout << "El numero debe ser par y mayor que 2." << endl;
        return;
    }


for (int i =2 ; i <= n/2; ++i) {
    if (es_primo(i) && es_primo(n - i)) {
        cout << n << " = " << i << " + " << (n - i) << endl;
    }

}}

int main() {

 suma_goldbach(23);
}
