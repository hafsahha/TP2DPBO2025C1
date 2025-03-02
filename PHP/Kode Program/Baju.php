<?php
require_once "Aksesoris.php";

class Baju extends Aksesoris {
    private $untuk;
    private $size;
    private $merk;

    // Konstruktor
    public function __construct($id = 0, $nama_produk = "", $harga_produk = 0, $stok_produk = 0, $foto_produk = "", $jenis = "", $bahan = "", $warna = "", $untuk = "", $size = "", $merk = "") {
        parent::__construct($id, $nama_produk, $harga_produk, $stok_produk, $foto_produk, $jenis, $bahan, $warna);
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk = $merk;
    }

    // Setter methods
    public function set_untuk($untuk) {
        $this->untuk = $untuk;
    }

    public function set_size($size) {
        $this->size = $size;
    }

    public function set_merk($merk) {
        $this->merk = $merk;
    }

    // Getter methods
    public function get_untuk() {
        return $this->untuk;
    }

    public function get_size() {
        return $this->size;
    }

    public function get_merk() {
        return $this->merk;
    }
}
?>