#include <iostream>

using namespace std;

int main() {
    // variabel
    int jumlahBarang;
    int hargaBarang;

    //input dari pengguna
    cout << "Masukkan Jumlah Barang   : ";
    cin >> jumlahBarang;
    cout << "Masukkan Harga Barang    : ";
    cin >> hargaBarang;

    // Menghitung total harga
    int totalHarga = jumlahBarang * hargaBarang;

    // Menampilkan total harga
    cout << "Harga Yang Harus di Bayar : Rp" << totalHarga << endl;

    // Menghitung diskon berdasarkan jumlah barang
    double diskon;
    if (jumlahBarang > 100) {
        diskon = totalHarga * 0.15;
    } else {
        diskon = totalHarga * 0.05;
    }

    // Menghitung harga akhir setelah diskon
    int hargaAkhir = totalHarga - diskon;

    // Menampilkan diskon dan harga akhir
    cout << "Anda Mendapat Diskon " << (jumlahBarang > 100 ? "15%" : "5%") << " Sebesar : Rp" << diskon << endl;
    cout << "Harga Yang Harus di Bayar Setelah Mendapat Diskon : Rp" << hargaAkhir << endl;

    return 0;
}

