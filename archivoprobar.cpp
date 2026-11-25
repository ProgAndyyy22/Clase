//Andy Araque
//24 Noviembre 
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

void aleatorio(int numeros[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        numeros[i] = rand() % 15 + 1;
    }
}


int main()
{


    int x[7];

    aleatorio(x, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << x[i] << " ";
    }

    cout << endl;
    return 0;
}