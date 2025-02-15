#include <iostream>
using namespace std;
bool isPalindrome(const string& s)
 {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        while (left < right && !isalnum(s[left])) {
            ++left;
        }
        while (left < right && !isalnum(s[right])) {
            --right;
        }
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        ++left;
        --right;
    }

    return true;
}

int main() {
    string input;
    cout << "Enter a word or number to check if it's a palindrome: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "\"" << input << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << input << "\" is not a palindrome." << endl;
    }

    return 0;
}
