#include <iostream>

using namespace std;

int main()
{
    int p{0},s1,s{0},dienos{0};
    std::cout<<"s:"; std::cin>>s;
    std::cout<<"s1:"; std::cin>>s1;//tf im doin
    while(s<=15*60){
        s+=s1;
        //p+=s1;
        s1+=s1;
        dienos++;
       //std::cout<<i;
    }
    std::cout<<dienos<<"\n";
    return 0;
}
