#include <iostream>
using namespace std;

int reverse_array(int rarr[], int size){

    if (size == 0)
        return rarr[0];
    else{
        
        size -= 1;
        cout << rarr[size] << " ";
        reverse_array(rarr, size);
        
    }
    return 0;
}

int main(){

    int arr[] {2, 3, 4, 5, 6, 7};
    
    int sizeOfArr = sizeof(arr) / sizeof(int);

    for (int i = 0; i < sizeOfArr; i++)
        cout << arr[i] << " ";
    cout << endl;

    for (int i = sizeOfArr -1; i>= 0; --i)
        cout << arr[i] << " ";
    cout << endl;

    reverse_array(arr, sizeOfArr);

}