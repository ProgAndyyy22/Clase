//Andy Araque
//27 de octubre de 2026 


/*#include <iostream>
using namespace std;*/

int grupos(int x){int contador=0;
if(x==2){return contador;}


for(int i=2; i*i<=x;i++){if(x%i==0){contador+=1;}}
return contador;

}

void mostrar_grupos(int x){
    cout << "Hay "<< grupos(x) << "formas de enviar las galletas." << endl;

    for(int i=2; i*i<=x;i++){if(x%i==0){
        
        cout << i << " * " << x/i << endl ;
        for(int j=1; j<=i; j++){for(int k=1; k<=(x/i); k++){cout<<"0";}; cout << endl;}; 
        cout << endl;
    
    }

      

}


}


// int main(){mostrar_grupos(36);}

