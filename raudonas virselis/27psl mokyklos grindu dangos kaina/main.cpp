#include <iostream>
#include <fstream>
double plotas(const double& a,const double &b){
    return a*b;
}
double kaina(const double& a,const double & b){
    return a*b;
}
int main()
{
    int procentai{3};
    std::fstream I("I.txt");
    unsigned int kabinetai;
    I>>kabinetai;
    double x{0};//pinigu suma
    for(unsigned int i{0};i<kabinetai;i++){
        double a,b,c;
        I>>a>>b>>c;
        x+=kaina(plotas(a,b),c);
    }
    x=x*(100+procentai)/100;

    std::fstream O("O.txt");
    O<<x;

    return 0;
}
