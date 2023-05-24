#include <iostream>
#include <fstream>
#include <iomanip>
int main()
{
    std::fstream in("in.txt");
    std::fstream out("out.txt");
    int base[3];
    for(int i{0};i<3;i++)
        in>>base[i];

    int n;//darzoviu sk
    in>>n;

    float aaa[3];//a,b,r ver kcal
    for(int i{0};i<n;i++){
        for(int j{0};j<3;j++)
            in>>aaa[j];
        float sum{0};
        for(int j{0};j<3;j++){
            sum+=aaa[j]/base[j];
            out<<aaa[j]/base[j]<<" ";
        }
        out<<100-sum<<"\n";
    }
    in.close();
    out.close();
    return 0;
}
