#include <iostream>
#include <limits>

using namespace std;

void fun(){

    cout << "hello!!!" << endl;

    return;
}


int main(){

    unsigned int x = numeric_limits < unsigned int > :: min();
    cout << x << endl;
    size_t xx = numeric_limits < size_t > :: max();
    cout << sizeof(size_t) << endl;
}