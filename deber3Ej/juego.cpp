//Andy Araque

#include <iostream>
#include <string>
using namespace std;

int main() {
    const string SIN_ASIGNAR = "N/A";
    string clase  = SIN_ASIGNAR;
    string arma   = SIN_ASIGNAR;
    string mapa   = SIN_ASIGNAR;
    string nombre = SIN_ASIGNAR;

    bool programaActivo = true;

    while (programaActivo) {
        cout << "\n**************************" << endl;
        cout << "Bienvenido al programa de creacion de tu personaje!" << endl;
        cout << "Antes de comenzar, es necesario que completes tu personaje." << endl;
        cout << "Elige una de las siguientes opciones a continuacion:" << endl;
        cout << "A. Seleccion de clase\nB. Seleccion de arma\nC. Seleccion de mapa\nD. Seleccion de nombre" << endl;
        cout << "E. Guardar y registrar personaje\nF. No guardar y salir\n" << endl;

    
        if (clase != SIN_ASIGNAR && arma != SIN_ASIGNAR && mapa != SIN_ASIGNAR && nombre != SIN_ASIGNAR) {
            cout << "Ya tienes todos los datos completos. Tu personaje esta listo para registrarse." << endl;
        } else {
            cout << "Actualmente tienes pendiente las siguientes personalizaciones:" << endl;
            if (clase == SIN_ASIGNAR)  cout << "- Seleccion de clase" << endl;
            if (arma == SIN_ASIGNAR)   cout << "- Seleccion de arma" << endl;
            if (mapa == SIN_ASIGNAR)   cout << "- Seleccion de mapa" << endl;
            if (nombre == SIN_ASIGNAR) cout << "- Seleccion de nombre" << endl;
        }

        cout << "\nOpcion: ";
        char opcion;
        cin >> opcion;
        


        switch (opcion) {
            case 'A': { 
                bool salirClase = false;
                while (!salirClase) {
                    cout << "\n--- Seleccion de clase ---" << endl;
                    cout << "1. Hechicero/a\n2. Mago/a\n3. Asesino/a\n4. Luchador/a\n5. Sanador/a\n6. Regresar" << endl;
                    cout << "Elige una opcion: ";
                    
                    int opcClase;
                    cin >> opcClase;
                    
                    switch (opcClase) {
                        case 1: clase = "Hechicero/a"; salirClase = true; break;
                        case 2: clase = "Mago/a"; salirClase = true; break;
                        case 3: clase = "Asesino/a"; salirClase = true; break;
                        case 4: clase = "Luchador/a"; salirClase = true; break;
                        case 5: clase = "Sanador/a"; salirClase = true; break;
                        case 6: salirClase = true; break;
                        default: cout << "Opcion invalida, intenta de nuevo." << endl;
                    }
                }
                break;
            }
            case 'B': {
                bool salirArma = false;
                while (!salirArma) {
                    cout << "\n--- Seleccion de arma ---" << endl;
                    cout << "1. Hacha\n2. Baculo\n3. Pistola y cuchillo\n4. Maza y escudo\n5. Grimorio\n6. Regresar" << endl;
                    cout << "Elige una opcion: ";
                    
                    int opcArma;
                    cin >> opcArma;
                    
                    switch (opcArma) {
                        case 1: arma = "Hacha"; salirArma = true; break;
                        case 2: arma = "Baculo"; salirArma = true; break;
                        case 3: arma = "Pistola y cuchillo"; salirArma = true; break;
                        case 4: arma = "Maza y escudo"; salirArma = true; break;
                        case 5: arma = "Grimorio"; salirArma = true; break;
                        case 6: salirArma = true; break;
                        default: cout << "Opcion invalida, intenta de nuevo." << endl;
                    }
                }
                break;
            }
            case 'C': {
                bool salirMapa = false;
                while (!salirMapa) {
                    cout << "\n--- Seleccion de mapa ---" << endl;
                    cout << "1. Infierno\n2. Acantilados venenosos\n3. Desierto helado\n4. Zona de cuarentena 45\n5. Estacion Neptuno\n6. Regresar" << endl;
                    cout << "Elige una opcion: ";
                    
                    int opcMapa;
                    cin >> opcMapa;
                    
                    switch (opcMapa) {
                        case 1: mapa = "Infierno"; salirMapa = true; break;
                        case 2: mapa = "Acantilados venenosos"; salirMapa = true; break;
                        case 3: mapa = "Desierto helado"; salirMapa = true; break;
                        case 4: mapa = "Zona de cuarentena 45"; salirMapa = true; break;
                        case 5: mapa = "Estacion Neptuno"; salirMapa = true; break;
                        case 6: salirMapa = true; break;
                        default: cout << "Opcion invalida, intenta de nuevo." << endl;
                    }
                }
                break;
            }
            case 'D': {
                bool salirNombre = false;
                while (!salirNombre) {
                    cout << "\n--- Seleccion de nombre ---" << endl;
                    cout << "1. Ingresar nombre\n2. Regresar" << endl;
                    cout << "Elige una opcion: ";
                    
                    int opcNombre;
                    cin >> opcNombre;
                    
                    switch (opcNombre) {
                        case 1:
                            cout << "Ingresa el nombre de tu personaje: ";
                            cin >> nombre;
                            salirNombre = true;
                            break;
                        case 2: 
                            salirNombre = true; 
                            break;
                        default: 
                            cout << "Opcion invalida, intenta de nuevo." << endl;
                    }
                }
                break;
            }
            case 'E':
                if (clase == SIN_ASIGNAR || arma == SIN_ASIGNAR || mapa == SIN_ASIGNAR || nombre == SIN_ASIGNAR) {
                    cout << "\nAun te falta completar informacion antes de poder registrar tu personaje." << endl;
                } else {
                    cout << "\nPersonaje creado con exito!" << endl;
                    cout << "Resumen del personaje:\nNombre: " << nombre << "\nClase: " << clase;
                    cout << "\nArma: " << arma << "\nMapa: " << mapa << endl;
                    programaActivo = false;
                }
                break;
            case 'F':
                cout << "\nSaliendo sin guardar el personaje. Hasta pronto!" << endl;
                programaActivo = false;
                break;
            default:
                cout << "\nOpcion invalida, por favor elige una letra entre A y F." << endl;
        }
    }

    return 0;
}

// Practique el uso de bucles while y switch-case para crear un menu interactivo que permita al usuario personalizar un personaje de juego. Se implementaron validaciones para asegurar que el usuario complete todos los campos antes de guardar el personaje, y se proporcionaron opciones para regresar a los menus anteriores o salir del programa sin guardar.