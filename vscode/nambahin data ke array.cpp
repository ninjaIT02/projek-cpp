#include <iostream>
#include <vector>
using namespace std;

int main(){

    string new_menu;

    vector<string> menus= {
        "caramel machiato",
        "kopi latte",
        "kopi susu aren ",
       "milo dino",
    };
    cout<< "data array : ";
    for (string menu : menus ){
        cout<< menu<<",";
    }

    cout << endl;
    cout<< "indekx ketiga: "<<menus[3]<<endl;
    cout<< "tambahan menu baru: ";
    cin>> new_menu;
    menus.push_back(new_menu);
    
    cout<< "data array baru : ";
    for(string menu : menus){
        cout<< menu<< ",";
    }
}