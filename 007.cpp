//Problem: Find the Missing Number
//Approach 2: XOR Method

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int xorSum = 0;

    // XOR all indices and array elements
    for (int i = 0; i <= n; i++) {
        xorSum ^= i; // XOR indices
    }
    for (int num : nums) {
        xorSum ^= num; // XOR array elements
    }

    return xorSum; // The missing number
}

int main() {
    vector<int> nums = {3, 0, 1};
    cout << "Missing Number: " << missingNumber(nums) << endl;
    return 0;
}
