// Ilgių suma
#include <iostream>
using namespace std;
int main() {
    int s, g, k; //Pirmasis ilgis
    int s1, g1, k1; //Antrasis ilgis
    cout << "Iveskite pirmaji ilgi s, g, k: ";
    cin >> s >> g >> k;
    cout << "Iveskite antraji ilgi s, g, k: ";
    cin >> s1 >> g1 >> k1;
    k = s * 24 + g * 4 + k; //pirmasis ilgis mm
    k1 = s1 * 24 + g1 * 4 + k1; //antrasis ilgis mm
    int suma = k + k1; //Ilgių suma mm
    int minus = k - k1;
    cout << "minus: " << suma / 24 << " s " << suma % 24 / 4 << " g "
        << suma % 24 % 4 << " k" << endl;
    cout << "minus: " << minus/24 << " s " << minus % 24 /4 << " g "
        << minus%24%4 << " k" << endl;
    return 0;
}
