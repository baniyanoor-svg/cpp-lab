#include <iostream>
#include <string>
using namespace std;
class Base
{
    public:
    int age;
    int rollno;


    Base()
    {

        cout << "base default called"<<endl;
    }

    Base(int a, int r)
    {
        age = a;
        rollno = r;
        cout << "base parametrized called"<<endl;
    }
    ~Base(){

       cout<<"base destructor called"<<endl;
    }
};
class Derived : public Base
{
    public:

    Derived()
    {
        
        
        cout << "derived default called"<<endl;
    }
Derived(int a, int r)
    {
        age = a;
        rollno = r;
        cout << "derived parametrized called"<<endl;
    }
    ~Derived(){

       cout<<"derived destructor called"<<endl;
    }


} ;


int main()
{
    Base b1;
    Base b2(6,8);
    Derived d1;
    Derived d2( 2,9);
}