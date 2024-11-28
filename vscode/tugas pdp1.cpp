#include <iostream>
using namespace std;

 double celciusTofarenheit(float celcius){
    return (celcius*9.0/ 5.0)+32.0;
 }
 double farenheitTocelcius(float farenheit){
    return (farenheit- 32.0)*5.0/9.0;
 }

 int main(){
    char pilihan;
    double suhu;

    cout << "KONVERSI SUHU CELCIUS KE FARENHEIT"<<endl;

    cout<< "==================================="<<endl;

    cout<< "pilih konversi:\n";
    cout << "celcius ke farenhheit:"<< endl;
    cout << "farenheit ke celcius :"<< endl;

    cout <<"==============================="<<endl;

    cout<< "pilih (1 atau 2, atau 0 untuk keluar) : ";

    while (!(cin>>pilihan) || (pilihan != 1&& pilihan !=2 && pilihan !=0)) {
    }


        if (pilihan == 0 ) break;

        cout<< "masukkan "

 }