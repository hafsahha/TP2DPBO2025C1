from Aksesoris import Aksesoris

class Baju(Aksesoris):
    __untuk = ""
    __size = ""
    __merk = ""

    def __init__(self, id=0, nama_produk="", harga_produk=0, stok_produk=0, jenis="", bahan="", warna="", untuk="", size="", merk=""):
        super().__init__(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna)
        self.__untuk = untuk
        self.__size = size
        self.__merk = merk

    # Setter methods
    def set_untuk(self, untuk):
        self.__untuk = untuk

    def get_untuk(self):
        return self.__untuk

    def set_size(self, size):
        self.__size = size

    def get_size(self):
        return self.__size

    def set_merk(self, merk):
        self.__merk = merk

    def get_merk(self):
        return self.__merk
