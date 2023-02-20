// Import library.
#include <iostream>
#include <string>
// Using standard namespace.
using namespace std;

// Membuat kelas Table
class Table
{
private:
    // banyaknya baris
    int baris;
    // banyaknya kolom
    int kolom;

public:
    Table() {} // konstruktor Table
    Table(int baris, int kolom)
    {
        // konstruktor langsung isi attribut
        this->baris = baris;
        this->kolom = kolom;
    }

    // Setter and Getter methods for private attributes
    // Set Baris
    void setBaris(int baris)
    {
        this->baris = baris;
    }

    // Get Baris
    int getBaris()
    {
        return baris;
    }

    // Set Kolom
    void setKolom(int kolom)
    {
        this->kolom = kolom;
    }

    // Get Kolom
    int getKolom()
    {
        return kolom;
    }

    // Membuat Metode untuk buat tabel
    void buatBaris(string isi[], int batas, int idx, int name, int nim, int prodi, int fakultas, int nik, int univ, int gender, int email)
    {
        int i = 0, j = 0;

        // jika index = 0 (membuat kerangka tabel atas)
        if (idx == 0)
        {
            cout << "+";
            // Membuat perulangan sebanyak 9x (banyak jumlah elemen dalam 1 baris)
            for (i = 0; i < 9; i++)
            {
                // jika i = 0
                if (i == 0)
                {
                    // Membuat perulangan untuk garis sebanyak 4x("No" + 2spasi)
                    for (j = 0; j < 4; j++)
                    {
                        cout << "-";
                    }
                }
                // jika i = 1
                if (i == 1)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris nama + 2spasi
                    for (j = 0; j < name + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // jika i = 1
                if (i == 2)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris nik + 2spasi
                    for (j = 0; j < nik + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // jika i = 3
                if (i == 3)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris gender + 2spasi
                    for (j = 0; j < gender + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // jika i = 4
                if (i == 4)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris univ + 2spasi
                    for (j = 0; j < univ + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // jika i = 2
                if (i == 5)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris Nim + 2spasi
                    for (j = 0; j < nim + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // jika i = 3
                if (i == 6)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanajgn pada baris prodi + 2spasi
                    for (j = 0; j < prodi + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // jika i = 4
                if (i == 7)
                {
                    cout << "+";
                    // Membuat perulangan  untuk garis sebanyak kata terpanajgn pada fakultas + 2spasi
                    for (j = 0; j < fakultas + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // jika i = 4
                if (i == 8)
                {
                    cout << "+";
                    // Membuat perulangan  untuk garis sebanyak kata terpanajgn pada email + 2spasi
                    for (j = 0; j < email + 2; j++)
                    {
                        cout << "-";
                    }
                }
            }
            // ujung table
            cout << "+";
            cout << "" << endl;
        }

        // Membuat baris untuk jdul
        if (idx == 0)
        {
            cout << "|No  ";
            cout << "|Nama";
            for (j = 0; j < name - 2; j++)
            {
                // meminta uoutputan berupa spasi
                cout << " ";
            }
            cout << "|NIK";
            for (j = 0; j < nik - 1; j++)
            {
                // meminta uoutputan berupa spasi
                cout << " ";
            }
            cout << "|Gender";
            for (j = 0; j < gender - 4; j++)
            {
                // meminta uoutputan berupa spasi
                cout << " ";
            }
            cout << "|Universitas";
            for (j = 0; j < univ - 9; j++)
            {
                // meminta uoutputan berupa spasi
                cout << " ";
            }
            cout << "|NIM";
            for (j = 0; j < nim - 1; j++)
            {
                // meminta uoutputan berupa spasi
                cout << " ";
            }
            cout << "|Prodi";
            for (j = 0; j < prodi - 3; j++)
            {
                // meminta uoutputan berupa spasi
                cout << " ";
            }
            cout << "|Fakultas";
            for (j = 0; j < fakultas - 6; j++)
            {
                // meminta uoutputan berupa spasi
                cout << " ";
            }
            cout << "|Email";
            for (j = 0; j < email - 3; j++)
            {
                // meminta uoutputan berupa spasi
                cout << " ";
            }
            // penutup pada tiap baris
            cout << "|";
            cout << "" << endl;
        }

        // jika index = 0 (membuat kerangka tabel bawah judul)
        if (idx == 0)
        {
            // ujung kiri table
            cout << "+";
            for (i = 0; i < 9; i++)
            {
                if (i == 0)
                {
                    // Membuat perulangan untuk garis sebanyak 4
                    for (j = 0; j < 4; j++)
                    {
                        cout << "-";
                    }
                }
                if (i == 1)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris nama + 2spasi
                    for (j = 0; j < name + 2; j++)
                    {
                        cout << "-";
                    }
                }
                if (i == 2)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris nik + 2spasi
                    for (j = 0; j < nik + 2; j++)
                    {
                        cout << "-";
                    }
                }
                if (i == 3)
                {
                    cout << "+";
                    for (j = 0; j < gender + 2; j++)
                    {
                        // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris gender + 2spasi
                        cout << "-";
                    }
                }
                if (i == 4)
                {
                    cout << "+";
                    for (j = 0; j < univ + 2; j++)
                    {
                        // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris univ + 2spasi
                        cout << "-";
                    }
                }
                if (i == 5)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris nim + 2spasi
                    for (j = 0; j < nim + 2; j++)
                    {
                        cout << "-";
                    }
                }
                if (i == 6)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris prodi + 2spasi
                    for (j = 0; j < prodi + 2; j++)
                    {
                        cout << "-";
                    }
                }
                if (i == 7)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris fakultas + 2spasi
                    for (j = 0; j < fakultas + 2; j++)
                    {
                        cout << "-";
                    }
                }
                if (i == 8)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris email + 2spasi
                    for (j = 0; j < email + 2; j++)
                    {
                        cout << "-";
                    }
                }
            }
            // penutup table (ujung kanan)
            cout << "+";
            cout << "" << endl;
        }

        // buat baris isi kolom atribut
        for (i = 0; i < 9; i++)
        {
            if (i == 0)
            {
                // tampil nomor
                cout << "|" + isi[i] + "   ";
            }
            else if (i == 1)
            {
                // tampil nama
                cout << "|" + isi[i];
                for (j = 0; j < name - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            else if (i == 2)
            {
                // tampil nik
                cout << "|" + isi[i];
                for (j = 0; j < nik - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            else if (i == 3)
            {
                // tampil gender
                cout << "|" + isi[i];
                for (j = 0; j < gender - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            else if (i == 4)
            {
                // tampil univ
                cout << "|" + isi[i];
                for (j = 0; j < univ - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            else if (i == 5)
            {
                // tampil nim
                cout << "|" + isi[i];
                for (j = 0; j < nim - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            else if (i == 6)
            {
                // tampil prodi
                cout << "|" + isi[i];
                for (j = 0; j < prodi - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            else if (i == 7)
            {
                // tampil fakultas
                cout << "|" + isi[i];
                for (j = 0; j < fakultas - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            else if (i == 8)
            {
                // tampil email
                cout << "|" + isi[i];
                for (j = 0; j < email - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            // Membuat garis penutup table pada setiap atibut baris
            if (i == 9 - 1)
            {
                cout << "|";
                cout << "" << endl;
            }
        }

        // Membuat kerangka tabel pada baris terakhir
        if (idx == batas - 1)
        {
            cout << "+";
            for (i = 0; i < 9; i++)
            {
                // jika i = 0
                if (i == 0)
                {
                    // Membuat perulangan sebanyak 4x("No" + 2spasi)
                    for (j = 0; j < 4; j++)
                    {
                        cout << "-";
                    }
                }
                // jika i = 1
                if (i == 1)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanjang pada baris nama + 2spasi
                    for (j = 0; j < name + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // jika i = 1
                if (i == 2)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanjang pada baris nik + 2spasi
                    for (j = 0; j < nik + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // jika i = 3
                if (i == 3)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanjang pada baris gender + 2spasi
                    for (j = 0; j < gender + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // jika i = 4
                if (i == 4)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanjang pada baris univ + 2spasi
                    for (j = 0; j < univ + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // jika i = 2
                if (i == 5)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanjang pada baris Nim + 2spasi
                    for (j = 0; j < nim + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // jika i = 3
                if (i == 6)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanajgn pada baris prodi + 2spasi
                    for (j = 0; j < prodi + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // jika i = 4
                if (i == 7)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanajgn pada fakultas + 2spasi
                    for (j = 0; j < fakultas + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // jika i = 4
                if (i == 8)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanajgn pada email + 2spasi
                    for (j = 0; j < email + 2; j++)
                    {
                        cout << "-";
                    }
                }
            }
            // ujung kanan table
            cout << "+";
            cout << "" << endl;
        }
    }

    // Destruktor
    ~Table()
    {
    }
};