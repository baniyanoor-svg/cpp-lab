#include <iostream>
using namespace std;

class Teacher {
public:
    string subject;
    void setTeacher(string s) {
        subject = s;
    }
};

class Researcher {
public:
    string area_of_research;
    void setResearch(string a) {
        area_of_research = a;
    }
};

class TeachingAssistant : public Teacher, public Researcher {
public:
    void display() {
        cout << "Subject: " << subject << endl;
        cout << "Research Area: " << area_of_research << endl;
    }
};

int main() {
    TeachingAssistant ta;
    ta.setTeacher("Computer Science");
    ta.setResearch("Machine Learning");

    ta.display();

    return 0;
}