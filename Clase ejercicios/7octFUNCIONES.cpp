#include <iostream>
#include<vector>
#include<iomanip>
using namespace std;
//Las funciones semprese se definen fuera de otras funciones 
// Las funciones se leen secuenciamente como todo en el codigo
/* 

int sumarInfinito(){
    int a=0;
    cout << "Llamada a mi funcion" << endl;
    return a+sumarInfinito();

}

void imprimirHola123(string datoAdicional, int numero, bool es_verdadero)

{
    cout << "Hola, tu dato adicional es " << datoAdicional << "tu numero es " << numero << " tu bool es" << es_verdadero << endl;
}

vector<int> generarVector(int n)
{   
    vector<int> miVector;
    for(int i=1; i<=n; i++)
    {
        miVector.push_back(rand()%100+1);

    }


    return miVector;


}




int main( ) 
{
imprimirHola123("12345678", 1235, false);
// 1era forma de usar la funcion generar un vector
// crear una variable para guardar el vector

// 2da forma usar directamente la funcion -> 
//1era
vector<int> miVectorMain = generarVector(7);

for (auto &valor: miVectorMain){

    cout << "Valor" << valor << endl;
}

//2da 




}
*/

int factorial(int n){
    //Condicion de ruptura -> return
    // factorial(1)=1
    if (n==1){return 1;}    
    return n*factorial(n-1);
}
int main(){



    cout << factorial(10);
}