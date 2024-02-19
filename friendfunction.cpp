#include <iostream>
#include <string>
using namespace std;

class Employe {
    private:
        string name;
        int age {};

    public: 
        Employe (string name, int age);
        void set_name(const string& name);
        void set_age (int age);
        friend void display_information(Employe&);
};

Employe :: Employe (string name, int age):
    name {name}, 
    age {age}
    {
        cout << "Parameterized constructor!!!" << endl;
    }
void Employe :: set_name (const string& name){
    this->name = name;
}

void Employe :: set_age (int m_age){
    age = m_age;
}

void display_information(Employe& obj){
    cout << "Employe Name: " << obj.name << endl;
    cout << "Employe Age: " << obj.age << endl;
}
int main(){

    Employe emp("selim", 33);
    display_information(emp);
    emp.set_name ("naima");
    emp.set_age(43);
    display_information(emp);
}