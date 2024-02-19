#include <iostream>
using namespace std;


class MyClass {
private:
    string name;

public:
    MyClass(string name) : name {name} {}
    string get_name (){
        return name;
    }
    
};

int main(){
    
    MyClass myclass ("selim");
    cout << myclass.get_name() << endl;
}
