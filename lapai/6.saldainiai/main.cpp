#include <iostream>
#include <fstream>
void rasti_saldaini(const int &a,const int &b,int& saldainis,int& dalikliai);
void skaiciaus_dalikliai(const int &x,std::fstream& Out);
int main()
{
    std::fstream In("intervalas.txt");
    std::fstream Out("rezultatai.txt");
    int a,b;/*intervalas
            a- pradzia
            b babaiga;*/
    In>>a>>b;
    In.close();

    int x,y;//diziausias; jo dalikliu kiekis
    rasti_saldaini(a,b,x,y);
    Out<<x<<" "<<y<<"\n";
    skaiciaus_dalikliai(x,Out);



    return 0;
}
void rasti_saldaini(const int &a,const int &b,int& saldainis,int &dalikliai){

    int daugiausiai_dalikliu{0};
    int didziausio_kiekis{0};

    for(int i=a;i<=b;i++){
        int dabartinis_dalikliu_kiekis{0};
        for(int j{1};j<=i;j++){
            if(i%j==0){
                    dabartinis_dalikliu_kiekis++;
            }
        }
        if(dabartinis_dalikliu_kiekis>didziausio_kiekis){
            daugiausiai_dalikliu=i;
            didziausio_kiekis=dabartinis_dalikliu_kiekis;
        }
    }
    saldainis=daugiausiai_dalikliu;
    dalikliai=didziausio_kiekis;
}
void skaiciaus_dalikliai(const int &x,std::fstream& Out){//x=skaicius
    for(int i{1};i<=x;i++){
        if(x%i==0){
            Out<<i<<" ";
        }
    }
    Out.close();
}
