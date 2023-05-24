#include <iostream>
#include <fstream>
#include <iomanip>
int main()
{
    std::fstream in("i");
    std::fstream o("o");
    int n;//modeliu sk
    in>>n;

    int* metai=new int[n];
    int* turis=new int[n];
    float* kaina=new float[n];

    for(int i{0};i<n;i++){
        in>>metai[i]>>turis[i]>>kaina[i];
    }
    int m;//metai
    int p;//nusidevimas
    in>>m>>p;
    in.close();

    for(int i{0};i<n;i++){
        o<<std::fixed<<std::setprecision(2)<<
        i+1<<" "<<metai[i]<<" "<<turis[i]<<" "<<kaina[i]<<" "<<
        kaina[i] / ((float)(m - metai[i]) /p)<<"\n";
    }

    o.close();
    delete[] metai;
    delete[] turis;
    delete[] kaina;
    return 0;
}
