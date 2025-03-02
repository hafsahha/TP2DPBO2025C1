public class PetShop {
    private int id;                // ID untuk setiap produk
    private String nama_produk;     // Nama produk
    private double harga_produk;    // Harga produk
    private int stok_produk;        // Stok produk

    // Konstruktor default (tanpa parameter), menginisialisasi atribut dengan nilai default
    public PetShop() {
        this.id = 0;
        this.nama_produk = "";
        this.harga_produk = 0.0;
        this.stok_produk = 0;
    }

    // Konstruktor dengan parameter untuk menginisialisasi objek dengan nilai yang diberikan
    public PetShop(int id, String nama_produk, double harga_produk, int stok_produk) {
        this.id = id;
        this.nama_produk = nama_produk;
        this.harga_produk = harga_produk;
        this.stok_produk = stok_produk;
    }

    // Setter methods (sama dengan C++)
    public void set_id(int id) {
        this.id = id;
    }

    public void set_nama_produk(String nama_produk) {
        this.nama_produk = nama_produk;
    }

    public void set_harga_produk(double harga_produk) {
        this.harga_produk = harga_produk;
    }

    public void set_stok_produk(int stok_produk) {
        this.stok_produk = stok_produk;
    }

    // Getter methods (sama dengan C++)
    public int get_id() {
        return this.id;
    }

    public String get_nama_produk() {
        return this.nama_produk;
    }

    public double get_harga_produk() {
        return this.harga_produk;
    }

    public int get_stok_produk() {
        return this.stok_produk;
    }

}
