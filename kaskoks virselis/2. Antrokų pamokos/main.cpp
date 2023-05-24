#include <iostream>
#include <iomanip>

int main ()
{
 int n;
 int md;
 double kb;
 kb = 0;
 std::cout <<"kiek dienu?";
 std::cin >> n;
 for (size_t i = 1; i <= n; i ++) {
    std::cout << "\nkiek pamoku buvo" << i << "diena?";
    std::cin >> md;
    kb = kb + md;
 }
 std::cout<<std::fixed<<std::setprecision(0)<< "\n\nper"<<n <<"savaites dienas antrokams buvo"<< kb << " pamoku\n";
 std::cout<<std::fixed<<std::setprecision(2)<< "vidutiniskai per diena buna"<< kb/n<<"pamokos\n";
 return 0;}
