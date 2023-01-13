#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double X[],int N,double Y[]){

    for(int i=0;i<N;i++){
        Y[0] += X[i];
    }
    Y[0] = Y[0]/N ;
    double mean = Y[0] ;
    for(int j = 0; j < N ; j++){
    Y[1] += pow((X[j]-mean),2);
    }
    Y[1] = sqrt(Y[1]/(N));
    for(int k=0;k<N;k++){
        Y[2] +=log10 (X[k]);
    }
    Y[2] = Y[2]/N ;
    Y[2]= pow(10,Y[2]);
    for(int m=0;m<N;m++){
        Y[3] += (1/X[m]) ;
    }
    Y[3] = N/Y[3] ;
    Y[4]=X[0];
    Y[5]=X[0];
    for(int n=0;n<N;n++){
        if(X[n]>Y[4])Y[4]=X[n];
        if(X[n]<Y[5])Y[5]=X[n];
        
    }
}