#include <iostream> 
using namespace std;


void print(int x){
    if (x <= 0)
        return;
    else{
        // cout << x << "-->";
        x -= 1;
        print(x);
        cout << "hello world :" << x << endl;
    }
}

int main(){

    print(5);
    return 0;
}