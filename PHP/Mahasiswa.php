<?php
require('Sivitas_Akademik.php');

// membuat kelas Mahasiswa dengan pewarisan dari kelas Sivitas_Akademik
class Mahasiswa extends Sivitas_Akademik
{
    // Membuat atribut Private dari kelas Sivitas_Akademik
    private $nim = '';
    private $prodi = '';
    private $fakultas = '';

    # Constructor with default initialization
    public function __construct($nama = '', $nik = '', $gender = '', $asal_univ = '',  $nim = '', $prodi = '', $fakultas = '',  $email_edu = '',  $image,)
    {
        # memanggil konstruktor dari kelas induk(superclass)
        parent::__construct($nama, $nik, $gender, $image, $asal_univ, $email_edu);
        $this->nim = $nim;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
    }

    # Setter and Getter methods for private attributes
    # Set Nim
    public function setNim($nimMahasiswa)
    {
        $this->nim = $nimMahasiswa;
    }

    # Get Nim
    public function getNim()
    {
        return $this->nim;
    }

    # Set Prodi
    public function setProdi($programStudi)
    {
        $this->prodi = $programStudi;
    }

    # Get Prodi
    public function getProdi()
    {
        return $this->prodi;
    }

    # Set Fakultas
    public function setFakultas($fakultas)
    {
        $this->fakultas = $fakultas;
    }

    # Get Fakultas
    public function getFakultas()
    {
        return $this->fakultas;
    }
}
