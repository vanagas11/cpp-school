#include <iostream>
#include <cmath>
#include <iomanip>
int x1,x2;
int main()
{
    std::cin>>x1>>x2;
    std::cout<<std::fixed<<std::setprecision(2)<<"x"<<std::setw(10)<<"y1"<<std::setw(8)<<"y2"<<"\n\n";
    for(;x1<=x2;x1++){
        std::cout<<x1<<std::setw(10)<<2*x1+2;
        std::cout<<std::setw(10)<<3*x1+1;
        if(2*x1+2==3*x1+1)
            std::cout<<std::setw(10)<< "susikerta";
        else
            std::cout<<std::setw(10)<< "***";
        std::cout<<"\n";
    }

    return 0;
}
