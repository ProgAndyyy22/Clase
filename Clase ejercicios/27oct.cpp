#include <iostream>
using namespace std;
#include <string>

int mcd(int a, int b){
cout << "mcd(" << a <<" : "<< b << endl;


int m;
if(b==0) 
    m=a;
else
    m= mcd(b,a%b);
return m;

}