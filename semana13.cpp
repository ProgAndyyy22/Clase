#include <iostream>
#include <vector>
using namespace std;

//Todos los datos tienen un tipo de dato oculto
//El tipo de dato oculto son las direcciones memoria
// Direcciones de memoria no son datos usados directamente, son solamente posiciones de donde están los datos.
// Siguen siendo numeros: numeros hexadecimales que indican en que parte de la memoria se almacena un dato
//Dependiendo del dato, la direccion de memoria ocupada va a ser mayor o menor
//Por ejemplo: booleano (representacion de 1 bit (0 o 1, True o false)) se representa en 1 byte. Se representa en 1 byte 
//int se representa con 4 bytes
//Arreglos dependera de su tipo de dato con cuanto se representa.
//Arreglo de int de tamaño 2, tendra 8 bytes, cada elemento sera de 4 buyes


// Como utilizar este dato oculto y manejar directamente direcciones de memoria en lugar de los datos
//Dos operadores: operador &, operador * (punteros)
void sumarStrings(string a, vector<string> &v){ for(auto &dato : v){ dato +=a;}}
void sumarInt1(int &i){ i++;}
// el & en la funcion toma el arreglo original para poder editarlo, y mejorar la eficiencia




int main(){
//operador & 
// Cuando no se usa & para definir una variable, el operador me devuelve una direccion de memoria asociada a la variable




int miEntero=100;
int miCopiaEntero = miEntero;


//Mismo indice mismo dato
int &miCopiaReferenciaEntero = miEntero;

cout << "Mi valor miEntero aqui es" << miEntero << "su direccion de memoria es " << &miEntero << endl;

cout <<"Mi valor miCopiaEntero" << miCopiaEntero << "su direccion " << &miCopiaEntero << endl;

cout << "Mi valor miCopiaReferenciaEntero aqui es " << miCopiaReferenciaEntero << " y su direccion de memoria" << &miCopiaReferenciaEntero << endl;


// esa es la razon de porque en ciertas funciones que usan arreglos o vectores y ciertos bucles se utiliza & en lugar de el dato directo
vector<string> miVector={"1", "2", "3"};
// &dato es una nuevaVariable (nuevo nombre) pero que apunta a las mismas direcciones de memoria de mi vector
 

for(auto &dato : miVector){dato += "1";}





}