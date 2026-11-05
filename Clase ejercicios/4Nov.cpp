#include <fstream>
#include <iostream>




using namespace std;


int main()
{
// lo analogo de cout
    //Variable que maneja la salida del archivo
ofstream salidaTexto("miArchivo.txt");

//Variable que maneja la entrada al archivo, lo analogo de cin
ifstream entradaTexto("miArchivo.txt");

    salidaTexto << "Hola Mundo" << endl;




    return 0;
}