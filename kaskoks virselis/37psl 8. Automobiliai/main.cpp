#include <iostream>
#include <iomanip>
double v1,v2, m;
int main()
{
    std::cin>> v1>>v2>>m;
    std::cout<< std::fixed<<std::setprecision(1);
    std::cout << "Atstumas tarp automobiliu bus lygus ";
    std::cout<<(v1+v2)*m/60 << "km.\n";
    if( (v1+v2)*m/60>100)
        std::cout<<"sis atstumas ne mazesnis uz 100 km";
    else
        std::cout<<"sis atstumas mazesnis uz 100 km.";
    return 0;
}
