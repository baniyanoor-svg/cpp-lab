#include <iostream>
using namespace std;

class Circle {
    float radius;
public:
    Circle() {   


        radius = 1;
    }
    Circle(float r) { 
        radius = r;
    }
    void area() {
        cout << "Area = " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Circle c1;       
    Circle c2(5);     

    c1.area();
    c2.area();
    return 0;
}