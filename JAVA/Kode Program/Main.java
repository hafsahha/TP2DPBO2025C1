import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    // Fungsi untuk menampilkan tabel produk
    public static void printTable(ArrayList<Baju> data) {
        if (data.isEmpty()) {
            System.out.println("Tidak ada produk yang tersedia.");
        } else {
            // Menentukan panjang maksimal untuk setiap kolom
            int width_id = 4, width_nama = 20, width_jenis = 10, width_bahan = 18, width_warna = 8,
                width_untuk = 8, width_size = 9, width_merk = 15, width_harga = 12, width_stok = 5;

            // Cetak header tabel
            System.out.println("+------------------------------------------------------------------------------------------------------------------------------------------+");
            System.out.printf("| %-4s | %-20s | %-10s | %-18s | %-8s | %-8s | %-9s | %-15s | %-12s | %-5s |\n",
                    "ID", "Nama Produk", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk", "Harga", "Stok");
            System.out.println("+------------------------------------------------------------------------------------------------------------------------------------------+");

            for (Baju it : data) {
                System.out.printf("| %-4d | %-20s | %-10s | %-18s | %-8s | %-8s | %-9s | %-15s | Rp%-10.0f | %-5d |\n",
                        it.get_id(), it.get_nama_produk(), it.get_jenis(), it.get_bahan(), it.get_warna(),
                        it.get_untuk(), it.get_size(), it.get_merk(), it.get_harga_produk(), it.get_stok_produk());
            }
            System.out.println("+------------------------------------------------------------------------------------------------------------------------------------------+");
        }
    }

    public static void main(String[] args) {
        ArrayList<Baju> data = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        // Menambahkan 5 produk awal ke dalam list
        data.add(new Baju(1, "Hoodie Supreme Pet", 150000, 20, "Baju", "Fleece", "Merah", "Anjing", "L", "HypePet"));
        data.add(new Baju(2, "Streetwear Meow", 135000, 12, "Baju", "Denim", "Hitam", "Kucing", "M", "PurrMode"));
        data.add(new Baju(3, "Raincoat Pawshion", 175000, 10, "Aksesoris", "Waterproof Nylon", "Kuning", "Anjing", "XL", "Pawshion"));
        data.add(new Baju(4, "Tuxedo GentlePaws", 250000, 6, "Baju", "Satin", "Hitam", "Kucing", "S", "GentlePaws"));
        data.add(new Baju(5, "Bandana Rebel Tail", 95000, 15, "Aksesoris", "Cotton", "Merah", "Kelinci", "One Size", "Rebel Tail"));

        int last_id = 5;
        String command;

        System.out.println("Masukkan Command yang diinginkan:\n- show\n- add\n- exit");

        do {
            System.out.print("\nMasukkan perintah: ");
            command = scanner.next();

            if (command.equals("add")) {  
                scanner.nextLine();  // Membuang newline dari buffer

                System.out.print("Masukkan Nama Produk: ");
                String nama = scanner.nextLine();

                System.out.print("Masukkan Jenis (Baju/Aksesoris): ");
                String jenis = scanner.nextLine();

                System.out.print("Masukkan Bahan: ");
                String bahan = scanner.nextLine();

                System.out.print("Masukkan Warna: ");
                String warna = scanner.nextLine();

                System.out.print("Produk Untuk (Anjing/Kucing/dll.): ");
                String untuk = scanner.nextLine();

                System.out.print("Masukkan Size (S, M, L, XL): ");
                String size = scanner.nextLine();

                System.out.print("Masukkan Merk: ");
                String merk = scanner.nextLine();

                System.out.print("Masukkan Harga: ");
                double harga = scanner.nextDouble();

                System.out.print("Masukkan Stok: ");
                int stok = scanner.nextInt();

                int new_id = ++last_id;

                Baju temp = new Baju(new_id, nama, harga, stok, jenis, bahan, warna, untuk, size, merk);
                data.add(temp);

                System.out.println("Produk berhasil ditambahkan dengan ID: " + new_id);
            } 

            else if (command.equals("show")) {  
                printTable(data);
            }

            else if (!command.equals("exit")) {  
                System.out.println("Command tidak dikenali.");
            }

        } while (!command.equals("exit"));

        scanner.close();
    }
}
