public class Sivitas_Akademik extends Human{
    // asal_universitas Sivitas_Akademik
    private String asal_universitas;
    // email_edu Sivitas_Akademik
    private String email_edu;

    Sivitas_Akademik(){} // konstruktor Sivitas_Akademik

    Sivitas_Akademik(String nik,String nama, String Jenis_Kelamin, String asal_universitas,String email_edu){
        // konstruktor langsung isi attribut
        super(nik, nama, Jenis_Kelamin);
        this.asal_universitas = asal_universitas;
        this.email_edu = email_edu;
    }

    // set asal Universitas
    public void setAsal_universitas(String asal_universitasSivitas_Akademik) {
        this.asal_universitas = asal_universitasSivitas_Akademik;
    }

    // get asal Universitas
    public String getAsal_universitas() {
        return this.asal_universitas;
    }

    // set email edu
    public void setEmail_edu(String email_eduSivitas_Akademik) {
        this.email_edu = email_eduSivitas_Akademik;
    }

    // get Email edu
    public String getEmail_edu() {
        return this.email_edu;
    }

}