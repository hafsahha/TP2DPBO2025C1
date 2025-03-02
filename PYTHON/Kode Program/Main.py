from Baju import Baju

def print_table(data):
    if not data:
        print("Tidak ada produk yang tersedia.")
    else:
        # Menentukan panjang maksimal untuk setiap kolom
        col_widths = [4, 20, 10, 18, 8, 8, 9, 15, 12, 5]

        # Cetak header tabel
        print("+------------------------------------------------------------------------------------------------------------------------------------------+")
        print("| {:<4} | {:<20} | {:<10} | {:<18} | {:<8} | {:<8} | {:<9} | {:<15} | {:<12} | {:<5} |".format(
            "ID", "Nama Produk", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk", "Harga", "Stok"))
        print("+------------------------------------------------------------------------------------------------------------------------------------------+")

        for item in data:
            print("| {:<4} | {:<20} | {:<10} | {:<18} | {:<8} | {:<8} | {:<9} | {:<15} | Rp{:<10,.0f} | {:<5} |".format(
                item.get_id(), item.get_nama_produk(), item.get_jenis(), item.get_bahan(), item.get_warna(),
                item.get_untuk(), item.get_size(), item.get_merk(), item.get_harga_produk(), item.get_stok_produk()))
        
        print("+------------------------------------------------------------------------------------------------------------------------------------------+")

def main():
    data = []

    # Menambahkan 5 produk awal ke dalam list
    data.append(Baju(1, "Hoodie Supreme Pet", 150000, 20, "Baju", "Fleece", "Merah", "Anjing", "L", "HypePet"))
    data.append(Baju(2, "Streetwear Meow", 135000, 12, "Baju", "Denim", "Hitam", "Kucing", "M", "PurrMode"))
    data.append(Baju(3, "Raincoat Pawshion", 175000, 10, "Aksesoris", "Waterproof Nylon", "Kuning", "Anjing", "XL", "Pawshion"))
    data.append(Baju(4, "Tuxedo GentlePaws", 250000, 6, "Baju", "Satin", "Hitam", "Kucing", "S", "GentlePaws"))
    data.append(Baju(5, "Bandana Rebel Tail", 95000, 15, "Aksesoris", "Cotton", "Merah", "Kelinci", "One Size", "Rebel Tail"))

    last_id = 5
    print("Masukkan Command yang diinginkan:\n- show\n- add\n- exit")

    while True:
        command = input("\nMasukkan perintah: ").strip().lower()

        if command == "add":  
            print("Masukkan detail produk baru:")

            nama = input("Masukkan Nama Produk: ").strip()
            jenis = input("Masukkan Jenis (Baju/Aksesoris): ").strip()
            bahan = input("Masukkan Bahan: ").strip()
            warna = input("Masukkan Warna: ").strip()
            untuk = input("Produk Untuk (Anjing/Kucing/dll.): ").strip()
            size = input("Masukkan Size (S, M, L, XL): ").strip()
            merk = input("Masukkan Merk: ").strip()
            
            try:
                harga = float(input("Masukkan Harga: ").strip())
                stok = int(input("Masukkan Stok: ").strip())
            except ValueError:
                print("Harga dan Stok harus berupa angka!")
                continue

            last_id += 1
            new_product = Baju(last_id, nama, harga, stok, jenis, bahan, warna, untuk, size, merk)
            data.append(new_product)

            print(f"Produk berhasil ditambahkan dengan ID: {last_id}")

        elif command == "show":  
            print_table(data)

        elif command == "exit":  
            print("Program selesai.")
            break

        else:
            print("Command tidak dikenali.")

if __name__ == "__main__":
    main()
