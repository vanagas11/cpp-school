#include <iostream>
#include <fstream>

int vidurkis(){
    std::fstream I("U1.txt");
    int vid{0};
    int x,ugis;
    I>>x;
    for(int i{0};i<x;i++){
        I>>ugis;
        vid+=ugis;
    }
    I.close();
    return vid/x;
}
int daugiau(int& vid){
    std::fstream I("U1.txt");
    int kiek{0};
    int x,ugis;
    I>>x;
    for(int i{0};i<x;i++){
        I>>ugis;
        if(vid<ugis)
            kiek++;
    }
    I.close();
    return kiek;
}
int main()
{
    std::fstream O("U1rez.txt");
    int vid= vidurkis();
    int kiek = daugiau(vid);


    O<<vid<<" "<<kiek<<"\n";
    std::cout<<vid<<" "<<kiek;


    std::cin>>vid;

    O.close();



    //I.clear();
    //I.seekg(0,I.beg);


    return 0;
}
