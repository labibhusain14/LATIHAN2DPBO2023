# Membuat kelas table
class Table:
    # Membuat atribut Private
    # banyaknya baris dan kolom
    __baris = 0
    __kolom = 0

    # Constructor with default initialization
    def __init__(self, baris=0, kolom=0):
        self.__baris = baris
        self.__kolom = kolom

    # Setter and Getter methods for private attributes
    # Set Baris
    def setBaris(self, baris):
        self.__baris = baris

    # Get Baris
    def getBaris(self):
        return self.__baris

    # Set KOlom
    def setKolom(self, kolom):
        self.__kolom = kolom

    # Get KOlom
    def getKolom(self):
        return self.__kolom

    # Membuat Metode untuk buat tabel
    def buatBaris(self, isi, batas, idx, name, nim, prodi, fakultas, nik, gender, univ, email):
        i = 0
        j = 0

        # jika index = 0 (membuat kerangka tabel atas)
        if idx == 0:
            print("+", end="")
            # Membuat perulangan sebanyak 9x(banyak jumlah elemen dalam 1 baris)
            for i in range(9):
                # jika i = 0
                if i == 0:
                    # Membuat perulangan untuk garis sebanyak 4x("No" + 2spasi)
                    for j in range(4):
                        print("-", end="")
                # jika i = 1
                if i == 1:
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris nama + 2spasi
                    print("+", end="")
                    for j in range(name + 2):
                        print("-", end="")
                # jika i = 2
                if i == 2:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris nik + 2spasi
                    for j in range(nik + 2):
                        print("-", end="")
                # jika i = 3
                if i == 3:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris gender + 2spasi
                    for j in range(gender + 2):
                        print("-", end="")
                # jika i = 4
                if i == 4:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris univ + 2spasi
                    for j in range(univ + 2):
                        print("-", end="")
                # jika i = 5
                if i == 5:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris Nim + 2spasi
                    for j in range(nim + 2):
                        print("-", end="")
                # jika i = 6
                if i == 6:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanajgn pada baris prodi + 2spasi
                    for j in range(prodi + 2):
                        print("-", end="")
                # jika i = 7
                if i == 7:
                    print("+", end="")
                    # Membuat perulangan  untuk garis sebanyak kata terpanajgn pada fakultas + 2spasi
                    for j in range(fakultas + 2):
                        print("-", end="")
                # jika i = 8
                if i == 8:
                    print("+", end="")
                    # Membuat perulangan  untuk garis sebanyak kata terpanajgn pada email + 2spasi
                    for j in range(email + 2):
                        print("-", end="")
            print("+")

        # buat baris untuk judul
        if idx == 0:
            print("|No  ", end="")
            print("|Nama", end="")
            for j in range(name - 2):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|NIK", end="")
            for j in range(nik - 1):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|Gender", end="")
            for j in range(gender - 4):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|Universitas", end="")
            for j in range(univ - 9):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|NIM", end="")
            for j in range(nim - 1):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|Prodi", end="")
            for j in range(prodi - 3):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|Fakultas", end="")
            for j in range(fakultas - 6):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|Email", end="")
            for j in range(email - 3):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|")

        # jika index = 0 (membuat kerangka tabel bawah judul)
        if idx == 0:
            #  Ujung kiri tabel
            print("+", end="")
            for i in range(9):
                if i == 0:
                    # Membuat perulangan untuk garis sebanyak 4
                    for j in range(4):
                        print("-", end="")
                if i == 1:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris nama + 2spasi
                    for j in range(name + 2):
                        print("-", end="")
                if i == 2:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris nik + 2spasi
                    for j in range(nik + 2):
                        print("-", end="")
                if i == 3:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris gender + 2spasi
                    for j in range(gender + 2):
                        print("-", end="")
                if i == 4:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris univ + 2spasi
                    for j in range(univ + 2):
                        print("-", end="")
                if i == 5:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris nim + 2spasi
                    for j in range(nim + 2):
                        print("-", end="")
                if i == 6:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris prodi + 2spasi
                    for j in range(prodi + 2):
                        print("-", end="")
                if i == 7:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris fakultas + 2spasi
                    for j in range(fakultas + 2):
                        print("-", end="")
                if i == 8:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris email + 2spasi
                    for j in range(email + 2):
                        print("-", end="")
            # penutup table(ujung kanan)
            print("+")

        # buat baris isi kolom atribut
        for i in range(9):
            if i == 0:
                # tampil nomor
                print("|" + isi[i] + "   ", end="")
            elif i == 1:
                # tampil nama
                print("|" + isi[i], end="")
                for j in range(name - len(isi[i]) + 2):
                    print(" ", end="")
            elif i == 2:
                # tampil nik
                print("|" + isi[i], end="")
                for j in range(nik - len(isi[i]) + 2):
                    print(" ", end="")
            elif i == 3:
                # tampil gender
                print("|" + isi[i], end="")
                for j in range(gender - len(isi[i]) + 2):
                    print(" ", end="")
            elif i == 4:
                # tampil univ
                print("|" + isi[i], end="")
                for j in range(univ - len(isi[i]) + 2):
                    print(" ", end="")
            elif i == 5:
                # tampil nim
                print("|" + isi[i], end="")
                for j in range(nim - len(isi[i]) + 2):
                    print(" ", end="")
            elif i == 6:
                # tampil prodi
                print("|" + isi[i], end="")
                for j in range(prodi - len(isi[i]) + 2):
                    print(" ", end="")
            elif i == 7:
                # tampil fakultas
                print("|" + isi[i], end="")
                for j in range(fakultas - len(isi[i]) + 2):
                    print(" ", end="")
            elif i == 8:
                # tampil email
                print("|" + isi[i], end="")
                for j in range(email - len(isi[i]) + 2):
                    print(" ", end="")
            # Membuat garis penutup table pada setiap atibut baris
            if i == (9 - 1):
                print("|")
        # print("")

        # Membuat kerangka tabel pada baris tearkhir
        if idx == batas - 1:
            print("+", end="")
            for i in range(9):
                if i == 0:
                    # Membuat perulangan sebanyak 4x("No" + 2spasi)
                    for j in range(4):
                        print("-", end="")
                if i == 1:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanjang pada baris nama + 2spasi
                    for j in range(name + 2):
                        print("-", end="")
                if i == 2:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanjang pada baris nik + 2spasi
                    for j in range(nik + 2):
                        print("-", end="")
                if i == 3:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanjang pada baris gender + 2spasi
                    for j in range(gender + 2):
                        print("-", end="")
                if i == 4:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanjang pada baris univ + 2spasi
                    for j in range(univ + 2):
                        print("-", end="")
                if i == 5:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanjang pada baris Nim + 2spasi
                    for j in range(nim + 2):
                        print("-", end="")
                if i == 6:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanajgn pada baris prodi + 2spasi
                    for j in range(prodi + 2):
                        print("-", end="")
                if i == 7:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanajgn pada fakultas + 2spasi
                    for j in range(fakultas + 2):
                        print("-", end="")
                if i == 8:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanajgn pada email + 2spasi
                    for j in range(email + 2):
                        print("-", end="")
            # ujung kanan table
            print("+")
