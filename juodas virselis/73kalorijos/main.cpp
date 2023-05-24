#include <iostream>
#include <fstream>
#include <iomanip>
int main()
{
    std::ifstream I("I.txt");
    int a,r,b,
        ak,rk,bk,
        k;
    float ag,rg,bg;
    I>>a>>r>>b>>
        ak>>rk>>bk>>k;
    I.close();
    ag=k*a/100/ak;
    rg=k*r/100/rk;
    bg=k*b/100/bk;



    std::ofstream O("O.txt");
    O<<std::fixed<<std::setprecision(2);
    O<<ag<<" "<<rg<<" "<<bg;
    O.close();
    return 0;
}
