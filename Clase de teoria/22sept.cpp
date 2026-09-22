#include <iostream>
using namespace std;

int main(){
	
	cout <<"While" << endl;
	cout << "Divisores" << endl;
	
	int num{0};
	int desde{0};
	int hasta{10};
	cout << "num: "; cin>> num;



    desde= num;
while (num <= hasta){
    int div {1};
    int n{1};
	while(div<=num && !(n==2 && div!=num) ){
    //////////////////////////////////////////////
		if (num % div==0){
        //cout << "cuenta: "<< n << endl;
        n++;}
        if (n==2 && div!=num){break;}


        div= div+1;
	    if (n==2)
        cout<<num << "\t";
			// cout<< n<<"."<< div<< endl;
           n++;
		}
    num++;

	}


    ////////////////////////////////////////////    
    return 0;
	
}