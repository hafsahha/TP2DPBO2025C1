<?php
require_once "PetShop.php";

class Aksesoris extends PetShop {
    private $jenis;
    private $bahan;
    private $warna;

    // Konstruktor
    public function __construct($id = 0, $nama_produk = "", $harga_produk = 0, $stok_produk = 0, $foto_produk = "", $jenis = "", $bahan = "", $warna = "") {
        parent::__construct($id, $nama_produk, $harga_produk, $stok_produk, $foto_produk);
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
    }

    // Setter methods
    public function set_jenis($jenis) {
        $this->jenis = $jenis;
    }

    public function set_bahan($bahan) {
        $this->bahan = $bahan;
    }

    public function set_warna($warna) {
        $this->warna = $warna;
    }

    // Getter methods
    public function get_jenis() {
        return $this->jenis;
    }

    public function get_bahan() {
        return $this->bahan;
    }

    public function get_warna() {
        return $this->warna;
    }
}
?>
