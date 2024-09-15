#include <iostream>

using namespace std;

bool existsInArray(const int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int size, target;
    
    cout << "Enter the number of elements: ";
    cin >> size;
    
    int* arr = new int[size];
    
    cout << "Enter the elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    
    cout << "Enter the target value: ";
    cin >> target;
    
    if (existsInArray(arr, size, target)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
