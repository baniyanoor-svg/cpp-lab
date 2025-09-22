
#include <iostream>
using namespace std;

class Report
{
    string name;
    int rollNo;
    int marks[5];

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks in 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    void calculateGrade()
    {
        int total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        float percentage = total / 5.0;

        cout << "Total = " << total << endl;
        cout << "Percentage = " << percentage << "%" << endl;

        if (percentage >= 80)
            cout << "Grade = A" << endl;
        else if (percentage >= 60)
            cout << "Grade = B" << endl;
        else if (percentage >= 40)
            cout << "Grade = C" << endl;
        else
            cout << "Grade = Fail" << endl;
    }

    void display()
    {
        cout << "\n Student Report \n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
        calculateGrade();
    }
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Report students[10];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        students[i].input();
    }

    for (int i = 0; i < n; i++)
    {
        students[i].display();
    }

    return 0;
}