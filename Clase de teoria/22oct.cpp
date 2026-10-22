#include <iostream>
using namespace std;
int a, b; // variable global


int fun(int x, int y){

    if (x>y){a=x+y; b=x-y;}
    else {a=x-y; b=x+y;}
    return (a>b)?a:b;

}


void linea(int n,  char c, bool salto){
    for (int i{0}; i < n; i++)
        cout << c;
    if (salto)
        cout << endl;
}

int main(){
cout << "fUNCIONES" << endl;
int n=10;

for (int i{0}; i<n ; i++){linea(i+1, '*', false); linea(n-i-1, '.', false);   linea(3, ' ', false); linea(n-i-1, '.', false); linea(i+1, '@', true); cout << endl; }

}