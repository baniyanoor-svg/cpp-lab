#include <iostream>
using namespace std;

class Time {
    int hours, minutes;

public:

    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

  
    void addTime(Time &t) {
        hours += t.hours;
        minutes += t.minutes;

        if (minutes >= 60) {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    }

    
    void display() {
        cout << "Time: " << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1(2, 45);
    Time t2(1, 30);

    cout << "Before adding:" << endl;
    t1.display();

   
    t1.addTime(t2);

    cout << "After adding:" << endl;
    t1.display();

    return 0;
}