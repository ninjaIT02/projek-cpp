#include <iostream>
using namespace std;

int perhitunganHargaTiket(int kategori, int jam) {
    int harga;

    switch (kategori){
        case 1:
            if(jam < 12) {
                harga = 20000;
                return harga;
            } else if (jam >= 12 && jam < 18) {
                harga = 30000;
                return harga;
            } else if (jam >= 18 && jam <= 24) {
                harga = 35000;
                return harga;
            } else {
                return 0;
            }
        case 2:
            if(jam < 12) {
                harga = 30000;
                return harga;
            } else if (jam >= 12 && jam < 18) {
                harga = 35000;
                return harga;
            } else if (jam >= 18 && jam <= 24) {
                harga = 40000;
                return harga;
            } else {
                return 0;
            }
        case 3:
            if(jam < 12) {
                harga = 40000;
                return harga;
            } else if (jam >= 12 && jam < 18) {
                harga = 45000;
                return harga;
            } else if (jam >= 18 && jam <= 24) {
                harga = 50000;
                return harga;
            } else {
                return 0;
            }
        default:
            return 0;
    }
}

int main()
{
    int kategori, jam, hasil;

    cout << "Aplikasi penentuan harga tiket" << endl;
    cout << "Kategori: " << endl;
    cout << "1. Anak-anak" << endl;
    cout << "2. Dewasa" << endl;
    cout << "3. Lansia" << endl;
    
    cout << "Masukkan kategori: ";
    cin >> kategori;
    cout << "Masukkan jam: ";
    cin >> jam;

    hasil = perhitunganHargaTiket(kategori, jam);

    if(hasil == 0) {
        cout << "Input dengan benar";
    } else {
        cout << "harga tiket anda " << hasil << endl;
    }
}

