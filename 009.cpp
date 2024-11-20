//Problem: Check if a String is a Palindrome
//Approach 1: Two-Pointer Technique

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false; // Characters don't match
        }
        left++;
        right--;
    }
    return true; // All characters matched
}

int main() {
    string s = "madam";
    if (isPalindrome(s)) {
        cout << "\"" << s << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << s << "\" is not a palindrome." << endl;
    }

    s = "hello";
    if (isPalindrome(s)) {
        cout << "\"" << s << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << s << "\" is not a palindrome." << endl;
    }

    return 0;
}
