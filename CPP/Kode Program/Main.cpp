#include <bits/stdc++.h>
#include <iomanip>
#include "Baju.cpp"

using namespace std;

void printTable(list<Baju> &data) {
    if (data.empty()) {
        cout << "Tidak ada produk yang tersedia.\n";
    } else {
        // Menentukan panjang maksimal untuk setiap kolom
        int width_id = 4, width_nama = 20, width_jenis = 10, width_bahan = 18, width_warna = 8, width_untuk = 8, width_size = 9, width_merk = 15, width_harga = 12, width_stok = 5;

        // Cetak header tabel
        cout << "+------------------------------------------------------------------------------------------------------------------------------------------+\n";
        cout << "| " << setw(width_id) << "ID" << " | "
             << setw(width_nama) << "Nama Produk" << " | "
             << setw(width_jenis) << "Jenis" << " | "
             << setw(width_bahan) << "Bahan" << " | "
             << setw(width_warna) << "Warna" << " | "
             << setw(width_untuk) << "Untuk" << " | "
             << setw(width_size) << "Size" << " | "
             << setw(width_merk) << "Merk" << " | "
             << setw(width_harga) << "Harga" << " | "
             << setw(width_stok) << "Stok" << " |\n";
        cout << "+------------------------------------------------------------------------------------------------------------------------------------------+\n";

        for (auto &it : data) {
            cout << "| " << setw(width_id) << it.get_id() << " | "
                 << setw(width_nama) << it.get_nama_produk() << " | "
                 << setw(width_jenis) << it.get_jenis() << " | "
                 << setw(width_bahan) << it.get_bahan() << " | "
                 << setw(width_warna) << it.get_warna() << " | "
                 << setw(width_untuk) << it.get_untuk() << " | "
                 << setw(width_size) << it.get_size() << " | "
                 << setw(width_merk) << it.get_merk() << " | "
                 << "Rp" << setw(width_harga - 2) << fixed << setprecision(0) << it.get_harga_produk() << " | "
                 << setw(width_stok) << it.get_stok_produk() << " |\n";
        }

        cout << "+------------------------------------------------------------------------------------------------------------------------------------------+\n";
    }
}

int main() {
    list<Baju> data;

    // Menambahkan 5 produk awal ke dalam list
    data.push_back(Baju(1, "Hoodie Supreme Pet", 150000, 20, "Hoodie", "Fleece", "Merah", "Anjing", "L", "HypePet"));
    data.push_back(Baju(2, "Streetwear Meow", 135000, 12, "Rompi", "Denim", "Biru", "Kucing", "M", "PurrMode"));
    data.push_back(Baju(3, "Raincoat Pawshion", 175000, 10, "Jas Hujan", "Nylon", "Kuning", "Anjing", "XL", "Pawshion"));
    data.push_back(Baju(4, "Tuxedo GentlePaws", 250000, 6, "Tuxedo", "Satin", "Hitam", "Kucing", "S", "GentlePaws"));
    data.push_back(Baju(5, "Bandana Rebel Tail", 95000, 15, "Bandana", "Cotton", "Merah", "Kelinci", "One Size", "Rebel_Tail"));

    int last_id = 5;
    string command;

    cout << "Masukan Command yang diinginkan:\n- show\n- add\n- exit\n";

    do {
        cout << "\nMasukan perintah: ";
        cin >> command;

        if (command == "add") {  
            string nama, jenis, bahan, warna, untuk, size, merk;
            double harga;
            int stok;

            cout << "Masukan Nama Produk: ";
            cin.ignore();
            getline(cin, nama);

            cout << "Masukan Jenis: ";
            cin >> jenis;

            cout << "Masukan Bahan: ";
            cin.ignore();
            getline(cin, bahan);

            cout << "Masukan Warna: ";
            cin >> warna;

            cout << "Produk Untuk (Anjing/Kucing/dll.): ";
            cin >> untuk;

            cout << "Masukan Size (S, M, L, XL): ";
            cin >> size;

            cout << "Masukan Merk: ";
            cin.ignore();
            getline(cin, merk);

            cout << "Masukan Harga: ";
            cin >> harga;

            cout << "Masukan Stok: ";
            cin >> stok;

            int new_id = ++last_id;

            Baju temp(new_id, nama, harga, stok, jenis, bahan, warna, untuk, size, merk);
            data.push_back(temp);

            cout << "Produk berhasil ditambahkan dengan ID: " << new_id << "\n";
        } 

        else if (command == "show") {  
            printTable(data);
        }

        else if (command != "exit") {  
            cout << "Command tidak dikenali.\n";
        }

    } while (command != "exit");

    return 0;
}
