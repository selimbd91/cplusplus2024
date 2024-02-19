#include <iostream>
#include <typeinfo>
#include <cstring>
// #include <iomanip>
using namespace std;

void number_conversition(){

    int num1 = 15;
    int num2 = 017;
    int num3 = 0xf;
    int num4 = 0b001111;

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num4 << endl;
}


void num_confusion(){

    // int32_t num1 (32);
    // int num2 = {};
    // float abc {3.4};
    // long double def {3.4};

    // cout << sizeof(abc) << endl;
    // cout << sizeof(def) << endl;

    // cout << num1 << endl;
    // cout << num2 << endl;
 
    float num1 {3.4f};
    float num2 {};
    float num3 {};
    cout << num1 / num2 << endl;
    cout << num2 / num3 << endl;

}


void asci_value(){

    for (int i = 0; i < 256; i ++){
        cout << static_cast < char > (i) << " ";
    // cout << endl;
    }
}

void auto_matic(){

    auto value1 {12};
    auto value2 {23.3};
    auto value3 {45.3f};
    auto value4 {23.3l};
    auto value5 {45u};
    auto value6 {23ul};

    cout << typeid(value1).name() << endl;
    cout << typeid(value2).name() << endl;
    cout << typeid(value3).name() << endl;
    cout << typeid(value4).name() << endl;
    cout << typeid(value5).name() << endl;
    cout << typeid(value6).name() << endl;
}

void manip_practice(){

    // cout << left << endl;

    // cout << setw(15) << "first_name:" << setw(20) << "last_name:" << endl;
    // cout << setw(15) << "Selim" << setw(20) << "Hossain" << endl;
    // cout << setw(15) << "Naima" << setw(20) << "Akter" << endl;
    // cout << setw(15) << "Roman" << setw(20) << "Miah" << endl;


    int x {45};
    int y {-32};

    cout << showpos << endl;
    cout << x << endl;
    cout << y << endl;

    cout << noshowpos << endl;


    bool xx {true};
    bool yy {false};

    cout << boolalpha << endl;
    cout << (xx && yy )<< endl;
    cout << (xx || yy )<< endl;

    cout << showbase << endl;
    cout << dec << x << endl;
    cout << hex << x << endl;
    cout << oct << x << endl;
}

void num_to_decimel(int x){

    cout << x << endl;
    string value {};

    while (x > 0){
        value += to_string((x % 2));
        // cout << to_string((x % 2)) << endl;
        x /= 2;
    }
    cout << "output: " << value << endl;
}

void check(){
    int x {43};
    int *ptr {nullptr};
    ptr = &x;
    cout << *ptr << endl;

    const char *name {"selim hossain"};
    cout << name << endl;
    const char *name_ptr {name};
    cout << name_ptr << endl;

}


void memory_allocation(){

    int *ptr {new int {23}};
    cout << *ptr << endl;

    delete ptr;
    ptr = nullptr;

    int xx {};
    cout << xx << endl;
}

void string_check(){

    const char* name {"hello world!"};
    const char* result = strchr(name, '9');

    if (result != nullptr)
        cout << result << endl;
    else
        cout << "not found" << endl;
}

void design(){

    string msg (20, '*');

    cout << msg << endl;
}

int main(){

    // number_conversition();
    // num_confusion();
    // asci_value();
    // auto_matic();
    // manip_practice();
    // num_to_decimel(11);
    // check();
    // memory_allocation();
    // string_check();
    design();
}