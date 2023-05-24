#include <iostream>
#include <fstream>
#include <cmath>
const int talpos[3]{5,2,1};

int main()
{
    int ukininkai;
    std::fstream I("I.txt");
    I>>ukininkai;
    std::fstream O("O.txt");

    for(int i{0};i<ukininkai;i++){
        int litrai;
        I>>litrai;
        for(int j{0};j<sizeof(talpos)/sizeof(int);j++){
            int temp=litrai/talpos[j];
            litrai-=temp*talpos[j];
            O<<temp<<" ";
        }
        O<<"\n";
    }
    O.close();
    I.close();

    return 0;
}
