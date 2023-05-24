#include <iostream>
#include <fstream>
#include <algorithm>
struct gele{
    int numeris;
    int pradzia;
    int pabaiga;
    void print(){
        std::cout<<this->numeris<<" "<<this->pradzia<<" "<<this->pabaiga;
    }
};
    bool gele_comp_pab(const gele& a,const gele& b){
         return a.pabaiga>b.pabaiga;
    }
    bool gele_comp_prad(const gele& a,const gele& b){
         return a.pradzia<b.pradzia;
    }
    int intervaloprdz(gele* geles,int n){//n^2
        std::sort(geles,geles+n,gele_comp_prad);
        int num{0};
        int num_big{0};
        int pradzia{geles[0].pradzia};
        for(int i{0};i<n;i++){
            num=0;
            for(int j{0};j<n;j++){
                if(geles[j].pradzia>=geles[i].pradzia&&
                   geles[j].pabaiga<=geles[i].pabaiga){
                    num++;
                }
            }
            if(num>num_big){
                num_big=num;
                pradzia=geles[i].pradzia;
            }
        }
        return pradzia;
    }
    int intervalopab(gele* geles,int n){//nlogn
        int interpradzia=intervaloprdz(geles,n);
        std::sort(geles,geles+n,gele_comp_pab);
        for(int i{0};i<n;i++){

        }
    }
int main()
{
    std::fstream in("U1.txt");
    std::fstream out("U1rez.txt");
    int n;
    in>>n;
    gele* geles =new gele[n];
    for(int i{0};i<n;i++){
        int itemp,itemp2;
        gele gtemp;
        in>>gtemp.numeris;
        in>>itemp>>itemp2;
        gtemp.pradzia=itemp*31+itemp2;
        in>>itemp;
        gtemp.pabaiga=gtemp.pradzia+itemp;
        geles[i]=gtemp;
    }

    std::cout<<intervaloprdz(geles,n)<<"\n";

    delete geles;
    in.close();
    out.close();
    return 0;
}
