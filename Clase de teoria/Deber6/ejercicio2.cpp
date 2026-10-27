//Andy Araque
//25 de octubre de 2026
#include <iostream>
using namespace std;

int numeroDeDigitos(int n) {

    if (n == 0) {
        return 1;
    }
    int contador = 0;
    while (n > 0) {
        n /= 10;
        contador++;
    }
    return contador;
}

int digitoEnPosicion(int n, int posicion) {

    if(posicion==0){ return n%10;}
    for (int i = 0; i < posicion; ++i) {

        n /= 10;
    }
    return n % 10;
}


int malasuma(int a, int b) {
    // "a" es el primer numero

 int   a1= (a>0) ? a : -a;
int b1= (b>0) ? b : -b;
int s=0;
int max= (numeroDeDigitos(a1) > numeroDeDigitos(b1)) ? numeroDeDigitos(a1) : numeroDeDigitos(b1);

int j=1;

    for(int i=0; i<max; i++){
        int digitoA = digitoEnPosicion(a1, i);
        int digitoB = digitoEnPosicion(b1, i);
        s +=((digitoA+digitoB)%10)*j;
        j*=10;


    }
if(a==b){s=-s;}
else if(a*b<0){s= (a1> a2) ? -a1: -a2;}
else{s=}

    return s;
}


int main(){cout << malasuma(0,0);}