#include <iostream>


int a,b;
int main(){
    std::cout<<"intervalo pradzia";std::cin>>a;
    std::cout<<"intervalo pabaiga";std::cin>>b;

    int porcijos{0};
    for(;a<=b;a++){
        if(a%6==0)
            porcijos++;
    }
    std::cout << "reikalingas porciju skaicius:"<<porcijos;
    return 0;
}
