#include <iostream>
using namespace std;

int recursivo(int x, int y) {
    if (x<=y) {
        return x+y;
    } else {
        return recursivo(x-1, y);
    }
}


int main() {
    int a = 4;
    int b = 4;
    for(int i=1; i<=3; i++){
        b = recursivo(a, i); // Should return 58
    a = recursivo(b, i); // Should return 512
    }

    cout << "a: " << a << ", b: " << b << endl; // Should print a: 512, b: 58
    return 0;
}