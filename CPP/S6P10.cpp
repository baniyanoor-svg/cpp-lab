#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;   
};

class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    float area() {
        return length * width;
    }
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }
    float area() {
        return 3.14 * radius * radius;
    }
};

class Triangle : public Shape {
    float base, height;
public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }
    float area() {
        return 0.5 * base * height;
    }
};

int main() {
    Shape *arr[3];

    arr[0] = new Rectangle(5, 4);
    arr[1] = new Circle(3);
    arr[2] = new Triangle(6, 2);

    cout << "Rectangle Area: " << arr[0]->area() << endl;
    cout << "Circle Area: " << arr[1]->area() << endl;
    cout << "Triangle Area: " << arr[2]->area() << endl;

    return 0;
}