#include <iostream>
#include <fstream>
#include <iomanip>
int main()
{
    int k,//kalbos
        n;//zmones milijonais
    std::fstream I("duomenys.txt");
    std::fstream O("rezultatai.txt");
    I>>k>>n;

    for(int i{0};i<k;i++){
        int zmones;
        I>>zmones;
        O<<std::fixed<<std::setprecision(2)<<(float)zmones/n*100<<" ";
        O<<std::fixed<<std::setprecision(0)<<n-zmones<<"\n";
    }
    I.close();
    O.close();
    return 0;
}
