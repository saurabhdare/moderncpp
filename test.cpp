#include <iostream>

class Point {
public:
    int x, y;
    Point(int x1, int y1) : x(x1), y(y1) {}
    void print();
};

void Point::print() {
    using std::cout;
    cout << "The value of x is: " << this->x << 
    "\nThe value of y is: " << this->y << "\n";
}

class HeapPoint {
public:
    HeapPoint(int x, int y);
    Point* get() {
        return thePoint;
    }
    ~HeapPoint();
private:
    Point* thePoint;
};

HeapPoint::HeapPoint(int x, int y) : thePoint(new Point(x, y)) {}

HeapPoint::~HeapPoint() {
    delete thePoint;
    thePoint = 0;
}

void myFunc() {
    HeapPoint myHeapPoint(2, 4);
    Point *myPoint = myHeapPoint.get();
}

