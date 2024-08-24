#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[100];

    cout << "Enter the array elements: ";
    int sumOdd = 0;
    int sumEven = 0;

    for (int i = 0; i < size; ++i) {
        cin >> array[i];
        if (array[i] % 2 == 0) {
            sumEven += array[i];
        } else {
            sumOdd += array[i];
        }
    }

    cout << "Sum of odd numbers: " << sumOdd << endl;
    cout << "Sum of even numbers: " << sumEven << endl;

    return 0;
}
