// Nombre: [Completa tu nombre completo aqui]
// Deber 2 - Ejercicio 1: entradas.cpp
// Tema: tipos de datos, entrada y salida de datos

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Datos generales o conocidos de antemano
    int anioActual = 2026;
    string mesActual = "septiembre";
    double numeroPI = 3.14159;
    bool esFinDeSemana = false;

    // Variables donde se guardaran los datos ingresados por el usuario
    string nombre, apellido, carrera, gustoCarrera, comidaFavorita, fraseCelebre;
    int edad;
    double altura;

    // Solicitar e ingresar los datos por terminal
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    cout << "Ingrese su apellido: ";
    getline(cin, apellido);

    cout << "Ingrese su edad: ";
    cin >> edad;
    cin.ignore(); // limpia el salto de linea que queda en el buffer antes del proximo getline

    cout << "Ingrese su altura (en metros): ";
    cin >> altura;
    cin.ignore();

    cout << "Ingrese su carrera: ";
    getline(cin, carrera);

    cout << "Que te gusta de tu carrera?: ";
    getline(cin, gustoCarrera);

    cout << "Ingrese su comida favorita: ";
    getline(cin, comidaFavorita);

    cout << "Ingrese una frase celebre con la que se sienta identificado/a: ";
    getline(cin, fraseCelebre);

    // Mostrar un unico texto que combina los datos iniciales y los ingresados
    cout << R"(
*********************
)";
    cout << "Estamos en el ano " << anioActual << ", en el mes de " << mesActual << ".\n";
    cout << "Actualmente la oracion 'Estamos en fin de semana' es: " << boolalpha << esFinDeSemana << "\n";
    cout << "El valor de PI que conocemos es: " << numeroPI << "\n\n";

    cout << "Me llamo " << nombre << " " << apellido << ", tengo " << edad
         << " anios, mido " << altura << " m de altura.\n";
    cout << "Estoy estudiando la carrera de " << carrera
         << " y la escogi porque me gusta " << gustoCarrera << ".\n";
    cout << "Mi comida favorita es " << comidaFavorita << ".\n";
    cout << "La frase con la que me siento identificado/a es: \"" << fraseCelebre << "\"\n";
    cout << R"(*********************
)";

    return 0;
}

// Aprendizaje: [completa aqui con tus propias palabras lo que aprendiste: diferencia entre
// cin y getline, por que hace falta cin.ignore() despues de un cin >> antes de un getline,
// y como se usa un literal de cadena multilinea con cout]

