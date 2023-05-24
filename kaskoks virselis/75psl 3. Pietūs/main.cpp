#include <iostream>

using namespace std;

int main()
{
    int t1,k,n,i{0};
    std::cout<<"t1:"; std::cin>>t1;
    std::cout<<"k:"; std::cin>>k;
    std::cout<<"n:"; std::cin>>n;
    while(n>=t1){
        n-=t1;
        t1+=k;
        i++;
       //std::cout<<i;
    }
    std::cout<<"Mama pagamins"<<i<<" prekes";
    return 0;
}
