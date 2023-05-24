#include <iostream>
#include <fstream>
#include <cmath>
int smelis(){
    std::fstream I("I.txt");
    double smelis;
    I>>smelis;
    I.close();
    return std::ceil(smelis/0.3);
    }
int main()
{
    std::fstream O("deze.txt");
    O<<smelis();
    O.close();
    return 0;
}
