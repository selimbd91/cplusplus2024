#include <iostream>
using namespace std;

class Point {
    private:
        int x {};
        int y {};

    public:
        Point(); // Default Constructor
        Point(int x, int y); // Parameterized consturctor
        Point(const Point& other); // copy constructor
        Point& operator = (const Point& other); // operator overloading
        void get_values();

};

Point :: Point():
    x {1}, 
    y  {1}
    {
        cout << "Default constructor!!!" << endl;
    }

Point :: Point(int x, int y):
    x {x},
    y {y}
    {
        cout << "Parameterized constructor!!!" << endl;
    }

Point :: Point (const Point& other):
    x {other.x},
    y {other.y}
    {
        cout << "copy Constructor!!!" << endl;
    }


Point& Point :: operator = (const Point& other){
    if (this != &other){
        x= other.x;
        y = other.y;
    }
    cout << "Operator overloading!!!" << endl;

    return *this;
}

void Point :: get_values(){
    cout << "x: " << x << ", " << "y: " << y << endl;
}

int main(){

    Point p1;
    Point p2(3, 4);
    Point p3 = p2;
    Point p4;
    p4 = p1;
    p1.get_values();
    p2.get_values();
    p3.get_values();
    p4.get_values();
    return 0;
}