#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length, breadth;

    Rectangle(int l, int b)
    {

        length = l;
        breadth = b;
    }

    void display()
    {
        cout << "Length :" << length << "\nBreadth:" << breadth << endl;
    }

};

void scale(Rectangle &r)


{

    r.length*=2;
    r.breadth*=2;
}

int main()
{
    Rectangle r1(8, 5);
    cout<<"Before scaling:"<<endl;
    r1.display();
    
    scale(r1);
cout<<"After scaling:"<<endl;

    r1.display();

    
}