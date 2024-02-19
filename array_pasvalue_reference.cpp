#include <iostream>
using namespace std;

void print_arr(int* arr, int siz){

    for (int i = 0; i < siz; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int* change(int* arr){
    arr[3] = 54;

    return arr;

}

int main(){

    int arr[4] {3, 4, 5, 6};

    print_arr(arr, 4);
    int* arr3 = change(arr);
    print_arr(arr, 4);
}