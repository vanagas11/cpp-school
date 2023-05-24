#include <iostream>

int p1,p2,p,s;
int main()
{
    std::cin>>p1>>p2>>p>>s;
    if(s-(p1+p2)*((100+p)/100)>=0)
        std::cout<<"pirkejas gali isigyti abitvi prekes uz"<<(p1+p2)*((100-p)/100);
    else
        std::cout<<"pirkejas negali isigyti abieju prekiu.";

    return 0;//nzn neveikia
}
