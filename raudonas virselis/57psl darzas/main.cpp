#include <iostream>
#include <fstream>

int main()
{
    //for(int test{0};test<2;test++){
    std::fstream in("i.txt");
    std::fstream out("o.txt");
    int n;
    in>>n;
    float* mase = new float[n];
    for(int i{0};i<n;i++){
        in>> mase[i];
    }
    float suma=mase[0]+mase[1];
    int index{0};
    float didziausia_suma{suma};
    for(int i{2};i<n;i++){
        suma+=mase[i];
        suma-=mase[i-2];
        if(suma>didziausia_suma&&mase[i]!=0&&mase[i-1]!=0){
            index=i;
            didziausia_suma=suma;
        }
    }
    if(index==0){
        std::cout<<"Pora nesurasta";
    }else{
        std::cout<<index+1<<" "<<mase[index]<<"\n";
        std::cout<<index<<" "<<mase[index-1]<<"\n";
    }
    delete mase;
    out.close();
    in.close();
    //}
    return 0;
}
