//Problem: Find the Missing Number
//Approach 1: Sum Formula

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int totalSum = n * (n + 1) / 2; // Sum of first n natural numbers
    int arraySum = 0;

    for (int num : nums) {
        arraySum += num;
    }

    return totalSum - arraySum; // The missing number
}

int main() {
    vector<int> nums = {3, 0, 1};
    cout << "Missing Number: " << missingNumber(nums) << endl;
    return 0;
}
