#include <iostream>
#include <fstream>
#include <iomanip>
int main()
{
    std::ifstream I("I.txt");
    int a,b;
    I>>a>>b;
    b+=a*60;
    int c,d;
    I>>c>>d;
    I.close();
    d+=c*60;

    int v,m;
    m=b+d;
    v=m/60;
    m%=60;
    if(v>24) v-=24;
    std::ofstream O("O.txt");
    O<<v<<" "<<m;
    O.close();
    return 0;
}
