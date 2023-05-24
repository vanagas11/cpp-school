#include <iostream>
#include <fstream>
#include <cmath>
void ketvirtokas(int n){
std::fstream O("o.txt");

for(int i=5;i>=1;i-=2){
    int num =n/i;
    n-=i*num;
    std::cout<<"i= "<<i<<" "<<num<<"\n";
    O<<i<<" "<<num<<"\n";
}

O.close();
}

int main()
{
    std::fstream I("I.txt");
    int i;
    I>>i;
    I.close();
    ketvirtokas(i);

    return 0;
}
