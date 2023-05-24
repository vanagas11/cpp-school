#include <iostream>

using namespace std;

int main()
{
    int k,n,
        a,p;
    std::cout<<"kiek gramu tirti?";
    std::cin>>k;
    std::cout<<"kiek zuveliu telpa akvariume?";
    std::cin>>n;
    k=k/2*1000;
    a=k/n;
    p=k%n;
    std::cout<<"a="<<a<<std::endl;
    std::cout<<"p="<<p;
    return 0;
}
