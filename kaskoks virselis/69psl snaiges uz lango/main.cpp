#include <iostream>
using namespace std;
int main ()
{
 int n, k;
  cout << "Kelias sekundes snigo? "; cin >> n;
 cout << "kiek snaigiu nukrito pirmaja sekunde? "; cin >> k;

int s = 0;
 for (size_t i = 1; i <= n; i++) {
 s = s + k;
 k *=2;
 }
 cout <<"per" <<n<<"sekundziu isnigo  " << s << " snaigiu. " << endl;
 return 0;
}
