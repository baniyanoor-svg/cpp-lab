#include <iostream>
using namespace std;

class Rectangle;

class Square {
    float side;

public:
    
    Square(float s = 0) {
        side = s;
    }


    friend void compareArea(Square s, Rectangle r);
};

class Rectangle {
    float length, breadth;

public:
    
    Rectangle(float l = 0, float b = 0) {
        length = l;
        breadth = b;
    }

    
    friend void compareArea(Square s, Rectangle r);
};


void compareArea(Square s, Rectangle r) {
    float areaS = s.side * s.side;
    float areaR = r.length * r.breadth;

    cout << "Area of Square: " << areaS << endl;
    cout << "Area of Rectangle: " << areaR << endl;

    if (areaS > areaR)
        cout << "Square has a larger area." << endl;
    else if (areaR > areaS)
        cout << "Rectangle has a larger area." << endl;
    else
        cout << "Both have equal area." << endl;
}

int main() {
    Square s(5);         
    Rectangle r(6, 4);   

    compareArea(s, r);    

    return 0;
}