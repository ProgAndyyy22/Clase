#include <iostream>
using namespace std;

void hanoi(int n, int origen, int destino, int auxiliar)
{
    if (n == 1)
    {
        cout << origen << " -> " << destino << endl;
    }
    else
    {
        hanoi(n - 1, origen, auxiliar, destino);
        cout << origen << " -> " << destino << endl;
        hanoi(n - 1, auxiliar, destino, origen);
    }
}

int main()
{
    int n;

    cout << "Ingrese el numero de discos: ";
    cin >> n;

    hanoi(n, 1, 3, 2);

    return 0;
}
