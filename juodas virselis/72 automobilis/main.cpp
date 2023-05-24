#include <iostream>
#include <fstream>
#include <iomanip>
int main()
{
    std::ifstream I("I.txt");
    float m,k,s,kk;
    int n;
    I>>k>>m>>kk>>n;
    I.close();
    s=m/100*k*kk/n;


    std::ofstream O("O.txt");
    O<<std::fixed<<std::setprecision(2);
    O<<s;
    O.close();
    return 0;
}
