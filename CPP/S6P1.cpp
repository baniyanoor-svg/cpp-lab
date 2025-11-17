#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
    void input()
    {
        cout << "Name:";
        cin >> name;
        cout << "Age:";
        cin >> age;
    }
    void display()
    {

        cout << "Name:" << name << endl
             << "Age:" << age << endl;
    }
};
class Student : public Person
{
public:
    void getData()
    {
        input();
        cout << "Course:";
        cin >> course;
    }

    string course;
    void showData()
    {
        display();
        cout << "Course:" << course;
    }
};

int main()
{

    Person p1;
    Student s1;
    s1.getData();
    s1.showData();
}