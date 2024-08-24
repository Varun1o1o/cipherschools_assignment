#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Division: " << (double)num1 / num2 << endl;
        cout << "Modulus: " << num1 % num2 << endl;
    } else {
        cout << "Division: Undefined (division by zero)" << endl;
        cout << "Modulus: Undefined (division by zero)" << endl;
    }

    return 0;
}
