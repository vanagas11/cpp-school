#include <iostream>

int main()
{
    int n,x,dienos{0};
    std::cout<<"petriukas gavo saldainiu: ";std::cin>>n;
    while(true){
        std::cout<<"per diena suvalge: ";std::cin>>x;
        if(n<x)
            break;
        n-=x;
        dienos++;
    }
    std::cout<<"Petriukui saldainių uţteks "<<dienos<<" dienoms ir jam liks "<<n<<" saldainiai.";
    return 0;
}
