#include <iostream>
#include <string>
using namespace std;

void profil(){
string nama, ni, jeniskelamin , asalkampus;

cout<< " masukkan nama lengkap kamu : "<<endl;
getline(cin,nama);

cout<< " masukkan nim : "<<endl;
cin>> ni;

cout<< " masukkan  juenis kelamin mu : "<<endl;
cin>> jeniskelamin;


cout<< " masukkan asal kampus: "<<endl;
cin>> asalkampus;

cout<< "nama mu : "<< nama<<endl;
cout << "nim :    "<< ni<<endl;
cout << "gender : "<< jeniskelamin<<endl;
cout<< "asal kampus : "<<asalkampus<<endl;
}

void mahasiswa(){
string jurusan, semester,targetipk;



cout<< " masukkan jurusan  : "<<endl;
cin>> jurusan;

cout<< " masukkan semester sekarang: "<<endl;
cin>> semester;

cout<< " masukkan  target ipk : "<<endl;
cin>> targetipk;

cout<< "jurusan : "<< jurusan<<endl;
cout << "semester:    "<< semester<<endl;
cout << "target ipk : "<< targetipk<<endl;

}

int main(){
    profil();
    mahasiswa();
    
}







