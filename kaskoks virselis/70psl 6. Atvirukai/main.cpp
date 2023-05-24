#include <iostream>

int kn,n,m,rusis{0};
int main()
{
    std::cout<<"Keliems draugams Linas nori dovanoti atvirukus?";
    std::cin>>m;
    std::cout<<"Kiek rusiu atviruku yra parduotuveje?";
    std::cin>>n;
    for(;n>0;n--){
        std::cout<<"Kiek yra"<<n<< "rusies atviruku?";
        std::cin>>kn;
        if(kn>m)
            rusis++;
    }
    std::cout<<"\n"<<rusis<<"rusiu atviruku uztektu visiems Lino draugams";
return 0;
}
