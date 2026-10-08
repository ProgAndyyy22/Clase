#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() 
{

cout << "Funciones" << endl;
srand(time(nullptr));
int ra;
for (int i=0; i<20; i++)
{
    ra = rand() % 90 + 1;
    cout << ra << " ";
}


double x{5.858}, y{7.03454};


double z = pow(x,y);
cout << "Potencia: " << setprecision(2) << z << endl;

double l= log10(100);
double r= sqrt(100);

cout << "Logaritmo: " << setprecision(2) << l << endl;
cout << "Raiz cuadrada: " << setprecision(2) << r << endl;
return 0;
}