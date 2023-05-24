
#include <fstream>



int main()
{

    int m,k,vk{0},n;
    std::ifstream I("I.txt");
    I>>k>>m>>n;
    I.close();

    for(int i{0};i<n;i++){
        vk+=k;
        k+=m;
    }

    std::ofstream O("O.txt");
    O<<vk;
    O.close();
    return 0;
}
