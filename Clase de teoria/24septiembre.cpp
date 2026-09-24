// continue deja de de leer las instrucciones y vuelve a la condicion
/*
#include <iostream>
using namespace std;

int main(){
int cont, max;	
for(cont=0; cont <= max; cont++){} } */

/* #include <iostream>
using namespace std;

int main(){
	
	cout <<"While" << endl;
	cout << "Divisores" << endl;
	
	int num{0};
	int desde{0};
	int hasta{10};
	cout << "num: "; cin>> num;




for (num = hasta; num<= hasta; num++){

    int div{1};
    int n{0};

	for(div=1; div*div<=num; div++){
    //////////////////////////////////////////////
		if (num % div==0){n++;}
        if (n==2 && div!=num){break;}}



	    if (div*div > num)
         cout<<num << "\t";

           n++;
		


	}


    ////////////////////////////////////////////    
    return 0;
	
} */


/*#include <iostream>
using namespace std;

int main(){

cout << "FOR" << endl;

int c{0};
for(; ; ){
    cout << ++c << endl;
    if (c>10) break;
}
return 0;
} */

/* #include <iostream>
using namespace std;

int main(){


    cout << "FOR" << endl;

int num; // si ponemos for( int num=5.....) se crea una variable local, cuando el for termina se elimina el num

for(num=5; num<100 ;num+=5){ cout << "num: "<< num << endl;}


cout << "num: " << num <<endl;
    
} */


#include <iostream>
using namespace std;

int main(){


    cout << "FOR" << endl;


for(int n=1; n<13; n++){ 

      for(int tabla{2}; tabla<8; tabla++){ cout << n << " x "<< tabla << " = " <<n*tabla<< "\t";}
    
    
    
    }




}







