#include <iostream>

using namespace std;

int main()
{
    int pdb, jml_penduduk;
    cout << "Masukkan PDB negara" << endl;
    cin >> pdb;
    cout << "Masukkan jumlah penduduk negara" << endl;
    cin >> jml_penduduk;
    cout << "GDP negara adalah:" << pdb / jml_penduduk << endl;

    return 0;
}
