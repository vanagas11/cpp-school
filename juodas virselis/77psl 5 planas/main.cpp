#include <iostream>
#include <cmath>
#include <fstream>
 int dt{0},//kelias dienas dt Tomas ne�vykd� plano;
    dz{0},//kiek �od�i� Tomas nesp�jo i�mokti per d dien�;
    dp{0};//kiek dien� dp Tomas tur�s mokytis papildomai po z �od�i�, kad i�mokt� likusius nei�moktus �od�ius.
int d{10}, z{10};//z zodziai
  std::fstream I;

void skaiciuoti();

int main() {
    I.open("I.txt");
    I>>d>>z;

    skaiciuoti();
    I.close();
    dp=std::ceil(dz/(float)z);

    std::fstream O("O.txt");
    O<<dt<<"\n";
    O<<dz<<"\n";
    O<<dp<<"\n";
    O.close();
    return 0;
}
void skaiciuoti(){
    dt=0;
    dz=0;
    dp=0;
    for(int i{0};i<d;i++){
        int temp;
        I>>temp;
        if(temp<z){
            dt++;
            dz+=z-temp;
        }
    }
}
