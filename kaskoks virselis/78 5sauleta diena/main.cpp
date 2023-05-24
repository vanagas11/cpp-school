#include <iostream>
#include <fstream>
#include <iomanip>
int main()
{
    int md,m{0};
    int count{0};
    std::ifstream I;
    I.open("I.txt");

    while(!I.eof()){
        I>>md;
        if(md==0) break;
        m+=md;
        count++;

    }

    I.close();
    std::ofstream O;
    O.open("O.txt");
    O<<std::fixed<<std::setprecision(0);
    O<<count<<"\n"<<m<<"\n"<<m/(double)count;
    O.close();

    std::cout<<"d = "<<count<<"\n";
    std::cout<<"m = "<<m<<"\n";
    std::cout<<"mvid = "<<m/(double)count<<"\n";
    return 0;
}
