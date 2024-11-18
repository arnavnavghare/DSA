//Problem: Find the Maximum Sum Subarray
//Approach: Kadane's Algorithm

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int currentSum = 0;
    int maxSum = INT_MIN; // Initialize to the smallest possible integer

    for (int num : nums) {
        currentSum = max(num, currentSum + num); // Include the current element or start new
        maxSum = max(maxSum, currentSum);       // Update maxSum if needed
    }

    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl;
    return 0;
}