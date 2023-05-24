#include <fstream>
#include <cmath>
int main()
{
    int n;//dienos
    int z; //dienos zibuokles
    int zv{0};//visos zibutes
    double zvid;//vidurkis

    std::ifstream I;
    I.open("I.txt");
    I>>n;


    for(int i{n};i>0;i--){
        I>>z;
        zv+=z;
    }
    I.close();

    zvid = zv/(double)n;
    std::ofstream O;
    O.open("O.txt");
    O<<zv<<" "<<std::ceil(zvid);
    O.close();

    return 0;
}
