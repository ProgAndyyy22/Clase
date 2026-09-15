// Andy Araque

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Valor centinela: dato que el usuario nunca podria escoger como opcion real,
// asi que sirve para saber si un campo todavia no ha sido llenado.
const string SIN_ASIGNAR = "N/A";

void menuClase(string &clase) {
    bool salir = false;
    while (!salir) {
        cout << "\n--- Seleccion de clase ---" << endl;
        cout << "1. Hechicero/a" << endl;
        cout << "2. Mago/a" << endl;
        cout << "3. Asesino/a" << endl;
        cout << "4. Luchador/a" << endl;
        cout << "5. Sanador/a" << endl;
        cout << "6. Regresar" << endl;
        cout << "Elige una opcion: ";

        int opcion;
        cin >> opcion;

        switch (opcion) {
            case 1: clase = "Hechicero/a"; salir = true; break;
            case 2: clase = "Mago/a"; salir = true; break;
            case 3: clase = "Asesino/a"; salir = true; break;
            case 4: clase = "Luchador/a"; salir = true; break;
            case 5: clase = "Sanador/a"; salir = true; break;
            case 6: salir = true; break;
            default:
                cout << "Opcion invalida, intenta de nuevo." << endl;
        }
    }
}

void menuArma(string &arma) {
    bool salir = false;
    while (!salir) {
        cout << "\n--- Seleccion de arma ---" << endl;
        cout << "1. Hacha" << endl;
        cout << "2. Baculo" << endl;
        cout << "3. Pistola y cuchillo" << endl;
        cout << "4. Maza y escudo" << endl;
        cout << "5. Grimorio" << endl;
        cout << "6. Regresar" << endl;
        cout << "Elige una opcion: ";

        int opcion;
        cin >> opcion;

        switch (opcion) {
            case 1: arma = "Hacha"; salir = true; break;
            case 2: arma = "Baculo"; salir = true; break;
            case 3: arma = "Pistola y cuchillo"; salir = true; break;
            case 4: arma = "Maza y escudo"; salir = true; break;
            case 5: arma = "Grimorio"; salir = true; break;
            case 6: salir = true; break;
            default:
                cout << "Opcion invalida, intenta de nuevo." << endl;
        }
    }
}

void menuMapa(string &mapa) {
    bool salir = false;
    while (!salir) {
        cout << "\n--- Seleccion de mapa ---" << endl;
        cout << "1. Infierno" << endl;
        cout << "2. Acantilados venenosos" << endl;
        cout << "3. Desierto helado" << endl;
        cout << "4. Zona de cuarentena 45" << endl;
        cout << "5. Estacion Neptuno" << endl;
        cout << "6. Regresar" << endl;
        cout << "Elige una opcion: ";

        int opcion;
        cin >> opcion;

        switch (opcion) {
            case 1: mapa = "Infierno"; salir = true; break;
            case 2: mapa = "Acantilados venenosos"; salir = true; break;
            case 3: mapa = "Desierto helado"; salir = true; break;
            case 4: mapa = "Zona de cuarentena 45"; salir = true; break;
            case 5: mapa = "Estacion Neptuno"; salir = true; break;
            case 6: salir = true; break;
            default:
                cout << "Opcion invalida, intenta de nuevo." << endl;
        }
    }
}

void menuNombre(string &nombre) {
    bool salir = false;
    while (!salir) {
        cout << "\n--- Seleccion de nombre ---" << endl;
        cout << "1. Ingresar nombre" << endl;
        cout << "2. Regresar" << endl;
        cout << "Elige una opcion: ";

        int opcion;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa el nombre de tu personaje: ";
                cin >> nombre;
                salir = true;
                break;
            case 2:
                salir = true;
                break;
            default:
                cout << "Opcion invalida, intenta de nuevo." << endl;
        }
    }
}

void mostrarPendientes(const string &clase, const string &arma, const string &mapa, const string &nombre) {
    bool clasePendiente = (clase == SIN_ASIGNAR);
    bool armaPendiente = (arma == SIN_ASIGNAR);
    bool mapaPendiente = (mapa == SIN_ASIGNAR);
    bool nombrePendiente = (nombre == SIN_ASIGNAR);

    if (!clasePendiente && !armaPendiente && !mapaPendiente && !nombrePendiente) {
        cout << "Ya tienes todos los datos completos. Tu personaje esta listo para registrarse." << endl;
        return;
    }

    cout << "Actualmente tienes pendiente las siguientes personalizaciones:" << endl;
    if (clasePendiente)  cout << "Seleccion de clase" << endl;
    if (armaPendiente)   cout << "Seleccion de arma" << endl;
    if (mapaPendiente)   cout << "Seleccion de mapa" << endl;
    if (nombrePendiente) cout << "Seleccion de nombre" << endl;
}

int main() {
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
        cout << "A. Seleccion de clase" << endl;
        cout << "B. Seleccion de arma" << endl;
        cout << "C. Seleccion de mapa" << endl;
        cout << "D. Seleccion de nombre" << endl;
        cout << "E. Guardar y registrar personaje" << endl;
        cout << "F. No guardar y salir" << endl;
        cout << endl;

        mostrarPendientes(clase, arma, mapa, nombre);

        cout << "\nOpcion: ";
        char opcion;
        cin >> opcion;
        opcion = toupper(opcion);

        switch (opcion) {
            case 'A':
                menuClase(clase);
                break;
            case 'B':
                menuArma(arma);
                break;
            case 'C':
                menuMapa(mapa);
                break;
            case 'D':
                menuNombre(nombre);
                break;
            case 'E':
                if (clase == SIN_ASIGNAR || arma == SIN_ASIGNAR || mapa == SIN_ASIGNAR || nombre == SIN_ASIGNAR) {
                    cout << "\nAun te falta completar informacion antes de poder registrar tu personaje." << endl;
                } else {
                    cout << "\nPersonaje creado con exito!" << endl;
                    cout << "Resumen del personaje:" << endl;
                    cout << "Nombre: " << nombre << endl;
                    cout << "Clase: " << clase << endl;
                    cout << "Arma: " << arma << endl;
                    cout << "Mapa: " << mapa << endl;
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

// Aprendizaje adquirido: practique el diseno de un sistema de menus anidados usando una
// funcion distinta por cada seccion, el paso de variables por referencia para modificar
// el estado del personaje directamente desde cada submenu, y el uso de un valor centinela
// (SIN_ASIGNAR) para saber que campos faltan por completar sin necesitar variables
// booleanas adicionales para cada uno.

