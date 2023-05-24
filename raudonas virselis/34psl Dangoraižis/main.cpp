//psl. 34 Dangoraişis
#include <iostream>
#include <cmath>
#include <climits>
unsigned int n{16};

unsigned int matematika(const unsigned int &n){
    unsigned int y{n};//liekana
    unsigned int atsakymas{0};
    unsigned long x=9;
    for(int i{1};i<=std::log10(n)+1;i++){   //O(log10(n))
        if(n>x){
            atsakymas+=x*i;
            y-=x;
        }else{
            atsakymas+=y*i;
        }
        x*=10;
    }
    return atsakymas;
}
int main() {
    std::cout<<"pasirink skaiciuka nuo 0 iki "<<UINT_MAX<<"\n";
    std::cin>>n;
    std::cout<<"nuo 0 iki "<<n<<" reikes "<<matematika(n)<<" skaitmenu\n";
    return 0;
}
