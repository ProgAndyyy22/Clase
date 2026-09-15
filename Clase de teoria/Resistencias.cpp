#include <iostream>

using namespace std;

int main(int argc, char** argv) {
/*    double a = 0, b = 0;
    cout<< "a: "; cin >> a;
    cout<< "b: "; cin >> b;
    double x = 0;
    cout <<" x: "; cin >> x;
if(a<=b){

if ( x>=a && x<=b) cout << "x esta entre a y b" << endl;
else if (x<a) cout << "x esta por debajo de a" << endl;
else cout << "x esta por encima de b" << endl;}

if (b<=a){
if ( x>=b && x<=a) cout << "x está entre a y b" << endl;
else if (x<b) cout << "x está por debajo de a" << endl;
else cout << "x está por encima de b" << endl;} */


int a{0}, b{0};
cout << "a: "; cin >> a;
cout << "b: "; cin >> b;

int x{0};
cout << "x: "; cin >> x;

if (!((a<=x && x<=b) || (b<=x && x<=a))) cout << "x no está entre a y b" << endl;
else cout << "x está entre a y b" << endl;

    return 0;
}
