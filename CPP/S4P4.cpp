#include <iostream>
using namespace std;


class Complex {
public:
    int real, imag;

    
    Complex(int r=0 , int i=0 ) {
        real = r;
        imag = i;
    }

    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};


Complex add(Complex c1, Complex c2) {
    Complex temp; 
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;  
}

int main() {
    Complex n1(3, 4), n2(5, 6);

    cout << "First Complex number: ";
    n1.display();
    cout << "Second Complex number: ";
    n2.display();


    Complex result = add(n1, n2);

    cout << "Result after addition: ";
    result.display();

    return 0;
}