#include <iostream>
#include <sstream>
using namespace std;


int main(){

    int num1 = {3};
    int num2 {2};
    std::cout << num1 << " " << num2 << std::endl;

    string value = "23";
    stringstream convert;
    convert << value;
    int num;
    convert >> num;
    cout << num + 3 << endl;
}