#include <iostream>
#include <iomanip>
#include <fstream>

int main(){
    std::fstream In("Pazymiai.txt");
    std::fstream Out("Vidurkiai.txt");
    for(int i{0};i<5;i++){
        int suma{0};
        for(int j{0};j<5;j++){
            int temp;
            In>>temp;
            suma+=temp;
        }
        Out<<std::fixed<<std::setprecision(2)<<(float)suma/5;
        if(i<4)Out<<"\n";
    }
    In.close();
    Out.close();
    return 0;
}
