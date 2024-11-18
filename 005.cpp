//Problem: Two Sum
//Approach 2: Optimized Using a Hash Map (Preferred)

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap; // Map to store numbers and their indices

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        // Check if complement exists in the map
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i};
        }
        // Store the current number with its index
        numMap[nums[i]] = i;
    }
    return {}; // Return empty if no solution found (shouldn't happen as per problem constraints)
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
