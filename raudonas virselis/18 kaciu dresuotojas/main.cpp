#include <iostream>
#include <fstream>

int main()
{
    std::ifstream I("I.txt");
    int n;
    I>>n;
    int t;
    int d{0},dvid;
    for(int i{0};i<n;i++){
        I>>t;
        d+=t;
    }
    I.close();
    dvid=d/n;
    std::ofstream O("O.txt");
    O<<d<<"\n"<<dvid;
    O.close();
    return 0;
}
