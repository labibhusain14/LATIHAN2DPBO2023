public class Sivitas_Akademik extends Human{
    // asal_universitas Sivitas_Akademik
    private String asal_universitas;
    // email_edu Sivitas_Akademik
    private String email_edu;

    Sivitas_Akademik(){} // konstruktor Sivitas_Akademik

    Sivitas_Akademik(String asal_universitas,String email_edu){
        // konstruktor langsung isi attribut
        this.asal_universitas = asal_universitas;
        this.email_edu = email_edu;
    }

    // get set
    public void setAsal_universitas(String asal_universitasSivitas_Akademik) {
        this.asal_universitas = asal_universitasSivitas_Akademik;
    }

    public String getAsal_universitas() {
        return this.asal_universitas;
    }

    public void setEmail_edu(String email_eduSivitas_Akademik) {
        this.email_edu = email_eduSivitas_Akademik;
    }

    public String getEmail_edu() {
        return this.email_edu;
    }

}