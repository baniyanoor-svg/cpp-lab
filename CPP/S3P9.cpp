 #include <iostream>
using namespace std;

class Time {
    int hours, minutes;
public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    Time addTime(Time t) {  
        Time temp;
        temp.minutes = minutes + t.minutes;
        temp.hours = hours + t.hours + (temp.minutes / 60);
        temp.minutes = temp.minutes % 60;
        return temp;
    }

    void display() {
        cout << hours << " hrs " << minutes << " min" << endl;
    }
};

int main() {
    Time t1(2, 50), t2(1, 30);
    Time t3 = t1.addTime(t2);  
    t3.display();
    return 0;
}
