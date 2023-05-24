#include <iostream>
using namespace std;
int main ()
{
 int n, k, m;
  cout << "Kelios dienos praejo? "; cin >> n;
 cout << "kiek porciju ledu pardave pirmaja diena? "; cin >> k;
 cout << "Keliomis ledu porcijom daugiau parduodavo kiekviena kita diena? ";cin >> m;

int vk = 0;
 for (size_t i = 1; i <= n; i++) {
 vk += k;
 k += m;
 }
 cout << "Per " << n <<" dienas pardave " << vk << " ledu porcijas. " << endl;
 return 0;
}
