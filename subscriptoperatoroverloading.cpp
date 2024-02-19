

#include <iostream>
#include <string>
using namespace std;

class Drink {
    private:
        string soft_drinks[2];

    public:
        Drink(string d1, string d2){
            soft_drinks[0] = d1;
            soft_drinks[1] = d2;
        }

        void print(){
            cout << "Soft drinks one : " << soft_drinks[0] << endl;
            cout << "Soft drinks two : " << soft_drinks[1] << endl;
        }

    string& operator[](int pos){
            
            if (pos == 0)
                return soft_drinks[0];
            else if (pos == 1)
                return soft_drinks[1];
            else{
                cout << "out of bound!!!" << endl;
                exit(1);
            }
        }


};

int main(){

    Drink dd ("pepsi", "fanta");
    dd.print();

    cout << dd[1] << endl;
    cout << "Done!!!!" <<endl;

    dd[1] = "Coca-cola";
    cout << dd[1] << endl;
}