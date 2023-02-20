// Import library.
#include <bits/stdc++.h>
#include "Human.cpp"
// Using standard namespace.
using namespace std;

class Sivitas_Akademik : public Human // inheritance atau pewarisan atribut dari Human
{
    // asal_universitas Sivitas_Akademik
private:
    string asal_universitas;
    // email_edu Sivitas_Akademik
    string email_edu;

    // set asal Universitas
public:
    Sivitas_Akademik() {} // konstruktor Sivitas_Akademik

    Sivitas_Akademik(string nik, string nama, string Jenis_Kelamin, string asal_universitas, string email_edu)
        : Human(nama, nik, Jenis_Kelamin) // memanggil konstruktor dari kelas induk (superclass)
    {
        // konstruktor langsung isi attribut
        this->asal_universitas = asal_universitas;
        this->email_edu = email_edu;
    }

    // Setter and Getter methods for private attributes
    // set asal Universitas
    void setAsal_universitas(string asal_universitasSivitas_Akademik)
    {
        this->asal_universitas = asal_universitasSivitas_Akademik;
    }

    // get asal Universitas

    string getAsal_universitas()
    {
        return this->asal_universitas;
    }

    // set email edu

    void setEmail_edu(string email_eduSivitas_Akademik)
    {
        this->email_edu = email_eduSivitas_Akademik;
    }

    // get Email edu

    string getEmail_edu()
    {
        return this->email_edu;
    }

    // destruktor
    ~Sivitas_Akademik()
    {
    }
};