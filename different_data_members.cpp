#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        string name {};
        int age {23};
        static int count;

    public:
        const double pi {3.14};
        Person(): pi {3.99} {
            count += 1;
        }
        Person(string name, int age):
            name {name},
            age {age},
            pi {3.89}
            {
                count += 1;
            }
        Person(const Person& obj){
            cout << "copy constructor" << endl;
            name = obj.name;
            age = obj.age;
            count += 1;
        }

        void get_count (){
            cout << Person :: count << endl;
        }

        static void fun(){
            cout << Person:: count << endl;
        }

        void get_value(Person* const self){
            cout << self->age << endl;
        }
};

int Person :: count = 0;

int main(){

    Person p1;
    // p1.get_count();
    // Person p2 ("selim", 32);
    // p2.get_count();
    // Person p3 = p2;
    // p3.get_count();
    // Person :: fun();
    // cout << p2.pi << endl;
    // p1.get_value();
    p1.get_value(&p1);

    // int x = 23;
    // const int& ref = x;
    // cout << "address of the X : " << &x << endl;
    // cout << "address of ref: " << &ref << endl;

    // x = 2334;
    // cout << ref << endl;

}