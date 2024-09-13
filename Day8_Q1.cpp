#include <iostream>
#include <string>

using namespace std;

int stringLength(const string &str) {
      return str.length();
}


int main() {
    string inp;
    
    cout << "Enter a string: ";
    getline(cin, inp);

    cout << "Length of the string: " << stringLength(userInput) << endl;

    return 0;
}
