#include <iostream>

#include <iomanip>

#include <cmath>

#include <fstream>

using namespace std;

int main () {

int n, k;

double kvid;

cout << "Kiek buvo skaitytoju? ";

cin >> n;

cout << "Kiek knygu perskaityta? ";

cin >> k;

kvid = k * 1.0 / n;

cout << "Vidutiniskai perskaityta " << fixed << left<< setw (10) << setprecision(3) << kvid << " knygu." << endl;

return 0;

}
