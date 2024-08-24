#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[100];

    cout << "Enter the array elements: ";
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
        sum += array[i];
    }

    cout << "Sum of the array: " << sum << endl;

    return 0;
}
