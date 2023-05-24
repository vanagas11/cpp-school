#include <iostream>

int a,b,c,d,e;
int p;
int main()
{
    std::cout<<"irasykit a";
    std::cin>>a;
    std::cout<<"irasykit b";
    std::cin>>b;
    std::cout<<"irasykit c";
    std::cin>>c;
    std::cout<<"irasykit d";
    std::cin>>d;
    std::cout<<"irasykit e";
    std::cin>>e;
    p+=a*10000;
    p+=b*1000;
    p+=c*100;
    p+=d*10;
    p+=e;
    std::cout<<"p="<<p;
    return 0;
}
