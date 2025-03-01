#include <iostream>
#include <string>
#include "Aksesoris.cpp"

using namespace std;

// Deklarasi kelas Baju yang merupakan turunan dari Aksesoris
class Baju : public Aksesoris {
    private:
        string untuk;   // Untuk jenis hewan apa (Anjing, Kucing, dll.)
        string size;    // Ukuran baju (S, M, L, XL, dll.)
        string merk;    // Merk baju

    public:
        // Konstruktor default
        Baju() : Aksesoris() {
            this->untuk = "";
            this->size = "";
            this->merk = "";
        }

        // Konstruktor dengan parameter
        Baju(int id, string nama_produk, double harga_produk, int stok_produk, string jenis, string bahan, string warna,
             string untuk, string size, string merk)
        : Aksesoris(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna) {
            this->untuk = untuk;
            this->size = size;
            this->merk = merk;
        }

        // Setter methods
        void set_untuk(string untuk) {
            this->untuk = untuk;
        }

        void set_size(string size) {
            this->size = size;
        }

        void set_merk(string merk) {
            this->merk = merk;
        }

        // Getter methods
        string get_untuk() {
            return this->untuk;
        }

        string get_size() {
            return this->size;
        }

        string get_merk() {
            return this->merk;
        }

        // Destructor
        ~Baju() {}
};
