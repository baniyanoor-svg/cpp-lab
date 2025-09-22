#include <iostream>
using namespace std;
class Employee
{

    int id;
    double salary;

public:
    Employee(int i, double s)
    {

        id = i;
        salary = s;
    }
    void outputData()
    {
        cout << "\n Id :" << id << endl;
        cout << "\n Salary :" << salary;
    }
};

int main()
{
    Employee E1(1234, 234.9);
    E1.outputData();
    Employee E2(65848, 2635.87);
    E2.outputData();
    return 0;
}