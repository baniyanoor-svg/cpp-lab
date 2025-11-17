
#include <iostream>
#include <string>
using namespace std;

template <class T>
class MinMax {
private:
    T minVal, maxVal;

public:
   
    MinMax(T a, T b) {
        minVal = a;
        maxVal = b;
    }

  
    void print() {
        cout << minVal << " " << maxVal;
    }
};

int main() {
    string type;
    cin >> type;

    if (type == "int") {
        int a, b;
        cin >> a >> b;
        MinMax<int> obj(a, b);
        obj.print();
    }
    else if (type == "double") {
        double a, b;
        cin >> a >> b;
        MinMax<double> obj(a, b);
        obj.print();
    }
    else if (type == "string") {
        string a, b;
        cin >> a >> b;
        MinMax<string> obj(a, b);
        obj.print();
    }

    return 0;
}