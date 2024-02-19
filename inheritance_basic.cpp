#include <iostream>
using namespace std;

class Base {

    private:
        int x {10};
    public:
        int xx {100};
        int get_x(){
            return x;
        }
};

class Derived : private Base {

    private:
        int y {20};

    public:
        int yy {200};
        int get_y (){
            return y;
        }

        int get_base_x(){
            return xx;
        }

};

int main(){
    
    Derived d;
    cout << d.get_base_x() << endl;
    // cout << d.xx << endl;
}