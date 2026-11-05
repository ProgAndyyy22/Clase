#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iostream>

using namespace std;

int prueba(int x, int y) {
    if (y < 10)
        return x * 10 + y;
    return x * 100 + y;
}

int main() {
    int a = 5;
    int b = 8;
for (int i = 0; i < 3; i++) {
        b = prueba(a, i); 
        a = prueba(b, i); 
    }

    cout << "a: " << a << ", b: " << b << endl; 
    return 0;
}