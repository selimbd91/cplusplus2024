#include <iostream>
using namespace std;

void fun(int& x){
    cout << x << endl;
    x += 1;
}

class MyClass {
  public:

    int xx {12};

    int get_value(int value){
      cout << "without: "  << endl;
      return xx;
    }

    void funn(int& value) const{
      cout << xx << endl;
    
    }
};

int main(){

  int value = 10;
  // fun(value);
  // cout << value << endl;  

  MyClass obj;
  int vv = 12;
  cout << obj.get_value(vv) << endl;
  // cout << obj.xx << endl;

}