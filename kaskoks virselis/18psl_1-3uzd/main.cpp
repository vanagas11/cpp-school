#include <iostream>
using namespace std;
int main(){
  int dienos,savaite;
  cout << "Pirma uzduotis\n\nIrasykite dienu skaiciu\n";
  cin >> dienos;
  savaite = dienos / 7;
  dienos = dienos % 7;
  cout << "\nNuo metu pradzios praejo " << savaite << " savaites\n";
  cout << "ir " << dienos << " dienos\n";
  cout << "-----------------------------------------------------";
int saldainiai,mokiniai;
  cout << "\nAntra uzduotis \n\nIrasykite saldainiu kieki\n";
  cin >> saldainiai;
  cout << "\nIrasykite mokiniu kieki\n";
  cin >> mokiniai;
  cout << "\nMokiniams atiteko " << saldainiai / mokiniai << " saldainiai \nMokytojai atiteko " << saldainiai % mokiniai << " saldainiai" << endl;

  cout << "-----------------------------------------------------";
  int andrius_balionai,andrius_draugai,andrius_nebebalionai,
      andriaus_pasilikti_balionai,andriaus_draugu_balionai;
  cout << "\nTrecia uzduotis\n \nIrasykite kiek Andrius turi balionu\n";
  cin >> andrius_balionai;
  cout << "\nIrasykite Kiek Andrius turi draugu\n";
  cin >> andrius_draugai;
  cout << "\nKiek balionu sprogo?\n";
  cin >> andrius_nebebalionai;
  andriaus_pasilikti_balionai = (andrius_balionai - andrius_nebebalionai) / (andrius_draugai+1);
  andriaus_draugu_balionai = (andrius_balionai - andrius_nebebalionai) % (andrius_draugai+1)+(andrius_balionai - andrius_nebebalionai) / (andrius_draugai+1);      ;
  cout << "Andrius pasiliko " << andriaus_draugu_balionai << " balionus\n";
  cout << "Andriaus draugai gavo po " << andriaus_pasilikti_balionai << " balionus\n";
  return 0;
  }
