// Import library.
#include <bits/stdc++.h>
#include "Sivitas_Akademik.cpp"
// Using standard namespace.
using namespace std;

// membuat kelas Mahasiswa
class Mahasiswa : public Sivitas_Akademik
{
private:
    // Membuat Private attributes.
    string nim;
    string prodi;
    string fakultas;

public:
    Mahasiswa() {} // konstruktor Mahasiswa
    Mahasiswa(string nama, string nik, string Jenis_kelamin, string asal_universitas, string email_edu, string nim, string prodi, string fakultas)
        : Sivitas_Akademik(nik, nama, Jenis_kelamin, asal_universitas, email_edu) // memanggil konstruktor dari kelas induk (superclass)
    {

        // konstruktor langsung isi attribut
        this->nim = nim;
        this->prodi = prodi;
        this->fakultas = fakultas;
    }

    // Setter and Getter methods for private attributes

    // Set Nim
    void setNim(string nimMahasiswa)
    {
        this->nim = nimMahasiswa;
    }

    // Get Nim
    string getNim()
    {
        return nim;
    }

    // Set Prodi
    void setProdi(string programStudi)
    {
        this->prodi = programStudi;
    }

    // Get Prodi
    string getProdi()
    {
        return prodi;
    }

    // Set Fakultas
    void setFakultas(string fakultas)
    {
        this->fakultas = fakultas;
    }

    // Get Fakultas
    string getFakultas()
    {
        return this->fakultas;
    }

    // Destruktor
    ~Mahasiswa()
    {
    }
};