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

    // get set
    public void setNama(String namaHuman) {
        this.nama = namaHuman;
    }

    public String getNama() {
        return nama;
    }

    public void setNik(String nikHuman) {
        this.nik = nikHuman;
    }

    public String getNik() {
        return nik;
    }

    public void setJenis_kelamin(String Jenis_kelamin) {
        this.Jenis_kelamin = Jenis_kelamin;
    }

    public String getJenis_kelamin() {
        return this.Jenis_kelamin;
    }

}