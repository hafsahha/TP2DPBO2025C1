public class Baju extends Aksesoris {
    private String untuk;   // Untuk jenis hewan apa (Anjing, Kucing, dll.)
    private String size;    // Ukuran baju (S, M, L, XL, dll.)
    private String merk;    // Merk baju

    // Konstruktor default
    public Baju() {
        super();  // Memanggil konstruktor default dari Aksesoris
        this.untuk = "";
        this.size = "";
        this.merk = "";
    }

    // Konstruktor dengan parameter
    public Baju(int id, String nama_produk, double harga_produk, int stok_produk, 
                String jenis, String bahan, String warna, String untuk, String size, String merk) {
        super(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna); // Memanggil konstruktor dari Aksesoris
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;
    }

    // Setter methods
    public void set_untuk(String untuk) {
        this.untuk = untuk;
    }

    public void set_size(String size) {
        this.size = size;
    }

    public void set_merk(String merk) {
        this.merk = merk;
    }

    // Getter methods
    public String get_untuk() {
        return this.untuk;
    }

    public String get_size() {
        return this.size;
    }

    public String get_merk() {
        return this.merk;
    }

}
