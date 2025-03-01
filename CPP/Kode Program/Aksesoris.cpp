#include <iostream>
#include <string>
#include "PetShop.cpp"

using namespace std;

// Deklarasi kelas Aksesoris yang merupakan turunan dari PetShop
class Aksesoris : public PetShop {
    private:
        string jenis;   // Jenis aksesoris (kalung, mainan, dll.)
        string bahan;   // Bahan aksesoris (plastik, kain, logam, dll.)
        string warna;   // Warna aksesoris

    public:
        // Konstruktor default
        Aksesoris() : PetShop() {
            this->jenis = "";
            this->bahan = "";
            this->warna = "";
        }

        // Konstruktor dengan parameter
        Aksesoris(int id, string nama_produk, double harga_produk, int stok_produk, string jenis, string bahan, string warna)
        : PetShop(id, nama_produk, harga_produk, stok_produk) {
            this->jenis = jenis;
            this->bahan = bahan;
            this->warna = warna;
        }

        // Setter methods
        void set_jenis(string jenis) {
            this->jenis = jenis;
        }

        void set_bahan(string bahan) {
            this->bahan = bahan;
        }

        void set_warna(string warna) {
            this->warna = warna;
        }

        // Getter methods
        string get_jenis() {
            return this->jenis;
        }

        string get_bahan() {
            return this->bahan;
        }

        string get_warna() {
            return this->warna;
        }

        // Destructor
        ~Aksesoris() {}
};
