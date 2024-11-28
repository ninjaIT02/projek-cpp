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
     
     
    int jumlahPesanan;
    double totalHarga = 0;
    char lanjut;

    cout << "=== Kasir Restoran ===\n";
    cout << "Daftar Menu:\n";
    

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << menu[i].nama << " - Rp" << menu[i].harga << endl;
    }

    
        int pilihanMenu, jumlah;
        
        cout << "\nMasukkan nomor menu yang ingin dipesan (1-5): ";
        cin >> pilihanMenu;

        
        if (pilihanMenu < 1 || pilihanMenu > 5) {
            cout << "Pilihan tidak valid, silakan pilih antara 1 hingga 5.\n";
            
        }

        cout << "Masukkan jumlah pesanan: ";
        cin >> jumlah;

        
        totalHarga += menu[pilihanMenu - 1].harga * jumlah;
        
        cout << "\nPesanan " << menu[pilihanMenu - 1].nama << " sebanyak " << jumlah 
             << " x Rp" << menu[pilihanMenu - 1].harga << " = Rp" 
             << menu[pilihanMenu - 1].harga * jumlah << endl;
        
        cout << "=======================================\n";

        
        cout << "\nApakah ingin menambah pesanan lagi? (y/n): ";
        cin >> lanjut;

     if(lanjut == 'y' || lanjut == 'Y'){
        main();
     } 
     else{
        cout<< "terima kasih sudah berbelanja."<<endl;
     }

    cout << "\nTotal harga yang harus dibayar: Rp" << totalHarga << endl;

    cout << "Terima kasih telah berbelanja! Semoga hari Anda menyenankan.\n";


}
