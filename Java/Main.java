import java.util.Scanner;
import java.util.ArrayList;

class Main {
    public static void main(String[] args) {

        Mahasiswa kMahasiswa;
        kMahasiswa = new Mahasiswa();
        kMahasiswa.setNama("labib"); // ambil nilai nama
        kMahasiswa.setNik("2323989"); // ambil nilai nik
        kMahasiswa.setJenis_kelamin("L");  // ambil nilai jenis kelamin
        kMahasiswa.setAsal_universitas("Universitas Pendidikan Indonesia"); // ambil nilai asal universitas
        kMahasiswa.setEmail_edu("labib@upi.edu");  // ambil nilai email edu
        kMahasiswa.setNim("210190");     // ambil nilai nim
        kMahasiswa.setProdi("Ilmu Komputer");       // ambil nilai prodi
        kMahasiswa.setFakultas("FPMIPA");   // ambil nilai fakultas

        System.out.println("Nama :" + kMahasiswa.getNama()); // print nama
        System.out.println("NIK :" + kMahasiswa.getNik()); // print nik
        System.out.println("Jenis Kelamin :" + kMahasiswa.getJenis_kelamin());   // print jenis kelamin          
        System.out.println("Email :" + kMahasiswa.getEmail_edu()); // print email
        System.out.println("Asal Universitas :" + kMahasiswa.getAsal_universitas()); // print universitas
        System.out.println("Nim :" + kMahasiswa.getNim());    // print nim          
        System.out.println("Program Studi :" + kMahasiswa.getProdi()); // print prodi
        System.out.println("Fakultas :" + kMahasiswa.getFakultas()); // print fakultas

    }
}


