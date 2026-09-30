#include <iostream>
#include <vector>



using namespace std;

int main(){

  /*  string nombres_curso [18];

    string nombres_curso_v2 [18]= {"Andy", "Juan"};
 // el resto de caracteres son saltos de linea

    //Añadir un nombre en la posición 10

    nombres_curso_v2[10]= "Luis";

    for (int i=0; i<=17; i++)
        cout << nombres_curso_v2[i] << endl;

    // usando for de los arreglos. Para lectura y escritura es diferente


    // si se quiere hacer lectura se puede poner auto 'variable' : arreglo
    for( auto  &nombre : nombres_curso_v2){ //
        
    // Con & se accede a los valores del arreglo (en la memoria); y no se crea una copia del arreglo
        cout << nombre << endl;
    
    
    } */


    // Vectores

    vector<string> vector_nombres;
    vector<string> vector_nombres_v2;

    vector_nombres_v2.push_back("Andy");
    vector_nombres_v2.push_back("Juan");

    string estaciones_mes[4][3]; // 4 filas y 3 columnas
    // cada posicion (fila, columna) es un string

    // Como inicializo con datos 

    string estaciones_mes_v2 [4][3]= {{"E","F","M"}, {"A","M","J"}, {"JL","A","S"}, {"O","N","D"}};


    estaciones_mes_v2[2][0]= "Julio";

int i=1;
    for(auto &estacion : estaciones_mes_v2)
    { 
        cout << "Estacion" << estaciones_mes_v2 << endl;

        for(auto &mes: estacion)
        {cout << "Mes" << estacion; }
        i++;


    }



vector<vector<string>> estaciones_mes_v3;


estaciones_mes_v3.push_back({"E","F","M"});
estaciones_mes_v3.push_back({"A","M","J"});
estaciones_mes_v3.push_back({"JL","A","S"});
estaciones_mes_v3.push_back({"O","N","D"});

estaciones_mes_v3[2].push_back("Mes nuevo 3");

}