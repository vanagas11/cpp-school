#include <iostream>
#include <iomanip>
#include <cmath>

int p1,p2,p3,p4,p5;
double v;
int main()
{

std::cout<<std::fixed<<std::setprecision(2);
std::cout<<"irasykite pazymius.";
std::cin>>p1>>p2>>p3>>p4>>p5;
double v =(p1+p2+p3+p4+p5)/5;
std::cout<<"pazymiu vidurkis "<<v;
    return 0;
}
