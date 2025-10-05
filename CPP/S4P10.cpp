#include <iostream>
using namespace std;

class Employee {
    int id;
    float salary;

public:

    Employee(int i = 0, float s = 0) {
        id = i;
        salary = s;
    }

  
    void updateSalary(Employee &e) {
        salary = e.salary;
    }

   
    void display() {
        cout << "Employee ID: " << id << " | Salary: " << salary << endl;
    }

   
    friend void swap(Employee *e1, Employee *e2);
};


void swap(Employee *e1, Employee *e2) {
    float temp = e1->salary;
    e1->salary = e2->salary;
    e2->salary = temp;
}

int main() {
    Employee e1(101, 50000);
    Employee e2(102, 70000);

    cout << "Before swapping:" << endl;
    e1.display();
    e2.display();

    
    swap(&e1, &e2);

    cout << "\nAfter swapping:" << endl;
    e1.display();
    e2.display();


    Employee e3(103, 30000);
    cout << "\nBefore updateSalary:" << endl;
    e3.display();

    e3.updateSalary(e1);  
    cout << "After updateSalary (copy from e1):" << endl;
    e3.display();

    return 0;
}