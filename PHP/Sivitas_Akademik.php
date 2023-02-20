<?php
// import file
require('Human.php');

// Membuat kelas Sivitas_Akademik dengan pewarisan dari Human
class Sivitas_Akademik extends Human
{
    // Membuat atribut Private dari kelas Sivitas_Akademik
    private $asal_univ = '';
    private $email_edu = '';


    # Constructor with default initialization
    public function __construct($nama = '', $nik = '', $gender = '',  $image, $asal_univ = '', $email_edu = '')
    {
        # memanggil konstruktor dari kelas induk(superclass)
        parent::__construct($nama, $nik, $gender, $image);
        $this->asal_univ = $asal_univ;
        $this->email_edu = $email_edu;
    }

    # Setter and Getter methods for private attributes

    # Set asal_univ
    public function setUniv($univ)
    {
        $this->asal_univ = $univ;
    }

    # Get asal_univ
    public function getUniv()
    {
        return $this->asal_univ;
    }

    # Set email_edu
    public function setEmail($email)
    {
        $this->email_edu = $email;
    }

    # Get email_edu
    public function getEmail()
    {
        return $this->email_edu;
    }
}
