#include <iostream>
#include <fstream>
bool ar_trikampis(unsigned int a,unsigned int b,unsigned int c);
unsigned int a{3},b{6};
int main()
{

    std::fstream O("O.txt");
    unsigned int counter{0};
    for(unsigned int i{a};i<=b;i++){
        //for(unsigned int j{i};j<=b;j++){
            for(unsigned int k{a};k<=b;k++){
            if(ar_trikampis(i,i,k)){
                std::cout<<counter<<".  "<<i<<" "<<i<<" "<<k<<"\n";
                O        <<counter<<".  "<<i<<" "<<i<<" "<<k<<"\n";
                counter++;
            }
            }
        //}
    }
    return 0;
}
bool ar_trikampis(unsigned int &a,unsigned int &b,unsigned int &c){
    if(a==b&&b==c)return 0;
    if(a+b>c)return 1;
    return 0;
}
