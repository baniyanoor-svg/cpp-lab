#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth;

public:

    Rectangle(float l = 0, float b = 0) {
        length = l;
        breadth = b;
    }

    
    void increase(Rectangle *r) {
        length += r->length;
        breadth += r->breadth;
    }

    
    void display() {
        cout << "Length = " << length << ", Breadth = " << breadth << endl;
    }
};

int main() {
    Rectangle r1(5, 3);
    Rectangle r2(2, 4);

    cout << "Before increasing: ";
    r1.display();

    
    r1.increase(&r2);

    cout << "After increasing: ";
    r1.display();

    return 0;
}