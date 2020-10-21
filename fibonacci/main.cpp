#include <iostream>

using namespace std;

int main()
{
    int a1 = 0, a2 = 1, ns, n;
    //a1 = bil. pertama, a2 = bil. kedua, ns = bil. selanjutnya

    cout << "Deret Fibonacci yang ditampilkan akan kurang dari (atau sama dengan) bilangan: ";
    cin >> n;

    cout << "Deret Fibonacci: " << a1 << ", " << a2 << ", ";

    ns = a1 + a2;

    while(ns <= n)
    //saat ns masih < dari n, terjadi loop
    {
        cout << ns << ", ";
        a1 = a2
        a2 = ns;
        ns = a1 + a2;
    }
    return 0;
}
