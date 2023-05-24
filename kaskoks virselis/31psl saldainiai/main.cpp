#include <iostream>
#include <iomanip>
double a,b;
double x,y;
int main()
{
    std::cout<<std::setprecision(2);
    std::cout<<"kiek draugu turi marytei ir kiek is ju yra berniukai?";
    std::cin>>a>>b;
    std::cout<<"kiek berniuko saldainiai ir kiek mergaiciu?";
    std::cin>>x>>y;
    std::cout<<"mergaites sudaro "<<(a-b)*100/a<<"%";
    std::cout<<"\nmarytei saldumynai kainuos "<<(b*y+(a-b)*x)/100<<"eur";
    return 0;
}
