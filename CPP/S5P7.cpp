#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Car {
private:
    string model;
    string company;
    float price;

public:
   
    void input() {
        cout << "Enter Model: ";
        cin >> model;
        cout << "Enter Company: ";
        cin >> company;
        cout << "Enter Price: ";
        cin >> price;
    }

    
    void display() const {
        cout << model << " | " << company << " | " << price << endl;
    }

    
    string getCompany() const { return company; }
    float getPrice() const { return price; }
};


string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

int main() {
    int n;
    cout << "Enter number of cars: ";
    cin >> n;

    Car cars[n];

   
    cout << "\nEnter car details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nCar " << i + 1 << ":\n";
        cars[i].input();
    }

   
   
    string comp;
    cout << "\nEnter company to search: ";
    cin >> comp;

    string compLower = toLower(comp);

    cout << "\nCars by company '" << comp << "':\n";

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (toLower(cars[i].getCompany()) == compLower) {
            cars[i].display();
            found = true;
        }
    }

    if (!found) {
        cout << "No cars found for this company.\n";
    }

    
    float maxPrice = cars[0].getPrice();
    int index = 0;

    for (int i = 1; i < n; i++) {
        if (cars[i].getPrice() > maxPrice) {
            maxPrice = cars[i].getPrice();
            index = i;
        }
    }

    cout << "\nMost Expensive Car:\n";
    cars[index].display();

    return 0;
}