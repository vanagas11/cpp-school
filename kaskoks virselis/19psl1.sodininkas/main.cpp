#include <iostream>
int main()
{
    int n,m,d,k,a;
    std::cout<<"kelios dezes?";
    std::cin>>n;
    std::cout<<"kelias dezes veza i turgu?";
    std::cin>>m;
    std::cout<<"kelios dienos?";
    std::cin>>d;

    k=(n-m)*d/m;
    a=(n-m)*d%m;

    std::cout<<"k="<<k<<std::endl;
    std::cout<<"a="<<a;
    return 0;
}
