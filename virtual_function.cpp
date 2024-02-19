#include <iostream>
using namespace std;

class Base {
    public:
        virtual void fun(int x){
            cout << "Base function : " << x << endl;
        }

        void funna(int x, int y){
            cout << "Base funna "<< endl;
        }
};

class Derived : public Base {

    public:
        void fun(int x) override{
            cout << "Derived class :" << x << endl;
        }

        void fun2(){
            cout << "i am from Derived fun 2 class" << endl;
        }

        using Base :: funna;
        void funna(double x){
            cout << "derived funna" << endl;
        }
};

int main(){

    Derived d;
    Base b;
    // base class theke derived class a method invoke kora jai na but there is a way to call
    // if you use pointer or reference then you can call derived class fun from base class object
    // therefore, both base and derived function should have same function signature and base function name should be virtual
    // this process is known as dynamic binding

    // Base *bb = new Derived;
    // bb->fun(345);
    Base &bbb = d;
    d.fun(23);
    // d.funna(23, 25);
}