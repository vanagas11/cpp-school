#include <iostream>
#include <fstream>
#include <iomanip>
void niga(){
    std::fstream I("Duomenys.txt");
    std::fstream O("Rezultatai.txt");

    float b,d,m,bk,dk;
    int n;

    I>>b>>d>>m>>n;
    float sanaudos_d=m/100*d,sanaudos_b=m/100*b;
    for(int i{0};i<n;i++){
        I>>bk>>dk;
        O<<std::fixed<<std::setprecision(2);
        O<<sanaudos_b*bk<<"\t"<<sanaudos_d*dk<<"\n";
    }

    I.close();
    O.close();
}
int main()
{
    niga();
    return 0;
}
