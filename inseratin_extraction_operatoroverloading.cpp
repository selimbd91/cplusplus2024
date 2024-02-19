#include <iostream>
using namespace std;

class Point {

    private:
        double x {};
        double y {};
        friend ostream& operator << (ostream& out, Point& obj);
        friend istream& operator >> (istream& in, Point& obj);
    public:
        Point(){}
        Point(double x, double y) :
            x {x},
            y {y}
            {}

        void display(){
            cout << x << ", " << y << endl;
        }
};

ostream& operator << (ostream&out, Point& obj){
    out << "X:  "<< obj.x << ", Y: " << obj.y << endl;
    return out;
}

istream& operator >> (istream& in, Point& obj){
    cout << "Enter the value of X: ";
    in >> obj.x;
    cout << "Enter the value of Y: ";
    in >> obj.y;
    return in;
}

int main(){

    Point p(2.3, 4.2);
    Point pp;
    cin >> pp;
    cout << pp;

}