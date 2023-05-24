#include <iostream>

#include <iomanip>

#include <cmath>

#include <fstream>

using namespace std;

int main () {

int a, k ,m;

double kvid;

cout << "Kiek autobusu vaziuoja? ";

cin >> a;

cout << "Kiek keleiviu ilipo? ";

cin >> k;

cout << "Kiek keleiviu, kurie islipo ne Kaune? ";

cin >> m;

kvid = (k - m) *1.0/ a ;

cout << "Vidutiniskai vaziuoja " << fixed << left<< setw (10) << setprecision(0) << kvid << "keleiviu" << endl;

return 0;

}
