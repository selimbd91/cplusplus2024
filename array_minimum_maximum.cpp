
#include <iostream>
#include <limits>
using namespace std;

int main(){

    int arr[] {4, 65, 2, 53, 55, 23};

    int max_val = numeric_limits < int > :: min();
    int min_val = numeric_limits < int > :: max();

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++){
        if (arr[i] > max_val) max_val = arr[i];
        if (arr[i] < min_val) min_val = arr[i];
    }

    cout << "Maximum value: " << max_val << endl;
    cout << "Minimum value " << min_val << endl;


}