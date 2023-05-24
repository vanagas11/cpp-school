#include <iostream>



int main()
{
    int suma,suma100{0},sumossuma{0},skaitmenys{0};
    std::cout<<"Áveskite sumà:";
    while(true){
        std::cin>>suma;
        if(suma<=0)
            break;
        skaitmenys++;
        if(suma>=100)
            suma100++;
        sumossuma+=suma;
    }

    std::cout<<suma100<<"\n";
    std::cout<<sumossuma/skaitmenys<<"\n";
    std::cout<<skaitmenys<<"\n";
    return 0;
}
