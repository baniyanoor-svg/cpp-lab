#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void setPerson(string n) { name = n; }
};

class Employee : public Person {
public:
    int emp_id;
    void setEmployee(int id) { emp_id = id; }
};

class Manager : public Employee {
public:
    string dept;
    void setManager(string d) { dept = d; }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Department: " << dept << endl;
    }
};

int main() {
    Manager m;
    m.setPerson("Ali");
    m.setEmployee(101);
    m.setManager("HR");
    m.display();
    return 0;
}