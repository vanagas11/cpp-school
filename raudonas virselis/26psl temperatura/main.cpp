#include <iomanip>
#include <fstream>

int main()
{
    unsigned int miestai;
    std::fstream I("I.txt");
    I>>miestai;
    std::fstream O("O.txt");
    int miesto_temperatura{0};

    for(unsigned int i{0};i<miestai;i++){
        int temp;
        miesto_temperatura=0;
        for(unsigned int j{0};j<7;j++){
            I>>temp;
            miesto_temperatura+=temp;
        }
        O<<std::fixed<<std::setprecision(3);
        O<<i+1<<" "<<(float)miesto_temperatura/7<<"\n";

    }
    O.close();
    I.close();
    return 0;
}
