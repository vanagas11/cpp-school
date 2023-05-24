#include <iostream>
#include <fstream>
#include <cmath>
struct laikas{
    int minutes;

    laikas operator-(const laikas& b){
        laikas temp;
        if(this->minutes<b.minutes)
            this->minutes+=24*60;
        temp.minutes=this->minutes-b.minutes;
        return temp;
    }
    laikas operator+(const laikas& b){
        laikas temp;
        temp.minutes=this->minutes +b.minutes;
        return temp;
    }
};
std::ostream& operator<<(std::ostream& o, const laikas& b){
    o<<std::floor(b.minutes/(float)60)<<" "<<b.minutes%60;
    return o;
}
std::istream& operator>>(std::istream& i,laikas& b){
    int val,minutes;
    i>>val>>minutes;
    b.minutes=val*60+minutes;
    return i;
}


int main()
{
    std::fstream I("I.txt");
    std::fstream O("O.txt");
    int n;
    I>>n;
    for(int i{0};i<n;i++){
        laikas pirmas_isvykimas;
        I>>pirmas_isvykimas;

        laikas pirmas_atvykimas;
        I>>pirmas_atvykimas;

        laikas antras_isvykimas;
        I>>antras_isvykimas;

        laikas antras_atvykimas;
        I>>antras_atvykimas;

        laikas pirmo_trukme= pirmas_atvykimas-pirmas_isvykimas;
        laikas antro_trukme= antras_atvykimas-antras_isvykimas;
        laikas keliones_trukme =pirmo_trukme+antro_trukme;

        O<<keliones_trukme<<"\n";
    }
    O.close();
    I.close();
    return 0;
}
