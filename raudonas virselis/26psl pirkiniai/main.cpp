#include <iostream>
#include <fstream>

int main()
{
    unsigned int parduotuves,prekes;
    std::fstream I("I.txt");
    I>>parduotuves>>prekes;
    std::fstream O("O.txt");
    float visu_parduotuviu{0};
    float vienos_parduotuves;

    for(unsigned int i{0};i<parduotuves;i++){
        float temp;
        vienos_parduotuves=0;
        for(unsigned int j{0};j<prekes;j++){
            I>>temp;
            vienos_parduotuves+=temp;
        }
        O<<i+1<<" "<<vienos_parduotuves<<"\n";
        visu_parduotuviu+=vienos_parduotuves;
    }
    O<<visu_parduotuviu<<"\n";
    return 0;
}
