#include <iostream>
using namespace std;


class Circle {
public:
    float radius;

 
    Circle(float r = 0) {
        radius = r;
    }

    void display() {
        cout << "Radius = " << radius << endl;
    }
};


void increaseRadius(Circle *c) {
    c->radius += 5;  
}

int main() {
    Circle c1(10);  

    cout << "Before increasing radius: ";
    c1.display();

   
    increaseRadius(&c1);

    cout << "After increasing radius: ";
    c1.display();

    return 0;
}