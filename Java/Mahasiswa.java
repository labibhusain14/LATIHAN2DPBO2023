public class Mahasiswa extends Sivitas_Akademik{
    //Atribut Private:
    // NIM Mahasiswa
    private String nim;
    // Program Studi Mahasiswa
    private String prodi;
    // Fakultas Mahasiswa
    private String fakultas;

    Mahasiswa(){} // konstruktor Mahasiswa

    Mahasiswa(String nik,String nama,String Jenis_Kelamin,String Asal_universitas, String Email_edu, String nim, String prodi, String fakultas) {
        super(nik,nama,Jenis_Kelamin,Asal_universitas, Email_edu);
        // konstruktor langsung isi attribut
        this.nim = nim;
        this.prodi = prodi;
        this.fakultas = fakultas;
    }

    // Set NIM
    public void setNim(String nimMahasiswa) {
        this.nim = nimMahasiswa;
    }

    // Get NIM
    public String getNim() {
        return nim;
    }

    // Set Prodi
    public void setProdi(String programStudi) {
        this.prodi = programStudi;
    }

    // Get NIM
    public String getProdi() {
        return prodi;
    }
    
    // Set Fakultas
    public void setFakultas(String fakultas) {
        this.fakultas = fakultas;
    }

    // Get NIM
    public String getFakultas() {
        return this.fakultas;
    }
}