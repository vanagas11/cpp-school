#include <fstream>
#include <iostream>
void omas(int &I,int &U, int &R);
int main()
{
    std::fstream In("i.txt");
    std::fstream O("o.txt");
    int n; //testu kiekis
    In>>n;
    for(int i{0};i<n;i++){
        int I,U,R;//stipris,itampa,varza
        In>>I>>U>>R;
        omas(I,U,R);
        O<<I<<" "<<U<<" "<<R<<"\n";
    }

    return 0;
}
void omas(int &I,int &U, int &R){
    if(I==0){
        I=U/R;
        return;
    }
    if(U==0){
        U=I*R;
        return;
    }
    R=I/U;
    return;
}
