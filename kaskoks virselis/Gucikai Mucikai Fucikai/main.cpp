#include <iostream>
#include <fstream>
#include <vector>
struct gyvybe{
int kojos;
int rankos;
int akys;
};
int main()
{
    int kojos{39},rankos{19},akys{20};
    int mgucikai,mmucikai,mfucikai;
    int gucikaia,mucikaia,fucikaia;
   std::ifstream I;
   I.open("I.txt");
   I>>kojos>>rankos>>akys;
   gyvybe gucikai,mucikai,fucikai;
   I>>gucikai.kojos>>gucikai.rankos>>gucikai.akys;
   I>>mucikai.kojos>>mucikai.rankos>>mucikai.akys;
   I>>fucikai.kojos>>fucikai.rankos>>fucikai.akys;
    I.close();

    kojos-=gucikai.kojos+mucikai.kojos+fucikai.kojos;
    rankos-=gucikai.rankos+mucikai.rankos+fucikai.rankos;
    akys-=gucikai.akys+mucikai.akys+fucikai.akys;

    mgucikai=kojos/gucikai.kojos;
    if(rankos/gucikai.rankos<mgucikai) mgucikai = rankos/gucikai.rankos;
    if(akys/gucikai.akys<mgucikai) mgucikai = akys/gucikai.akys;

    mmucikai=kojos/mucikai.kojos;
    if(rankos/mucikai.rankos<mmucikai) mmucikai = rankos/mucikai.rankos;
    if(akys/mucikai.akys<mmucikai) mmucikai = akys/mucikai.akys;

    mfucikai=kojos/fucikai.kojos;
    if(rankos/fucikai.rankos<mfucikai) mfucikai = rankos/fucikai.rankos;
    if(akys/fucikai.akys<mfucikai) mfucikai = akys/fucikai.akys;

    for(int i{0};i<mgucikai;i++){
        for(int j{0};j<mmucikai;j++){
            for(int k{0};k<mfucikai;k++){
                if(kojos-i*gucikai.kojos-j*mucikai.kojos-k*fucikai.kojos==0){
                    gucikaia=i+1;
                    mucikaia=j+1;
                    fucikaia=k+1;
                    break;
                }
            }
        }
    }

    std::cout<<gucikaia<<" "<<mucikaia<<" "<<fucikaia;


    return 0;
}
