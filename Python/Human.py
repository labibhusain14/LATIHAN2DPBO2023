# Mmebuat kelas HUman
class Human:
    # Membuat beberapa atirbut private
    # Nama Human
    __nama = ""
    # nik Human
    __nik = ""
    # jenis kelamin Human
    __Jenis_Kelamin = ""

    # Constructor with default initialization
    def __init__(self, nama="", nik="", Jenis_Kelamin=""):
        self.__nama = nama
        self.__nik = nik
        self.__Jenis_Kelamin = Jenis_Kelamin

    # Setter and Getter methods for private attributes
    # set Nama
    def setNama(self, nama):
        self.__nama = nama

    # Get Nama
    def getNama(self):
        return self.__nama

    # Set nik
    def setNIK(self, nik):
        self.__nik = nik

    # Get nik
    def getNik(self):
        return self.__nik

    # Set gender
    def setGender(self, Jenis_Kelamin):
        self.__Jenis_Kelamin = Jenis_Kelamin

    # Get gender
    def getGender(self):
        return self.__Jenis_Kelamin
