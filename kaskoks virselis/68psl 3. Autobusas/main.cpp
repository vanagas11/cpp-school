#include <iostream>
using namespace std;
int main ()
{
 int n, k, m;
  cout << "Kelios dienos praejo? "; cin >> n;
 cout << "kiek keliaiviu veze pirmasis autobusas? "; cin >> k;
 cout << "keliias keliaiviais daugiau buvo sekantys autobusai? ";
 cin >> m;

int kv = 0;
 for (size_t i = 1; i <= n; i++) {
 kv = kv + k;
 k = k + m;
 }
 cout << m <<" autobusai perveze " << kv << " keleiviu. " << endl;
 return 0;
}
