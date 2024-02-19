#include <iostream>
#include <typeinfo>
using namespace std;

void fun(int* xx){
    cout << *xx << endl;
    cout << "Address inside function : " << &xx << endl;
    *xx = 20;
}

void fun2(){
    cout << "hello world" << endl;
}


int main(){

    // auto x = 10;
    // cout << typeid(x).name() << "---" << &x << endl;
    // fun(&x);
    // cout << string(12, '.') << endl;

    // auto* ptr_x = &x;
    // cout << typeid(ptr_x).name() << "----" << &ptr_x << endl;

    // cout << "the value of x afer the change: " << x << endl;

    // void (*fun_ptr)(int*) = fun;
    // cout << "Function address is: " << &fun_ptr << endl;
    // cout << &fun << endl;
    // cout << &fun2 << endl;
    
    // int pam = 99;
    // fun_ptr(&pam);

    int pa = 23;

    int* int_ptr = &pa;

    float* float_ptr =(float*)(int_ptr);
    float* float_ptr2 = reinterpret_cast < float*>(int_ptr);
    cout << float_ptr2 << endl;




}