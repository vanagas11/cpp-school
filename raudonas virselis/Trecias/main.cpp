#include <iostream>

#include <iomanip>

#include <cmath>

#include <fstream>

using namespace std;

int main () {

int p1, p2, p3, p4, p5;

double v;

cout << "Koks pirmasis pazimys? ";

cin >> p1;

cout << "Koks antrasis pazimys? ";

cin >> p2;

cout << "Kiek treciasis pazimys? ";

cin >> p3;

cout << "Koks ketvirtasis pazimys? ";

cin >> p4;

cout << "Koks penktasis pazimys? ";

cin >> p5;

v = (p1+p2+p3+p4+p5) * 1.0/ 5;

cout << "Vidurkis: " << fixed << left<< setw (10) << setprecision(2) << v << endl;

return 0;

}
