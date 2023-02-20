// Import library and file.
#include <iostream>
#include <bits/stdc++.h>
#include "Mahasiswa.cpp"
#include "Table.cpp"
#include <cmath>
#include <string>

// Using standard namespace.
using namespace std;
int main()
{
    /*
        ------------ Membuat Variabel ----------------
        - nomor = variabel untuk mengatur menu
        - namaMhs,nimMhs, prodiMhs, fakultasMhs = String untuk menyimpan nilai sementara dari masing2 nilai
        - display = variable utk mengatur jalannya program
        - idx = sebagai index nilai (indek update / delete)
        - max = sebagai batas inputan menu tambah
        - llist = list yang berisi objek dari kelas Mahasiswa
    */
    int nomor = 0;
    string namaMhs, prodiMhs, fakultasMhs, nimMhs, nikMhs, email, univ, gender;
    int display = 0;
    int idx = 0;
    int max = 0;
    list<Mahasiswa> llist;

    // Tampilan untuk pilihan menu
    cout << "--------- Silahkan Pilih Menu ---------" << endl;
    cout << "[1] Tambah Data" << endl;
    cout << "[2] Ubah Data" << endl;
    cout << "[3] Hapus Data" << endl;
    cout << "[4] Tampil Data" << endl;
    cout << "[5] Keluar"
         << "\n";

    // Program akan terus berjalan sampai display != 0
    while (display == 0)
    {
        // Scan nomor pada menu
        cout << "\n"
             << "Latihan DPBO> ";
        cin >> nomor;

        // jika pilih menu nomor 1
        if (nomor == 1)
        {
            // Scan banyak mahasiswa yang ingin di input
            cout << "Latihan DPBO> ";
            cout << "Jumlah Mahasiswa : ";
            cin >> max;

            // Looping sebanyak max
            for (int i = 0; i < max; i++)
            {
                // Mendata per-Mahasiswa
                cout << "-----------------------------------------" << endl;
                cout << "Latihan DPBO> ";
                cout << "Data Mahasiswa ke-" << i + 1 << endl;

                // Meminta scan nama
                cout << "Latihan DPBO> ";
                cout << "Masukkan Nama : ";
                // digunakan untuk membuang whitespace yang tersisa dalam buffer input sebelum memanggil getline()
                getline(cin >> ws, namaMhs);

                // Meminta scan nik
                cout << "Latihan DPBO> ";
                cout << "Masukkan NIK : ";
                getline(cin >> ws, nikMhs);

                // Meminta scan gender
                cout << "Latihan DPBO> ";
                cout << "Masukkan Gender : ";
                getline(cin >> ws, gender);

                // Meminta scan univ
                cout << "Latihan DPBO> ";
                cout << "Masukkan Asal Universitas : ";
                getline(cin >> ws, univ);

                // Meminta scan nim
                cout << "Latihan DPBO> ";
                cout << "Masukkan NIM : ";
                getline(cin >> ws, nimMhs);

                // Meminta scan prodi
                cout << "Latihan DPBO> ";
                cout << "Masukkan Program Studi: ";
                getline(cin >> ws, prodiMhs);

                // Meminta scan fakultas
                cout << "Latihan DPBO> ";
                cout << "Masukkan Fakultas : ";
                getline(cin >> ws, fakultasMhs);

                // Meminta scan email pend.
                cout << "Latihan DPBO> ";
                cout << "Masukkan Email : ";
                getline(cin >> ws, email);

                // Membuat objek sementara
                Mahasiswa temp;

                // Masukkan input ke objek sementara
                temp.setNama(namaMhs);
                temp.setNik(nikMhs);
                temp.setJenis_kelamin(gender);
                temp.setAsal_universitas(univ);
                temp.setNim(nimMhs);
                temp.setProdi(prodiMhs);
                temp.setFakultas(fakultasMhs);
                temp.setEmail_edu(email);

                // Masukkan objek sementara ke daftar list
                llist.push_back(temp);
            }
            // print ketika berhasil menambah data
            cout << max << " Data has been successfully entered!" << endl;
        }
        // jika pilih menu nomor 1
        else if (nomor == 2)
        {
            // Ketika terdapat elemen dalam list
            if (llist.size() > 0)
            {
                // Scan idx untuk mahasiswa yang ingin diubah datanya
                cout << "Latihan DPBO> ";
                cout << "Silahkan isi nomor data mahasiswa yang ingin diubah : ";
                cin >> idx;

                // Jika idx yang diberikan merupakan bagian dari daftar list
                if (idx <= llist.size())
                {
                    // Meminta scan nama
                    cout << "Latihan DPBO> ";
                    cout << "Masukkan Nama : ";
                    // digunakan untuk membuang whitespace yang tersisa dalam buffer input sebelum memanggil getline()
                    getline(cin >> ws, namaMhs);

                    // Meminta scan nik
                    cout << "Latihan DPBO> ";
                    cout << "Masukkan NIK : ";
                    getline(cin >> ws, nikMhs);

                    // Meminta scan gender
                    cout << "Latihan DPBO> ";
                    cout << "Masukkan Gender : ";
                    getline(cin >> ws, gender);

                    // Meminta scan univ
                    cout << "Latihan DPBO> ";
                    cout << "Masukkan Asal Universitas : ";
                    getline(cin >> ws, univ);

                    // Meminta scan nim
                    cout << "Latihan DPBO> ";
                    cout << "Masukkan NIM : ";
                    getline(cin >> ws, nimMhs);

                    // Meminta scan prodi
                    cout << "Latihan DPBO> ";
                    cout << "Masukkan Program Studi: ";
                    getline(cin >> ws, prodiMhs);

                    // Meminta scan fakultas
                    cout << "Latihan DPBO> ";
                    cout << "Masukkan Fakultas : ";
                    getline(cin >> ws, fakultasMhs);

                    // Meminta scan email pend.
                    cout << "Latihan DPBO> ";
                    cout << "Masukkan Email : ";
                    getline(cin >> ws, email);

                    // print ketika berhasil mengubah data
                    cout << "Data Updated Succesfully" << endl;

                    auto iter = llist.begin(); // inisialisasi iterator pada awal list
                    advance(iter, idx - 1);    // memindahkan iterator ke posisi ke-(idx-1)

                    // ubah isi nilai untuk masing2 nilai
                    iter->setNama(namaMhs);
                    iter->setNik(nikMhs);
                    iter->setJenis_kelamin(gender);
                    iter->setAsal_universitas(univ);
                    iter->setNim(nimMhs);
                    iter->setProdi(prodiMhs);
                    iter->setFakultas(fakultasMhs);
                    iter->setEmail_edu(email);
                }
                // Jika idx yang diberikan merupakan bukan bagian dari daftar list
                else
                    cout << "There is no data list yet, please fill in the data list first!" << endl;
            }
            // JIka tidak ada elemn dalam list
            else
                cout << "There is no data list yet, please fill in the data list first!" << endl;
        }
        // jika pilih menu nomor 3 (Delete)
        else if (nomor == 3)
        {
            // Ketika terdapat elemen dalam list
            if (llist.size() > 0)
            {
                // Scan idx untuk mahasiswa yang ingin dihapus datanya
                cout << "Latihan DPBO> ";
                cout << "Silahkan isi nomor data mahasiswa yang ingin dihapus : ";
                cin >> idx;

                // Jika idx yang diberikan merupakan bagian dari daftar list
                if (idx <= llist.size())
                {
                    auto iter = llist.begin(); // inisialisasi iterator pada awal list
                    advance(iter, idx - 1);    // memindahkan iterator ke posisi ke-(idx-1)
                    // Hapus data
                    llist.erase(iter);

                    // print ketika berhasil megnhapus data
                    cout << "Data Deleted Succesfully" << endl;
                }
                // Jika idx yang diberikan bukan bagian dari daftar list
                else
                    cout << "There is no data list yet, please fill in the data list first!" << endl;
            }
            // JIka tidak ada elemn dalam list
            else
                cout << "There is no data list yet, please fill in the data list first!" << endl;
        }
        // jika pilih menu nomor 3 (Tampil)
        else if (nomor == 4)
        {
            // Ketika terdapat elemen dalam list
            if (llist.size() > 0)
            {
                /*
                Membuat objek tab dari kelas Table dengan panjang
                baris sesuai dengan jumlah elemen dalam list dan kolom sebesar 9
                */
                Table tab = Table(llist.size(), 9);
                int maxName = 4;     // "nama" = 4
                int maxNim = 3;      //  "nim" = 3
                int maxNIK = 3;      // "nik" = 3
                int maxEmail = 5;    // "email" = 5
                int maxUniv = 11;    // "Universitas" = 11
                int maxGender = 6;   // "Gender" = 6
                int maxProdi = 5;    // "prodi" = 5
                int maxFakultas = 8; // "fakultas" = 8
                int i = 0;

                // Perulangan untuk mencaari yang terpanjang pada baris nama
                for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxName < it->getNama().length())
                    {
                        maxName = it->getNama().length();
                    }
                }

                // Perulangan untuk mencaari yang terpanjang pada baris nim
                for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxNim < it->getNim().length())
                    {
                        maxNim = it->getNim().length();
                    }
                }

                // Perulangan untuk mencaari yang terpanjang pada baris prodi
                for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxProdi < it->getProdi().length())
                    {
                        maxProdi = it->getProdi().length();
                    }
                }

                // Perulangan untuk mencaari yang terpanjang pada baris nama
                for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxNIK < it->getNik().length())
                    {
                        maxNIK = it->getNik().length();
                    }
                }

                // Perulangan untuk mencaari yang terpanjang pada baris nim
                for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxGender < it->getJenis_kelamin().length())
                    {
                        maxGender = it->getJenis_kelamin().length();
                    }
                }

                // Perulangan untuk mencaari yang terpanjang pada baris prodi
                for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxUniv < it->getAsal_universitas().length())
                    {
                        maxUniv = it->getAsal_universitas().length();
                    }
                }

                // Perulangan untuk mencaari yang terpanjang pada baris prodi
                for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxEmail < it->getEmail_edu().length())
                    {
                        maxEmail = it->getEmail_edu().length();
                    }
                }

                // Perulangan untuk mencaari yang terpanjang pada baris fakultas
                for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxFakultas < it->getFakultas().length())
                    {
                        maxFakultas = it->getFakultas().length();
                    }
                }

                i = 0; // inisialisasi nilai i
                // Membuat perulangan untuk menampilkan output beserta tabel
                for (list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    // Membuat array untuk elemen yang mau di print
                    string arrstr[9];
                    // Memasukan setiap elemen ke dalam array
                    arrstr[0] = to_string(i + 1); // mengubah i+1 menjadi string
                    arrstr[1] = it->getNama();
                    arrstr[2] = it->getNik();
                    arrstr[3] = it->getJenis_kelamin();
                    arrstr[4] = it->getAsal_universitas();
                    arrstr[5] = it->getNim(); // mengubah i+1 menjadi string
                    arrstr[6] = it->getProdi();
                    arrstr[7] = it->getFakultas();
                    arrstr[8] = it->getEmail_edu();

                    // Memanggil metode buat baris
                    tab.buatBaris(arrstr, llist.size(), i, maxName, maxNim, maxProdi, maxFakultas, maxNIK, maxUniv, maxGender, maxEmail);
                    i++; // iterasi i
                }
            }
            // jika tidak ada elemen dalam list
            else
                cout << "There is no data list yet, please fill in the data list first!" << endl;
        }
        // jika pilih menu nomor 5 (keluar) -> dispay =1
        else if (nomor == 5)
        {
            cout << "Thank You for Using This Program!!" << endl;
            display = 1;
        }
        // Jika nomor yang dipilih tidak ada dalam menu
        else
            cout << "The menu does not exist, please select the menu correctly!" << endl;
    }
}
