#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int aleatorio()
{
    return rand() % 5 + 1;
}

void pictograma1(int n)
{
    for (int i = 1; i <= n; i++)
        cout << "aa   a  ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << " a aa   ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "  a     ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "aa a    ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "a  aa   ";
    cout << endl;
}

void pictograma2(int n)
{
    for (int i = 1; i <= n; i++)
        cout << "aaa    ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "aa     ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "a a a  ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "   aa  ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "  aaa  ";
    cout << endl;
}

void pictograma3(int n)
{
    for (int i = 1; i <= n; i++)
        cout << "   a   ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "a   a  ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "a a a  ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "a   a  ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "   a   ";
    cout << endl;
}

void pictograma4(int n)
{
    for (int i = 1; i <= n; i++)
        cout << "aaaaa  ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "a   a  ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "  a a  ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "a   a  ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "aaaaa  ";
    cout << endl;
}

void pictograma5(int n)
{
    for (int i = 1; i <= n; i++)
        cout << "  A    ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << " A A   ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "AAAAA  ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "A   A  ";
    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << "A   A  ";
    cout << endl;
}

int main()
{
    srand(time(NULL));

    for (int i = 1; i <= 5; i++)
    {
        int p = aleatorio();
        int n = aleatorio();

        switch (p)
        {
            case 1:
                pictograma1(n);
                break;

            case 2:
                pictograma2(n);
                break;

            case 3:
                pictograma3(n);
                break;

            case 4:
                pictograma4(n);
                break;

            case 5:
                pictograma5(n);
                break;
        }

        cout << endl;
    }

    return 0;
}
