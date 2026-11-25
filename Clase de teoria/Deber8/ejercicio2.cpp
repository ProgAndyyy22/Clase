//Andy Araque
//24 Noviembre 
#include <iostream>
using namespace std;


bool EnELRango(float x, int max=0, int min=10){

return (min <= x) && (x<= max);
}


int main(){
int numPruebas;
    cout << "El número de pruebas que se tomaron?" << endl;
    cin >> numPruebas;

float notas[numPruebas];

    for(int i=0; i<numPruebas-1; i++){
        float nota;
        cout << "Ingrese la nota de la prueba " << i+1 << endl;
        do{
            cin >> nota;

        if(EnELRango(nota)){
        cout << "La nota es valida" << endl;
        }else{
            cout << "La nota es invalida" << endl;
        }while(!EnELRango(nota));
        notas[i] = nota;

        

  
        }
    }

}