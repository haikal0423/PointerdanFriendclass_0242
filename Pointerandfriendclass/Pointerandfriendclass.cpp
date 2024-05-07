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

