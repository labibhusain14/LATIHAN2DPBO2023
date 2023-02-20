// Import library.
#include <bits/stdc++.h>
// Using standard namespace.
using namespace std;

class Human
{
    // Membuat atribut privte
private:
    // nama Human
    string nama;
    // nik Human
    string nik;
    // jenis kelamin Human
    string Jenis_kelamin;

public:
    Human() {} // konstruktor Human

    Human(string nik, string nama, string Jenis_kelamin)
    {
        // konstruktor langsung isi attribut
        this->nama = nama;
        this->nik = nik;
        this->Jenis_kelamin = Jenis_kelamin;
    }

    // Setter and Getter methods for private attributes
    // set nama
    void setNama(string namaHuman)
    {
        this->nama = namaHuman;
    }

    // get nama
    string getNama()
    {
        return nama;
    }

    // set nik
    void setNik(string nikHuman)
    {
        this->nik = nikHuman;
    }

    // get nik
    string getNik()
    {
        return nik;
    }

    // set jenis kelamin
    void setJenis_kelamin(string Jenis_kelamin)
    {
        this->Jenis_kelamin = Jenis_kelamin;
    }

    // get jenis kelamin
    string getJenis_kelamin()
    {
        return this->Jenis_kelamin;
    }

    // Destruktor
    ~Human()
    {
    }
};