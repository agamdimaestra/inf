#include <iostream>

using namespace std;

int main()
{
    double r, t, l, a, s;
    //r = radius, t = tinggi, l = l permukaan, a = luas alas, s = luas selimut
    double pi = 3.14;

    cout << "Masukkan panjang radius tabung" << endl;
    cin >> r;
    a = 2 * pi * r * r;
    cout << "Masukkan tinggi tabung" << endl;
    cin >> t;
    s = 2 * pi * r * t;
    cout << "Luas permukaan tabung adalah:" << a + s << endl;



    return 0;
}
