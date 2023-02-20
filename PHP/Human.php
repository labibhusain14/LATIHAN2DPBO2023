<?php
class Human
{
    // Membuat atribut Private dari kelas Human
    private $nama = '';
    private $nik = '';
    private $gender = '';
    private $image;

    # Constructor with default initialization
    public function __construct($nama = '', $nik = '', $gender = '',  $image)
    {
        $this->nama = $nama;
        $this->gender = $gender;
        $this->nik = $nik;
        $this->image = $image;
    }

    # Setter and Getter methods for private attributes

    # Set Nama
    public function setNama($namaMahasiswa)
    {
        $this->nama = $namaMahasiswa;
    }

    # Get Nama
    public function getNama()
    {
        return $this->nama;
    }

    # Set nik
    public function setNik($nik)
    {
        $this->nik = $nik;
    }

    # Get nik
    public function getNik()
    {
        return $this->nik;
    }

    # Set gender
    public function setGender($gender)
    {
        $this->gender = $gender;
    }

    # Get Gender
    public function getGender()
    {
        return $this->gender;
    }

    # Set Image
    public function setImage($image)
    {
        $this->image = $image;
    }

    # Get Image
    public function getImage()
    {
        return $this->image;
    }
}
