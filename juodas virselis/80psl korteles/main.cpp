#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
struct kortele{
    int num;
    int num2;
};
bool compare(kortele a,kortele b){
if(a.num<b.num)
    return 1;
else
    return 0;
}
int main()
{
    std::fstream in("in.txt");
    std::fstream out("out.txt");

    int k;//kruveles
    in>>k;
    int n;//korteles
    in>>n;

    kortele* korteles =new kortele[k];
    for(int i{0};i<k;i++){
        in>>korteles[i].num;
        in>>korteles[i].num2;
    }
    std::sort(korteles,korteles+k,compare);

    int count{0};
    out<<"0 "<<n<<"\n";
    for(int i{1};i<=10;i++){

        out<<i<<" ";
        if(i==korteles[count].num){
            out<<n-korteles[count].num2<<"\n";
            count++;
        }else{
            out<<n<<"\n";
        }

    }

    delete korteles;
    in.close();
    out.close();
    return 0;
}
