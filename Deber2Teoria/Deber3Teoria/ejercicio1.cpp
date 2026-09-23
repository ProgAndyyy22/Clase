#include <iostream>
using namespace std;
#include <string>

int main( ) {
cout << "Ingrese los 3 lados del triangulo"<< endl;
double lado1, lado2, lado3;
cin >> lado1;
cin >> lado2; 
cin >> lado3; 


if(lado1+lado2>lado3 && lado1+lado3>lado2 && lado2+lado3>lado1 && lado1>0 && lado2>0 && lado3>0){
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
    cout<<"Si es un triangulo valido"<< endl;
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
}
else{
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
    cout<<"El triangulo no es valido"<< endl;
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
    return 0;
}


if((lado1==lado2 && lado1!=lado3) || (lado1==lado3 && lado1!=lado2) || (lado2==lado3 && lado2!=lado1)){
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
    cout<<"El triangulo es un triangulo isosceles"<< endl;
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
}
else if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3){
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
    cout<<"El triangulo es un triangulo escaleno"<< endl;
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
}
else{
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
    cout<<"El triangulo es un triangulo equilatero"<< endl;
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
}

if(lado1*lado1+lado2*lado2==lado3*lado3 || lado1*lado1+lado3*lado3==lado2*lado2 || lado2*lado2+lado3*lado3==lado1*lado1){
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
    cout<<"El triangulo es un triangulo rectangulo"<< endl;
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
}
else{
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
    cout<<"El triangulo no es un triangulo rectangulo"<< endl;
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
}

 

return 0;
}
