#include <iostream>
using namespace std;

class Vector2D {
public:
    int x, y;

    Vector2D(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    
    Vector2D operator + (const Vector2D &v) {
        return Vector2D(x + v.x, y + v.y);
    }
};

class Vector3D : public Vector2D {
public:
    int z;

    Vector3D(int a = 0, int b = 0, int c = 0) : Vector2D(a, b) {
        z = c;
    }

    
    Vector3D operator + (const Vector3D &v) {
        
        Vector2D temp2 = Vector2D(x, y) + Vector2D(v.x, v.y);

        
        return Vector3D(temp2.x, temp2.y, z + v.z);
    }

    void display() {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Vector3D v1(2, 3, 4);
    Vector3D v2(1, 2, 3);

    Vector3D v3 = v1 + v2;

    cout << "Result: ";
    v3.display();

    return 0;
}