#include <iostream>
using namespace std;

class Box {
    float length, width, height;

public:
    
    Box(float l = 0, float w = 0, float h = 0) {
        length = l;
        width = w;
        height = h;
    }

    
    float volume() {
        return length * width * height;
    }

    
    void compare(Box b) {
        if (this->volume() > b.volume())
            cout << "Calling object has larger volume." << endl;
        else if (this->volume() < b.volume())
            cout << "Passed object has larger volume." << endl;
        else
            cout << "Both boxes have equal volume." << endl;
    }
};

int main() {
    Box b1(5, 4, 3); 
    Box b2(4, 4, 4);  

    b1.compare(b2);   
    return 0;
}