//Andy Araque
//27 de octubre de 2026 

int termino(int n,double x){ 

    if (n==0){ return 1;}
int s=1;
    for(int i=1; i<=n; i++){s*=x/(i+0.);}

    return s;
}






double sin(double x, int precision=10){
double s=0;
int j=1;
    for(int i=0; i<precision; i++){s += j*termino(2*i+1,x); j*=-1;}

}