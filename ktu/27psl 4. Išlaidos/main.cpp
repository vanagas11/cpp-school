#include <iostream>
#include <fstream>
#include <iomanip>
double likutis(){
    std::fstream I("islaidos.txt");
double n{0},
    m{0};
    I>>n;
    while(I>>m){
        n-=m;
    }
    I.close();
    return n;
}
double didziausia(){
    std::fstream I("islaidos.txt");
double n{0},
    m{0},
    didziausia{0};
    I>>n;
    while(I>>m){
        if(m>didziausia)didziausia=m;
    }
    I.close();
    return didziausia;
}
double vid(){
    std::fstream I("islaidos.txt");
double n{0},
    m{0},
    vid{0};
int i{0};
    I>>n;
    while(I>>m){
        vid+=m;
        i++;
    }
    I.close();
    vid/=i;
    return vid;
}
int main(){





    std::fstream O("ataskaita.txt");
    O<<std::fixed<<std::setprecision(2)<<likutis()<<"\n"<<
    didziausia()<<"\n"<<
    vid();

    return 0;
}
