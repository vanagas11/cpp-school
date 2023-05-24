#include <iostream>
#include <iomanip>
#include <windows.h>
double a,b,c;
double aa,bb,cc;
int n;
double s;
int main()
{
    std::cout<< std::fixed <<std::left<<std::setprecision(2);
    std::cout<<"irasykite liepu grikiu rapsu medaus kainas"<<std::endl;
    std::cin>>a>>b>>c;
    std::cout<<"kiek kilogramu pirkote liepu, grikiu, rapsu medaus?"<<std::endl;
    std::cin>>aa>>bb>>cc;
    std::cout<<"kokia nuolaida?"<<std::endl;
    std::cin>>n;
    s=(aa*a+bb*b+cc*c)-n;
    system("cls");
    std::cout<<"medus kainuos"<<s<<"Eur"<<std::endl;
    return 0;
}
