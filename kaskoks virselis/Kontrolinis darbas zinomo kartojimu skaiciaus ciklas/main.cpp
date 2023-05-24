#include <iostream>
#include <fstream>
//#include <fstream>
int main()
{
    int n;//dienos
    int u;//uzd per diena
    int k;//daugiau
    int vu{0};//ats

    std::ifstream I;
    I.open("I.txt");
    I>>n>>u>>k;
    I.close();

    for(;n>0;n--){
        vu+=u;
        u+=k;
    }

    std::ofstream O;
    O.open("O.txt");
    O<<vu;
    O.close();

    return 0;
}
