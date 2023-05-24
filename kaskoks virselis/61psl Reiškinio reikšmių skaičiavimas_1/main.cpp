#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{

    std::cout<<std::fixed<<std::setprecision(2)<<"x"<<std::setw(8)<<"y"<<"\n";
    for(int i{-5};i<=5;i++){
        std::cout<<i<<std::setw(8)<<sqrt(i*i+3*i+5)<<"\n";
    }

    return 0;
}
