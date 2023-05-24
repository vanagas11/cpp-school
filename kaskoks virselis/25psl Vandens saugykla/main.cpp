#include <iostream>

using namespace std;

int main()
{
    double v,vv;
    int n,p;
    std::cout<<"kiek saugykloje yra vandens?";
    std::cin>>v;
    std::cout<<"kiek zmoniu?";
    std::cin>>n;
    std::cout<<"kiek vidutiniskai vienas zmogus suvartoja vandens per para?";
    std::cin>>vv;
    std::cout<<"vandens uzteks: "<<v/(n*vv) <<" paroms";
    return 0;
}
