#include <iostream>
using namespace std;

string bilanganGanjil(int angka) {
    // Jika angka dibagi 2 sisa bagiannya 0, berarti angka genap
    if (angka % 2 == 0) {
        return "genap";  // Mengembalikan "genap" jika angka genap
    } else {
        return "ganjil";  // Mengembalikan "ganjil" jika angka ganjil
    }
}

int main() {
    int angka;
    char restart_program;  // Variabel untuk menanyakan apakah ingin memasukkan angka lagi

    
        // Meminta pengguna untuk memasukkan angka
        cout << "Masukkan bilangan bulat: " << endl;
        cin >> angka;

        // Mengecek apakah angka genap atau ganjil
        if (bilanganGanjil(angka) == "genap") {
            cout << angka << " adalah bilangan genap." << endl;
        } else {
            cout << angka << " adalah bilangan ganjil." << endl;
        }

        // Menanyakan apakah pengguna ingin memasukkan angka lagi
        cout << "Apakah ingin menentukan bilangan lagi? (Y/N): ";
        cin >> restart_program;

     if(restart_program == 'Y' || restart_program == 'y') {
        cout << endl;
        main();
    } else {
        cout << "Program selesai" << endl;
    }
}
