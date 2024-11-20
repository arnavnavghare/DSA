//Problem: Find the First Non-Repeating Character
//Approach 1: Frequency Count Using Hash Table

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char firstNonRepeatingCharacter(string s) {
    unordered_map<char, int> charCount;

    // Count frequency of each character
    for (char c : s) {
        charCount[c]++;
    }

    // Find the first character with a frequency of 1
    for (char c : s) {
        if (charCount[c] == 1) {
            return c;
        }
    }

    // If no non-repeating character is found
    return '_';
}

int main() {
    string s = "leetcode";
    char result = firstNonRepeatingCharacter(s);
    if (result != '_') {
        cout << "First non-repeating character: " << result << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }

    s = "aabbcc";
    result = firstNonRepeatingCharacter(s);
    if (result != '_') {
        cout << "First non-repeating character: " << result << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }

    return 0;
}
