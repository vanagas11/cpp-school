#include <iostream>
#include <fstream>
int main()
{
    int n;
    std::ifstream F;
    std::ofstream R;
    F.open("F.txt");
    R.open("R.txt");
    while(!F.eof()){
        F >> n;
        R << n/2<<"\n";
    }
    F.close();
    R.close();
    return 0;
}
