#include <iostream>
#include <vector>
#include <list>
using namespace std;


const list < int > ll (list < int >& l){
    
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(44);

    return l;
}

consteval int squre(int x){
    return x * x;
}

int main(){
    constexpr int value = squre(5);
    cout << value << endl;


    vector < int > v = {2, 4, 6, 7, 8};
    cout << "hello" << endl;

    list < int > pp;

    const list < int >& lll = ll(pp);
    //lll.push_back(40);

    for (auto i : lll)
        cout << i << " ";
    cout << endl;
}