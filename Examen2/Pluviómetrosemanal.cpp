#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;
const char dias[7]={'L','M','X','J','V','S','D'};

vector<int> lluvias = {3, 5, 2, 7, 4, 6, 1};


int maximo(const vector<int> &v){
    int max=0;
    for(auto &x: v){ if(x>max){max=x;}   }
    return max;

};

void graficar(const vector<int> &v, char simbolo, int espaciado){
int s=maximo(v);
for(int i=0; i< s; i++){

    cout << s-i <<" | ";

    for (int j=0; j<7 ; j++){ if(v[j]>=(s-i)){cout << setw(espaciado) << simbolo;} else{ cout << setw(espaciado) << " ";}}

    cout << endl;
}
cout << setw(1+espaciado) << " ";
for(auto &x: dias){cout << setw(espaciado)  << x;  }

};



int main(){

    char simbolo;
    int espaciado;
    cout << "Ingrese el simbolo" << endl;
    cin >> simbolo;
    cout << "Ingrese el espaciado" << endl;
    cin>> espaciado ;


    graficar(lluvias, '#',3);
}


