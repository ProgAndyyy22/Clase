#include <iostream>
using namespace std;

int main(){

    int n{0};
    do{ cout << "n :" ; cin >> n;  
        if(n<=0){ cout << "n debe ser un numero positivo"<< endl;}} while (n <=0);
        
    
    int potencia{10};    

    while (n / potencia >= 1){
        potencia *= 10;
    }

    potencia /= 10;

    int n0 = n / potencia;
    cout << "El primer dígito de " << n << " es: "; 

    switch (n0){
        case 0: cout << "cero" << endl; break;
        case 1: cout << "uno" << endl; break;
        case 2: cout << "dos" << endl; break;
        case 3: cout << "tres" << endl; break;
        case 4: cout << "cuatro" << endl; break;

        /* case4: 
            case5: cout << "cuatro o cinco"<< endl; */
        case 5: cout << "cinco" << endl; break;
        case 6: cout << "seis" << endl; break;
        case 7: cout << "siete" << endl; break;
        case 8: cout << "ocho" << endl; break;
        default : cout << "nueve" << endl; break;
    }

    int n1 = n % 10;
    cout << "El ultimo dígito de " << n << " es: ";

    switch (n1){
        case 0: cout << "cero" << endl; break;
        case 1: cout << "uno" << endl; break;
        case 2: cout << "dos" << endl; break;
        case 3: cout << "tres" << endl; break;
        case 4: cout << "cuatro" << endl; break;
        case 5: cout << "cinco" << endl; break;
        case 6: cout << "seis" << endl; break;
        case 7: cout << "siete" << endl; break;
        case 8: cout << "ocho" << endl; break;
        default : cout << "nueve" << endl; break;
    }

}