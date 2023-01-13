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
void stat(const double A[],int N,double B[]){
    double sum1 = 0;
    double sum2 = 0;
    double sum3 = 1;
    double sum4 = 0;
    double max = 0;
    double min = 99;
    for(int i = 0;i < N;i++){
        sum1 = sum1 + A[i];
    }
        B[0] = sum1/N;
    for(int i = 0;i < N;i++){
        sum2 = sum2 + pow(A[i] - B[0],2);
    }
        B[1] = sqrt(sum2/N);
    for(int i = 0;i < N;i++){
        sum3 = sum3 * A[i];
    }
        B[2] = pow(sum3,1.0/N);
    for(int i = 0;i < N;i++){
        sum4 = sum4 + 1/A[i];
    }
        B[3] = N/sum4;
    for(int i = 0;i < N;i++){
        if (A[i] > max)
        {
            max = A[i];
        }
        B[4] = max;
        if (A[i] < min)
        {
            min = A[i];
        }
        B[5] = min;
    }
}

