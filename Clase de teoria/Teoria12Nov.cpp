#include <iostream>

using namespace std;

int main() {


    cout << "Arreglos" << endl;
    const int num{10};
    int x[num]={0};
    int y[num]={0};    

for (int i{0}; i<num; i++){ x[i]= rand()%100;}

for(int d : x)
{
    cout << d << " ";
}

cout << endl;

for(int i{1}; i<=num; i++){ y[num-i]=x[i-1] ;}

for(int d : y)
{
    cout << d << " ";
}

cout << endl;

}