#include <fstream>
int main()
{
    int m,n;//intervalas
    int k{0}; //visos plyteles

    std::ifstream I;
    I.open("I.txt");
    I>>m>>n;
    I.close();

    std::ofstream O;
    O.open("O.txt");

    for(;m<n;m++){
        if(m%2==1)
            if(m%10>=5){
                O<<m<<" ";
                k++;
            }
    }
    O<<"\n"<<k;

    O.close();
    return 0;
}
