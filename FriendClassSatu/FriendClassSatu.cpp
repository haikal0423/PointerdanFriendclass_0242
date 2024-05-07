#include <iostream>
using namespace std;

class siswa;
class orang
{
    private:
	string nama;

    public:
    void setNama(string pNama);
    friend class mahasiswa;
};

class siswa
{
    private:
    int id;

    public:
    void setId(int pId);
    void displayAll(orang &a);
};
