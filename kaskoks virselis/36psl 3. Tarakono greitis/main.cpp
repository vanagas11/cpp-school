#include <iostream>

int s,c,v;
int main()
{
    std::cin>>s>>c>>v;
//    if(c/s>v*100)
//        std::cout << "tarakonas greitesnis uz muse";
//    else
//        std::cout<<"muse greitesne uz tarakona";
   std::cout<<(c/s>v*100?
               "tarakonas greitesnis uz muse":
                "muse greitesne uz tarakona");
    return 0;
}
