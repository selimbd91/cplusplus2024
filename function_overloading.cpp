#include <iostream>
#include <string>

using namespace std;

class Mobile {
    private:
        double price {};
        string name;
        string company;
    
    public:
        Mobile (double, string, string);
        void set_name(string name);
        void set_name (string& company);
        void display();
        string get_name();
        string get_name() const;
        void print(const int& x);
        void print (int& x);
};
void Mobile :: print (int& x){
    cout << "Non constant : " << x << endl;
}

void Mobile :: print(const int& x){
    cout << "Constant : " << x << endl;
}

void Mobile :: set_name (string name){
    this->name = name;
}

void Mobile :: set_name (string& com){
    company = com;
}

string Mobile :: get_name(){
    name= "samsung 24";
    return name;
}

string Mobile :: get_name () const {
    return company;
}
Mobile :: Mobile(double price, string name, string company) :
    price {price},
    name {name},
    company {company}
{
    cout << "Parameterize constructor!!!" << endl;
}

void Mobile :: display (){
    cout << "Mobile price: " << price << endl;
    cout << "Mobile name: " << name << endl;
    cout << "Mobile Brand: " << company << endl;
}
int main (){
    Mobile m (120.98, "apple", "apple company");
    Mobile mm (12.1, "xpo", "Germany");
    // m.display();

    // cout << "Mobile Name:" << m.get_name() << endl;
    // cout << "Brand: " << m.get_name() << endl;

    // const int val = 13;
    // m.print(val);
//     cout << "non constent : " << mm.get_name() << endl;

    int xx = 23;
    int &ref_xx = xx;
    cout << "&xx: " << &xx << endl;
    cout << "ref_xx: " << &ref_xx << endl;
    // always remember that reference is only the aliasing of the variable
    //  and it should be initialize when its declared

}