#include <iostream>
#include <string>
using namespace std;

// Struktur untuk menyimpan informasi menu
struct Menu {
    string nama;
    float harga;
};

int main() {
    // Daftar menu makanan dan harga
    Menu menu[] = {
        {"Caramel Macchiato", 22000},
        {"Kopi Susu Aren", 16000},
        {"Kopi Latte", 16000},
        {"Milk Tea Klasik", 16000},
        {"Milo", 16000}
    };

    // Simulasi input otomatis (misalnya 3 pesanan otomatis)
    int pesanan[3][2] = {
        {1, 2},  // Pesan 2 Caramel Macchiato
        {3, 1},  // Pesan 1 Kopi Latte
        {5, 3}   // Pesan 3 Milo
    };

    double totalHarga = 0;

    cout << "=== Kasir Restoran ===\n";
    cout << "Daftar Menu:\n";
    
    // Menampilkan daftar menu
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << menu[i].nama << " - Rp" << menu[i].harga << endl;
    }

    // Proses pesanan otomatis
    for (int i = 0; i < 3; i++) {
        int pilihanMenu = pesanan[i][0];  // Nomor menu (1-5)
        int jumlah = pesanan[i][1];       // Jumlah pesanan

        // Validasi nomor menu (harus antara 1 hingga 5)
        if (pilihanMenu < 1 || pilihanMenu > 5) {
            cout << "Nomor menu tidak valid! Pesanan " << i + 1 << " dibatalkan.\n";
            continue;
        }

        // Menghitung harga total pesanan
        double hargaPesanan = menu[pilihanMenu - 1].harga * jumlah;
        totalHarga += hargaPesanan;

        // Menampilkan rincian pesanan
        cout << "\nPesanan " << menu[pilihanMenu - 1].nama << " sebanyak " << jumlah
             << " x Rp" << menu[pilihanMenu - 1].harga << " = Rp" 
             << hargaPesanan << endl;
    }

    cout << "=======================================\n";
    // Menampilkan total harga
    cout << "\nTotal harga yang harus dibayar: Rp" << totalHarga << endl;
    cout << "Terima kasih telah berbelanja! Semoga hari Anda menyenankan.\n";

    return 0;
}
