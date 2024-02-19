#include <iostream>
using namespace std;

class Base {

    private:
        int *x {nullptr};

    public:
        // Base () : x {}
        Base (int val = 0) : x {new int (val)}
        {
            cout << "constructor!!!" << endl;
            cout << "Address: "  << this << endl;
        }
        ~Base(){
            delete x;
        }

        void check_address(){

            // cout << string(40, '*') << endl;
            cout << "Address: " << this << endl;
            cout << "Address of X : "<< x << endl;
            cout << "value inside address : " << *x << endl;
        }

        Base operator= (const Base& other){
            cout << this << endl;
            cout << &other << endl;

            // cout << "*this: " << this << endl;
            if (this != &other){
                *(*this).x = *other.x; 
            }
            return  *this;
        }
};

int main(){

    Base b (12);
    b.check_address();
    cout << string(40, '*')<< endl;
    Base bb;
    bb.check_address();
    cout << string(40, '-') << endl;
    bb = b;
    bb.check_address();

}