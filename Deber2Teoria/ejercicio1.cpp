#include <iostream>
using namespace std;
#include <string>

int main( ) {

int tipoConversion;
int TRANSFORMACION;
double metros;


double unMetroEnPies=3.28;
double unMetroEnPulgadas=39.37;

cout << "Quieres calcular la transformación de tu ALTURA o de tu PESO? "<< endl;
cout << "1. ALTURA "<< endl;
cout << "2. PESO"<< endl;

cin >> TRANSFORMACION; cin.ignore();

if( TRANSFORMACION ==2 ){
cout<< R"(--------------------------------------)"<<"\n"<<endl;
    double Kg;
    cout << "Que conversión quieres hacer? "<< endl;
    cout << "1. Kg a Libras/Onzas "<< endl;
    cout << "2. Libras/Onzas a Kg"<< endl;

    cin >> tipoConversion; cin.ignore();
    
    if( tipoConversion ==1 ){
    double Kg;
    cout<<"Ingrese su peso en kilogramos"<<endl;
    cin>>Kg;
    cin.ignore();

    int libras=Kg*2.20462;
    double onzas=(Kg-libras/2.20462)*35.274;


    cout<< R"(--------------------------------------)"<<"\n"<<endl;
    cout<<"Su peso en libras/onzas es: "<<libras<< " lb y "<<onzas<< " oz"<< endl;
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
    }

    else if( tipoConversion==2) {
    int libras;
    double onzas;
    cout<<"Ingrese el máximo entero de su peso en libras"<<endl;
    cin>>libras;
    cin.ignore();

    cout<<"Ingrese las onzas"<<endl;
    cin>>onzas;
    cin.ignore();

    double Kg=libras/2.20462+onzas/35.274;
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
    cout<<"Su peso en kilogramos es: "<<Kg<< " Kg"<< endl;
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
    }
}

else if( TRANSFORMACION==1) {
cout<< R"(--------------------------------------)"<<"\n"<<endl;
cout << "Que conversión quieres hacer? "<< endl;
cout << "1. Metros a pies/pulgadas "<< endl;
cout << "2. Pies/pulgadas a metros"<< endl;

cin >> tipoConversion; cin.ignore();

if( tipoConversion ==2 ){

    int pies;
    double pulgadas;
    cout<<"Ingrese su altura, primero el máximo entero de pies"<<endl;
    cin>>pies;
    cin.ignore();

    cout<<"Ingrese las pulgadas"<<endl;
    cin>>pulgadas;
    cin.ignore();


    metros=pies/unMetroEnPies+pulgadas/unMetroEnPulgadas;
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
    cout<<"Su altura en metros es: "<<metros<< " m"<< endl;
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
}


else if( tipoConversion==1) {
  
    cout<<"Ingrese la altura en metros"<<endl;
    cin>>metros;
    cin.ignore();

    int pies = metros* unMetroEnPies;
    double pulgadas= (metros-pies/unMetroEnPies)*unMetroEnPulgadas;
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
    cout<<"Su altura en pies y pulgadas es: "<<pies<<" ft y "<<pulgadas<<" in"<< endl;
    cout<< R"(--------------------------------------)"<<"\n"<<endl;
}}



}
