#include <iostream>
using namespace std;

void checkOddEven(int num) {
    if (num & 1) {
        cout << "Odd" << endl;
    } else {
        cout << "Even" << endl;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    checkOddEven(n);
    
    return 0;
}
