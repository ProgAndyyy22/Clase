// Andy Araque

#include <iostream>
using namespace std;    

int funcion(int a, int b)
{ int d = 0;
    return a + b;
}

int main()
{
    int x = 5, y = 10;
    int result = funcion(x, y);
    cout << "The sum is: " << result << endl;
    return 0;
}