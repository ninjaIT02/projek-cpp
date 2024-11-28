#include <iostream>
using namespace std;

int main(){
    int numbers[] = {11,2,31,4};
    int bitarray = sizeof(numbers);
    int bitdataarray = sizeof(numbers[0]);
    int ukuran = bitarray / bitdataarray;

    cout << bitarray << endl;
    cout << bitdataarray << endl;
    cout << ukuran << endl;

    
    for(int i = 0; i < ukuran; i++){
        cout << numbers[i] << endl;
    }

    // for(int number : numbers){
    //     cout << number << endl;
    // }
}