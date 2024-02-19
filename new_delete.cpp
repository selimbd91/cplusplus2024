#include <iostream>
using namespace std;

class Base {
    private:
        int *x {};

    public:
        Base(int x) : x {new int(x)}{};

        void* operator new (size_t size){
            cout << "the size is:  " << size << endl;
            // void* p = malloc(size);
            return ::operator new(size);
        }

        void operator delete (void* p){
            cout << "overload delete operator" << endl;
            free(p);
        }

    int get_x(){
        return *x;
    }

    
};

int main(){

    Base *b = new Base(23);
    cout << b->get_x() << endl;
    delete b;
    return 0;
}