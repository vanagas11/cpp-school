#include <iostream>
using namespace std;
int main ()
{
 int n, p, m;
  cout << "Kelios dienos praejo? "; cin >> n;
 cout << "kiek karolina perskaite puslapiu pirmaja diena? "; cin >> p;
 cout << "Keliais puslapiais daugiau perskaitydavo kiekviena kita diena? ";
 cin >> m;

int pv = 0;
 for (size_t i = 1; i <= n; i++) {
 pv = pv + p;
 p = p + m;
 }
 cout << "Per " << m <<" dienas perskaite " << pv << " puslapiu. " << endl;
 return 0;
}
