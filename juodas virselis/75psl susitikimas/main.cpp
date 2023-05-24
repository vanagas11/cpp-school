#include <iostream>
#include <fstream>
//#include "lol.h"
struct laikas{
    int d,v,m;
    laikas operator +(laikas B){
        laikas a{0,0,0};
        a.v=v+d*24;
        a.m=a.v*60+m;

        B.v+=B.d*24;
        B.m+=B.v*60;

        a.m+=B.m;

        a.v=a.m/60;
        a.m=a.m-a.v*60;

        a.d=a.v/24;
        a.v=a.v-a.d*24;
        return a;
    }
    laikas operator -(laikas B){
        laikas a{0,0,0};
        a.v=v+d*24;
        a.m=a.v*60+m;

        B.v+=B.d*24;
        B.m+=B.v*60;

        a.m-=B.m;

        a.v=a.m/60;
        a.m=a.m-a.v*60;

        a.d=a.v/24;
        a.v=a.v-a.d*24;
    return a;
    }

    bool operator >(laikas B){
        return (d*24+v)*60+m > (B.d*24+B.v)*60+B.m;
    }
    bool operator >=(laikas B){
        return (d*24+v)*60+m >= (B.d*24+B.v)*60+B.m;
    }
    bool operator <(laikas B){
        return (d*24+v)*60+m < (B.d*24+B.v)*60+B.m;
    }
    bool operator <=(laikas B){
        return (d*24+v)*60+m <= (B.d*24+B.v)*60+B.m;
    }
};

int main()
{
    std::fstream I;
    I.open("C:\\Users\\Mokinys\\Documents\\3b\\juodas virselis\\75psl susitikimas\\list.txt");
    std::fstream O("O.txt");
    laikas isvyksta;//{28,15,0};
    I>>isvyksta.d>>isvyksta.v>>isvyksta.m;

    laikas trukme{0,0,0};//{0,15,00};
    I>>trukme.v>>trukme.m;

    laikas tikslas;
    I>>tikslas.d>>tikslas.v>>tikslas.m;
    isvyksta=isvyksta+trukme;

    O<<isvyksta.d<<" "<<isvyksta.v<<" "<<isvyksta.m;
    std::cout<<isvyksta.d<<" "<<isvyksta.v<<" "<<isvyksta.m;

    if(isvyksta>tikslas){
        O<<"\nNE";
        std::cout<<"\nNE";
    }else{
        O<<"\ntaip";
        std::cout<<"\ntaip";
    }

    I.close();
    O.close();
    return 0;
}
