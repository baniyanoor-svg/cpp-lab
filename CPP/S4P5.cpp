#include<iostream>
#include<string>
using namespace std;
class Student{
public:
string name;
int marks;
Student(string n,int  m){
name=n;
marks=m;


}

void display(){

cout<<"Name:"<<name<<"\nMarks:"<<marks<<endl;

}

};
Student compare(const Student &s1, const Student &s2) {
    if (s1.marks > s2.marks)
        return s1;   
    else
        return s2;  
}

int main() {
    Student st1 = {"Noor", 85};
    Student st2 = {"Bhavna", 92};

    cout << "Student 1: " << st1.name << ", " << st1.marks << endl;
    cout << "Student 2: " << st2.name << ", " << st2.marks << endl;

    
    Student topper = compare(st1, st2);

    cout << "Topper: " << topper.name << " with " << topper.marks << " marks" << endl;

    return 0;
}

