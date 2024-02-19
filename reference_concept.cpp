#include <iostream>
#include <string>
using namespace std;

class Check {

    private:
        int x;

    public:
        Check(int);
        int get_x(Check* const);
};

Check :: Check(int val)
{
    this->x = val;
    cout << "Default constructor!!!" << endl;
}

int Check :: get_x(Check * const self){
    return self->x;
}


int main(){

    int aa = 23;
    Check ch(aa);
    cout << ch.get_x(&ch) <<endl; 

}