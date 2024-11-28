#include <iostream>
using namespace std;


int tambah(int num1,int num2,int num3){
    int hasil= num1+num2+num3;
    return hasil;

}
int kurang(int num1,int num2,int num3){
    int hasil= num1-num2-num3;
    return hasil;

}
int bagi(int num1,int num2,int num3){
    int hasil= num1/num2/num3;
    return hasil;

}
int kali(int num1,int num2,int num3){
    int hasil= num1*num2*num3;
    return hasil;

}


// res = tambah(1,1,1)
void hasil(int num1, int num2, int num3, char op, int res){
    cout<< num1 << op << num2 << op << num3 << "=" << res<<endl;
}

int main(){

    int num1,num2,num3;
    char operasi;

   cout<< "masukkan angka 1 : "<<endl;
   cin>> num1;

   cout<< "masukkan angka 2 : "<<endl;
   cin>> num2;

   cout<< "masukkan angka 3 : "<<endl;
   cin>> num3;

   cout<< "masukkan operasi aritmatika : "<<endl;
   cin>> operasi;

   switch (operasi){
        case '+':
            hasil(num1, num2, num3, operasi, tambah(num1,num2,num3));
            break;
        case '-':
            hasil(num1, num2, num3, operasi, kurang(num1,num2,num3));
            break;                
        case '/':
            hasil(num1, num2, num3, operasi, bagi(num1,num2,num3));
            break;
        case '*':
            hasil(num1, num2, num3, operasi, kali(num1,num2,num3));
            break; 
     
   }

}
