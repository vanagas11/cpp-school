#include <fstream>

int main()
{
    int count{1};
    int kaladeles;
    std::ifstream I;
    I.open("I.txt");
    I>>kaladeles;
    I.close();

    while(true){
        kaladeles-=count*2;
        if(kaladeles<0) break;
        count++;
    }count--;

    std::ofstream O;
    O.open("O.txt");
    O<<count;
    O.close();
    return 0;
}
