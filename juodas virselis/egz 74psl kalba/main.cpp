#include <iostream>
#include <fstream>



int main()
{

    int n,d,z,k,dt{1};
    std::ifstream I("I.txt");
    I>>n>>d>>z>>k;
    I.close();

    for(;dt<d;++dt){
        n-=z;
        z+=k;
        if(n<0)break;
    }
    std::ofstream O("O.txt");
    O<<dt<<"\n";

    if(dt<=d) O<<"taip";
    else O<<"ne";

    O.close();

    return 0;
}
