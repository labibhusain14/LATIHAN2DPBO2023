public class Mahasiswa extends Sivitas_Akademik{
    // Nama Mahasiswa
    // private String nama;
    // Nim Mahasiswa
    private String nim;
    // Nim Mahasiswa
    // private String Jenis_kelamin;
    // Program Studi Mahasiswa
    private String prodi;
    // Fakultas Mahasiswa
    private String fakultas;

    Mahasiswa(){} // konstruktor Mahasiswa

    Mahasiswa(String nim, String prodi, String fakultas) {
        // konstruktor langsung isi attribut
        this.nim = nim;
        this.prodi = prodi;
        this.fakultas = fakultas;
    }

    // get set
    // public void setNama(String namaMahasiswa) {
    //     this.nama = namaMahasiswa;
    // }

    // public String getNama() {
    //     return nama;
    // }

    public void setNim(String nimMahasiswa) {
        this.nim = nimMahasiswa;
    }

    public String getNim() {
        return nim;
    }

    // public void setJenis_kelamin(String Jenis_kelamin) {
    //     this.Jenis_kelamin = Jenis_kelamin;
    // }

    // public String getJenis_kelamin() {
    //     return this.Jenis_kelamin;
    // }

    public void setProdi(String programStudi) {
        this.prodi = programStudi;
    }

    public String getProdi() {
        return prodi;
    }
    
    public void setFakultas(String fakultas) {
        this.fakultas = fakultas;
    }

    public String getFakultas() {
        return this.fakultas;
    }
}