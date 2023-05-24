#include <iostream>
#include <fstream>
int main()
{
    int s,k{0};
    int knyga;
    int ks{0};
    std::ifstream I;
    I.open("I.txt");
    I>>s;
    while(!I.eof()){
        I>>knyga;
        if(s-knyga<0) break;
        s-=knyga;
        k++;
        ks+=knyga;

    }

    I.close();
    std::ofstream O;
    O.open("O.txt");
    O<<k<<" "<<ks<<" "<<s;
    O.close();


    std::cout<<k;
    std::cout<<"\n"<<ks;
    std::cout<<"\n"<<s;
    return 0;
}
