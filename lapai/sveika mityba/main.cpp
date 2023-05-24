#include <iostream>
#include <fstream>
#include <iomanip>
int main()
{
    std::fstream I("I.txt");
    std::fstream O("O.txt");
    int p,//prekiu sk;
        s;//saibos;
    I>>p>>s;

    std::string parduotuves[5];
    std::string* vaisiai = new std::string[p];
    double* maz = new double[p];
    double* kainos[5];
    for(int i{0};i<5;i++){
        kainos[i]=new double[p];
    }
    for(int i{0};i<p;i++){
        maz[i]=1000000;
    }
    for(int i{0};i<p;i++){
        I>>vaisiai[i];
    }
    for(int i{0};i<5;i++){
        I>>parduotuves[i];
        for(int j{0};j<p;j++){
            I>>kainos[i][j];

            if(maz[j]>kainos[i][j]&&kainos[i][j]>0){
                maz[j]=kainos[i][j];
            }
        }
    }
    double sum{0};
    for(int i{0};i<p;i++){
        sum+=maz[i];
    }
    if(s>sum){
        O<<sum<<"\n";
    }else{
        O<<"nepavyks nusipirkti";
        delete maz;
        delete vaisiai;
        for(int i{0};i<5;i++){
            delete kainos[i];
        }
        I.close();
        O.close();
        return 0;
    }
    int pard_count[5];
    for(int i{0};i<5;i++)
        pard_count[i]=0;
    for(int i{0};i<5;i++){
        for(int j{0};j<p;j++){
            if(kainos[i][j]==maz[j]){
                pard_count[i]++;
            }
        }
    }
    int current=p;
    for(int i{p};i>0;i--){
        for(int j{0};j<5;j++){
            if(pard_count[j]==i){
                O<<parduotuves[j]<<" ";
                for(int k{0};k<p;k++){
                    if(maz[k]==kainos[j][k]){
                        O<<vaisiai[k]<<" ";
                    }
                }
                O<<"\n";
            }
        }
    }
    delete maz;
    delete vaisiai;
    for(int i{0};i<5;i++){
        delete kainos[i];
    }
    I.close();
    O.close();
    return 0;
}
