#include <iostream>
#include <vector>
#include <list>
using namespace std;

void print( vector < list <int> >& vec){

    cout << "print function" << endl;
    for (auto element : vec){
        for (auto el : element){
            cout << el << " ";
        }
        cout << endl;
    }
}

int main(){

    // vector < int > v;

    // for (size_t i {0}; i < 100; i++){
    //     // cout << v.capacity() << endl;
    //     v.push_back(i);
    // }
    // cout << v.front() << endl;

    // for (auto& it : v)
    //     cout << it << " ";
    // cout << endl;

    // list < int > l1 {2, 5, 6, 7, 6};
    // list < int > l2 {10, 20, 30};
    // vector < int > v3;
    // // v3.insert(v3.begin(), l1.begin(), l1.end());
    // vector < list  < int > > v4 {l1, l2};
    // print(v4);

    // int x {};
    // char ch = 'A';
    // char xx = ch + 2;
    // cout << xx << endl;

    vector < int > vv {2, 3, 4, 5};
    vector < int* > ptr;
    ptr.push_back(&vv[0]);
    
    cout << vv.size() << endl;

    vector <int*> :: iterator itr;
    
    for (itr = ptr.begin(); itr != ptr.end(); ++itr){
        cout << *(*itr )<< endl;
    }
}