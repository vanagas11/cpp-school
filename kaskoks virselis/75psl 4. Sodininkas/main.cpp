#include <iostream>

using namespace std;

int main()
{
    int m1,m,n,d{0};
    std::cout<<"m1:"; std::cin>>m1; //pirma diena
    std::cout<<"m:"; std::cin>>m; //daugiau kiek
    std::cout<<"n:"; std::cin>>n; // kiek isviso turi isgenet
    while(n>=0){
        n-=m1;
        m1+=m;
        d++;
    }
    std::cout<<"sodininkas dirbs "<<d<<" dienas";
    return 0;
}
