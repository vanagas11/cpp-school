#include <iostream>
#include <iomanip>
#include <cmath>
double x,v;

int main()
{
    const long long sviesmetis{1080000000};//haha vadovelis sviesmetis =atstumas per valanda
    std::cout<<std::fixed<<std::setprecision(0)<<"iveskite erdvelaivio greiti\n";
    std::cin>>v;
    std::cout<<"iveskite atstuma iki zvaigzdes sviesmeciais\n";
    std::cin>>x;

    std::cout<<"\n"<<x*sviesmetis/v;
    return 0;
}
