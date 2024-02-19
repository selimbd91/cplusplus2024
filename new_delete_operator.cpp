#include <iostream>
#include <cstdlib>
using namespace std;

void* operator new (size_t size, int val){
    cout << "inside new operator and size is :" << size << endl;
    cout << "value: " << val <<endl;
    void* p = malloc(size);
    *static_cast < int* > (p) = val;
    return p;
}

void operator delete (void* p) noexcept {
    cout << "delete operator!!!" << endl;
    free(p);
}

int main(){

    int *ptr = new(65) int;
    cout << *ptr << endl;
    return 0;
}