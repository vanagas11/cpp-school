#include <iostream>
#include <fstream>
#include <iomanip>
int vr,vb,va;//angliavandeniliu vertes;

void verte(float &r,float &b,float &a,const int &g){
    r*=(float)vr/100*(float)g;
    b*=(float)vb/100*(float)g;
    a*=(float)va/100*(float)g;
    return;
}

int main(){
    std::fstream I("Duomenys.txt");
    std::fstream O("Rezultatai.txt");

    I>>vr>>vb>>va;
    int n;//produktu skaicius;
    I>>n;

    float r,b,a,g;//angliavandeniliu kiekiai ir patiekalo mase;
    float suma{0};
    for(int i{0};i<n;i++){
        I>>r>>b>>a>>g;
        verte(r,b,a,g);
        std::cout<<r<<" "<<b<<" "<<a<<" "<<g<<"\n";
        suma+=r+b+a;
        O<<std::fixed<<std::setprecision(2)<<r<<" "<<b<<" "<<a<<"\n";
    }
    O<<suma;
    I.close();
    O.close();
    return 0;
}
