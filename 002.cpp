//Problem: Find All Palindromic Substrings
//Approach 1: Brute Force (Simple but Slow)

#include <iostream>
#include <vector>
using namespace std;

// Helper function to check if a substring is a palindrome
bool isPalindrome(const string& s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) return false;
        start++;
        end--;
    }
    return true;
}

// Function to find all palindromic substrings
vector<string> findPalindromicSubstrings(string s) {
    vector<string> result;

    int n = s.length();
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (isPalindrome(s, i, j)) {
                result.push_back(s.substr(i, j - i + 1));
            }
        }
    }

    return result;
}

int main() {
    string s = "abba";
    vector<string> palindromes = findPalindromicSubstrings(s);

    cout << "Palindromic Substrings:\n";
    for (const string& p : palindromes) {
        cout << p << "\n";
    }

    return 0;
}
