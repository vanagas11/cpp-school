#include <iostream>
#include <fstream>
char aritmetika(const int &a,const int &b,const int &c){
    if(a-b==c)return '-';
    if(a+b==c)return '+';
    if(a*b==c)return '*';
    if(a/b==c)return '/';
    return NULL;
}
int main()
{
    int arr[3];
    int uzd;
    std::fstream I("I.txt");
    std::fstream O("O.txt");
    I>>uzd;
    for(int i{0};i<uzd;i++){
        for(int j{0};j<3;j++){
            I>>arr[j];
        }
        char temp=aritmetika(arr[0],arr[1],arr[2]);
        if(temp){
            O<<arr[0]<<" "<<temp<<" "<<arr[1]<<" = "<<arr[2]<<"\n";
        }else {
        O<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" klaidinga\n";
        }
    }
    return 0;
}
