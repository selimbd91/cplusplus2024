
#include <iostream>
using namespace std;

template < typename T >
void fun(T t){
    cout << t << " ";
    cout << endl;
}

template < typename T, typename ... Args>
void fun(T t, Args ... args){
    cout << t << " ";
    fun(args ...);
}


int main(){
    fun(1,3, 4, 5, 6, "selim", "jetzt", "muse");
    
}