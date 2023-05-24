#include <iostream>
#include <fstream>
#include <cmath>
#include <numeric>
#include <iomanip>
int main()
{
    std::fstream in("in.txt");
    std::fstream out("out.txt");

    int n;
    in>>n;

    int* arbuzai=new int[n];
    for(int i{0};i<n;i++){
        in>>arbuzai[i];
    }

    float vidurkis=std::accumulate(&arbuzai[0],&arbuzai[n],0)/(float)n;

    float paklaida = std::abs(arbuzai[0]-vidurkis);
    int arbuzas{0};
    for(int i{0};i<n;i++){
        float paklaidadb=std::abs(arbuzai[i]-vidurkis);
        if(paklaida>paklaidadb){
            arbuzas=i;
            paklaida=paklaidadb;
        }

    }
    out<<arbuzas+1<<" "<<arbuzai[arbuzas];
    in.close();
    out.close();
    return 0;
}
