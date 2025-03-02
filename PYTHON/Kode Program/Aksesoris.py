from PetShop import PetShop

class Aksesoris(PetShop):
    __jenis = ""
    __bahan = ""
    __warna = ""

    def __init__(self, id=0, nama_produk="", harga_produk=0, stok_produk=0, jenis="", bahan="", warna=""):
        super().__init__(id, nama_produk, harga_produk, stok_produk)
        self.__jenis = jenis
        self.__bahan = bahan
        self.__warna = warna

    # Setter methods
    def set_jenis(self, jenis):
        self.__jenis = jenis

    def get_jenis(self):
        return self.__jenis

    def set_bahan(self, bahan):
        self.__bahan = bahan

    def get_bahan(self):
        return self.__bahan

    def set_warna(self, warna):
        self.__warna = warna

    def get_warna(self):
        return self.__warna
