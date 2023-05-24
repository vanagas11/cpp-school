#include <iostream>
#include <cmath>
#include <iomanip>
const double centimetrai{100};
const double colis{2.54};
const double peda{12};
const double jardas{3};
double metrai_coliai(const double& metrai){
    return metrai*centimetrai/colis;
}
double metrai_pedos(const double& metrai){
    return metrai_coliai(metrai)/peda;
}
double metrai_jardai(const double& metrai){
    return metrai_pedos(metrai)/jardas;
}
int main()
{
    std::cout<<std::setw(10)<<"metrai";
    std::cout<<std::setw(10)<<"coliai";
    std::cout<<std::setw(10)<<"pedos";
    std::cout<<std::setw(10)<<"jardai"<<"\n";
    for(int i{1};i<=5;i++){
        std::cout<<std::setw(10)<<i;
        std::cout<<std::setw(10)<<round(metrai_coliai(i)*100)/100;
        std::cout<<std::setw(10)<<round(metrai_pedos(i)*100)/100;
        std::cout<<std::setw(10)<<round(metrai_jardai(i)*100)/100<<"\n";
    }
    return 0;
}
