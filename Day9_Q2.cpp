#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int* ptr = arr;

    for (int i = 0; i < 5; ++i) {
        cin >> *(ptr + i);
    }

    for (int i = 0; i < 5; ++i) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}
