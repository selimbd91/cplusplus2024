#include <iostream>
#include <memory>
using namespace std;


void exchange_number (shared_ptr<int>num1, shared_ptr<int>num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    cout << "i am here" << endl;
    cout << *num1 << "," << *num2 << endl;
}

int main(){
    shared_ptr <int > a = make_shared < int > (10);
    shared_ptr < int > b = make_shared < int > (23);

    int aa = 11, bb = 22;

    int* xx = &aa, *yy = &bb;

    cout << "Before: " << *a << ", " << *b << endl;
    exchange_number(a, b);
    cout << "After: " << *a << ", " << *b << endl;
}