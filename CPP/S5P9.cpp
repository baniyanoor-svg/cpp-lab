#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
   
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

  
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

  
    void display() const {
        cout << real << " + " << imag << "i";
    }

  
    Complex operator+(const Complex &c) const {
        return Complex(real + c.real, imag + c.imag);
    }

   
    Complex operator*(const Complex &c) const {
        return Complex(
            real * c.real - imag * c.imag,  
            real * c.imag + imag * c.real 
        );
    }
};

int main() {
    int n;
    cout << "Enter number of complex numbers: ";
    cin >> n;

    Complex arr[n];

  
    for (int i = 0; i < n; i++) {
        cout << "\nComplex number " << i + 1 << endl;
        arr[i].input();
    }

   
    Complex sum(0, 0);
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    
    Complex product(1, 0); 
    for (int i = 0; i < n; i++) {
        product = product * arr[i];
    }

    cout << "\nSum of all complex numbers: ";
    sum.display();

    cout << "\nProduct of all complex numbers: ";
    product.display();

    return 0;
}