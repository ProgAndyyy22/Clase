//Andy Araque
//3 Noviembre 
#include <iostream>
using namespace std;

int contarDigitos(int num)
{
    int cont = 0;

    if (num == 0)
    {
        return 1;
    }

    while (num > 0)
    {
        num = num / 10;
        cont++;
    }

    return cont;
}

int obtenerDigito(int num, int i)
{
    int digitos = contarDigitos(num);
    int div = 1;

    if (i < 0 || i >= digitos)
    {
        return -1;
    }

    for (int j = 1; j < digitos - i; j++)
    {
        div = div * 10;
    }

    return (num / div) % 10;
}

void imprimirDigito(int digito)
{
    switch (digito)
    {
        case 0:
            cout << " 000 " << endl;
            cout << "0   0" << endl;
            cout << "0   0" << endl;
            cout << "0   0" << endl;
            cout << " 000 " << endl;
            break;

        case 1:
            cout << "  1  " << endl;
            cout << " 11  " << endl;
            cout << "  1  " << endl;
            cout << "  1  " << endl;
            cout << " 111 " << endl;
            break;

        case 2:
            cout << " 222 " << endl;
            cout << "2   2" << endl;
            cout << "   2 " << endl;
            cout << "  2  " << endl;
            cout << " 2222" << endl;
            break;

        case 3:
            cout << " 333 " << endl;
            cout << "3   3" << endl;
            cout << "  33 " << endl;
            cout << "3   3" << endl;
            cout << " 333 " << endl;
            break;

        case 4:
            cout << "4   4" << endl;
            cout << "4   4" << endl;
            cout << " 4444" << endl;
            cout << "    4" << endl;
            cout << "    4" << endl;
            break;

        case 5:
            cout << " 5555" << endl;
            cout << "5    " << endl;
            cout << " 555 " << endl;
            cout << "    5" << endl;
            cout << " 555 " << endl;
            break;

        case 6:
            cout << " 666 " << endl;
            cout << "6    " << endl;
            cout << " 666 " << endl;
            cout << "6   6" << endl;
            cout << " 666 " << endl;
            break;

        case 7:
            cout << " 7777" << endl;
            cout << "    7" << endl;
            cout << "   7 " << endl;
            cout << "  7  " << endl;
            cout << "  7  " << endl;
            break;

        case 8:
            cout << " 888 " << endl;
            cout << "8   8" << endl;
            cout << " 888 " << endl;
            cout << "8   8" << endl;
            cout << " 888 " << endl;
            break;

        case 9:
            cout << " 999 " << endl;
            cout << "9   9" << endl;
            cout << " 9999" << endl;
            cout << "    9" << endl;
            cout << " 999 " << endl;
            break;
    }
}

void imprimirNumero(int num)
{
    int digitos = contarDigitos(num);

    for (int i = 0; i < digitos; i++)
    {
        int digito = obtenerDigito(num, i);

        imprimirDigito(digito);
    }
}

int main()
{
    int num;

    cout << "Ingrese un numero entero: ";
    cin >> num;

    imprimirNumero(num);

    return 0;
}
