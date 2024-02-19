#include <iostream>
using namespace std;

class Point {
    private:
        double x {};

    public:
        Point(): x {}
        {
            cout<< "Default" << endl;
        }

    Point(double x) : x {x}
    {
        cout << "Parameter constructor!!!" << endl;
    }
    Point operator - ();
    double get_x ();
};

Point Point :: operator-(){
    cout << "unary operator overloading!!!" << endl;
    Point p;
    p.x = -x;
    return p;
}

double Point :: get_x(){
    return x;
}

int main() {

    Point pp (3.4);
    Point xp = -pp;
    // xp = -pp;
    cout << pp.get_x() << endl;
    cout << xp.get_x() << endl;
}