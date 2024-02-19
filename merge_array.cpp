#include <iostream>
using namespace std;

int* sort_concat(int *arr1, int* arr2, int size_a, int size_b, int* arr3){

    int i = 0, j = 0, k = 0;
    while (i < size_a && j < size_b){
        if (arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    while (i < size_a){
        arr3[k++] = arr1[i++];
    }
    while (j < size_b){
        arr3[k++] = arr2[j++];
    }

    return arr3;
}

int main(){

    int arr1[] = {2,3, 4, 5};
    int arr2 [] {6, 7, 8, 9};
    
    int arr3[8];
    
    const int* arr4 = sort_concat(arr1, arr2, 4, 4, arr3);

    for (int i = 0; i <8; i++)
        cout << arr4[i] << " ";
    cout << endl;
}