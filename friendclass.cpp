#include <iostream>
#include <string>
using namespace std;

class Single {
    private:
        int x;

    public:
        Single ();
        Single (int x);
        int getvalue();
        friend class SingleFriend;
};
Single :: Single(): x {0}
    {
        cout << "Default constructor!!!" << endl;
    }
Single :: Single(int x):
    x {x}
    {
        cout << "parameterized constructor." << endl;
    }

int Single :: getvalue(){
    return x;
}
class SingleFriend {

    public:
        void set_x (Single& obj, int value);
        void display(Single& obj);
};

void SingleFriend :: set_x (Single& obj, int value){
    obj.x = value;
}

void SingleFriend :: display(Single& obj){
    cout << "From friend frunction: " << obj.x << endl;
}


int main() {

    Single s;
    auto val = s.getvalue();
    cout << val << endl;

    SingleFriend ss;
    ss.set_x (s, 23);
    ss.display(s);
}