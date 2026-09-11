// Nombre: Andy Araque
#include <iostream>
#include <string>

using namespace std;

int main() {

    int año = 2026;
    string mes = "septiembre";
    double numeroEuler = 2.71828;
    bool EstamosEnEcuador = true;

    string nombre, apellido, carrera, gustoCarrera, comidaFavorita, fraseCelebre;
    int edad;
    double altura;

    
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    cout << "Ingrese su apellido: ";
    getline(cin, apellido);

    cout << "Ingrese su edad: ";
    cin >> edad;
    cin.ignore(); 

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

    cout << R"(
*********************
)";
    cout << "Es el año " << año << ", en el mes de " << mes << ".\n";
    cout << "Tu ubicación es Ecuador  : " << boolalpha << EstamosEnEcuador << "\n";
    cout << "La aproximación del número de Euler, un número interesante es:  " << numeroEuler << "\n\n";

    cout << "Es un gusto saludarte, " << nombre << " " << apellido << ", tienes " << edad
         << " actualmente mides " << altura << " metros.\n";
    cout << "Tu carrera en la USFQ es" << carrera
         << " y la escogiste porque p:" << gustoCarrera << ".\n";
    cout << "Tu comida favorita es " << comidaFavorita << ".\n";
    cout << "La frase con la que te sientes identificado/a es: \"" << fraseCelebre << "\"\n";
    cout << R"(*********************
)";

    return 0;
}

// 
