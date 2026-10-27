//Andy Araque
//25 de octubre de 2026
 #include <iostream>
 #include <iomanip>
using namespace std;

/*int main(){
    int x=109.736*10;
    cout << x;} */

double redondear(double x, int y){
int z=1;
for (int i=0; i <=y  ;i++ ){z*=10;}
int x1= x*z;
int ultimo= x1%10;
double s= (ultimo>=5) ? ((x1+10.-ultimo)/z):((x1-ultimo+0.0)/(z+0.));
return s;

}

 int main(){cout << setprecision(10) << redondear(2.784526,10)<<endl;
cout << 0%10;} 