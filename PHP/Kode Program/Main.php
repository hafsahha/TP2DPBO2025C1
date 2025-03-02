<?php
require_once "Baju.php";

// Fungsi untuk menampilkan data dalam tabel HTML
function printTable($data) {
    if (empty($data)) {
        echo "<p>Tidak ada produk yang tersedia.</p>";
        return;
    }

    echo '<table border="1" cellspacing="0" cellpadding="8" style="border-collapse: collapse; width: 100%; text-align: center;">';
    echo '<tr style="background-color: #f2f2f2;">
            <th>ID</th>
            <th>Nama Produk</th>
            <th>Jenis</th>
            <th>Bahan</th>
            <th>Warna</th>
            <th>Untuk</th>
            <th>Size</th>
            <th>Merk</th>
            <th>Harga</th>
            <th>Stok</th>
            <th>Foto Produk</th>
          </tr>';

    foreach ($data as $item) {
        echo '<tr>
                <td>' . $item->get_id() . '</td>
                <td>' . $item->get_nama_produk() . '</td>
                <td>' . $item->get_jenis() . '</td>
                <td>' . $item->get_bahan() . '</td>
                <td>' . $item->get_warna() . '</td>
                <td>' . $item->get_untuk() . '</td>
                <td>' . $item->get_size() . '</td>
                <td>' . $item->get_merk() . '</td>
                <td>Rp' . number_format($item->get_harga_produk(), 0, ',', '.') . '</td>
                <td>' . $item->get_stok_produk() . '</td>
                <td><img src="img/' . $item->get_foto_produk() . '" width="50" onerror="this.src=\'img/default.png\';"></td>
              </tr>';
    }

    echo '</table>';
}

// Fungsi untuk menambahkan produk baru
function addProduct(&$data, $new_id, $nama, $jenis, $bahan, $warna, $untuk, $size, $merk, $harga, $stok, $foto_produk) {
    $new_product = new Baju($new_id, $nama, $harga, $stok, $foto_produk, $jenis, $bahan, $warna, $untuk, $size, $merk);
    $data[] = $new_product;
    echo "<p style='color: green;'>Produk berhasil ditambahkan dengan ID: " . $new_id . "</p>";
}

// Main program
function main() {
    // Inisialisasi data produk
    $data = [
        new Baju(1, "Hoodie Supreme Pet", 150000, 20, "hoodie_supreme_pet.jpeg", "Hoodie", "Fleece", "Merah", "Anjing", "L", "HypePet"),
        new Baju(2, "Streetwear Meow", 135000, 12, "streetwear_meow.jpeg", "Rompi", "Denim", "Biru", "Kucing", "M", "PurrMode"),
        new Baju(3, "Raincoat Pawshion", 175000, 10, "raincoat.jpg", "Jas Hujan", "Nylon", "Kuning", "Anjing", "XL", "Pawshion"),
        new Baju(4, "Tuxedo GentlePaws", 250000, 6, "tuxedo.jpg", "Tuxedo", "Satin", "Hitam", "Kucing", "S", "GentlePaws"),
        new Baju(5, "Bandana Rebel Tail", 95000, 15, "bandana.webp", "Bandana", "Cotton", "Merah", "Kelinci", "One Size", "Rebel_Tail")
    ];
    
    // Action 'show' - menampilkan tabel produk
    echo "<h2>Daftar Produk:</h2>";
    printTable($data);
    
    $last_id = count($data);  // ID terakhir berdasarkan jumlah data produk
    
    // Menambahkan produk baru (dengan data yang diberikan)
    $last_id++; // Menambahkan 1 untuk ID baru
    addProduct($data, $last_id, "Ultra Raincoat", "Jas Hujan", "PVC", "Biru", "Anjing", "One Size", "PawProtector", 180000, 12, "ultra_raincoat.jpeg");

    // Menampilkan tabel setelah penambahan produk
    echo "<h2>Daftar Produk Setelah Penambahan:</h2>";
    printTable($data);

}

// Jalankan fungsi utama
main();
?>
