#include <iostream>
#include <fstream>
float islaidos(int suaugusiu,int vaiku,float kainas,float kainav){
    return vaiku*kainav+suaugusiu*kainas;
}
int main()
{
    std::fstream in("i");
    std::fstream o("O.txt");
    int n{0};//seimos
    in>>n;
    for(int i{0};i<n;i++){
        int suaugusiu{0},vaiku{0};
        float kainas{0},kainav{0};
        in>>suaugusiu;
        in>>vaiku;
        in>>kainas;
        in>>kainav;
        o<<vaiku+suaugusiu<<" "<<islaidos(suaugusiu,vaiku,kainas,kainav)<<"\n";
    }
    in.close();
    o.close();
    return 0;
}
