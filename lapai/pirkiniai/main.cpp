#include <iostream>
#include <fstream>
#include <iomanip>
double suma(double* arr,int n);
int main()
{
    std::fstream I("I.txt");
    std::fstream O("O.txt");
    int n,m;
    I>>n>>m;
    double* arr2 = new double[n];
    double* arr= new double[m];

    for(int i{0};i<n;i++){
        for(int j{0};j<m;j++){
            double temp;
            I>>temp;
            arr[j]=temp;
        }
        arr2[i]=suma(arr,m);
        O<<std::fixed<<std::setprecision(2)<<i <<" "<<arr2[i]<<"\n";
    }
    O<<std::fixed<<std::setprecision(2)<<" "<<suma(arr2,n);
    delete arr;
    delete arr2;

    I.close();
    O.close();
    return 0;
}
double suma(double* arr,int n){
    double sum{0};
    for(int i{0};i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
