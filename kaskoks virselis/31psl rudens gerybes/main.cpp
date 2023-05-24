#include <iostream>
int b,a,n,m,k,suma;
double bulves,runkeliai,morkos;
double plotas;
int main()
{
    std::cout << "koks zemes ilgis,koks zemes plotis?";
    std::cin>>a>>b;
    double plotas =a*b;
    std::cout<<"\nzemes plotas yra"<<plotas/10000<<"he";

    bulves=plotas*0.3;
    runkeliai=plotas*0.1;
    morkos=plotas-runkeliai-bulves;

    std::cout<<"\nbulves "<<bulves/10000<<" a"<<
	"\nrunkeliai "<<runkeliai/10000<<" a"<<
	"\nmorkos "<<morkos/10000<<" a";

    std::cout<<"\nkiek kilogramu prikase?";
    std::cin>>n>>m>>k;
    suma=n*bulves/100*0.2+m*runkeliai/100*0.13+k*morkos/100*0.16;
    std::cout<<"\n\nukininkas uzdirbs "<<suma<<" eur";

    return 0;
}

