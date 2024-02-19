#include <iostream>
using namespace std;

const auto& get_max(const int& x, const int& y){
    cout << "(int, int)" << endl;
    return (x > y) ? x : y;
}

// Template is the way to write a generic program. template related to function and class
template <typename T>
const auto& get_max(const T& x, const T& y){
    cout << "template (int, int) " << endl;
    return (x > y) ? x : y;
}

template <typename T>
const auto& get_max(const T& x, const T& y, const T& z){
    cout << "(int, int, int)" << endl;
    return get_max(get_max(x, y), get_max(y, z));
}

int main(){
    cout << get_max<>(3, 4) << endl;
    // cout << get_max(3, 4, 5) << endl;
    return 0;
}
