#include <fstream>
#include <cmath>
#include <iomanip>
int sum(int* arr,int n);
int vidmetu(int* arr,int n);
double vidmen(int* arr,int n);
int main()
{
    std::fstream I("I.txt");
    int n;
    I>>n;

    int* vaikai=new int[n];
    for(int i{0};i<n;i++){
        I>>vaikai[i];
    }
    I.close();

    std::fstream O("O.txt");
    O<<std::fixed<<std::setprecision(1)<<
        sum(vaikai,n)<<"\n"<<
        vidmetu(vaikai,n)<<"\n"<<
        vidmen(vaikai,n);

    O.close();
    delete vaikai;
    return 0;
}
int sum(int* arr,int n){
    int sum{0};
    for(int i{0};i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int vidmetu(int* arr,int n){
    return sum(arr,n)/n;
}
double vidmen(int* arr,int n){
    return vidmetu(arr,n)/(double)10;
}
