#include <iostream>
#include <fstream>
#include <cmath>
int k{25},//pirm pinigai
    s{10},//butelio kaina
    b{3},//tara
    n{2},//saibos
    i{15},//diena
    ats{0};
int main(){
    std::fstream I("sultys.txt");
    I>>k>>s>>b>>n>>i;

    while(1){
        //if(i>7){ //normalize days
        //    i-=i/7*7;
        //}
        if(i%7==1)n+=k;
        int dienos_buteliai = std::floor(n/s);
        ats+=dienos_buteliai;
        n-=dienos_buteliai*s;
        n+=dienos_buteliai*b;
        i++;
        if(n<s)break;
        //std::cout<<dienos_buteliai<<" ";
    }
    std::fstream O("sultyxrez.txt");
    O<<ats;
    O.close();
    I.close();
    return 0;
}
