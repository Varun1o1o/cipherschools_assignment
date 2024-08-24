#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[100]; 

    cout << "Enter the array elements: ";
    int countOdd = 0;
    int countEven = 0;

    for (int i = 0; i < size; ++i) {
        cin >> array[i];
        if (array[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }

    cout << "Number of odd numbers: " << countOdd << endl;
    cout << "Number of even numbers: " << countEven << endl;

    return 0;
}
