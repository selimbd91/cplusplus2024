#include <iostream>
#include <cstring>
using namespace std;

int& amar_life (){
    static int life = 20;
    cout << "Address of life : " << &life << endl;
    cout << "value of life : " << life << endl;
    return life +=1;
}

void fun(){
    cout << "laila me laila" << endl;
    throw invalid_argument("mon caiche");
}

int main(){
    int life = 3;
    cout << "Main life: " << &life << endl;
    cout << "life : " << life << endl;

    cout << string(22, '*') << endl;
    int& lif = amar_life();
    cout << "Main life: " << &lif << endl;
    cout << "life : " << lif << endl;

    cout << string(22, '*') << endl;
    int& li = amar_life();
    cout << "Main life: " << &li << endl;
    cout << "life : " << li << endl;

}