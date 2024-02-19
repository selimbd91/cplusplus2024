#include <iostream>
#include <cstring>
#include <stdexcept>
using namespace std;

class Myexception : public exception {

    private:
        const char* mesg;
    public:
        Myexception(const char* msg) : mesg {msg} {
            
        }

        const char* what() const noexcept{
            return mesg;
        }
};

void fun(const char* name){

    size_t lenOfName = strlen(name);
    cout << name << endl;
    cout << "Length: " << lenOfName << endl;

    try{
        if(lenOfName > 20){
            cout << "large" << endl;
            // throw Myexception ("the size is large than usual");
            // throw "hello, its exception.";
            // throw string("naima");
            throw exception {};
        }
    }
    catch (const char* e){
        cout << e << endl;
    }
    catch (string e){
        cout << e << endl;
    }
    catch (...){
        cout << "... exception." << endl;
    }
}

double try_mama() noexcept{
    
    throw exception {};
    return 4.5;
}

int main(){

    // fun("my name is Selim and my wife is naima");
    try {
        // double res = try_mama();
        // cout << res << endl;
        cout << noexcept(try_mama()) << endl;
    }
    catch (...){
        cout << "haah " << endl;
    }
    // cout << boolalpha << try_mama() << endl;
    cout << "done " << endl;
}