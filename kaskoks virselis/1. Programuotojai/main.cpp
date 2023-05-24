#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
 int n;
 double md;
 double kb;
 kb = 0;
 cout <<"Kiek mokiniu dalyvavo olimpijadoje?"; cin >> n;
 for (int i = 1; i <= n; i ++) {
 cout << "kiek uzdaviniu issprende " << i << " mokinys";
 cin >> md;
 kb = kb + md;
 }
 cout << "is viso isspresta: " <<std::setprecision(0)<< fixed << kb << " uzdaviniu." << endl;
 return 0;}
