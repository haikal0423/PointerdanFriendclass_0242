#include <iostream>
using namespace std;

class persegiPanjang
{
public:
    int panjang, lebar;

    int luasPersegiPanjang(int b, int a)
    {
        return a * b;
    }
};

class Segitiga
{
public:
    int alas, tinggi;

    int luasSegitiga(int a, int t)
    {
        return 0.5 * a * t;
    }

    int hitung(persegiPanjang p)
    {
        return p.panjang;
    }
};

int main()
{
    persegiPanjang pp;
    Segitiga sg;
    cout << "Masukan Panjang : ";
    cin >> pp.panjang;
    cout << "Masukan Lebar : ";
    cin >> pp.lebar;
    cout << "Masukan Tinggi : ";
    cin >> sg.tinggi;
    cout << "Masukan Alas : ";
    cin >> sg.alas;
    cout << "Luas Persegi Panjang : " << pp.luasPersegiPanjang(pp.panjang, pp.lebar) << endl;
    cout << "Luas Seigitga : " << sg.luasSegitiga(sg.alas, sg.tinggi) << endl;
}

