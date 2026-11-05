#include <iostream>
using namespace std;
int prueba(int x, int y){ if (y<10) return x*10+y; else return x*100+y;}


int main() {
    int a = 5;
    int b = 8;
    for(int i=0; i<3; i++){
        b = prueba(a, i); // Should return 58
    a = prueba(b, i); // Should return 512
    }

    cout << "a: " << a << ", b: " << b << endl; // Should print a: 512, b: 58
    return 0;
}