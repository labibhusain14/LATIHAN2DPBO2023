import java.util.Scanner;
import java.util.ArrayList;

class Main {
    public static void main(String[] args) {
        Human kHuman;
        Mahasiswa kMahasiswa;
        Sivitas_Akademik kSiv_Akademik;
        kMahasiswa = new Mahasiswa();
        kMahasiswa.setNama("labib");
        kMahasiswa.setNik("2323989");
        kMahasiswa.setJenis_kelamin("L");
        kMahasiswa.setAsal_universitas("Universitas Pendidikan Indonesia");
        kMahasiswa.setEmail_edu("labib@upi.edu"); 
        kMahasiswa.setNim("210190");       
        kMahasiswa.setProdi("Ilmu Komputer");       
        kMahasiswa.setFakultas("FPMIPA");  

        System.out.println("Nama :" + kMahasiswa.getNama());
        System.out.println("NIK :" + kMahasiswa.getNik());
        System.out.println("Jenis Kelamin :" + kMahasiswa.getJenis_kelamin());             
        System.out.println("Email :" + kMahasiswa.getEmail_edu());
        System.out.println("Asal Universitas :" + kMahasiswa.getAsal_universitas());
        System.out.println("Nim :" + kMahasiswa.getNim());             
        System.out.println("Program Studi :" + kMahasiswa.getProdi());
        System.out.println("Fakultas :" + kMahasiswa.getFakultas());

    }
}


