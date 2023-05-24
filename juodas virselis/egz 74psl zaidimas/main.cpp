#include <iostream>
#include <fstream>



int main()
{

    int n,a,b;
    std::ifstream I("I.txt");
    I>>n;
    int _max{0},max_a,max_b;

    for(int i{0};i<n/2;i++){
        I>>a>>b;
        if(_max<a+b){
            _max=a+b;
            max_a=a;
            max_b=b;
        }
    }

    std::ofstream O("O.txt");
    O<<_max<<" "<<max_a<<" "<<max_b<<"\n";
    if(max_a==max_b){
        O<<1<<2;
    }else if(max_a>max_b){
        O<<1;
    }else{
        O<<2;
    }

    O.close();
    I.close();
    return 0;
}
