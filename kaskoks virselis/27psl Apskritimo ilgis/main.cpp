#include <iostream>
#include <iomanip>

const float pi{3.141592};
double r;
int main()
{
    std::cout <<std::fixed<<std::setprecision(2) <<"irasykite r:" << std::endl;
    std::cin>> r;
    std::cout<< "\nc="<<pi*r*2;
    return 0;
}
