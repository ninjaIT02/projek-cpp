#include <iostream>
using namespace std;

int main(){

  cout<< "\nloop 1.\n";
for(int t=1; t<=20; t++){ 
    cout<< t <<endl;
}
cout << "selamat anda benar"<<endl;

cout << "\nloop 2.\n";
for(int t=1; t<=23; t+=2){
    cout<< t<< endl;

}
cout<< "akhir perljalanan."<<endl;

cout<< "\nloop 3.\n";
for(int t=20; t>=1; t--){ 
    cout<< t <<endl;
}
cout << "selamat anda benar"<<endl;

cout << "\nloop 4.\n";
int total=0;
for(int t=1; t<=10;  total += 1, t++){
    cout<< t<< "||"<<total<< endl;

}
cout<< "akhir perljalanan."<<endl;

}