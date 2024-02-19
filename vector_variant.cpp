#include <iostream>
#include <vector>
#include <variant>
using namespace std;

void print(variant < int, string, double > xx){
    visit([](const auto& x){
        cout << x << " ";
    }, xx);
    cout << endl;
}

int main(){

    
    vector < variant < int, string, double > > vv;
    vv.push_back(3);
    vv.push_back(3.4);
    vv.push_back("selim");

    variant < int, string, double > my_varinat;
    my_varinat = 23;
    my_varinat = "selim";
    my_varinat = 45.4;

    // visit([](const auto& v){
    //         cout << v << endl;
    //     },my_varinat);

    for (const auto& element : vv){
        // print(element);
        if (holds_alternative < int > (element)){
            cout << get < int > (element )<<endl;
        }
        else if (holds_alternative < double > (element)){
            cout << get < double  >(element) << endl;
        }
        else if(holds_alternative < string > (element)){
            cout << get < string > (element) << endl;
        }
    }
}