#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int marks;
    int age;
};

int main() {
    int N;
    cout << "Enter number of students: ";
    cin >> N;

    vector<Student> v(N);
    cout << "Enter name marks age:\n";
    for (int i = 0; i < N; i++)
        cin >> v[i].name >> v[i].marks >> v[i].age;

    sort(v.begin(), v.end(), [](Student &a, Student &b) {
        if (a.marks != b.marks) return a.marks > b.marks;
        if (a.age != b.age) return a.age < b.age;
        return a.name < b.name;
    });

    cout << "\nSorted Students:\n";
    for (auto &s : v)
        cout << s.name << " " << s.marks << " " << s.age << "\n";
}