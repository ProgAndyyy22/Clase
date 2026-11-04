// Andy Araque
// 4 Noviembre
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generarNumero()
{
    return rand() % 1000 + 1;
}

int jugar()
{
    int secreto = generarNumero();
    int num;
    int intentos = 0;

    cout << "Adivina el numero" << endl;

    do
    {
        cout << "Ingresa un numero entre 1 y 1000: ";
        cin >> num;

        intentos++;

        if (num > secreto)
        {
            cout << "Es muy alto" << endl;
        }
        else if (num < secreto)
        {
            cout << "Es muy bajo" << endl;
        }

    } while (num != secreto);

    cout << "Correcto! El numero era " << secreto << endl;
    cout << "Intentos: " << intentos << endl;

    if (intentos < 10)
    {
        cout << "Tuviste mucha suerte!" << endl;
    }
    else if (intentos == 10)
    {
        cout << "Se nota que conoces el truco." << endl;
    }
    else
    {
        cout << "Deberias hacerlo mejor." << endl;
    }

    return intentos;
}

void mostrarEstado(int partidas, int intentosTotales)
{
    cout << endl;
    cout << "===== ESTADO ACTUAL =====" << endl;

    cout << "Partidas jugadas: " << partidas << endl;

    if (partidas > 0)
    {
        cout << "Promedio de intentos: "
             << (float)intentosTotales / partidas << endl;
    }
    else
    {
        cout << "Promedio de intentos: 0" << endl;
    }

    cout << "Juego: Adivina el numero" << endl;
    cout << "Programador: [Tu nombre]" << endl;
    cout << "Version: 1.0" << endl;
    cout << "Objetivo: Adivinar un numero entre 1 y 1000." << endl;
}

int main()
{
    srand(time(0));

    int opcion;
    int partidas = 0;
    int intentosTotales = 0;

    do
    {
        cout << endl;
        cout << "===== ADIVINA EL NUMERO =====" << endl;
        cout << "1.- Jugar" << endl;
        cout << "2.- Estado actual" << endl;
        cout << "3.- Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1:
            {
                int intentos = jugar();

                partidas++;
                intentosTotales += intentos;

                break;
            }

            case 2:
            {
                mostrarEstado(partidas, intentosTotales);
                break;
            }

            case 3:
            {
                cout << "Gracias por jugar!" << endl;
                break;
            }

            default:
            {
                cout << "Opcion incorrecta." << endl;
            }
        }

    } while (opcion != 3);

    return 0;
}
