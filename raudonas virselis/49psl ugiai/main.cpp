#include <fstream>
#include <cmath>
#include <iomanip>
double vid(int* arr,int n);
double Fvid(int* arr, int n);
double Mvid(int* arr, int n);
bool Mkomanda(int* arr,int n);
bool Fkomanda(int* arr,int n);
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
    O<<std::fixed<<std::setprecision(1) << vid(vaikai,n)<<"\n"
            << std::setprecision(2)<< Fvid(vaikai,n) <<"\n"
            << Mvid(vaikai,n)<<"\n"
            << (Fkomanda(vaikai,n)?"Merginu komanda susidarys\n":"Merginu komanda nesusidarys\n")
            << (Mkomanda(vaikai,n)?"vaikinu komanda susidarys\n":"vaikinu komanda nesusidarys\n");
    O.close();
    delete vaikai;
    return 0;
}
double vid(int* arr,int n){
    double vid{0};
    for(int i{0};i<n;i++){
        vid+=std::abs(arr[i]);
    }
    vid/=n;
    return vid;
}
double Fvid(int* arr, int n){
    double vid{0};
    int ppl{0};
    for(int i{0};i<n;i++){
        if(arr[i]>=0){
            vid+=std::abs(arr[i]);
            ++ppl;
        }

    }
    vid/=ppl;
    return vid;
}
double Mvid(int* arr, int n){
    double vid{0};
    int ppl{0};
    for(int i{0};i<n;i++){
        if(arr[i]<0){
            vid+=std::abs(arr[i]);
            ++ppl;
        }

    }
    vid/=ppl;
    return vid;
}
bool Mkomanda(int* arr,int n){
    int ppl{0};
    for(int i{0};i<n;i++){
        if(arr[i]<0&&std::abs(arr[i])>=175){
            ++ppl;
        }
    }
    return ppl>=7;
}
bool Fkomanda(int* arr,int n){
    int ppl{0};
    for(int i{0};i<n;i++){
        if(arr[i]>=0&&std::abs(arr[i])>=175){
            ++ppl;
        }
    }
    return ppl>=7;
}
