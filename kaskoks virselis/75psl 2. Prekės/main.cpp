#include <iostream>

using namespace std;

int main()
{
    int p,k,s,i{0};
    std::cout<<"p:"; std::cin>>p;
    std::cout<<"k:"; std::cin>>k;
    std::cout<<"s:"; std::cin>>s;
    while(s>=p){
        s-=p;
        p+=k;
        i++;
       // std::cout<<i;
    }
    std::cout<<"Pirk�jas gal�s nusipirkti "<<i<<" prekes";
    return 0;
}
