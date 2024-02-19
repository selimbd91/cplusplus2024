#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Point {
    private:
        double x {};
        double y {};
    
    public:
        Point();
        Point(double, double);
        Point(const Point& other);
        Point& operator = (const Point& other);
        void display();
        Point& operator + (const Point& other);
        Point operator - (Point other);
        double get_x();
};

Point :: Point() : x {0}, y {0}{
    cout << "Default constructor!!!" << endl;
}

Point :: Point (double x, double y) :
    x {x},
    y {y}
    {
        cout << "parameterized consturctor!!!" << endl;
    }

Point :: Point ( const Point& other){
    x = other.x;
    y = other.y;
    cout << "Copy consturctor!!!" << endl;
}

Point& Point :: operator = (const Point& other){
    if (this != &other){
        x = other.x;
        y = other.y;
    }
    cout << "assignment operator overloading!!!" << endl;
    return *this;
}

void Point :: display (){
    cout << "Point(" << x << "," << y << ")" << endl;
}

Point& Point :: operator+ (const Point& other){
    x += other.x;
    y += other.y;

    return *this;
}
 Point Point :: operator- (Point other){
    Point pp;
    pp.x = x - other.x;
    pp.y = y - other.y;

    return pp;
 }

 double Point :: get_x(){
    return x;
 }


int main(){
    Point p1 (2.3, 5.6);
    // p1.display();
    // Point p2 = p1;
    // p2.display();
    // Point p3;
    // p3.display();
    // p3 = p1;
    // Point p4 (2.7, 4.4);
    // Point p5 = p1 + p4;
    // Point p6 (3, 4);
    // Point p7 = p5 - p6;

    // p5.display();
    // p6.display();
    // p7.display();

    int xx = -p1.get_x();

    cout << " x : " << p1.get_x() << endl;
}