#include <iostream>
using namespace std;

class Base {

    public:
        void fun(char a){
            cout << "base and void" << endl;
        }
};
class Derived : public Base {
    public:
        using Base::fun;
        int fun(int x){
            cout << "derived and int" << endl;
            return 0;
        }
};

int main(){

    Derived d;
    d.fun(1);
    d.fun('a');

}