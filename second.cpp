#include <iostream>
#include <string>

using namespace std;


int main(){

    try{
        int num = 34;
        int denominator = 0;

        if (denominator == 0){
            throw runtime_error("can not divide by zero!!!");
        }
        cout << num / denominator << endl;

    }
    catch (exception& e){
        cout << "its a exception and  "<<e.what() << endl;
    }
}