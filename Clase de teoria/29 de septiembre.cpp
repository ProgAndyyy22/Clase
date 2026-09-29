#include <iostream>
using namespace std;

int main(){
/*
cout << "For" << endl;


int n{50};
for (int i{0}; i < n ; ++i)
    {for( int j{0}; j <n ; ++j)
        if(j==0 || i==0 || (i==j) || i==n-1 || j==n-1 )
            cout << "O";
        else 
            cout << " ";
    cout << endl;} */



    // estructura de repeticion do-while

   /* 
   do{  instruccion1;
        instruccion2;
        instruccion3;
        instruccion4;} while( condicion ){};
        
    */

    

    int n{0};

    do{ cout << "n :" ; cin >> n;  
        if(n<=0){ cout << "n debe ser un numero positivo"<< endl;}} while (n <=0);  // se repite la instruccion dentro del do cuando n <= 0

    for (int i{0}; i < n ; ++i)
    {for( int j{0}; j <n ; ++j)
        if(j==0 || i==0 || (i==j) || i==n-1 || j==n-1 )
            cout << "O";
        else 
            cout << " ";
    cout << endl;} 



}