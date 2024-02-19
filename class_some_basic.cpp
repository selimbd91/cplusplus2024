#include <iostream>
using namespace std;

class User {
    private:
        string name {"selim"};
        string kk {"soer"};

    public:
        User(int value, string some){cout << "not default constructor!!!"<< value  << "Some : "<< some<< endl;}
        void display(){cout << "class member name: " << name <<endl;}

        int& take_value(int&& x){cout << &x << endl; x+= 5; return x;}
};

int main(){

    User one(23, "selim");
    User* two = &one;
    two->display();

}