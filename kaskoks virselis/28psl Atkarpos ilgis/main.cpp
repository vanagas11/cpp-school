#include <iostream>
#include <cmath>
double x_1,x_2,y_1,y_2;
int main()
{
    std::cout << "irasykite: A(x1,y1)" << std::endl;
    std::cin>>x_1>>y_1;
    std::cout << "irasykite: B(x2,y2)" << std::endl;
    std::cin>>x_2>>y_2;

    std::cout<<"Atkarpos AB ilgis a yra lygus "<<
    sqrt(pow(x_2-x_1,2)+pow(y_2-y_1,2))<<
    " vnt";
    return 0;
}
