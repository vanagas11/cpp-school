#include <iostream>
#include <fstream>
#include <iomanip>
#define uint unsigned int

int main()
{
    std::fstream I("I.txt");
    std::fstream O("O.txt");
    uint n;//zmones
    double m,//kelias
    k,//kaina 100km
    kk,//litro kaina
    kainax,//automobiliu
    kainay;//autobusus

    I>>k>>m>>kk>>n;
    kainax=m/100*k*kk;

    uint a;//autobusu sk
    I>>a;
    double b;//bilieto kaina;
    O<<std::fixed<<std::setprecision(2);
    for(int i{0};i<a;i++){
        I>>b;
        kainay=b*n;
        O<<kainax-kainay<<"\n";
    }

    I.close();
    O.close();
    return 0;
}
