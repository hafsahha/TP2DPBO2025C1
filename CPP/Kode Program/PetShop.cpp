#include <iostream>
#include <string>

using namespace std;

// Deklarasi kelas PetShop yang merepresentasikan produk di toko hewan peliharaan
class PetShop {
    private:
        int id;                // ID untuk setiap produk
        string nama_produk;     // Nama produk
        double harga_produk;    // Harga produk
        int stok_produk;        // Stok produk

    public:
        // Konstruktor default (tanpa parameter), menginisialisasi atribut dengan nilai default
        PetShop() {
            this->id = 0;
            this->nama_produk = "";
            this->harga_produk = 0.0;
            this->stok_produk = 0;
        }

        // Konstruktor dengan parameter untuk menginisialisasi objek dengan nilai yang diberikan
        PetShop(int id, string nama_produk, double harga_produk, int stok_produk) {
            this->id = id;
            this->nama_produk = nama_produk;
            this->harga_produk = harga_produk;
            this->stok_produk = stok_produk;
        }

        // Setter methods
        void set_id(int id) {
            this->id = id;
        }

        void set_nama_produk(string nama_produk) {
            this->nama_produk = nama_produk;
        }

        void set_harga_produk(double harga_produk) {
            this->harga_produk = harga_produk;
        }

        void set_stok_produk(int stok_produk) {
            this->stok_produk = stok_produk;
        }

        // Getter methods
        int get_id() {
            return this->id;
        }

        string get_nama_produk() {
            return this->nama_produk;
        }

        double get_harga_produk() {
            return this->harga_produk;
        }

        int get_stok_produk() {
            return this->stok_produk;
        }

        // Destruktor
        ~PetShop() {}
};
