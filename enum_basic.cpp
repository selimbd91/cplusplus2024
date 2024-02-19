#include <iostream>
using namespace std;

auto value(){
    return 6.8;
}

int main(){
    enum ranking : char {
        bsc = 'a',
        msc,
        phd
    };

    char res = msc;

    auto hsl = value();
    cout << hsl << endl;

    // cout << "output: " << res << endl;
    // string xx = "ami tomay";

    // cout << typeid(xx).name() << endl;
    
    // if (typeid(int) == typeid(xx))
    //     cout << "they are same" << endl;
}