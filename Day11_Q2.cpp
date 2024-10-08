#include <iostream>

using namespace std;

int findIndex(const int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i + 1; 
        }
    }
    return -1;
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
    
    cout << findIndex(arr, size, target) << endl;
    
    return 0;
}
