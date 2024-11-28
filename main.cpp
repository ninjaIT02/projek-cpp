#include <iostream>
using namespace std;

int main(){

int i ,j , n=5;

i= n;
while (i <=n){
    j=1;
    while(j <= n-1){
        cout<< " ";
        j++;
    }
    j=1;
    while (j<= 2* i - 1 ){
    cout<< "*";
    j++;
}
cout << endl;
    i++;
}


}