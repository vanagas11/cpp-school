//Trişenklio skaièiaus skaitmenø suma
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>


int main () {



 int t; //trişenklis skaièius, pradinis duomuo
 int a, b, c,d; //trişenklio skaièiaus skaitmenys, tarpiniai rezultatai
 int s; //trişenklio skaièiaus skaitmenø suma, galutinis rezultatas
 std::cout << "Iveskite trizenkli skaiciu: ";
 std::cin >> t;
 a =  t/ 1000;
 b = t / 100%10; //atskiriamas pirmasis skaitmuotmuo
 c = t / 10 % 10; //atskiriamas antrasis skai
 d = t % 10; //atskiriamas treèiasis skaitmuo
 s = a + b + c+d;
 std::cout<<    "skaitmenys yra:\n"
                "\npirmas skaitmuo:   "<<a<<
                "\nantras skaitmuo:   "<<b<<
                "\ntrecias skaitmuo:  "<<c<<
                "\nketvirtas skaitmuo:"<<d;
 std::cout << "\nTrizenklio skaiciaus skaitmenu suma yra lygi " << s << std::endl;
return 0;
}
