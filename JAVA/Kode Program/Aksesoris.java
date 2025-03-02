public class Aksesoris extends PetShop {
    private String jenis;   // Jenis aksesoris (kalung, mainan, dll.)
    private String bahan;   // Bahan aksesoris (plastik, kain, logam, dll.)
    private String warna;   // Warna aksesoris

    // Konstruktor default
    public Aksesoris() {
        super();  // Memanggil konstruktor default dari PetShop
        this.jenis = "";
        this.bahan = "";
        this.warna = "";
    }

    // Konstruktor dengan parameter
    public Aksesoris(int id, String nama_produk, double harga_produk, int stok_produk, String jenis, String bahan, String warna) {
        super(id, nama_produk, harga_produk, stok_produk); // Memanggil konstruktor dari PetShop
        this.jenis = jenis;
        this.bahan = bahan;
        this.warna = warna;
    }

    // Setter methods
    public void set_jenis(String jenis) {
        this.jenis = jenis;
    }

    public void set_bahan(String bahan) {
        this.bahan = bahan;
    }

    public void set_warna(String warna) {
        this.warna = warna;
    }

    // Getter methods
    public String get_jenis() {
        return this.jenis;
    }

    public String get_bahan() {
        return this.bahan;
    }

    public String get_warna() {
        return this.warna;
    }

}
