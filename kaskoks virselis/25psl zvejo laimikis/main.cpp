#include <iostream>

int main()
{
    int k,e,a;
    double kk,ek,ak;
    //std::cout<<std::fixed<<std::left<<std::setw(10);
    std::cout<<"kiek karosu?";
    std::cin>>k;
    std::cout<<"karoso svoris?";
    std::cin>>kk;

    std::cout<<"kiek eseriu?";
    std::cin>>e;
    std::cout<<"eserio svoris?";
    std::cin>>ek;

    std::cout<<"kiek auksliu?";
    std::cin>>a;
    std::cout<<"aukslio svoris?";
    std::cin>>ak;

    std::cout<<"zvejys isviso pagavo:"<<k*kk + e*ek + a*ak;
    return 0;
}
