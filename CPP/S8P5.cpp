#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    ofstream fout("students.dat", ios::binary);
    Student s;

    for (int i = 0; i < n; i++) {
        cout << "Roll: "; cin >> s.roll;
        cout << "Name: "; cin >> s.name;
        cout << "Marks: "; cin >> s.marks;
        fout.write((char*)&s, sizeof(s));
    }
    fout.close();

    ifstream fin("students.dat", ios::binary);
    cout << "\n Student Records \n";
    while (fin.read((char*)&s, sizeof(s))) {
        cout << s.roll << "  " << s.name << "  " << s.marks << endl;
    }
    fin.close();
}