 #include <iostream>
 #include<string>
using namespace std;

class Car {
    string brand;
    int price;
public:
    Car(string b, int p) {
        brand = b;
        price = p;
    }
    
    Car(const Car &c) {
        brand = c.brand;
        price = c.price;
    }
    void display() {
        cout << "Brand: " << brand << ", Price: " << price << endl;
    }
};

int main() {
    Car car1("alto", 50000);
    Car car2 = car1;   

    car1.display();
    car2.display();
    return 0;
}
