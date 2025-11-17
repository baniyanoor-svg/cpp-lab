/*#include <iostream>
using namespace std;

class Person {
public:
    void intro() {
        cout << "I am a Person" << endl;
    }
};

class Teacher : public Person {};
class Student : public Person {};

class TA : public Teacher, public Student {};

int main() {
    TA obj;
    obj.intro();   // ERROR: ambiguous
    return 0;
}*/
#include <iostream>
using namespace std;

class Person {
public:
    void intro() {
        cout << "I am a Person" << endl;
    }
};

class Teacher : virtual public Person {};
class Student : virtual public Person {};

class TA : public Teacher, public Student {};

int main() {
    TA obj;
    obj.intro();   // No ambiguity
    return 0;
}