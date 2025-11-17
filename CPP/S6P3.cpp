#include <iostream>
using namespace std;

class Employee {
protected:
    int id;
    float salary;
};

class Manager : public Employee {
public:
    void setData(int i, float s) {
        id = i;         
        salary = s;
    }

    void display() {
        cout << "Manager ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Manager m;
    m.setData(101, 50000);
    m.display();
    return 0;
}