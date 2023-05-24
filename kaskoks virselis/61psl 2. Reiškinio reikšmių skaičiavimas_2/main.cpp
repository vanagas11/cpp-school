#include <iostream>
#include <cmath>
#include <iomanip>
int a,b;
int main()
{
    std::cin>>a>>b;
    std::cout<<std::fixed<<std::setprecision(2)<<"a"<<std::setw(8)<<"b"<<"\n\n";
    for(;a<=b;a++){
        std::cout<<a<<std::setw(8)<<sqrt(a*a+3*a-500)<<"\n";
    }

    return 0;
}
