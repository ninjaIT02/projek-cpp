#include <iostream>
#include <string>
using namespace std;

void tampilkanProfil(string nama, string nim, string jeniskelamin, string asalkampus){
    cout<< nama <<endl;
    cout<< nim <<endl;
    cout<< jeniskelamin <<endl;
    cout<< asalkampus <<endl;
}

void detailMahasiswa(string jurusan,string semester,string targetipk){
    cout << jurusan <<endl;
    cout << semester <<endl;
    cout << targetipk <<endl;
}

int main(){
    string nama, jeniskelamin,asalkampus, jurusan,semester,targetipk,nim;

    cout<< " masukkan nama anda    : ";
    getline(cin, nama);
    cout<< "masukkan nim anda      : " ;
    cin >> nim;
    cout<< "masukkan jenis kelamin : "<<endl;
    cin>> jeniskelamin;
    cout<< "massukan asal kampus   : "<<endl;
    cin>> asalkampus;

    cout<< "masukkan jurusan    : "<< endl;
    cin>> jurusan;
    cout<< "masukkan semester   : "<< endl;
    cin>> semester;
    cout<< "masukkan target ipk : "<< endl;
    cin>> targetipk;

    tampilkanProfil(nama, nim, jeniskelamin,asalkampus);
    detailMahasiswa(jurusan,semester,targetipk);
    
    


    
}









