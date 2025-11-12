#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollNo;
    string name;
    int marks[5];
    int total;

public:
    void getData() {
        cout << "\nEnter Roll Number: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

        total = 0;
        cout << "Enter marks of 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
            total += marks[i];
        }
    }

    void displayData() {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nTotal Marks: " << total;
        cout << "\n";
    }

    int getTotal() {
        return total;
    }

    string getName() {
        return name;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[50]; 
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << ":";
        s[i].getData();
    }

    cout << "\n\nSTUDENT RESULTS ";
    for (int i = 0; i < n; i++) {
        s[i].displayData();
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].getTotal() > s[maxIndex].getTotal()) {
            maxIndex = i;
        }
    }

    cout << "\n\nTop Scorer: " << s[maxIndex].getName()
         << " with total marks = " << s[maxIndex].getTotal() << endl;

    return 0;
}
