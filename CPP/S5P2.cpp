#include <iostream>
#include <string>
using namespace std;

class Employee {
    int empID;
    string name;
    float basic, hra, da, netSalary;

public:
    
    Employee() {
        empID = 0;
        name = "";
        basic = hra = da = netSalary = 0;
    }

    
    Employee(int id, string n, float b, float h, float d) {
        empID = id;
        name = n;
        basic = b;
        hra = h;
        da = d;
        calculateSalary();
    }

    void getData() {
        cout << "\nEnter Employee ID: ";
        cin >> empID;
        cin.ignore(); // clear buffer
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Basic Salary: ";
        cin >> basic;
        cout << "Enter HRA: ";
        cin >> hra;
        cout << "Enter DA: ";
        cin >> da;
        calculateSalary();
    }

    void calculateSalary() {
        netSalary = basic + hra + da;
    }

    void displayData() {
        cout << "\nEmployee ID: " << empID;
        cout << "\nName: " << name;
        cout << "\nBasic Salary: " << basic;
        cout << "\nHRA: " << hra;
        cout << "\nDA: " << da;
        cout << "\nNet Salary: " << netSalary;
        cout << "\n";
    }

    float getNetSalary() {
        return netSalary;
    }

    string getName() {
        return name;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee e[50]; 

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << ":";
        e[i].getData();
    }

    cout << "\n\n EMPLOYEE DETAILS ";
    for (int i = 0; i < n; i++) {
        e[i].displayData();
    }

    cout << "\n\nEmployees with Net Salary less than 50,000:";
    for (int i = 0; i < n; i++) {
        if (e[i].getNetSalary() < 50000) {
            cout << "\n" << e[i].getName() << " (Salary: " << e[i].getNetSalary() << ")";
        }
    }

    cout << endl;
    return 0;
}
