public class Human {
    // Nama Human
    private String nama;
    // nik Human
    private String nik;
    // jenis kelamin Human
    private String Jenis_kelamin;


    Human(){} // konstruktor Human

    Human(String nama,String nik,String Jenis_kelamin) {
        // konstruktor langsung isi attribut
        this.nama = nama;
        this.nik = nik;
        this.Jenis_kelamin = Jenis_kelamin;
    }

    // set nama
    public void setNama(String namaHuman) {
        this.nama = namaHuman;
    }

    // get nama
    public String getNama() {
        return nama;
    }

    // set nik
    public void setNik(String nikHuman) {
        this.nik = nikHuman;
    }

    // get nik
    public String getNik() {
        return nik;
    }

    // set jenis kelamin
    public void setJenis_kelamin(String Jenis_kelamin) {
        this.Jenis_kelamin = Jenis_kelamin;
    }

    // get jenis kelamin
    public String getJenis_kelamin() {
        return this.Jenis_kelamin;
    }

}