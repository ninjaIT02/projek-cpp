#include <iostream>

using namespace std;

int harga = 22;

float celciusToFarenheit(float celcius){
    return (celcius * 9.0 / 5.0) + 32;
}

float farenheitToCelcius(float farenheit){
    return (farenheit -32) * 5.0 / 9.0;
}

int main(){
    char restart_program;
    int choice;
    float temp, result;
    cout << "Konversi Suhu" << endl;
    cout << "1. Celcius > Farhenheit" << endl;
    cout << "2. Farhenheit > Celcius" << endl;
    cout << "Pilihan: ";
    cin >> choice;
    cout << "Masukkan suhu: ";
    cin >> temp;

    switch(choice){
        case 1:
            result = celciusToFarenheit(temp);
            break;
        case 2:
            result = farenheitToCelcius(temp);
            break;
        default:
            cout << "Fitur tidak tersedia" << endl;
    }

    cout << "Hasilnya: " << result << endl;
    cout << harga << endl;

    cout << "Apakah anda ingin mencoba kembali? (Y/N): ";
    cin >> restart_program;

    if(restart_program == 'Y' || restart_program == 'y') {
        cout << endl;
        main();
    } else {
        cout << "Program selesai" << endl;
    }
}