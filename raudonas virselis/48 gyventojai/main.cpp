#include <iostream>
#include <fstream>
#include <iomanip>
const char In[] ="I.txt";
const char Out[] = "O.txt";
struct house{
    int num;
    int ppl;
};
int viso(house* A,int n);
int kairieji(house* A,int n,int num);
int namai(house* A,int n,int num);
int main()
{
    std::fstream I(In);
    int n;
    I>>n;
    house *A =new house[n];

    for(int i{0};i<n;i++){
        int num,ppl;
        I>>num>>ppl;
        A[i]={num,ppl};
    }
    I.close();

    std::fstream O(Out);
    O<<std::fixed<<std::setprecision(2)
            <<viso(A,n)<<"\n"
            <<kairieji(A,n,1)<<"\n"
            <<kairieji(A,n,0)<<"\n"
            <<(float)kairieji(A,n,1)/namai(A,n,1)<<"\n"
            <<(float)kairieji(A,n,0)/namai(A,n,0);
    O.close();
    delete A;
    return 0;
}
int namai(house* A,int n,int num){
    int kairiuju_namai{0};
    for(int i{0};i<n;i++){
        if(A[i].num%2==num){
            ++kairiuju_namai;
        }
    }
    return kairiuju_namai;
}
int kairieji(house* A,int n,int num){

    int kairieji{0};
    for(int i{0};i<n;i++){
        if(A[i].num%2==num){
            kairieji+=A[i].ppl;
        }
    }
    return kairieji;
}
int viso(house* A,int n){
    int viso{0};
    for(int i{0};i<n;i++){
        viso+=A[i].ppl;
    }
    return viso;
}
