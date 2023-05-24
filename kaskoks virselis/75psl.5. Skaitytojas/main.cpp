#include <iostream>


int main()
{
    int skyriai,dienos{0},preitosdienosskyriai{1};
    double vidurkis;
    std::cin>>skyriai;
    vidurkis=skyriai;
    while(skyriai>0){
        skyriai-=preitosdienosskyriai;
        preitosdienosskyriai+=dienos;
        dienos++;
    }
    vidurkis/=dienos;
    std::cout<<"vidurkis: "<<vidurkis<<"\n";
    std::cout<<"dienos: "<<dienos;
    return 0;
}
