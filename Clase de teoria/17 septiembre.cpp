#include <iostream>
using namespace std;

int main() {
    cout << "While loop example" << endl;
    int a{1}, b{0};
    /*while (a <= 100) 
    {
        if(a %3 == 0 || a %5 == 0){
            cout << a << " ";
        }

        a+=2;
    }*/
    int  n{1};
    long long suma{0};
    int suma_p{0}, suma_i{0};
    while(n <=100)
    {  // cout << n << " ";
        if(n % 2 == 0){
            suma_p += n;
        }
        else{
            suma_i += n;
        }
        suma += n;
        n++;
        
    }
    cout << "Suma: " << suma << endl;
    cout << "Suma pares: " << suma_p << endl;
    cout << "Suma impares: " << suma_i << endl;
    return 0;
}