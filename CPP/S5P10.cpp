#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    int marks[3];
    int total;
    char grade;

public:
    
    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter marks in 3 subjects: ";
        total = 0;

        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
            total += marks[i];
        }
        calculateGrade();
    }

    
    void calculateGrade() {
        int avg = total / 3;

        if (avg >= 90) grade = 'A';
        else if (avg >= 80) grade = 'B';
        else if (avg >= 70) grade = 'C';
        else if (avg >= 60) grade = 'D';
        else grade = 'F';
    }

    
    void display(int rank) const {
        cout << rank << ". " << rollNo << "  " << name
             << "  Total: " << total
             << "  Grade: " << grade << endl;
    }

    
    void writeToFile(ofstream &fout, int rank) const {
        fout << rank << ". " << rollNo << "  " << name
             << "  Total: " << total
             << "  Grade: " << grade << "\n";
    }

    
    int getTotal() const { return total; }
};


void sortByTotal(Student s[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j].getTotal() < s[j + 1].getTotal()) {
                swap(s[j], s[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student stu[n];


    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        stu[i].input();
    }

  
    sortByTotal(stu, n);

    cout << "\n===== RANK LIST =====\n";
    for (int i = 0; i < n; i++) {
        stu[i].display(i + 1);
    }

    
    ofstream fout("ranklist.txt");
    if (fout) {
        fout << "===== STUDENT RANK LIST =====\n\n";
        for (int i = 0; i < n; i++)
            stu[i].writeToFile(fout, i + 1);

        cout << "\nRank list saved to 'ranklist.txt'\n";
    } else {
        cout << "\nError writing to file.\n";
    }

    return 0;
}