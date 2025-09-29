
#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, width;

    
    int area();
};


int Rectangle::area() {
    return length * width;
}

int main() {
    Rectangle r;

    
    r.length = 10;
    r.width = 5;

    
    cout << "Length = " << r.length << endl;
    cout << "Width  = " << r.width << endl;
    cout << "Area   = " << r.area() << endl;

    return 0;
}