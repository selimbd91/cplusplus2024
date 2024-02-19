#include <iostream>
using namespace std;

void print(void* ptr, char type){

    switch(type){
        case 'i' : {
            cout << *((int*)ptr) << endl;
            break;
        }
        case 'c': {
            cout << *static_cast<char*>(ptr) << endl;
            break;
        }
        default : {
            cout << "not found!!!" << endl;
        }
    }
}

int main(){

    long int val = 65;
    long int *val_ptr = &val;
    long int va = 0x16b4c70e8;
    cout << &val << endl;
    if (val_ptr == va)
        cout << "they are equal!!!";
    printf("Everythins is fine!!!/n");
}