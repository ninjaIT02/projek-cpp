#include <iostream>
using namespace std;

void bintang(int i){
    for (int j = i; j<=6; j++){
    for (int k= 1; k<=j; k++){
        cout << "*";
    }
    cout<<endl;
    }

}
int main(){
    int i;
    cout<< "masukkan angka untuk membuat bintang: "<<endl;
    cin>> i;

    bintang(i);
}