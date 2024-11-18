//Problem: Find All Palindromic Substrings
//Approach 2: Expand Around Center

#include <iostream>
#include <vector>
using namespace std;

// Helper function to expand around the center and collect palindromes
void expandAroundCenter(const string& s, int left, int right, vector<string>& result) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) { // Check boundaries and equality
        //cout<<"left "<<left<<" right "<<right<<" "<<s.substr(left,right-left+1)<<endl;
        result.push_back(s.substr(left, right - left + 1)); // Add substring to the result
        left--;  // Move left pointer outward
        right++; // Move right pointer outward
    }
}

// Function to find all palindromic substrings using Expand Around Center
vector<string> findPalindromicSubstrings(string s) {
    vector<string> result;

    for (int i = 0; i < s.length(); ++i) {
        // Odd-length palindromes (center is at i)
        expandAroundCenter(s, i, i, result);
        // Even-length palindromes (center is between i and i+1)
        expandAroundCenter(s, i, i + 1, result);
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
