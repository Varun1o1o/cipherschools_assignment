#include <iostream>
#include <string>

using namespace std;

int countCharacter(const string &str, char ch) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    string userInput;
    char ch;

    cout << "Enter a string: ";
    getline(cin, userInput);

    cout << "Enter a character to count: ";
    cin >> ch;
    
    cout << "The character '" << ch << "' appears " << countCharacter(userInput, ch) << " times in the string." << endl;

    return 0;
}
