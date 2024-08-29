#include <iostream>
using namespace std;

class Complex {
public:
    int real, imaginary;

    Complex(int r = 0, int i = 0) {
        real = r;
        imaginary = i;
    }

    Complex addComp(Complex C1, Complex C2) {
        Complex temp;
        temp.real = C1.real + C2.real;
        temp.imaginary = C1.imaginary + C2.imaginary;
        return temp;
    }

    Complex subComp(Complex C1, Complex C2) {
        Complex temp;
        temp.real = C1.real - C2.real;
        temp.imaginary = C1.imaginary - C2.imaginary;
        return temp;
    }

    void display() {
        cout << real;
        if (imaginary >= 0)
            cout << " + i" << imaginary << endl;
        else
            cout << " - i" << -imaginary << endl;
    }
};

int main() {
    Complex a(3, 2);
    cout << "Complex number 1 : ";
    a.display();

    Complex b(9, 5);
    cout << "Complex number 2 : ";
    b.display();

    Complex sum, diff;
    sum = sum.addComp(a, b);
    cout << "Sum of complex numbers : ";
    sum.display();

    diff = diff.subComp(a, b);
    cout << "Difference of complex numbers : ";
    diff.display();

    return 0;
}
