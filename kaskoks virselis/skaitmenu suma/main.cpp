//Tri�enklio skai�iaus skaitmen� suma
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>


int main () {



 int t; //tri�enklis skai�ius, pradinis duomuo
 int a, b, c,d; //tri�enklio skai�iaus skaitmenys, tarpiniai rezultatai
 int s; //tri�enklio skai�iaus skaitmen� suma, galutinis rezultatas
 std::cout << "Iveskite trizenkli skaiciu: ";
 std::cin >> t;
 a =  t/ 1000;
 b = t / 100%10; //atskiriamas pirmasis skaitmuotmuo
 c = t / 10 % 10; //atskiriamas antrasis skai
 d = t % 10; //atskiriamas tre�iasis skaitmuo
 s = a + b + c+d;
 std::cout<<    "skaitmenys yra:\n"
                "\npirmas skaitmuo:   "<<a<<
                "\nantras skaitmuo:   "<<b<<
                "\ntrecias skaitmuo:  "<<c<<
                "\nketvirtas skaitmuo:"<<d;
 std::cout << "\nTrizenklio skaiciaus skaitmenu suma yra lygi " << s << std::endl;
return 0;
}
