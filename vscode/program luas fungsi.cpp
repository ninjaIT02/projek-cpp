#include <iostream>
using namespace std;

float operasiLuas(float s){
    return 6*s*s;
}

float operasiKeliling(float s){
    return 12*s;
}

void hasil(float hasilluas, float hasilkeliling){
    cout<< "luas nya adalah : "<< hasilluas <<endl;
    cout<< "kelilingnya adalah : "<< hasilkeliling << endl;
    
}

int main(){

    float sisi,luas,keliling;

    cout << "masukkan sisi : "<<endl;
    cin>> sisi;

    luas = operasiLuas(sisi);

    keliling = operasiKeliling(sisi);

    hasil(luas,keliling);




}
