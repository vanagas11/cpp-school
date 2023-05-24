#include <iostream>

int kaina, svoris,n;
int Akaina{0},Asvoris{0},kgnesti;
int main(){
    std::cout<<"kiek buvo pirkiniu?";std::cin>>n;
    for(size_t i{0};i<n;i++){
        std::cout<<"iveskite "<<i+1<<" pirkinio kaina ir svori:";
        std::cin>> kaina>>svoris;
        Akaina +=kaina;
        Asvoris+=svoris;
    }
    Akaina= Akaina/n;
    std::cout<<"kiek kilogramu gali panesti Saulius?";
    std::cin>>kgnesti;


    std::cout<<"\n\nPirkinio vidutine kaina: "<<Akaina/100<<" euru "<<Akaina%100<<" ct\n";
    if(Asvoris>kgnesti*1000)
        std::cout<<"Saulius negales parnesti pirkinius.\n\n";
    else
        std::cout<<"Saulius gales parnesti pirkinius.\n\n";

    return 0;
}
