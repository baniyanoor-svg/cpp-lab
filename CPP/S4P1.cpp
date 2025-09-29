#include <iostream>
using namespace std;

class Point
{
public:
    int x, y;

    
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
};


void display(Point p) {
    cout << "Inside function (before change): x = " << p.x << ", y = " << p.y << endl;

    p.x = p.x + 10;
    p.y = p.y + 20;
    cout << "Inside function (after change): x = " << p.x << ", y = " << p.y << endl;
}
    
 void increment(Point p)  

{

  p.x++;
p.y++;
}

int main(){

Point p1(13,79);

display(p1);
increment(p1);
display(p1);
}








