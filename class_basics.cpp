// class is a user defined data type. it can have different combination of 
// primitive data types;

#include <iostream>
using namespace std;

class Point {

    private:
        double x {};
        double y {};
        double arr[2];
        friend ostream& operator<< (ostream& out, Point& obj);
        friend istream& operator>> (istream& in, Point& obj);

    public:
        Point(double x = 0, double y = 0) : 
            x {x},
            y {y}
            {   arr[0] = x;
                arr[1] = y;
                cout << "default constructor " << endl;
            }
        Point(Point& other){
            x = other.x;
            y = other.y;
        }

        Point& operator= (Point& other){
            
            if (this != &other){
                this->x = other.x;
                y = other.y;
            }
            return *this;
        }

        Point& operator- (){
            x = -x;
            y = -y;

            return *this;
        }

        void output(){
            cout << "arr[0]: " << arr[0] << endl;
            cout << "arr[1]: " << arr[1] << endl;
        }

        void operator() (){
            cout << "Point(" << x << "," << y << ")" << endl;
        }
         
        // Point operator+ (Point& other){
        //     Point p;
        //     p.x = this->x + other.x;
        //     p.y = y + other.y;

        //     return p;
        // }

        Point& operator+ (Point& other){
            // Point p;
            this->x += other.x;
            this->y += other.y;

            return *this;
        }
};

ostream& operator<< (ostream& out, Point& obj){
    out << "Point(" << obj.x << "," << obj.y << ")" << endl;
    return out;
}
istream& operator>> (istream& in, Point& obj){
    in >> obj.x;
    in >> obj.y;
    return in;
}

int main(){

    // Point p1(4,5);
    Point p2(3, 4);
    cout << p2 << endl;
    p2.output();
    // Point p3;
    // p3 = -p2;
    // cout << p3 << endl;
    // // p1();

    // // cout << p1 << endl;
    // cout << "Enter p2"<<endl;
    // cin >> p2;
    // cout << p2 << endl;
    // cout << "Enter p3" << endl;
    // cin >> p3;
    // cout << p3 <<endl;

    // Point p4;
    // p4 = p2 + p3;
    // cout << p4 << endl;

    return 0;
}