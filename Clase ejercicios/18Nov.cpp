#include <iostream>
using namespace std;

int main(){

//bool const &esMiercoles = true;

bool esMiercoles = true;
bool &esTercerDiaSemana= esMiercoles;
bool esDia18= true;

cout << "para esMiercoles el dato es " << esMiercoles << " y su direccion es " << &esMiercoles << endl;
cout << "para esTercerDiaSemana el dato es " << esTercerDiaSemana << " y su direccion es"<< &esTercerDiaSemana << endl;

cout << "para esDia18 el dato es " << esDia18 << " y su direccion es " << &esDia18 << endl;
  


// Sintaxis de los punteros usando el simbolo *

bool *punteroMiercoles = &esMiercoles;

cout << "\npara punteroMiercoles el dato es " << punteroMiercoles << " y su direccion es " << &punteroMiercoles << endl; //


cout << "para  punteroMiercoles el dato que guarda es " << punteroMiercoles << " y su direccion es " << &punteroMiercoles << 

" y el dato al que apunta la direccion guardada en el puntero es " << *punteroMiercoles <<endl; //


 int arreglo[5] = {10,2,34,41,53};
/*for(auto valor:arreglo){
    cout << "valor del arreglo es " << valor << endl;}
*/

cout  << "\n Que imprime arreglo " << arreglo << endl; // arreglo es un puntero a la primera posicion del arreglo, por eso imprime la direccion de memoria
// de la primera posicion del arreglo

//operadores con punteroos: 

cout << "\nOperador * en arreglo " << *arreglo << endl;
cout << "Operador + en arreglo " << arreglo+1<< endl; // siguiente direccion de memoria
cout << "Operador resta en arreglo " << arreglo-1 <<endl; // direccion de memoria anterior 


// *(v+i)= v[i]
// cout << (arreglo+1)* << endl;

 cout << endl;
for(int i=0; i< size(arreglo); i++){
    cout << "el valor del arreglo en la posicion " << i << " es " << *(arreglo+i) << endl;
}


//Usar punteros para un arreglo dinamico
//Memoria dinamica: el tamaño del arreglo se define durante la ejecucion del programa

int variable;
cin >> variable;
// operadores new me permiten reservar memoria 
// delete me permite liberar memoria
 
float *punteroArreglo = new float(variable);

for (int i=0; i<variable; i++){ cout << "Valor " << *(punteroArreglo+i)<< endl;}


// delete punteroArreglo; solo libera el primer dato
delete[] punteroArreglo; //liberando memoria dinamica


punteroArreglo= nullptr; // para evitar que el puntero quede apuntando a un espacio de memoria que ya no es valido


return 0;
}





